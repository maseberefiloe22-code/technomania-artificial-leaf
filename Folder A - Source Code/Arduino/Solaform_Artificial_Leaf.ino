#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

// Sensors
#define LDR_PIN A0
#define CO2_PIN A1
#define TEMP_PIN A2

// Button
#define BUTTON_PIN 2

// LEDs
#define GREEN_LED 8
#define RED_LED 9
#define BLUE_LED 10

// System states
enum SystemState {
  CAPTURE,
  REGENERATION,
  CONVERSION
};

SystemState systemState = CAPTURE;

void setup() {

  pinMode(BUTTON_PIN, INPUT_PULLUP);

  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);

  digitalWrite(GREEN_LED, HIGH);
  digitalWrite(RED_LED, LOW);
  digitalWrite(BLUE_LED, LOW);

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    while (true);
  }

  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);
}

void loop() {

  // Read sunlight
  int lightValue = analogRead(LDR_PIN);
  int sunlight = map(lightValue, 0, 1023, 0, 100);

  // Read simulated CO2
  int co2Value = analogRead(CO2_PIN);
  int co2ppm = map(co2Value, 0, 1023, 300, 2000);

  // Read simulated temperature
  int tempValue = analogRead(TEMP_PIN);
  int temperature = map(tempValue, 0, 1023, 20, 100);

  // Button starts regeneration
  if (digitalRead(BUTTON_PIN) == LOW &&
      systemState == CAPTURE) {

    systemState = REGENERATION;
    delay(300);
  }

  // Temperature completes regeneration
  if (systemState == REGENERATION &&
      temperature >= 70) {

    systemState = CONVERSION;
    delay(300);
  }

  // Control LEDs
  if (systemState == CAPTURE) {

    digitalWrite(GREEN_LED, HIGH);
    digitalWrite(RED_LED, LOW);
    digitalWrite(BLUE_LED, LOW);

  }
  else if (systemState == REGENERATION) {

    digitalWrite(GREEN_LED, LOW);
    digitalWrite(RED_LED, HIGH);
    digitalWrite(BLUE_LED, LOW);

  }
  else {

    digitalWrite(GREEN_LED, LOW);
    digitalWrite(RED_LED, LOW);
    digitalWrite(BLUE_LED, HIGH);
  }

  // OLED
  display.clearDisplay();

  display.setTextSize(1);

  display.setCursor(0, 0);
  display.println("ARTIFICIAL LEAF");

  display.setCursor(0, 14);
  display.print("Solar: ");
  display.print(sunlight);
  display.println("%");

  display.setCursor(0, 26);
  display.print("CO2: ");
  display.print(co2ppm);
  display.println(" ppm");

  display.setCursor(0, 38);
  display.print("Temp: ");
  display.print(temperature);
  display.println(" C");

  display.setCursor(0, 51);

  if (systemState == CAPTURE) {
    display.println("CO2 CAPTURE");
  }
  else if (systemState == REGENERATION) {
    display.println("REGENERATING...");
  }
  else {
    display.println("CO2 CONVERSION");
  }

  display.display();

  delay(100);
}

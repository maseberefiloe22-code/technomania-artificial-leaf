# SOLAFORM – Test Results

## 1. Purpose

The purpose of testing was to check whether the SOLAFORM Arduino control system and its main electronic components operate correctly in the Wokwi simulation environment. The testing focused on sensor readings, system states, LED indicators, the OLED display, and the transition between the different stages of the artificial leaf concept.

## 2. Testing Environment

The prototype was tested using an Arduino Uno in the Wokwi simulation environment. The components tested included:

* Arduino Uno
* OLED display
* Photoresistor (LDR)
* Potentiometer for simulated CO₂ concentration
* Potentiometer for simulated temperature
* Pushbutton
* Three LEDs
* Servo motor
* DHT22 temperature sensor

## 3. Test Results

| Test                     | Expected result                                             | Result |
| ------------------------ | ----------------------------------------------------------- | ------ |
| System startup           | System starts in CO₂ capture mode                           | Pass   |
| LDR reading              | Sunlight value is read and displayed                        | Pass   |
| CO₂ reading              | Simulated CO₂ concentration is displayed                    | Pass   |
| Temperature reading      | Simulated temperature is displayed                          | Pass   |
| Pushbutton               | Button starts regeneration                                  | Pass   |
| Regeneration temperature | System changes to conversion when temperature reaches 70 °C | Pass   |
| Green LED                | Green LED indicates CO₂ capture                             | Pass   |
| Red LED                  | Red LED indicates regeneration                              | Pass   |
| Blue LED                 | Blue LED indicates CO₂ conversion                           | Pass   |
| OLED display             | Sensor values and system state are displayed                | Pass   |
| OLED communication       | OLED operates using I²C communication                       | Pass   |
| Overall state control    | System changes between capture, regeneration and conversion | Pass   |

## 4. System State Testing

### CO₂ Capture

When the system starts, it enters the CO₂ capture state. The green LED is switched on and the OLED displays the capture status. The simulated sunlight and CO₂ values can also be monitored.

### Regeneration

When the pushbutton is pressed while the system is in the capture state, the system changes to regeneration. The green LED switches off and the red LED switches on. The temperature value is monitored during this stage.

### CO₂ Conversion

When the simulated temperature reaches or exceeds 70 °C during regeneration, the system changes to the CO₂ conversion state. The red LED switches off and the blue LED switches on. The OLED displays the conversion status.

## 5. OLED Display Testing

The OLED display was tested to confirm that it could show:

* Solar input percentage
* Simulated CO₂ concentration in ppm
* Temperature in °C
* Current system state

The OLED successfully displayed the required information during the simulation.

## 6. LED Indicator Testing

The three LEDs were tested as visual indicators of the system state:

* **Green LED:** CO₂ capture
* **Red LED:** regeneration
* **Blue LED:** CO₂ conversion

The LEDs changed according to the programmed system state.

## 7. Overall Test Outcome

The Wokwi simulation showed that the main control logic of the SOLAFORM prototype operates as intended. The system successfully reads the simulated inputs, displays the values on the OLED, controls the LED indicators, and changes between the capture, regeneration and conversion states.

## 8. Testing Limitations

The Wokwi prototype represents the control and monitoring part of the SOLAFORM concept rather than the actual chemical processes. The CO₂ concentration and temperature used during testing are simulated inputs. The prototype does not physically capture CO₂, regenerate an amine sorbent, or perform electrochemical conversion of CO₂.

The current program also uses a pushbutton to initiate the regeneration stage. In the intended full-scale concept, regeneration is planned to begin automatically when the required CO₂ capture target is reached. Therefore, the Wokwi prototype should be understood as a functional control-system demonstration rather than a complete physical artificial leaf.

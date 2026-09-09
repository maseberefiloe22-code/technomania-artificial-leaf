# Programming Methods

## 1. Overview

The SOLAFORM Artificial Leaf prototype is programmed as an Arduino-based control system. The programming is used to monitor the system inputs, control the different operating stages, and display the system status to the user.

The prototype was developed and tested using the Arduino Uno and the Wokwi online simulation environment. The programming is designed to represent the main operating sequence of the SOLAFORM system: solar-powered operation, CO₂ capture, regeneration, and CO₂ conversion.

## 2. Programming Language

The prototype is programmed using **C/C++ for Arduino**. Arduino programming was selected because it allows the microcontroller to receive information from sensors, process the information, and control electronic components such as LEDs, a servo motor and the OLED display.

The program uses a state-based control structure to divide the operation of the prototype into different system stages.

## 3. Development and Simulation Platform

The prototype was developed using the **Arduino Uno** and simulated in **Wokwi**. Wokwi was used to test the circuit connections and program behaviour before physical implementation.

The Wokwi simulation contains the main electronic components required for the prototype, including:

* Arduino Uno
* OLED display
* Photoresistor (LDR) for simulated solar-light input
* Potentiometers for simulated system inputs
* DHT22 temperature sensor
* Push button
* Servo motor
* Green, red and blue LEDs
* Current-limiting resistors

## 4. Programming Methods

### 4.1 Sensor Input

The Arduino reads input values from the sensors and simulated inputs. The LDR is used to represent the availability of solar energy, while potentiometers are used to simulate changing system conditions during testing.

The temperature input is associated with the regeneration stage, where temperature monitoring is required to determine whether the required regeneration condition has been reached.

### 4.2 System State Control

The prototype uses a **state-based control method**. The system is divided into three main operating states:

1. **CO₂ Capture**
2. **Regeneration**
3. **CO₂ Conversion**

The Arduino determines the current state of the system and activates the appropriate outputs.

This method makes the system easier to control because each stage has its own operating conditions and outputs.

### 4.3 Output Control

LED indicators are used to show the current operating state of the prototype:

* **Green LED** – CO₂ capture stage
* **Red LED** – regeneration stage
* **Blue LED** – CO₂ conversion stage

The servo motor is used as an actuator to represent movement within the system, such as opening, closing or switching between system stages.

### 4.4 OLED Display

A 128 × 64 I²C OLED display is used to provide real-time information to the user. The display can show information such as:

* Solar/light level
* Simulated CO₂ concentration
* Temperature
* Current system stage

The OLED display allows the operation of the prototype to be monitored without having to inspect the individual components.

## 5. Libraries and Frameworks

The prototype uses the Arduino programming framework together with libraries required for the electronic components.

The main libraries used are:

* **Wire** – used for I²C communication between the Arduino and OLED display.
* **Adafruit GFX Library** – provides graphics and text functions for the OLED display.
* **Adafruit SSD1306** – controls the SSD1306 OLED display.
* **Servo** – provides control of the servo motor.
* **DHT sensor library** – provides communication with the DHT22 temperature sensor.

The libraries are listed in the `Wokwi/libraries.txt` file.

## 6. Control Logic

The general control logic of the prototype follows the sequence below:

**Solar input → CO₂ capture → regeneration → CO₂ conversion**

During operation, the Arduino continuously reads the available inputs and updates the system status. The regeneration stage is associated with temperature monitoring, while the LEDs and OLED display provide visual feedback about the current state.

The control logic is designed to demonstrate the automatic operation of the SOLAFORM concept rather than to reproduce the complete chemical processes of a full-scale artificial-leaf system.

## 7. Testing Method

The program and circuit were tested using Wokwi simulation. Different sensor values were adjusted during testing to observe how the system responds to changing conditions.

The testing process was used to check:

* Sensor input readings
* OLED display operation
* LED state indicators
* System-state transitions
* Servo operation
* Temperature monitoring
* Overall system response

The testing results are documented separately in the `Testing/Test_Results.md` file.

## 8. Relationship to the SOLAFORM Project

The programming provides the control layer of the SOLAFORM Artificial Leaf prototype. It connects the simulated sensor inputs with the system's operating stages and provides feedback through the OLED display, LEDs and actuator.

The prototype is a **control-system demonstration**. It does not perform actual CO₂ absorption, chemical regeneration or electrochemical conversion. Instead, the Arduino and Wokwi simulation represent how these processes could be monitored and controlled in an automated SOLAFORM system.

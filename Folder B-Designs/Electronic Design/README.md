# SOLAFORM – Electronic Design

## Overview

This section describes the electrical and electronic design of the SOLAFORM Artificial Leaf prototype.

The electrical system is controlled by an Arduino Uno, which receives information from sensors and controls the outputs used to represent the different operating stages of the system.

## Main Electronic Components

The prototype includes:

* Arduino Uno microcontroller
* OLED display
* Photoresistor (LDR) for solar/light input
* Potentiometer for simulated CO₂ concentration
* Potentiometer for simulated temperature
* DHT22 temperature and humidity sensor
* Pushbutton for system control
* Green, red and blue LEDs for system-state indication
* Servo motor for mechanical actuation
* Resistors for LED protection

## Sensor Inputs

The Arduino receives input from the sensors and simulated sensors.

| Component                 | Arduino Connection | Purpose                                    |
| ------------------------- | ------------------ | ------------------------------------------ |
| LDR                       | A0                 | Represents solar/light availability        |
| CO₂ potentiometer         | A1                 | Simulates CO₂ concentration                |
| Temperature potentiometer | A2                 | Simulates regeneration temperature         |
| DHT22                     | Digital input      | Represents temperature/humidity monitoring |
| Pushbutton                | D2                 | Provides manual system control             |

## Output Connections

| Component    | Arduino Connection | Purpose                         |
| ------------ | ------------------ | ------------------------------- |
| Green LED    | D8                 | CO₂ capture state               |
| Red LED      | D9                 | Regeneration state              |
| Blue LED     | D10                | CO₂ conversion state            |
| Servo motor  | D6                 | Represents mechanical actuation |
| OLED display | A4/A5              | Displays system information     |

## System Control

The Arduino processes the sensor inputs and uses programmed conditions to determine the current system state.

The main operating states are:

1. **CO₂ Capture**
2. **Regeneration**
3. **CO₂ Conversion**

The OLED displays the solar input, simulated CO₂ concentration, temperature and current system state.

The LEDs provide a visual indication of the current operating stage.

## Power and Safety Considerations

The prototype is designed around low-voltage electronic components suitable for simulation and prototype demonstration.

The electrical design considers:

* Correct power and ground connections
* Appropriate resistor protection for LEDs
* Separation of electronic components from heat-producing sections
* Stable connections between the Arduino and peripheral components
* Safe operation during testing

## Prototype Limitation

The Wokwi prototype represents the electrical control and monitoring system. The sensors and simulated inputs represent conditions that would be measured by a physical system.

The prototype does not itself perform physical CO₂ capture, thermal regeneration or electrochemical conversion.

Detailed wiring diagrams and circuit drawings can be added to this section as the electrical design is developed further.

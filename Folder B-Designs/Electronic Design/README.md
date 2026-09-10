# SOLAFORM – Electronic Design

## Overview

This section describes the electronic design of the SOLAFORM Artificial Leaf prototype.

The electronic system uses an Arduino Uno as the main microcontroller. It receives information from sensors and simulated sensor inputs and uses programmed conditions to control the different operating states of the prototype.

## Main Electronic Components

The prototype includes:

* Arduino Uno microcontroller
* OLED display
* Photoresistor (LDR)
* Potentiometer for simulated CO₂ concentration
* Potentiometer for simulated temperature
* DHT22 temperature and humidity sensor
* Pushbutton for system control
* Green, red and blue LEDs
* Resistors for LED protection
* Micro servo motor

## Processing and Control Unit

The **Arduino Uno** is used as the main processing and control unit.

It was selected because it is suitable for developing and testing a low-voltage control-system prototype. It provides analogue and digital inputs for sensors and control signals and digital outputs for the system indicators and actuator.

The Arduino processes the sensor inputs and determines the current operating state of the prototype.

## Sensors and Inputs

| Component                 | Connection    | Purpose                                      |
| ------------------------- | ------------- | -------------------------------------------- |
| LDR                       | A0            | Represents available solar/light input       |
| CO₂ potentiometer         | A1            | Simulates CO₂ concentration                  |
| Temperature potentiometer | A2            | Simulates regeneration temperature           |
| DHT22                     | Digital input | Provides temperature and humidity monitoring |
| Pushbutton                | D2            | Provides manual system control               |

The potentiometers are used in the simulation to represent measurements that would require dedicated sensors in a physical SOLAFORM system.

## Output and Actuation Components

| Component    | Arduino Connection | Purpose                         |
| ------------ | ------------------ | ------------------------------- |
| Green LED    | D8                 | Indicates CO₂ capture           |
| Red LED      | D9                 | Indicates regeneration          |
| Blue LED     | D10                | Indicates CO₂ conversion        |
| Servo motor  | D6                 | Represents mechanical actuation |
| OLED display | A4/A5              | Displays system information     |

The LEDs provide a simple visual indication of the current operating stage, while the OLED provides information about the monitored system conditions.

## Component Selection

The components were selected because they are suitable for demonstrating the control and monitoring functions of the proposed SOLAFORM system.

The Arduino Uno provides the central processing function, while the sensors and simulated inputs represent conditions that would be monitored in a physical system.

The OLED was selected to provide real-time information to the user. LEDs provide simple state indication, and the servo represents mechanical movement that could be associated with an actuator in the physical system.

## System States

The electronic control system represents three main operating states:

1. **CO₂ Capture**
2. **Regeneration**
3. **CO₂ Conversion**

The prototype uses sensor inputs and programmed conditions to determine when the system changes between these states.

## Safety and Control

The electronic design includes a manual control input and system-state indicators.

The final circuit schematic will clearly identify the required **ON/OFF control** and **Emergency Stop mechanism** and show how these controls interact with the system power and control circuit.

Safety considerations include:

* Low-voltage operation during prototyping
* Correct grounding
* Appropriate resistor protection for LEDs
* Separation of electronic components from heat-producing sections
* Controlled operation of actuators
* Emergency shutdown of the system

## Prototype Limitation

The Wokwi prototype demonstrates the electronic control and monitoring architecture of SOLAFORM.

It does not physically perform CO₂ capture, thermal regeneration or electrochemical conversion. The simulated sensors and actuators represent the functions that would be implemented using appropriate physical equipment in a full-scale system.

## Prototype Limitation

The Wokwi prototype represents the electrical control and monitoring system. The sensors and simulated inputs represent conditions that would be measured by a physical system.

The prototype does not itself perform physical CO₂ capture, thermal regeneration or electrochemical conversion.

Detailed wiring diagrams and circuit drawings can be added to this section as the electrical design is developed further.

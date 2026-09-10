# SOLAFORM – Circuit Schematics

## Overview

This section contains the electrical circuit schematics for the SOLAFORM Artificial Leaf prototype.

The schematics show how the Arduino Uno, sensors, display, LEDs, actuator and control switches are electrically connected.

## Circuit Components

The schematic includes the main electronic components used in the prototype:

* Arduino Uno
* OLED display
* LDR
* CO₂ simulation potentiometer
* Temperature simulation potentiometer
* DHT22 temperature and humidity sensor
* Green LED
* Red LED
* Blue LED
* Micro servo motor
* ON/OFF control
* Emergency Stop mechanism
* Current-limiting resistors
* Power and ground connections

## Main Circuit Connections

The Arduino Uno functions as the main control unit.

The main connections include:

| Component                 | Arduino Connection | Function                    |
| ------------------------- | ------------------ | --------------------------- |
| LDR                       | A0                 | Solar/light input           |
| CO₂ potentiometer         | A1                 | Simulated CO₂ input         |
| Temperature potentiometer | A2                 | Simulated temperature input |
| Pushbutton                | D2                 | System control              |
| Servo                     | D6                 | Mechanical actuation        |
| Green LED                 | D8                 | CO₂ capture indication      |
| Red LED                   | D9                 | Regeneration indication     |
| Blue LED                  | D10                | CO₂ conversion indication   |
| OLED SDA                  | A4                 | I²C data                    |
| OLED SCL                  | A5                 | I²C clock                   |
| OLED VCC                  | 5 V                | Power                       |
| OLED GND                  | GND                | Ground                      |

## ON/OFF Control

The ON/OFF control is used to allow the operator to start or stop the prototype during operation.

The final schematic will clearly identify the ON/OFF control and show its position within the system.

## Emergency Stop

The Emergency Stop is an important safety feature of the SOLAFORM system.

The Emergency Stop is intended to immediately stop system operation when an unsafe condition or emergency occurs.

The final physical implementation should interrupt the appropriate power/control circuit so that the system cannot continue operating while the Emergency Stop is activated.

The schematic will clearly annotate:

**EMERGENCY STOP – IMMEDIATE SYSTEM SHUTDOWN**

## Safety Considerations

The circuit design considers:

* Correct power and ground connections
* Protection of LEDs using resistors
* Safe operation of the servo
* Separation of electronic components from heat-producing equipment
* Manual system shutdown
* Emergency shutdown
* Low-voltage operation during prototyping

## Schematic Documentation

The circuit schematic will be accompanied by clear labels and annotations so that the judges can understand:

* Component connections
* Power connections
* Ground connections
* Sensor inputs
* Arduino control outputs
* ON/OFF control
* Emergency Stop mechanism

## Prototype Limitation

The schematic represents the control electronics of the SOLAFORM prototype.

The Wokwi circuit is a simulation of the control and monitoring system and does not physically perform CO₂ capture, regeneration or electrochemical conversion.

# SOLAFORM – Simulation and Testing

## Overview

This section documents the simulation of the SOLAFORM Artificial Leaf prototype.

The electronic control system was developed and tested using **Wokwi**, an online electronics simulation platform. The simulation was used to test the interaction between the Arduino Uno, sensors, display, LEDs, pushbutton and actuator.

## Purpose of the Simulation

The purpose of the simulation is to demonstrate that the proposed control system can:

* Receive sensor inputs
* Process input values using the Arduino Uno
* Display system information
* Change between different operating states
* Provide visual indications using LEDs
* Respond to operator input
* Represent the control sequence of the SOLAFORM system

## Simulated Components

The Wokwi prototype includes:

* Arduino Uno
* OLED display
* LDR
* Potentiometer representing CO₂ concentration
* Potentiometer representing temperature
* DHT22 temperature and humidity sensor
* Pushbutton
* Green LED
* Red LED
* Blue LED
* Micro servo motor
* Current-limiting resistors

## Simulated Operating States

The prototype represents three main operating states:

### 1. CO₂ Capture

The green LED indicates the CO₂ capture stage.

The OLED displays the simulated solar/light input, CO₂ concentration and temperature.

### 2. Regeneration

The red LED indicates the regeneration stage.

The temperature input is used to represent the regeneration condition, with approximately **70°C** used as the target temperature in the prototype.

### 3. CO₂ Conversion

The blue LED indicates the CO₂ conversion stage.

This stage represents the transition to the electrochemical conversion process proposed for the full-scale SOLAFORM system.

## Simulation Control Logic

The general control sequence is:

**System Start → CO₂ Capture → Regeneration → CO₂ Conversion → Next Cycle**

Sensor inputs are processed by the Arduino Uno and used to determine the operating state of the prototype.

The simulation therefore demonstrates the basic:

**Input → Processing → Decision → Output**

control structure.

## Testing

The Wokwi simulation was used to check:

* Arduino operation
* Sensor input responses
* OLED display operation
* LED state indication
* Pushbutton response
* Temperature threshold logic
* Transitions between operating states
* General operation of the control system

The simulation provides an environment where the control logic can be tested before physical implementation.

## Simulation Limitation

The Wokwi prototype is a simplified control-system simulation.

It does not physically perform:

* CO₂ capture
* CO₂ absorption
* Thermal regeneration
* Electrochemical conversion
* Formate production
* Oxygen production

The simulated components represent the sensing, control and monitoring functions that would be required in the full-scale SOLAFORM system.

## Future Development

Future development of the prototype can include:

* Automatic regeneration based on a defined amount of captured CO₂
* A dedicated ON/OFF control
* A clearly separated Emergency Stop mechanism
* Integration of additional physical sensors
* Physical temperature control
* Integration with the proposed solar power system
* Development of the physical CO₂ capture and electrochemical conversion sections

## Simulation Files

The Wokwi simulation files are stored in **Folder A – Source Code/Wokwi** and include the circuit configuration and required libraries.

The simulation documentation in this section provides supporting evidence for the development and testing of the SOLAFORM control system.

Detailed circuit diagrams, mechanical drawings and photographs can be added to the relevant design sections as the project develops.

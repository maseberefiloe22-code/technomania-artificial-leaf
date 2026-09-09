# SOLAFORM – System Architecture

## Overview

The SOLAFORM Artificial Leaf is designed as an integrated system in which solar energy supports the operation of a controlled CO₂ capture, regeneration and conversion process.

The system architecture connects the energy source, capture section, regeneration section, conversion section and control system.

## Overall System Flow

**Solar Energy → CO₂ Capture → Regeneration → CO₂ Conversion → Product/Storage**

The control system monitors the relevant conditions and determines when the system should move from one operating stage to the next.

## Main System Sections

### 1. Solar Energy Section

The solar energy section represents the primary energy source for the system.

Solar energy is intended to provide the energy required to operate the electrical and thermal components of the system.

### 2. CO₂ Capture Section

The capture section is responsible for receiving and retaining CO₂ from the surrounding air.

In the physical concept, a suitable capture material would be used to retain CO₂ before regeneration.

In the Wokwi prototype, CO₂ concentration is represented using a potentiometer as a simulated sensor input.

### 3. Regeneration Section

The regeneration section represents the release of captured CO₂ from the capture material.

The prototype monitors temperature and uses a target temperature of approximately **70°C** to represent the regeneration condition.

### 4. CO₂ Conversion Section

After regeneration, the released CO₂ is directed towards the conversion stage.

The full-scale concept represents the conversion of CO₂ into useful products, including formate, while water can be associated with oxygen production.

The Wokwi prototype represents this stage through its control logic and system-state indication rather than performing the actual electrochemical reaction.

### 5. Control and Monitoring Section

The Arduino Uno acts as the main controller.

It receives sensor inputs and controls the system indicators.

The OLED display provides information about:

* Solar/light input
* Simulated CO₂ concentration
* Temperature
* Current system operating state

LED indicators show whether the system is in:

* CO₂ capture
* Regeneration
* CO₂ conversion

## Operating Logic

The intended operating sequence is:

1. The system receives solar energy.
2. CO₂ capture begins.
3. The system monitors the amount of captured CO₂.
4. When the required capture condition is reached, regeneration can begin.
5. The regeneration section is heated to the required temperature.
6. Once the temperature target is reached, the system proceeds to CO₂ conversion.
7. The conversion stage produces the intended useful products in the full-scale concept.
8. The system can then return to the capture stage for another cycle.

## Prototype Representation

The Wokwi prototype is a simplified representation of the control architecture.

It demonstrates:

**Input → Processing → Decision → System State → Output**

The prototype does not physically capture CO₂, regenerate a sorbent, or carry out electrochemical conversion.

## Design Objective

The system architecture is intended to demonstrate how renewable energy, sensing, automated control and the proposed artificial-leaf process can be integrated into one system.

Detailed circuit diagrams, mechanical drawings and photographs can be added to the relevant design sections as the project develops.

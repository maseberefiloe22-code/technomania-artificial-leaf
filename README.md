# SOLAFORM

**Team name:** SOLAFORM
**Competition category:** Technomania Project
**Project name:** Solaform Artificial Leaf
**Prototype concept:** Automatic CO₂ Capture → Regeneration → Conversion → Formate + O₂


## 1. PROJECT OVERVIEW

Solaform is a compact, safety-focused prototype inspired by the functional principles of plant photosynthesis. It uses carbon dioxide, water, and solar-derived electrical energy to investigate the conversion of carbon dioxide into a useful carbon-containing product while producing oxygen.

Unlike natural plants, which store carbon primarily in sugars and biomass, Solaform is designed to convert captured carbon dioxide into **formate (HCOO⁻)**, a liquid-phase carbon product that remains contained within a dedicated collection and storage vessel.

The intended gaseous output is oxygen, which is produced through the water-oxidation side of the electrochemical conversion process. Oxygen is directed through a controlled outlet after system monitoring and safety checks.

The project demonstrates a small-scale proof of concept for artificial photosynthesis, carbon utilisation, renewable-energy integration, electrochemical CO₂ conversion, sensing, and automated system control.

> **Important scientific statement:** Solaform does not claim to remove unlimited atmospheric CO₂ or solve climate change on its own. It is a compact prototype intended to demonstrate the principles of carbon dioxide capture, regeneration, electrochemical conversion, formate production, oxygen evolution, sensing, and safe automated control.


## 2. PROBLEM STATEMENT

Carbon dioxide (CO₂) emissions are a major environmental challenge associated with industrial and energy-related activities. Increasing CO₂ emissions contribute to climate change and motivate the development of technologies that can capture and convert CO₂ into useful products. At the same time, conventional industrial carbon-conversion systems may require high temperatures, high pressures, fossil-derived energy, or complex infrastructure.

Plants provide an important natural model through their utilisation of sunlight, water, and carbon dioxide to produce oxygen and store carbon in chemical form. However, plants require land, time, water, and suitable growing conditions.

Solaform investigates whether a compact engineered system can mimic the key functional concept of photosynthesis by:

* Receiving or capturing a controlled CO₂ stream.
* Using water as part of the reaction system.
* Using solar-derived electrical energy to drive an electrochemical conversion process.
* Converting CO₂ into formate as a contained carbon product.
* Producing oxygen through water oxidation.
* Monitoring operating conditions, gas concentrations, power use, and safety status.

The project focuses on a controlled prototype-scale application rather than large-scale atmospheric deployment.


## 3. PROPOSED SOLUTION

Solaform is an artificial-photosynthesis-inspired electrochemical system consisting of:

* A controlled carbon dioxide inlet.
* A CO₂ capture and regeneration section.
* An electrochemical conversion cell.
* A cathode designed to reduce CO₂ toward formate.
* An anode designed for water oxidation and oxygen evolution.
* A solar panel that generates electrical energy from sunlight.
* A rechargeable battery charged by the solar panel to store electrical energy and provide a more stable power supply to the system.
* A formate collection and storage container.
* An oxygen outlet and monitoring pathway.
* Electronic sensors, a microcontroller, and a data-logging system.
* A physical ON/OFF power switch.
* A physical Emergency Stop (E-Stop) mechanism designed to interrupt power to hazardous or active loads.

### Intended Output Handling

| Output / Component     | Handling Method                                                                             |
| ---------------------- | ------------------------------------------------------------------------------------------- |
| **Formate**            | Retained and stored in a designated collection container; not intentionally released to air |
| **Oxygen**             | Directed through a controlled outlet after monitoring and safety checks                     |
| **Liquid electrolyte** | Retained within the conversion system and handled as a controlled liquid component          |


## 4. PROTOTYPE SYSTEM

Natural photosynthesis uses light energy to convert carbon dioxide and water into stored chemical energy and oxygen. Solaform mimics this broad functional concept through a controlled electrochemical process powered by solar-derived electrical energy.

The proposed concept includes two linked electrochemical reactions.

### 4.1. CO₂ Reduction at the Cathode

At the cathode, carbon dioxide receives electrons and protons to form formate:

**CO₂ + H⁺ + 2e⁻ → HCOO⁻**

### 4.2. Water Oxidation at the Anode

At the anode, water is oxidised to produce oxygen, protons, and electrons:

**H₂O → ½O₂ + 2H⁺ + 2e⁻**

### Overall Conceptual Reaction

Combining the two half-reactions gives the following conceptual overall reaction:

**CO₂ + H₂O → HCOO⁻ + H⁺ + ½O₂**

The exact overall cell reaction depends on the electrolyte, electrode materials, operating conditions, and proton balance of the final electrochemical system. Therefore, this reaction is presented as a **conceptual reaction for the prototype design** rather than a final claim of the complete cell chemistry.

Electrical energy generated by the solar panel is stored in a rechargeable battery and supplied to the electrochemical conversion system through the controlled power-management circuit. The battery therefore acts as the energy-storage and stabilisation component, while the solar panel provides the primary renewable-energy input. A controlled DC power source may be used during laboratory testing and prototype development where required.

### The Prototype Consists of:

- Solar panel
- Solar charging and power-management circuit
- Solar-charged rechargeable battery
- CO₂ capture section
- CO₂ regeneration section
- Electrochemical conversion section
- Water input
- Temperature monitoring
- CO₂ monitoring
- Oxygen monitoring
- Arduino-based control
- OLED status display
- System indicators
- Emergency Stop mechanism
- Accessible ON/OFF power control

The final hardware configuration will be documented in the **Electronic Design** and **Mechanical Design** sections of this repository.

## 5. CONTROL SYSTEM

An Arduino microcontroller is used as the prototype control platform.

The controller is responsible for:

* Reading sensor values
* Monitoring system temperature
* Monitoring gas-related parameters
* Controlling system states
* Activating indicators
* Displaying operating information
* Detecting abnormal conditions
* Initiating safe shutdown conditions

The control logic is organised around the main process stages:

```text
CAPTURE
   ↓
REGENERATION
   ↓
CONVERSION
   ↓
OUTPUT / MONITORING
```

Detailed source code, flowcharts, and control logic are available in **Folder A - Source Code**


## 6. SAFETY

Safety is an important part of the Solaform design.

The prototype will include:

* A clearly accessible ON/OFF switch.
* An Emergency Stop (E-Stop).
* Securely mounted wiring and insulated electrical terminals.
* A sealed formate collection/storage container.
* Spill containment for electrolyte and formate solution.
* Temperature monitoring.
* Gas monitoring.
* Electrical isolation between control electronics and high-current loads where applicable.
* Low-voltage DC operation where feasible.
* Pressure-relief or safe venting measures where applicable.
* Oxygen-outlet controls designed to minimise oxygen accumulation in enclosed spaces.
* Documentation of safety procedures.
* Non-return valves where gas or liquid backflow is possible.
* Clearly labelled components.
* Warning labels for electricity, liquids, oxygen, and chemical handling.

When the Emergency Stop is pressed, it must immediately interrupt power to the actuators and conversion-cell power circuit. This is intended to stop pumps, valves, reactor-driving power, lighting loads, and other active components that could create a safety risk.

The microcontroller may use a separate protected low-power supply only if this does not compromise the requirement for the E-Stop to stop hazardous processes.

The final electrical safety architecture will clearly annotate the:

* ON/OFF switch
* Fuse or over-current protection
* Emergency Stop
* Main power paths
* Conversion-cell power circuit
* Actuators and connected loads

The physical E-Stop arrangement and electrical safety architecture will be documented in:

**Folder B - Designs → Safety**


## 7. TECHNICAL DESIGN

The project consists of three major design areas:

### Mechanical Design

The mechanical design covers:

* Prototype enclosure
* Component arrangement
* Gas-flow pathways
* Conversion chamber
* Mounting systems
* Overall dimensions
* Accessibility and maintenance

### Electronic Design

The electronic design covers:

* Arduino controller
* Sensors
* Power system
* Actuators
* Display
* Wiring
* Circuit schematic
* ON/OFF switch
* Emergency Stop

### Software Design

The software design covers:

* Sensor acquisition
* State control
* Monitoring
* Display functions
* Fault detection
* Safety shutdown
* Data logging where applicable

### System Monitoring Parameters

The prototype will monitor the following parameters where components and budget allow:

| Parameter                    | Purpose                                                                                    |
| ---------------------------- | ------------------------------------------------------------------------------------------ |
| **CO₂ concentration**        | Measures CO₂ entering the system and supports evaluation of capture/conversion performance |
| **Oxygen concentration**     | Provides an indication of oxygen evolution at the controlled outlet or collection point    |
| **Temperature**              | Supports safe and stable operation                                                         |
| **Pressure**                 | Helps detect abnormal gas build-up where applicable                                        |
| **Voltage and current**      | Measures electrical energy supplied to the conversion cell                                 |
| **Water/electrolyte level**  | Helps prevent operation under unsuitable liquid-level conditions                           |
| **Flow rate**                | Helps regulate CO₂ delivery and output gas flow                                            |
| **Formate collection level** | Tracks liquid product accumulation                                                         |
| **E-Stop status**            | Confirms the state of the safety circuit                                                   |

The control system will log sensor readings, display system status, activate warning indicators, and shut down selected functions when unsafe conditions or predefined limits are detected.


## 8. TESTING AND VALIDATION

The prototype will be evaluated through controlled testing and simulation.

### Test Validation

* Verify that the ON/OFF switch isolates system power correctly.
* Verify that the E-Stop immediately disables hazardous or active loads.
* Test sensor calibration and compare readings against known reference conditions where possible.
* Measure inlet and outlet CO₂ concentration.
* Measure oxygen concentration at the controlled outlet.
* Log voltage, current, runtime, and energy consumption.
* Record reactor temperature and pressure where relevant.
* Collect and retain the liquid product in the designated formate storage container.
* Test for leaks, liquid spills, electrical faults, and gas-flow problems.
* Document all results, limitations, and unsuccessful trials honestly.

The project will also incorporate **stakeholder and market validation** to determine whether the proposed problem is relevant to potential users and whether the proposed solution provides meaningful value.

Results and evidence will be documented in **Folder C - Documentation**.


## 9. MARKETABILITY AND INTENDED APPLICATIONS

Potential applications will be investigated through stakeholder validation and market research.

Possible areas of application include:

* Small-scale carbon-management systems.
* Research and educational demonstrations.
* Renewable-energy and cleantech applications.
* Controlled industrial carbon-processing environments.
* Future distributed carbon-conversion systems.

These applications will be treated as potential future uses rather than claims that the current prototype is commercially ready.


## 10. CURRENT LIMITATIONS

The current system is a prototype and therefore has several limitations.

These may include:

* Small operating scale.
* Limited gas-processing capacity.
* Prototype-level sensors.
* Dependence on controlled operating conditions.
* Limited long-term testing.
* Need for further gas-purity verification.
* Need for further optimisation of energy efficiency.
* Need for additional validation before commercial deployment.

These limitations will be updated as testing progresses.

## 11. FUTURE DEVELOPMENT

Future versions of Solaform could investigate:

* Improved catalyst selectivity toward formate.
* Automated formate concentration analysis.
* Improved CO₂ capture efficiency.
* Improved electrochemical conversion efficiency.
* Higher oxygen-production rates.
* Improved gas purification.
* Automated gas-flow control.
* Improved solar-energy utilisation.
* More accurate industrial-grade sensors.
* Improved thermal management.
* Larger-scale modular systems.
* Wireless dashboards and long-term cloud data logging.
* Larger-scale systems using multiple connected modules.
* Carbon-credit, education, or research-use pathways.
* Life-cycle assessment and economic analysis.
* Modular reactor cartridges.


## 12. REPOSITORY STRUCTURE

```text
technomania-Solaform/
│
├── README.md
│
├── Folder A - Source Code/
│   ├── README.md
│   ├── main_controller/
│   ├── sensors/
│   ├── flowcharts/
│   └── tests/
│
├── Folder B - Designs/
│   ├── README.md
│   ├── Mechanical Design/
│   ├── Electronic Design/
│   ├── Safety/
│   └── Simulation/
│
└── Folder C - Documentation/
    ├── Pitch_Deck.pdf
    ├── Bill_of_Materials.xlsx
    ├── Holistic_Build_Document.pdf
    ├── FQA_Attendance_Log.md
    ├── FQA_Proof/
    └── References/
```

## 13. PROJECT STATUS

**Current stage:** Prototype development and system design.

The project is currently progressing through:

1. System concept development
2. Component selection
3. Arduino/Wokwi simulation
4. Electronic design
5. Mechanical design
6. Safety-system development
7. Stakeholder validation
8. Prototype testing
9. Documentation
10. Final Technomania submission


## CREDITS AND REFERENCES

SOLAFORM is an original integrated prototype concept developed by **PRIMROSE, NATHAN, and ROSSA**.

All external resources will be acknowledged in the `Folder C - Documentation/References/` directory, including:

* Scientific literature on artificial photosynthesis.
* Literature on CO₂ reduction to formate.
* Datasheets and supplier information.
* Open-source code libraries.
* Circuit-design tools and simulation tools.
* Images, icons, diagrams, or templates not created by the team.
* Feedback provided by interview participants or survey respondents.

No external content will be presented as original work without proper attribution.


## DISCLAIMER

Solaform is a research and engineering proof-of-concept. Performance claims will be based on measured experimental or simulation results.

The project does not claim that the prototype provides a complete solution to atmospheric CO₂ accumulation or climate change.

The final system performance, safety, product composition, gas purity, energy efficiency, and scalability will require further experimental testing and validation before any commercial or large-scale application is considered.


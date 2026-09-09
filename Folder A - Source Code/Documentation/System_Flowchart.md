# SOLAFORM Artificial Leaf – System Flowchart

## 1. System Operation

The SOLAFORM Artificial Leaf prototype follows a sequential control process. The Arduino monitors the system inputs and controls the transition between the main operating stages.

```text
                         ┌─────────────────────┐
                         │      SYSTEM ON      │
                         └──────────┬──────────┘
                                    │
                                    ▼
                         ┌─────────────────────┐
                         │   SOLAR INPUT       │
                         │  LDR monitors light │
                         └──────────┬──────────┘
                                    │
                                    ▼
                         ┌─────────────────────┐
                         │    CO₂ CAPTURE      │
                         │                     │
                         │ CO₂ level monitored │
                         └──────────┬──────────┘
                                    │
                                    ▼
                         ┌─────────────────────┐
                         │ CO₂ CAPTURE TARGET  │
                         │      REACHED?       │
                         └─────────┬───────────┘
                                   │
                         ┌─────────┴─────────┐
                         │                   │
                        NO                  YES
                         │                   │
                         │                   ▼
                         │        ┌─────────────────────┐
                         │        │    REGENERATION     │
                         │        │                     │
                         │        │ Heater represented  │
                         │        │ by temperature     │
                         │        │ monitoring          │
                         │        └──────────┬──────────┘
                         │                   │
                         │                   ▼
                         │        ┌─────────────────────┐
                         │        │ TEMPERATURE TARGET  │
                         │        │      REACHED?       │
                         │        └─────────┬───────────┘
                         │                  │
                         │         ┌────────┴────────┐
                         │         │                 │
                         │        NO                YES
                         │         │                 │
                         │         │                 ▼
                         │         │      ┌─────────────────────┐
                         │         │      │   CO₂ CONVERSION    │
                         │         │      │                     │
                         │         │      │ Electrochemical     │
                         │         │      │ conversion concept  │
                         │         │      └──────────┬──────────┘
                         │         │                 │
                         │         │                 ▼
                         │         │      ┌─────────────────────┐
                         │         │      │   SYSTEM MONITORING │
                         │         │      │                     │
                         │         │      │ OLED + LEDs +       │
                         │         │      │ actuator feedback   │
                         │         │      └──────────┬──────────┘
                         │         │                 │
                         │         │                 ▼
                         │         │      ┌─────────────────────┐
                         │         │      │     NEXT CYCLE      │
                         │         │      └──────────┬──────────┘
                         │         │                 │
                         └─────────┴─────────────────┘
                                    │
                                    ▼
                             CO₂ CAPTURE
```

## 2. Main System Stages

### Stage 1: Solar Input

The LDR provides a simulated measurement of available light. This represents the solar-energy input that would provide power to the full SOLAFORM system.

### Stage 2: CO₂ Capture

The system monitors the simulated CO₂ input. During this stage, the green LED indicates that the prototype is in the CO₂ capture state.

### Stage 3: Regeneration

Once the required CO₂ capture condition is reached, the system can move to the regeneration stage. Temperature monitoring is used to represent the heating process required for regeneration.

The red LED indicates the regeneration stage.

### Stage 4: CO₂ Conversion

After the required regeneration temperature condition is reached, the prototype moves to the CO₂ conversion stage.

The blue LED indicates the conversion stage. In the full-scale SOLAFORM concept, this stage represents the electrochemical conversion of captured CO₂ into useful products.

### Stage 5: System Monitoring

The OLED display provides information about the operating conditions of the prototype. The display is used to show values such as simulated solar input, CO₂ concentration, temperature and the current operating stage.

## 3. Prototype Representation

The Wokwi prototype represents the **control and monitoring system** of SOLAFORM. The simulation does not perform actual CO₂ absorption, thermal regeneration or electrochemical conversion.

Instead, sensors, simulated inputs, LEDs, the servo motor and OLED display are used to demonstrate how these processes can be monitored and controlled automatically.

## 4. Feedback and Control

The Arduino continuously reads the available inputs and uses them to determine the operating condition of the system.

The outputs provide feedback to the user:

* **Green LED:** CO₂ capture
* **Red LED:** Regeneration
* **Blue LED:** CO₂ conversion
* **OLED:** System measurements and operating status
* **Servo motor:** Actuator representing mechanical movement within the system

The control system is designed to allow the SOLAFORM prototype to progress through its operating stages based on system conditions rather than relying only on a fixed operating time.

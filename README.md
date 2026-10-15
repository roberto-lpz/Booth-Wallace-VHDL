Booth-Wallace Multiplier in VHDL

A hardware implementation of a Booth-Wallace multiplier using VHDL, focused on digital arithmetic design and hardware description language fundamentals.

![Status](https://img.shields.io/badge/Status-Completed%20%2F%20Functional-success)
![Technologies](https://img.shields.io/badge/Tech-KiCad%20%7C%20STM32%20HAL%20%7C%20LTspice-blue)
![License](https://img.shields.io/badge/License-MIT-green)

> **Quick Executive Summary (For Recruiters):** A concise 2-sentence summary of what the project is, the primary tools used, and its key measurable result (e.g., *Designed, simulated, and fabricated a closed-loop 5V/2A synchronous buck converter controlled by an STM32 microcontroller, achieving 88% peak efficiency at 100 kHz switching frequency.*)

---

## 📋 Table of Contents
1. [Project Overview & Motivation](#-project-overview--motivation)
2. [System Architecture & Block Diagram](#-system-architecture--block-diagram)
3. [Technical Specifications](#-technical-specifications)
4. [Design Methodology, Calculations & Simulations](#-design-methodology-calculations--simulations)
5. [Hardware & PCB Design (KiCad)](#-hardware--pcb-design-kicad)
6. [Firmware & Embedded Implementation](#-firmware--embedded-implementation)
7. [Testing, Validation & Results](#-testing-validation--results)
8. [Repository Directory Structure](#-repository-directory-structure)
9. [Getting Started & Reproduction Guide](#-getting-started--reproduction-guide)
10. [Limitations & Future Improvements](#-limitations--future-improvements)

---

## 🎯 1. Project Overview & Motivation
* **The Problem:** State the engineering challenge or market need being addressed.
* **The Solution:** Explain how your hardware/software solution solves it.
* **Motivation:** Why did you build this? (e.g., to master power electronics loop compensation, high-speed layout practices, or low-power embedded peripherals).

---

## 📐 2. System Architecture & Block Diagram
Insert a high-level block diagram showing signal flow, power rails, microcontrollers, sensors, and actuators.

---

## ⚙️ 3. Technical Specifications
Provide a clean bulleted list or table of hard metrics:
* **Input Voltage:** $9\text{V} - 15\text{V}$ DC
* **Output Voltage / Current:** $5\text{V}$ DC, up to $2.5\text{A}$
* **Switching Frequency:** $100\text{ kHz}$
* **Microcontroller:** STM32F401RET6 (ARM Cortex-M4)
* **Design Tools:** KiCad 8.0, LTspice XVII, STM32CubeIDE

---

## 🔬 4. Design Methodology, Calculations & Simulations
* **Calculations:** Summarize critical formulas (e.g., inductor sizing, ripple voltage, filter cut-off). Reference Python scripts used for parameter sweeps.
* **Simulations:** Include LTspice schematic screenshots and transient analysis plots. Explain how simulation results guided component selection.

> *[ Insert LTspice Simulation Plot Here: Output Voltage Ripple vs. Load Current ]*

---

## 🛜 5. Hardware & PCB Design (KiCad)
* Detail stack-up, trace width decisions (using IPC-2215 standards for current capacity), grounding strategy (split vs. solid ground planes), and decoupling capacitor placement.
* Include 3D renders or top/bottom layout views.

| Top Copper Layer (Routing) | Bottom Copper Layer (Ground Plane) |
| :---: | :---: |
| *[ Insert Top View ]* | *[ Insert Bottom View ]* |

---

## 💻 6. Firmware & Embedded Implementation
* Outline firmware architecture (e.g., bare-metal with interrupts, RTOS, or state machine).
* Describe peripheral configuration (DMA, ADC sampling rates, TIM PWM generation).
* Highlight safety features (overcurrent protection, thermal shutdown handling).

---

## 📊 7. Testing, Validation & Results
* Differentiate between theoretical expectations and physical lab measurements (oscilloscope captures of switching nodes, ripple voltage, step-load response).

> *[ Insert Oscilloscope Capture: Gate Drive vs. Switch Node Voltage ]*

---

## 📁 8. Repository Directory Structure
Explain the workspace layout (see Section 3 & 4 for examples).

---

## 🚀 9. Getting Started & Reproduction Guide
1. **Simulation:** Instructions to run `.asc` files in LTspice.
2. **Hardware:** How to open KiCad project files and export Gerber/GerberX3 files.
3. **Firmware:** Steps to import the STM32 project into STM32CubeIDE and build/flash.

---

## 🛠️ 10. Limitations & Future Improvements
* Honest engineering critique: What could be improved? (e.g., "Switching losses at light load are high due to hard-switching; adding synchronous rectification or burst mode is planned for revision 2.").


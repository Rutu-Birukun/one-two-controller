# Prototype plan

## Goal

Turn the concept into a testable board-level prototype with minimal risk and clear validation boundaries.

## Phase 1: architecture lock
- confirm target MCU family
- define audio output path
- choose storage solution
- define UI interaction model
- set the target runtime and battery approach

## Phase 2: BOM review
- review candidate components against cost and availability
- validate analog and digital power paths
- confirm regulator and charging suitability
- check connector choices for debugging and assembly

## Phase 3: bring-up
- boot the MCU and confirm clocks and GPIO
- validate debug serial interface
- confirm USB and charging path
- verify power rails with a bench supply

## Phase 4: audio path validation
- confirm DAC and amplifier operation
- validate speaker or headphone output signal quality
- check noise, distortion, and current draw

## Phase 5: UI and playback implementation
- add button or rotary input handling
- implement state machine for play/pause/stop/skip
- validate display behavior and navigation flow

## Phase 6: enclosure and usability review
- evaluate fit, hand feel, and visible controls
- review final dimensions and mounting strategy
- adjust layout against thermal and wiring constraints

## Exit criteria

The prototype can be considered ready for the next revision when:
- power is stable under load
- playback works reliably
- the UI is consistent and understandable
- the board is easy to debug and modify
- the form factor is acceptable for the selected use case

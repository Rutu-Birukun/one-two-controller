# Firmware

This section is intentionally lightweight at this stage. The goal is to define the software structure before coding begins.

## Firmware Objectives

- manage power state and boot sequence
- handle user input
- manage playback state and queue operations
- coordinate audio output
- support debug and test routines

## Planned Module Layout

- `src/boot/` — initialization and system startup
- `src/audio/` — playback and output control
- `src/ui/` — buttons, display, knobs, and navigation logic
- `src/storage/` — media access and file system handling
- `src/power/` — battery and power-state tracking
- `src/debug/` — diagnostics and logging

## Initial Firmware Plan

1. Establish build and hardware bring-up
2. Validate MCU clocks, GPIO, and basic peripherals
3. Confirm power rails and stability
4. Bring up audio output path
5. Add controls and playback states
6. Validate storage interface and file access

## Placeholder

The actual firmware source will be added here as the architecture becomes more concrete.

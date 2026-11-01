# Firmware

This folder contains a starter firmware project structure for the One Two Controller concept. The purpose is to provide a clean architectural baseline before deeper implementation work begins.

## Planned modules

- `src/boot/` — initialization and hardware startup
- `src/audio/` — playback, volume, and output control
- `src/ui/` — display and control handling
- `src/storage/` — file discovery and media access
- `src/power/` — battery monitoring and charging state
- `src/debug/` — logs and diagnostics

## Build system

The default recommendation is PlatformIO for a simple and portable embedded build flow.

## Starter implementation notes

The firmware should start with a simple state machine:
- boot
- idle
- playing
- paused
- stopped
- error

This makes the device easier to debug while audio, storage, and controls are being tested.

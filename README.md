# One Two Controller

A compact, modular MP3 playback and controller prototype built around a simple embedded architecture. This repository captures the concept, requirements, BOM foundations, firmware skeleton, and prototype planning for a device that blends playback control with practical hardware interfaces.

## Project goal

Create a portable or desk-friendly controller/player capable of:
- playing audio from local or removable media
- handling basic playback controls
- exposing a simple and readable user interface
- operating from USB or battery power
- remaining modular and testable during prototype development

## Current status

This project is in the prototype-scoping stage. The repository has already captured the core concept, architectural direction, and initial BOM thinking. The next step is to turn that concept into a concrete project scaffold with documentation, firmware structure, and a validation plan.

## Repository layout

- `docs/` — requirements, architecture, design decisions, and prototype plan
- `bom/` — candidate parts, vendor notes, and rough cost estimates
- `firmware/` — embedded firmware skeleton and build configuration
- `concepts/` — concept notes and selected direction
- `tests/` — validation plans for audio, power, and UI
- `mechanical/` — enclosure and packaging concept notes

## MVP direction

The recommended MVP is a small audio playback/control device using:
- MCU: ESP32 or STM32
- audio path: I2S DAC + amplifier
- storage: microSD card
- power: USB-C + Li-ion battery charging
- UI: buttons, rotary input, or simple display

## Product principles

- Keep the architecture modular
- Favor common parts with good ecosystem support
- Separate power, audio, UI, and storage concerns
- Keep firmware readable and debug friendly
- Prefer prototype-friendly parts over final product polish

## Milestones

1. Confirm the target hardware architecture
2. Finalize the requirements and constraints
3. Review the BOM against cost, runtime, and availability
4. Build a board-level prototype
5. Validate the audio path and power rails
6. Implement prototype firmware state handling
7. Validate UI and media playback behavior
8. Define the enclosure concept and revision path

## Documentation

See the files in `docs/` for the requirements and architecture summary. Use `bom/` to track design candidates and cost expectations. The firmware starter project is in `firmware/`.

## License

This repository does not currently enforce a specific license. If you want formal distribution or commercial reuse terms, add a license decision before external publication.

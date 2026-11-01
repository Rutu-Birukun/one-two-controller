# Architecture

## Overall architecture

The device is best organized into the following major blocks:

- audio subsystem
- power and charging subsystem
- control and user interface subsystem
- storage and media access subsystem
- MCU processing subsystem
- mechanical enclosure and connection subsystem

## Block diagram

```text
[Power Input / Battery]
          |
          v
[Power Management] --> [MCU / Controller]
          |
          |---> [Storage / Media]
          |
          |---> [Audio Codec / Amplifier / Output]
          |
          |---> [Buttons / Rotary / Display / Sensors]
          |
          `---> [Debug / USB / Expansion]
```

## Subsystem notes

### 1. Power subsystem
- Accept USB input and optionally battery power
- Include charging and safe battery management
- Keep analog and digital rails separate where practical

### 2. Processor subsystem
- Use a microcontroller with enough capability for playback, UI, and diagnostics
- Include programming/debug interfaces
- Prefer a common architecture with available libraries and example code

### 3. Audio subsystem
- Select a codec and amplifier path according to output needs
- Validate speaker or headphone output quality early
- Keep the first prototype simple and easy to debug

### 4. Interface subsystem
- Buttons, knob input, and display choices affect usability directly
- Keep control logic separate from low-level audio and power behavior

### 5. Storage subsystem
- Evaluate microSD, internal flash, or external media options
- Choose the approach that best fits the final use case and prototype budget

## Recommended architecture direction

Use a modular architecture with clearly separated MCU, power, audio, interface, and storage layers. This minimizes debugging risk and supports more straightforward firmware development.

## Firmware module layout

- `src/boot/` — startup and initialization
- `src/audio/` — playback and output logic
- `src/ui/` — buttons, display, and navigation
- `src/storage/` — media discovery and file handling
- `src/power/` — battery and power state tracking
- `src/debug/` — diagnostics and log output

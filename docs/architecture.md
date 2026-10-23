# Architecture

## Overall Architecture

The design can be organized into the following major blocks:

- Audio processing and playback subsystem
- Power and charging subsystem
- Control and user interface subsystem
- Storage and media access subsystem
- Microcontroller or processing subsystem
- Mechanical enclosure and connectivity subsystem

## Suggested Block Diagram

```
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

## Subsystem Notes

### 1. Power Subsystem
- Input source may be USB, battery, or both
- Include safe charging and regulation if battery-backed
- Keep power rails clean for analog audio and digital logic

### 2. Processor Subsystem
- Use a microcontroller or SoC with enough capability for playback control
- Include debug and programming ports
- Prefer a simple, common architecture with strong community support

### 3. Audio Subsystem
- Select an audio codec or amplifier path based on output needs
- Validate speaker/headphone output quality and power draw
- Avoid unnecessary analog complexity early in the prototype stage

### 4. Interface Subsystem
- Buttons, encoding wheels, display and panel layout all affect usability
- Keep control logic well-separated from main playback logic

### 5. Storage Subsystem
- Decide between onboard flash, microSD, or external media support
- Evaluate cost, reliability, and library support

## Current Architectural Recommendation

Use a modular architecture with a clearly separated MCU, power, audio, and UI layer. This reduces risk and keeps debugging manageable while the concept matures.

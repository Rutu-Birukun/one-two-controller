# Requirements

## Product requirements

### Functional requirements
- Playback control: start, pause, resume, stop, and skip
- Volume control and mute behavior
- Audio output with acceptable signal quality for prototype use
- Basic navigation and state selection through UI controls
- Media access from onboard or removable storage
- Power management for USB and battery-backed operation

### Non-functional requirements
- Prototype-friendly cost and part availability
- Good firmware maintainability and debug visibility
- Separate hardware domains for power, audio, and control
- Reasonable thermal and power stability during operation
- Documented BOM decisions and design revision history

## Design constraints

- Keep the layout and BOM realistic for prototype iteration
- Avoid over-engineering the first revision
- Maintain a practical enclosure size and mechanical approach
- Minimize part scarcity risk for early builds
- Align the firmware structure with subsystem boundaries

## Priority order

1. Audio playback reliability
2. Control and UI usability
3. Power stability and safety
4. Mechanical fit and enclosure clarity
5. Feature expansion and polish

## User stories

- As a user, I want to play audio from a local or removable source.
- As a user, I want a simple way to change volume and pause/resume playback.
- As a developer, I want separated firmware modules so I can debug power, media, and UI bugs independently.
- As a hardware designer, I want a manageable BOM with easy-to-source components.
- As a tester, I want a clear validation path for audio, power, and user input.

## Questions to answer next

- Which storage approach is the best fit: built-in flash or microSD?
- Will the device prioritize a speaker, headphone output, or both?
- Will the UI be button-based, encoder-based, or hybrid?
- What is the target runtime on battery power?
- Is the first prototype board-only or near-final enclosure form?

## MVP definition

The initial prototype should support basic playback, UI navigation, and charging/power operation. Advanced features can be deferred until the core hardware path is proven.

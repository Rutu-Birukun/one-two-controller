# Project Specification

## Product Concept

The One Two Controller is a compact controller/device concept with MP3 playback and practical hardware control features. It is intended to consolidate brainstorming notes into a working design foundation.

## Functional Goals

- Support audio playback from local or external digital sources
- Provide controllable UI interactions for playback and navigation
- Keep the design modular enough for prototype iteration
- Maintain a manageable BOM and hardware complexity
- Support firmware development with clear subsystem boundaries

## High-Level Requirements

### Core Requirements
- Audio output path with sufficient quality for portable use
- Control interface for playback, menu navigation, and volume
- Reliable power management and battery/USB integration
- Simple, readable firmware architecture
- Clear mechanical enclosure concept

### Secondary Requirements
- Expandable storage or external media support
- Good diagnostics for development and testing
- Sensor or control input support if needed
- Low-to-moderate component count for prototyping

## Open Questions

- What is the exact final size and use case?
- Is this a standalone player, a controller accessory, or a hybrid device?
- What audio codec and storage approach will be used?
- Is the design meant for indoor use, portable use, or both?
- Will the final product prioritize cost, compactness, or custom capability?

## Design Direction

The current direction is intentionally broad so the notes and initial concept can be refined into a cleaner design. Later versions should focus on a single concrete architecture before committing to expensive PCB fabrication.

## Deliverables

- Requirements document
- Architecture document
- BOM file with candidate parts
- Firmware outline
- Mechanical concept and enclosure notes
- Prototype and testing plan

## Success Criteria

The project can be considered ready for prototype development when:
- the system architecture is stable
- the BOM is reviewed and realistic
- the firmware splits cleanly by subsystem
- power and audio requirements are validated
- the enclosure and interface concept match the design goals

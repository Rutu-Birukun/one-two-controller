# One Two Controller Project Board

## Project overview

This board tracks the translation of the concept repository into a working prototype project. The core objective is to move from the current concept and BOM draft toward a validated hardware and firmware prototype.

## Suggested project columns

- Backlog
- Planned
- In Progress
- Review
- Done

## Milestone plan

### Milestone 1: Requirements and scope freeze
Goal: define a clear MVP and eliminate ambiguous project direction.

Issues:
- Confirm final product use case: portable player, controller accessory, or hybrid device
- Finalize target feature set for the first hardware revision
- Align the repository docs with the chosen MVP scope

Acceptance criteria:
- a single MVP definition is agreed upon
- required features are listed and prioritized
- out-of-scope items are explicitly deferred

### Milestone 2: Architecture lock
Goal: choose the baseline hardware architecture.

Issues:
- Select MCU family and flash/storage approach
- Decide audio path: DAC, amplifier, output style
- Select UI model: buttons, knob, display, or hybrid
- Confirm power architecture: USB, battery, charging, and regulators

Acceptance criteria:
- architecture block diagram is approved
- power and audio subsystems are defined
- core MCU and interfaces are selected

### Milestone 3: BOM and sourcing review
Goal: convert the concept BOM into a realistic prototype inventory.

Issues:
- Review and complete BOM CSV with candidate parts
- Confirm vendor availability for main components
- Check cost and lead-time risk for critical devices
- Validate regulator and battery protection choices

Acceptance criteria:
- BOM is reviewed against design constraints
- all critical parts have candidate suppliers
- no unreviewed high-risk components remain in the critical path

### Milestone 4: Firmware baseline
Goal: establish a clean embedded code structure.

Issues:
- Create boot and startup logic
- Implement system state machine
- Add audio subsystem skeleton
- Add UI input handling skeleton
- Add storage discovery placeholder
- Add power-monitoring placeholders

Acceptance criteria:
- firmware builds successfully
- subsystem boundaries are clear
- serial logging and debug hooks are in place

### Milestone 5: Board bring-up and validation
Goal: validate the hardware basis before deeper feature work.

Issues:
- power rails measured and validated
- MCU boots correctly
- debug serial works
- USB and charging path tested
- per-device IO and pin assignment reviewed

Acceptance criteria:
- board powers up without instability
- debug path is stable
- major pin assignments are fixed for firmware development

### Milestone 6: Audio path verification
Goal: prove the audio stack works reliably.

Issues:
- verify DAC output path
- validate amplifier and speaker/headphone behavior
- test gain and mute operation
- detect and fix noise or distortion issues

Acceptance criteria:
- output is stable and audible
- no excessive distortion or noise under realistic load
- volume control works as expected

### Milestone 7: Control and playback logic
Goal: add real user interaction and media control.

Issues:
- implement play/pause/stop commands
- add track advance and navigation controls
- validate button debounce and input logic
- verify display state updates and UI flow

Acceptance criteria:
- media control is implemented and stable
- user inputs register correctly
- the UI reflects active playback state reliably

### Milestone 8: Enclosure and usability review
Goal: confirm the design is practical in real use.

Issues:
- assess board fit and cable routing
- validate front-panel control placement
- review thermal and access constraints
- build or draft enclosure concept

Acceptance criteria:
- layout supports service access
- controls are usable and clearly placed
- the concept is realistic for prototype assembly

### Milestone 9: Prototype release candidate
Goal: finalize the first complete prototype iteration.

Issues:
- run final test pass for hardware and firmware
- collect issues and required revision notes
- review BOM against actual build experience
- score prototype against MVP requirements

Acceptance criteria:
- prototype meets the agreed MVP definition
- all critical issues are tracked or explicitly deferred
- next revision path is documented

## Suggested issue backlog

### High priority
- Choose the final MCU platform
- Define the exact storage method for the first prototype
- Confirm battery chemistry and charging strategy
- Decide the UI control scheme
- Validate the audio output path with an actual bench test

### Medium priority
- Review connector and debug interfaces
- Draft enclosure concept and mounting strategy
- Document calibration and diagnostics routines
- Finalize firmware module responsibilities

### Lower priority
- Add extra feature expansion ideas
- Consider future wireless or app-based control paths
- Evaluate optional sensor and expansion hardware

## Definition of done

A milestone is considered complete when:
- the relevant design choice is locked or explicitly deferred
- implementation, validation, and documentation are aligned
- follow-up issues for later revisions are recorded
- the repository reflects the current state of the design

## Recommended next actions

1. Finalize the MVP use case
2. Select the hardware architecture
3. Create the first GitHub issue set from the list above
4. Update `docs/requirements.md` and `docs/architecture.md` to match the chosen direction
5. Start the first firmware build pass and board bring-up plan

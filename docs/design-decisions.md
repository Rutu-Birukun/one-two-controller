# Design decisions

## Decision log

### D1: Modular architecture
We will keep power, audio, storage, UI, and MCU logic separated. This keeps firmware and debugging manageable during prototype iteration.

### D2: Prototype-first BOM
We will select common parts with good availability and low risk. Final product polish is deferred until the prototype proves the architecture.

### D3: Preferred media path
The current recommendation is microSD for removable media and low-cost testing. If onboard storage becomes more important, it can be re-evaluated in a later revision.

### D4: USB + battery power
The first design should support both charging and operation from USB or a rechargeable battery. This makes bench testing and portable use more practical.

### D5: Simple UI first
A simple control scheme is preferred over a complex interface. The project should first prove basic playback control, then add advanced UI features if needed.

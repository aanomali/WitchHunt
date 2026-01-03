# WitchHunt

## Project Overview
**WitchHunt** is a 2D game/simulation project developed in C++ using the **ICBYTES** library. The main objective of the project is to demonstrate fundamental concepts such as the **game loop**, **event-driven input handling**, **2D rendering pipeline**, and **basic state management** without relying on high-level game engines (e.g., Unity or Unreal).

The project is designed to present these concepts in a clear, inspectable, and academically evaluable codebase.

---

## Technologies Used
- **Language:** C++
- **Graphics & Input Library:** ICBYTES  
  https://github.com/cembaykal/ICBYTES
- **Development Environment:** Microsoft Visual Studio (Windows)
- **Approach:** Event-driven programming with a procedural game loop design

---

## Project Structure
The following structure is intentionally kept minimal to ensure clear understanding of the control flow:

```text
WitchHunt/
├── Main.cpp                 
├── WitchHunt.sln            
├── WitchHunt.vcxproj        
├── WitchHunt.vcxproj.filters
├── WitchHunt.vcxproj.user
└── README.md
```

---

## Key Technical Topics
- **Game Loop Architecture**
  - Continuously running update–render cycle
  - Frame-based flow: *Input → Update → Render*
- **Input Management**
  - Keyboard event handling via ICBYTES
  - Event-driven control logic
- **Rendering**
  - 2D drawing primitives and screen updates
  - Scene output management
- **State Management**
  - Control of gameplay flow through basic states (e.g., initialization / gameplay)

These topics form the foundation of modern game engines and interactive systems.

---

## Installation and Execution

### Requirements
- Windows
- **Visual Studio** (Desktop Development with C++ workload installed)
- ICBYTES library

### Steps
1. Clone the ICBYTES library:
   ```bash
   git clone https://github.com/cembaykal/ICBYTES
   ```

2. Clone this repository:
   ```bash
   git clone https://github.com/aanomali/WitchHunt
   ```

3. Open `WitchHunt.sln` using Visual Studio.

4. Configure the following paths for ICBYTES in project settings:
   - **Include** (Header) directories
   - **Library** (Lib) directories

5. Build and run the project.

> Note: ICBYTES integration may vary depending on the directory structure. Adjust `Additional Include Directories` and `Additional Library Directories` according to your local setup.

---

## Academic / CV-Oriented Contributions and Learning Outcomes
Through this project, practical experience was gained in:
- Implementing **low-level (engine-free)** game programming in C++
- Integrating and configuring an external library (ICBYTES)
- Designing input handling using an event-driven approach
- Applying fundamental rendering and state management concepts

---

## Future Work
- Object-oriented architecture: separation into `Engine / Entity / Input / Render` layers
- Collision detection system
- Basic AI behaviors
- Score and UI layer
- Multi-level structure
- Variable character mechanics

---

## License
This project was developed for educational purposes.  
The licensing terms of the ICBYTES library apply.

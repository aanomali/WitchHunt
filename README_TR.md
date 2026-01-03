
# WitchHunt

## Project Overview
**WitchHunt** is a C++-based 2D game/simulation project developed using the **ICBYTES** library. 
The project focuses on demonstrating core concepts of game programming such as the game loop, 
event-driven input handling, rendering pipelines, and basic state management without relying on 
high-level game engines.

This work is designed as an **educational and portfolio-oriented project**, suitable for inclusion 
in academic coursework, undergraduate/graduate portfolios, and CVs.

---

## Technologies and Tools
- **Programming Language:** C++
- **Graphics & Input Library:** ICBYTES  
  https://github.com/cembaykal/ICBYTES
- **Development Environment:** Microsoft Visual Studio (Windows)
- **Paradigm:** Event-driven programming, procedural game loop design

---

## Project Structure
```
WitchHunt/
├── Main.cpp                 # Application entry point and main game loop
├── WitchHunt.sln            # Visual Studio solution file
├── WitchHunt.vcxproj        # Project configuration
├── WitchHunt.vcxproj.filters
├── WitchHunt.vcxproj.user
└── README.md
```

The project is intentionally kept compact to allow clear inspection of control flow and core logic.

---

## Core Concepts Demonstrated
- **Game Loop Architecture**
  - Continuous update-render cycle
- **Input Handling**
  - Keyboard-based event processing via ICBYTES
- **Rendering**
  - 2D drawing primitives and screen updates
- **State Logic**
  - Basic control of gameplay flow

These concepts form the foundation of modern game engines and interactive systems.

---

## Installation and Execution
### Requirements
- Windows OS
- Visual Studio with C++ Desktop Development tools
- ICBYTES library

### Steps
1. Clone the ICBYTES library:
   ```bash
   git clone https://github.com/cembaykal/ICBYTES
   ```

2. Clone this repository:
   ```bash
   git clone <repository-url>
   ```

3. Open `WitchHunt.sln` in Visual Studio  
4. Configure include and library paths for ICBYTES  
5. Build and run the project

---

## Academic Motivation
This project aims to:
- Strengthen understanding of low-level game programming in C++
- Practice external library integration
- Explore event-driven system design
- Provide a clear and assessable codebase for academic evaluation

---

## Possible Extensions
- Object-oriented refactoring (Entity / Engine separation)
- Collision detection mechanisms
- Simple AI behaviors
- UI and scoring system
- Multi-level architecture

---

## License
This project is developed for educational purposes.  
The licensing terms of the ICBYTES library apply.

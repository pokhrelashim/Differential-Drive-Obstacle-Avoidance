# Differential Drive Obstacle Avoidance Robot

## Overview
This project simulates a differential-drive autonomous robot implementing ultrasonic-based obstacle detection and real-time motor control logic using Arduino.

The objective is to demonstrate foundational autonomous navigation behavior in mobile robotic systems.

---

## System Architecture
- **Microcontroller:** Arduino Uno
- **Motor Driver:** L293D Dual H-Bridge
- **Sensors:** HC-SR04 Ultrasonic Distance Sensor
- **Actuation:** Dual DC Motors

---

## Control Logic
1. Move forward continuously.
2. Measure front-facing distance.
3. If obstacle < 20 cm:
   - Stop
   - Reverse briefly
   - Turn right
   - Resume forward motion

---

## Repository Structure
- `/code` → Arduino implementation
- `/simulation` → Circuit design screenshots
- `/media` → Simulation output visuals

---

## Future Improvements
- PWM-based speed control
- PID motion stabilization
- Multi-sensor fusion
- ROS2 integration layer

---

## Author
**Amish** – Robotics & Embedded Systems Enthusiast

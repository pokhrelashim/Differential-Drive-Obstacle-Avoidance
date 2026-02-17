# Differential Drive Obstacle Avoidance Robot

## Overview
This project simulates a differential-drive autonomous robot implementing ultrasonic-based obstacle detection and real-time motor control logic.
<br>
The system demonstrates foundational autonomous navigation principles used in mobile robotics.

## System Architecture

- Microcontroller: Arduino Uno
- Motor Driver: L293D Dual H-Bridge
- Sensors: HC-SR04 Ultrasonic Sensor
- Actuation: Dual DC Motors

## Functional Logic

1. Move forward continuously.
2. Measure front-facing distance.
3. If obstacle < 20 cm:
   - Stop
   - Reverse briefly
   - Turn right
   - Resume forward motion

## Repository Structure

- `/code` → Arduino implementation
- `/simulation` → Tinkercad circuit design
- `/media` → Output screenshots

## Future Improvements

- PID-based motion control
- Sensor fusion
- ROS2 integration layer
- SLAM-based navigation

# Ultrasonic Distance Sensor with Buzzer Alert

## Description
Measures distance using HC-SR04 sensor.
Buzzer triggers when object is within 30cm.

## Components
- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- Piezo Buzzer

## Pin Connections
- TRIG → Pin 9
- ECHO → Pin 8
- Buzzer → Pin 11

## How it Works
- Sensor fires sound pulse
- Measures echo return time
- Calculates distance using duration / 58
- Buzzer beeps when distance < 30cm

## Simulated on
Tinkercad

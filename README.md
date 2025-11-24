Arduino R4 project
This is a simple Arduino-based alarm system featuring 1 LED and 1 buzzer. The system demonstrates basic embedded systems programming, digital output control, and timed sequences.

The LED and buzzer share a common ground, allowing simultaneous or independent operation. This project is designed for beginners or anyone wanting a hands-on introduction to Arduino I/O control.

Features
	•	Blink LED multiple times
	•	Beep buzzer multiple times
	•	Simultaneous LED + buzzer sequence
	•	Adjustable timing for LED blink and buzzer duration

Components Needed
	•	Arduino Uno / R4 / any compatible board
	•	1 LED
	•	1 Active buzzer
	•	1 resistor (220–330 Ω for the LED)
	•	Jumper wires
	•	Breadboard
  
  Component
Arduino Pin
LED (+)
8
Buzzer (+)
7
LED & Buzzer (-)
GND

Notes:
	•	Connect the LED through a resistor to pin 8.
	•	Connect both LED and buzzer negative pins to the same GND.
	•	Buzzer is active, so it only needs HIGH/LOW signals.


Code Usage
	1.	Connect the components as shown above.
	2.	Upload the Arduino sketch to your board.
	3.	The alarm routine will run automatically in a loop:
	•	Blink LED 3 times
	•	Beep buzzer 3 times
	•	Turn LED and buzzer on simultaneously for 300 ms

Example Output
	•	LED blinks → Buzzer beeps → LED & buzzer ON → repeat
	•	Timing and patterns can be easily modified in the code.

Customization
	•	Change pins: Update ledPin and buzzerPin in the code.
	•	Change timings: Modify blinkDelayTime, sequencePause, or beepBuzzer duration.
	•	Expand system: Add more LEDs or buzzers by creating arrays and loops.

Learning Outcomes
	•	Basic Arduino pin control
	•	Understanding of digital output signals
	•	How to share a common ground
	•	Modular coding using functions

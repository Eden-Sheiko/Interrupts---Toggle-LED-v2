# Button-LED Toggle
This program toggles a RED LED on every PRESS/RELEASE of a button connected to pin PD2. It is designed to work with Arduino boards or other microcontroller boards that support the same I/O pins.

## Getting Started
### Prerequisites
To run this program, you will need:

* An Arduino board or similar microcontroller board
* A RED LED
* A 220 ohm resistor
* A button
* Jumper wires
### Hardware Setup
1. Connect the cathode (shorter leg) of the LED to ground (GND) via the resistor.
2. Connect the anode (longer leg) of the LED to pin PB5 (pin 13 on Arduino Uno).
3. onnect one end of the button to pin PD2 and the other end to ground (GND) via a 10K ohm pull-down resistor.
### Installing
1. Download the Button-LED Toggle code from this GitHub repository.
2. Open the Button-LED Toggle sketch in the Arduino IDE or your preferred IDE for microcontroller programming.
3. Connect your microcontroller board to your computer via USB.
4. Compile and upload the sketch to your microcontroller board.
### Running the Program
1. Press and release the button connected to pin PD2 to toggle the state of the LED connected to pin PB5.
2. Each time the button is pressed, the LED will toggle between ON and OFF states.

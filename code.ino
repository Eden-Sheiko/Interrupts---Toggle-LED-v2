// The program should toggle RED LED on every PRESS/RELEASE
// - PRESS: 	Toggle.
// - RELEASE: 	Toggle.

void setup() {
  cli(); // Disable global interrupts
  
  // Set PD2 as input
  DDRD &= ~(1<<DDD2);
  
  // Set PB5 as output
  DDRB |= (1<<DDB5);
	
  // The button is configured with a PULL-DOWN resistor
  
  // Configure the interrupt trigger *accordingly*
  EICRA  |= (0 << ISC01);
  EICRA  |= (1 << ISC00);

  // Enable INT0
   EIMSK |= (1 << INT0);

  sei(); // Enable global interrupts
}

ISR(INT0_vect) {
  PORTB ^=(1<<PORTB5); // Toggle PB5 (pin 13)
}


void loop() {
  // The main loop will remain empty, as the ISR will handle the LED state change
}

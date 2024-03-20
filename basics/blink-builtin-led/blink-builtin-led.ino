int builtin_led = 13; // A variable named "builtin_led" is defined and assigned the value "13".

void setup() {
  pinMode(builtin_led, OUTPUT); // The variable "builtin_led" is assigned as output pin. Since "13" is defined in the "builtin_led" variable, this corresponds to pin 13 in "pinMode", i.e. the builtin LED.
}

void loop() { // The loop is started in the "voild loop".
  digitalWrite(builtin_led, 1); // LED is turned on.
  delay(1000); // 1 second delay.
  digitalWrite(builtin_led,0); // LED is turned off.
  delay(1000); // 1 second delay.
}

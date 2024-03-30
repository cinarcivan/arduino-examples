/*
Break statement is used to exit from a loop. It is used to exit from the loop when a certain condition is met.

Example: In the below code, the while loop will run until the break_test is less than 10. When the break_test is equal to 5, the break statement will be executed and the loop will be exited.
*/

int break_test = 0;

void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 bits per second:

  while (break_test < 10) { // While loop will run until break_test is less than 10.
    Serial.println("While loop is working!"); // As long as the while loop continues, text is written to the serial monitor.
    break_test++; // Increment the break_test value by +1 each time the loop is executed.
    if (break_test == 5) { // If the break_test value is equal to 5, the break statement will be executed and the loop will be exited.
      break; // Exit the loop.
    }
  }

}

void loop() {  
  // The loop function is empty because we only want to run the code in the setup function.
}

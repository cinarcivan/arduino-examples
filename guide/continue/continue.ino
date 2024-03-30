/*
Continue statement is used to skip the current iteration of a loop and continue with the next iteration. It is used to skip the current iteration when a certain condition is met.

For example, in the below code, the for loop will run until the continue_test is less than 10. When the continue_test is equal to 5, the continue statement will be executed and the loop will continue with the next iteration.
*/

void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 bits per second.

  for (int continue_test = 0; continue_test < 10; continue_test++) { // For loop will run until continue_test is less than 10. Increment the continue_test value by +1 each time the loop is executed.
    if (continue_test == 5) { // If the continue_test value is equal to 5, the continue statement will be executed and the loop will continue with the next iteration.
      continue; // Skip the current iteration and continue with the next iteration. You can check this by looking at the serial monitor.
    }

    Serial.println("For loop is working!"); // As long as the for loop continues, text is written to the serial monitor.
    Serial.print("This is ");
    Serial.print(continue_test); // Print the value of continue_test for showing the current iteration.
    Serial.println(". loop.");
  }
}

void loop() {
  // The loop function is empty because we only want to run the code in the setup function.
}

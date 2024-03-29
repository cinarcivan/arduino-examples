/*
For loop is a loop that repeats a block of code a certain number of times. It is used when the number of repetitions is known. Different from the while loop, the for loop has three parts: initialization, condition, and increment. The initialization part is executed only once at the beginning of the loop. The condition part is checked before each iteration. If the condition is true, the loop continues. If the condition is false, the loop stops. The increment part is executed after each iteration. It increments the loop variable by a certain value. The for loop is used when the number of iterations is known in advance. For example, you can use the for loop to blink the LED 10 times.

In the example below, we will use the for loop to print the text "For loop is working!" to the serial monitor 10 times.
*/

void setup() {
  Serial.begin(9600); // Start the serial monitor at 9600 baud.

  for (int for_loop = 0; for_loop < 10; for_loop++) { // The for loop will continue to work as long as the "for_loop" value is less than 10. If the value is equal to or greater than 10, the loop will stop. It increments the "for_loop" value by +1 each time the loop is executed. It performs the same function as "for_loop = for_loop + 1;". First part of the for loop is the initialization, the second part is the condition, and the third part is the increment. In first part, we define a variable named "for_loop" and assign it to "0". In the second part, we check if the "for_loop" value is less than "10". In the third part, we increment the "for_loop" value by +1 each time the loop is executed.
    Serial.println("For loop is working!"); // As long as the for loop continues, text is written to the serial monitor.
  }
}

void loop() {
  // The loop function is empty because we only want to run the code in the setup function.
}

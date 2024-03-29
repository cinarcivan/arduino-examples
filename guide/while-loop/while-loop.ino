/*
While loop is a loop that continues to work as long as the condition is true. If the condition is false, the loop stops. The while loop is used when the number of iterations is not known in advance. For example, you can use the while loop to read the sensor data until the desired value is reached.
*/

int while_loop = 0;  // We define a variable whose value is "0". We will use this variable in the while loop. For learn variables, you can check the "guide/variable-types" folder.

void setup() {
  Serial.begin(9600);  // Start the serial monitor at 9600 baud.

  while (while_loop < 10) { // The while loop will continue to work as long as the "while_loop" value is less than 10. If the value is equal to or greater than 10, the loop will stop.
    Serial.println("While loop is working!");  // As long as the while loop continues, text is written to the serial monitor.
    while_loop++;  // It increments the "while_loop" value by +1 each time the loop is executed. It performs the same function as "while_loop = while_loop + 1;".
  }
}

void loop() {
  // The loop function is empty because we only want to run the code in the setup function.
}
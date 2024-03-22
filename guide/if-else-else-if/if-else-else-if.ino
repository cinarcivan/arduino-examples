/*
Let's write a code that uses "if", "else" and "else if" to check the grade received from the exam and check whether the exam is passed or failed accordingly. The role of each line in the code is indicated to the right.
*/

int exam_result = 70;  // We define the exam result of the participant as a variable. By playing with the value assigned to the variable, you can examine the change in what is printed to the serial monitor.

void setup() {
  Serial.begin(9600);  // Start the serial monitor at 9600 baud.

  if (exam_result >= 70) {  // If the exam result is 70 or greater than 70,
    Serial.print("Congratulations! You passed the exam. You got ");
    Serial.print(exam_result);
    Serial.print(" on the exam.");  // Print the information that you passed the exam to the serial monitor.
  }

  else if (exam_result >= 50) {  // If the exam result is not 70 or greater than 70 (if the above if is not met) but the exam result is 50 or greater than 50,
    Serial.print("You failed the exam, but we can retake it. You got ");
    Serial.print(exam_result);
    Serial.print(" grade on the exam.");  // Print the information to the serial monitor that the exam was not passed but can be retaken.
  }

  else {  // If both conditions are not met,
    Serial.print("Sorry, you failed the exam. You got ");
    Serial.print(exam_result);
    Serial.print(" on the exam..");  // Print the information that he failed the exam to the serial monitor.
  }
}

void loop() {

}
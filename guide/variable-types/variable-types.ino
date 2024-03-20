/*

Variable Types

Variables differ according to the type of data they store. These data types determine the range of values that the variable can store. They also determine the space they occupy in memory. Therefore, when choosing the type of variable, you should choose the appropriate one according to the type of data you will store. Below are the variable types used in Arduino and the range of values they can store:

int: can store numeric values between -32.768 and 32.767 (occupies 2 bytes).
unsigned int: can store numeric values between 0 and 65.535 (occupies 2 bytes).

long: can store numeric values between -2,147,483,648 and 2,147,483,647 (takes up 4 bytes).
unsigned long: can store values between 0 and 4,294,967,295 (takes up 4 bytes).

float Can store decimal values from -3.4*10^38 to 3.4*10^38 (occupies 4 bytes).
bool: Can store the values "true" (1) or "false" (0) (occupies 1 byte).
char: Can store characters from the ASCII character set (occupies 1 byte).

*/

// Below you can see an example where all of the above variables are used and printed on the screen via the serial monitor:

int variable_1 = 32767;
unsigned int variable_2 = 65535;

long variable_3 = -2147483648;
unsigned long variable_4 = 4294967295;

float variable_5 = 3.14;
bool variable_6 = 1;
bool variable_7 = 0;
char variable_8 = '?'; // A char with decimal value "63" is defined in the ASCII table.
char variable_9 = 'g'; // A char with decimal value "103" is defined in the ASCII table.

void setup() {
  Serial.begin(9600);

  Serial.println(variable_1);
  Serial.println(variable_2);
  Serial.println(variable_3);
  Serial.println(variable_4);
  Serial.println(variable_5);
  Serial.println(variable_6);
  Serial.println(variable_7);
  Serial.println(variable_8); // Char is printed directly to the screen.
  Serial.println(variable_9); // Char is printed directly to the screen.
  Serial.println(variable_8, DEC); // "DEC" prints the decimal value of char in the ASCII table.
  Serial.println(variable_9, DEC); // "DEC" prints the decimal value of char in the ASCII table.
  
}

void loop () {
  
}
/*
  Author: 
  Learning Intention: The students will learn about the different data types used in the C++ language and how they can be converted for storage or computation
  Success Criteria:
    1. I understand and can store variables in the datatypes string, interger, float, longs and boolean
    2. I know how to access more information about the different datatypes in the documentation
    3. I Understand how (1, HIGH and true) and (0, LOW, false) all represent the same concept and can be used interchangeably in an INO sketch
    4. I can convert an integer, float and boolean to a string and print it in to the serial monitor
    5. I understand the difference between an int and an unsigned int or a long or an unsigned long
    6. I understand the difference between a global variable and a function variable 

  Student Notes: 

  Documentation: 
    https://www.arduino.cc/reference/en/#variables
    https://www.arduino.cc/reference/en/language/variables/data-types/stringobject/
*/

String myString = "Hello World";
int myInt = 3;
bool myBool = false;
float myfloat = 3.14;
long myLong = 3.14123456789;
unsigned int myint2 = 5;
static unsigned int myInt3 = 7;


void setup() {
Serial.begin(9600);
Serial.println("Serial Monitor configured to 9600");
Serial.println("----------------------");
}

void loop() {
  myBool = true;
  myString = myBool;
  myInt = myfloat;
Serial.println(String(myLong));
}
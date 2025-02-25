/*
  Author: Khanh Nguyen 2/8/2023
  Learning Intention: The students will understand the difference between the inbuilt setup and loop methods, and understand the basics of the serial monitor'.
  Success Criteria:
    1. I understand the different behaviours of the setup and loop methods
    2. I can print information to the serial monitor
    3. I can print information to a new line of the serial monitor
    5. I understand the impact of having more than one setup or loop methods in my sketch
  
  Student Notes: 

  Documentation: 
    https://www.arduino.cc/reference/en/language/functions/communication/serial/
    https://docs.arduino.cc/software/ide-v2/tutorials/ide-v2-serial-plotter
*/

// The setup function runs once when you press reset or power the board
void setup() {
Serial.begin(9600);
Serial.println("Serial Monitor is configured to 9600");
Serial.println("-----------------------");
}

// The loop function runs over and over again forever
void loop() {
while(!Serial.available());
String myString = Serial.readString();
Serial.print(myString);
}

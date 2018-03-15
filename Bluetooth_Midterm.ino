//The recieved ASCII value from the bluetooth chip.
int info; 
//Just a variable that could be used in logic later on, such as on the final project.
int val;

void setup() {
  //Default and current baud rate of the HC-06 is 9600.
  Serial.begin(9600);
}

void loop() {
  //Taking in the ASCII value sent.
  info = Serial.read();
  //By default, when nothing is sent the value of info will be set to -1, so a check is needed to see when it is no longer -1.
  if (-1 != info) {
    //Checks to see if it is between 'A' and 'Z'.
    if (info >= 65 && info <= 90) {
      Serial.println("Success");
      delay(500);
      val = info - 65;
      Serial.println(val);
    }
    else {
      Serial.println("Failure");
      delay(500);
    }
  }
}



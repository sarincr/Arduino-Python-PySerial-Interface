
int pushButton = 2;

 
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(pushButton, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
   
  int buttonState = digitalRead(pushButton);

  Serial.println(buttonState);
  delay(1);        // delay in between reads for stability
}

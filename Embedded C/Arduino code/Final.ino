// USART Code on Arduino
void setup(){
  Serial.begin(9600); // Setup Baud Rate
}
void loop(){
  // We will not handle the Serial input in the loop
  // Instead we will use the serialEvent function
}
/*
  SerialEvent occurs whenever a new data comes in the hardware   serial RX. This
  routine is run between each time loop() runs, so using delay inside loop can
  delay response. Multiple bytes of data may be available.
*/
void serialEvent(){
  while(Serial.available()){
    char inChar = (char)Serial.read(); // Read Incoming Byte
    Serial.print(inChar);
}
}

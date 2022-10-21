/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogReadSerial
*/

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
float temp = gettemp(A1);
Serial.println(temp);
}

float gettemp(int vhodAD)
{
   int sensorValue = analogRead(vhodAD)-20;
  // print out the value you read:
  float voltage= sensorValue * (5000.0 / 1023.0);
  float temp = voltage - 400;
  temp = temp/19.5;
  delay(250); // delay in between reads for stability

  return temp;
}

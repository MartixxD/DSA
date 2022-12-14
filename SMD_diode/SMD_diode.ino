/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
/*
digitalWrite(12,LOW);
digitalWrite(10,LOW);
digitalWrite(10,LOW);


//1.bit
digitalWrite(12,HIGH);
digitalWrite(10,HIGH);
digitalWrite(10,LOW);

  //2.Bit
digitalWrite(12,LOW);
digitalWrite(10,HIGH);
digitalWrite(10,LOW);
//3.bit
digitalWrite(12,HIGH);
digitalWrite(10,HIGH);
digitalWrite(10,LOW);

  //4.Bit
digitalWrite(12,LOW);
digitalWrite(10,HIGH);
digitalWrite(10,LOW);
//5.bit
digitalWrite(12,HIGH);
digitalWrite(10,HIGH);
digitalWrite(10,LOW);

  //6.Bit
digitalWrite(12,LOW);
digitalWrite(10,HIGH);
digitalWrite(10,LOW);
//7.bit
digitalWrite(12,HIGH);
digitalWrite(10,HIGH);
digitalWrite(10,LOW);

  //8.Bit
digitalWrite(12,LOW);
digitalWrite(10,HIGH);
digitalWrite(10,LOW);


  //LOPUTA
digitalWrite(11,HIGH);
digitalWrite(11,LOW);

delay(100)*/

//poslji(B10011001);

for(int stev=0; stev<256;stev++)
{
  poslji(stev);
  delay(500);
}
}

void poslji(char podatek)
{
digitalWrite(12,LOW);
digitalWrite(10,LOW);
digitalWrite(10,LOW);

  for(int i=0; i<8; i++)
  {
  if(podatek & B00000001){
    digitalWrite(12,HIGH);
    }
    else{
      digitalWrite(12,LOW);
      }
      digitalWrite(10,HIGH);
      digitalWrite(10,LOW);
      podatek=podatek>>1;
   }
   digitalWrite(11,HIGH);
   digitalWrite(11,LOW);
}
  

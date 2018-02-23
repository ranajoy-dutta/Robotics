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
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  
}

// the loop function runs over and over again forever
void loop() {
  one_high();
  delay(1500);
  one_low();
  delay(500);
  two_high();
  delay(1500);
  two_low();
  delay(500);
  three_high();
  delay(1500);
  three_low();
  delay(500);
  four_high();
  delay(1500);
  four_low();
  delay(500);
  five_high();
  delay(1500);
  five_low();
  delay(500);

  six_high();
  delay(1500);
  six_low();
  delay(500);
  
  
}



void one_high()
{
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
}
void one_low()
{
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
}

void two_high()
{
  digitalWrite(7,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(8,HIGH);
}
void two_low()
{
  digitalWrite(7,LOW);
  digitalWrite(12,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(8,LOW);
}

void three_high()
{
  digitalWrite(7,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(8,HIGH);
}
void three_low()
{
  digitalWrite(7,LOW);
  digitalWrite(12,LOW);
  digitalWrite(9,LOW);
  digitalWrite(11,LOW);
  digitalWrite(8,LOW);
}


void four_high()
{
  digitalWrite(13,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
}
void four_low()
{
  digitalWrite(13,LOW);
  digitalWrite(9,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
}

void five_high()
{
  digitalWrite(7,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(8,HIGH);
}
void five_low()
{
  digitalWrite(7,LOW);
  digitalWrite(13,LOW);
  digitalWrite(9,LOW);
  digitalWrite(11,LOW);
  digitalWrite(8,LOW);
}

void six_high()
{
  digitalWrite(7,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(10,HIGH);
}
void six_low()
{
  digitalWrite(7,LOW);
  digitalWrite(13,LOW);
  digitalWrite(9,LOW);
  digitalWrite(11,LOW);
  digitalWrite(8,LOW);
  digitalWrite(10,LOW);
}


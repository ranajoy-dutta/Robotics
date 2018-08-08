#define LS 11     //mehroon
#define RS 12     // red
#define LM1 7     //blue
#define LM2 8     //yellow
#define RM1 2     //maroon
#define RM2 4     //brown

const int trigPin = 13; 
const int echoPin = 12;

long duration;
int distance;

void setup() {
  // put your setup code here, to run once:
 pinMode(LS ,INPUT);
 pinMode(RS , INPUT);
 pinMode(LM1 , OUTPUT);
 pinMode(RM1 , OUTPUT);
 pinMode(LM2 , OUTPUT);
 pinMode(RM2 , OUTPUT);
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT); 
 Serial.begin(9600);  
}

void loop() {
 Serial.println(LS);
 Serial.println(RS);
  if(digitalRead(LS) && digitalRead(RS)) //FORWARD
 {
  digitalWrite(LM1 , HIGH);
  digitalWrite(LM2 , LOW);
  digitalWrite(RM1 , HIGH);
  digitalWrite(RM2 , LOW);
 }

if(digitalRead(LS) && !(digitalRead(RS))) //LEFT
{
  digitalWrite(LM1 , HIGH);
  digitalWrite(LM2 , LOW);
  digitalWrite(RM1 , LOW);
  digitalWrite(RM2 , HIGH);
}

if(!(digitalRead(LS)) && digitalRead(RS)) //RIGHT
{
digitalWrite(LM1 , LOW);
  digitalWrite(LM2 , HIGH);
  digitalWrite(RM1 , HIGH);
  digitalWrite(RM2 , LOW);
}

if(!(digitalRead(LS)) && !(digitalRead(RS))) //BACKWARD
{
  digitalWrite(LM1 , LOW);
  digitalWrite(LM2 , LOW);
  digitalWrite(RM1 , LOW);
  digitalWrite(RM2 , LOW);
}

}



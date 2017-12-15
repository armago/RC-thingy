int ch31 = 0;
int ch3 = 0;
int ch32 = 0;
int ch33 = 0;
int mtrSpd = 0;
int turn1 = 0;
int turn2 = 0;
int turn3 = 0;
int turn4 = 0;
int turn = 0;
# include <Servo.h>
Servo yay;
void setup() {
  // put your setup code here, to run once:
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(12, OUTPUT);
pinMode(3, INPUT);
pinMode(5, INPUT);
digitalWrite(12, HIGH);
Serial.begin(9600);
yay.attach(10);
yay.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:
turn2 = pulseIn(5, HIGH, 25000);
ch31 = pulseIn(3, HIGH, 25000);
turn1 = turn2-1470;
turn3 = turn1/8;
turn = turn3 + 90;
Serial.println(mtrSpd);
analogWrite(9, mtrSpd);
yay.write(turn);
if (ch31 > 0) {
 ch32 = ch31/20;
 ch33 = ch32 - 49;
 mtrSpd = ch33*5;
 
} else{analogWrite(9, 0);}
}

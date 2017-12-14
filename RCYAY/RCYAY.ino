int ch31 = 0;
int ch3 = 0;
int ch32 = 0;
int ch33 = 0;
int mtrSpd = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(12, OUTPUT);
pinMode(3, INPUT);
digitalWrite(12, HIGH);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
ch31 = pulseIn(3, HIGH, 25000);
analogWrite(9, mtrSpd);
if (ch31 > 0) {
 ch32 = ch31/20;
 ch33 = ch32 - 49;
 mtrSpd = ch33*5;
 Serial.println(mtrSpd);
} else{analogWrite(9, 0);}
}

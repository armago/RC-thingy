int ch31 = 0;
int ch3 = 0;
int ch32 = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(3, INPUT);
pinMode(5, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
ch31 = pulseIn(3, HIGH, 25000)
;
if (ch31 > 0) {
 ch32 = ch31/20;
 ch3 = ch32 - 49;
 
Serial.println(ch3);
}
delay(30);
}



int trig = 10;
int eco = 11;
int buzzer = 12;
int vibmotor =9;

void setup() {
  // put your setup code here, to run once:
Serial.begin (9600);
pinMode (buzzer,OUTPUT);
pinMode (vibmotor,OUTPUT);
pinMode (trig,OUTPUT);
pinMode (eco,INPUT);}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trig,LOW);
delayMicroseconds(2);
digitalWrite(trig,HIGH);
delayMicroseconds(2);
digitalWrite(trig,LOW);
long durtion = pulseIn(eco,HIGH);
long distance = (durtion*0.034)/2;
durtion = pulseIn(eco,LOW);
Serial.print(distance);
Serial.println("cm");
delayMicroseconds(1);

if(0<distance<=100){
  if (distance<=15)
{
digitalWrite(buzzer,HIGH);
digitalWrite(vibmotor,HIGH);
}
if (15<distance<50){digitalWrite(vibmotor,HIGH);
digitalWrite(buzzer,HIGH);
delay(50);
digitalWrite(buzzer,LOW);
delay(50);
}


if (50<=distance<=100) {digitalWrite(buzzer,LOW);
digitalWrite(vibmotor,HIGH);}





}
else {digitalWrite(buzzer,LOW);
digitalWrite(vibmotor,LOW);}















}

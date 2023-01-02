#include <Servo.h>
long lol = 0;
Servo myServo;
int angulo;
int serial;
int led =13;
int led2 =12;
int led3 =11;
int led4 =10;
int led5 =9;
int pot =A0;

void setup() {
	myServo.attach(9);
	Serial.begin(9600);
	pinMode (led, OUTPUT);
	pinMode (led2, OUTPUT);
	pinMode (led3, OUTPUT);
	pinMode (led4, OUTPUT);
	pinMode (led5, OUTPUT);
}

void loop() {
	lol = analogRead(pot);
	angulo=map(lol,0,1023,0,179);
	Serial.print("Pot =  ");
	Serial.print(lol);
	Serial.print(" Angulo =  ");
	Serial.println(angulo);
	myServo.write(angulo);
	delay(300);
	if(lol >=0 && lol <=204){

		digitalWrite(led, HIGH);
		digitalWrite(led2, LOW);
		digitalWrite(led3, LOW);
		digitalWrite(led4, LOW);
		digitalWrite(led5, LOW);
	}
	if(lol >=205 && lol <=409){

		digitalWrite(led, LOW);
		digitalWrite(led2, HIGH);
		digitalWrite(led3, LOW);
		digitalWrite(led4, LOW);
		digitalWrite(led5, LOW);
	}
	if(lol >=410 && lol <=613){

		digitalWrite(led, LOW);
		digitalWrite(led2, LOW);
		digitalWrite(led3, HIGH);
		digitalWrite(led4, LOW);
		digitalWrite(led5, LOW);
	}
	if(lol >=614 && lol <=818){

		digitalWrite(led, LOW);
		digitalWrite(led2, LOW);
		digitalWrite(led3, LOW);
		digitalWrite(led4, HIGH);
		digitalWrite(led5, LOW);
	}
	if(lol >=819 && lol <=1023){
		digitalWrite(led, LOW);
		digitalWrite(led2, LOW);
		digitalWrite(led3, LOW);
		digitalWrite(led4, LOW);
		digitalWrite(led5,HIGH);
	}
}

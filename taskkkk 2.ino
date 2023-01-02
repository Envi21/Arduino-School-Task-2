#include <Servo.h>
long bosco = 0;
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
	bosco = analogRead(pot);
	angulo=map(bosco,0,1023,0,179);
	Serial.print("Pot =  ");
	Serial.print(bosco);
	Serial.print(" Angulo =  ");
	Serial.println(angulo);
	myServo.write(angulo);
	delay(300);
	if(bosco >=0 && bosco <=204){

		digitalWrite(led, HIGH);
		digitalWrite(led2, LOW);
		digitalWrite(led3, LOW);
		digitalWrite(led4, LOW);
		digitalWrite(led5, LOW);
	}
	if(bosco >=205 && bosco <=409){

		digitalWrite(led, LOW);
		digitalWrite(led2, HIGH);
		digitalWrite(led3, LOW);
		digitalWrite(led4, LOW);
		digitalWrite(led5, LOW);
	}
	if(bosco >=410 && bosco <=613){

		digitalWrite(led, LOW);
		digitalWrite(led2, LOW);
		digitalWrite(led3, HIGH);
		digitalWrite(led4, LOW);
		digitalWrite(led5, LOW);
	}
	if(bosco >=614 && bosco <=818){

		digitalWrite(led, LOW);
		digitalWrite(led2, LOW);
		digitalWrite(led3, LOW);
		digitalWrite(led4, HIGH);
		digitalWrite(led5, LOW);
	}
	if(bosco >=819 && bosco <=1023){
		digitalWrite(led, LOW);
		digitalWrite(led2, LOW);
		digitalWrite(led3, LOW);
		digitalWrite(led4, LOW);
		digitalWrite(led5,HIGH);
	}
}
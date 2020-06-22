int switchD = 2;  
int pot;
//Motor1
const int MotorPin1 = 5;
const int MotorPin2 = 6;


//Motor2
const int MotorPin3 = 10;
const int MotorPin4 = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(switchD, INPUT_PULLUP);
  pinMode(MotorPin1, OUTPUT);
  pinMode(MotorPin2, OUTPUT);
  pinMode(MotorPin3, OUTPUT);
  pinMode(MotorPin4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  pot = analogRead(A0);
  Serial.println(pot);
  int output = pot / 4; 
 
  if(digitalRead(switchD) == HIGH) 
  {
 
      analogWrite(MotorPin1, output);
      analogWrite(MotorPin4, output);
  }
  else
  {
    analogWrite(MotorPin2, output);
    analogWrite(MotorPin3, output);
  }
  
}
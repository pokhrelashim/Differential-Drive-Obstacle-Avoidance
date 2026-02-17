// Motor Pins 
const int motorA1 = 11;
const int motorA2 = 10;
const int motorB1 = 9;
const int motorB2 = 8;

// Ultrasonic Pins
const int trigPin = 7;
const int echoPin = 6;

long duration;
int distance;

void setup()
{
  pinMode(motorA1, OUTPUT);
  pinMode(motorA2, OUTPUT);
  pinMode(motorB1, OUTPUT);
  pinMode(motorB2, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  Serial.begin(9600);
}

void loop()
{
  distance = getDistance();
  Serial.println(distance);
  if (distance > 15)   
  {
    moveForward();
  }
  else                
  {
    stopMotors();
    delay(300);
    
    moveBackward();
    delay(500);
    
    turnRight();
    delay(600);
  }
  delay(100);
}


//FUNCTIONS 

int getDistance()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2;
  return distance;
}

void moveForward()
{
  digitalWrite(motorA1, LOW);
  digitalWrite(motorA2, HIGH);
  digitalWrite(motorB1, LOW);
  digitalWrite(motorB2, HIGH);
}

void moveBackward()
{
  digitalWrite(motorA1, HIGH);
  digitalWrite(motorA2, LOW);
  digitalWrite(motorB1, HIGH);
  digitalWrite(motorB2, LOW);

}

void turnRight()
{
  digitalWrite(motorA1, HIGH);
  digitalWrite(motorA2, LOW);
  digitalWrite(motorB1, LOW);
  digitalWrite(motorB2, HIGH);
}

void stopMotors()
{
  digitalWrite(motorA1, LOW);
  digitalWrite(motorA2, LOW);
  digitalWrite(motorB1, LOW);
  digitalWrite(motorB2, LOW);
}

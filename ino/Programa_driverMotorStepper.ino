

// Define stepper motor connections and steps per revolution:
const int trigPin = 9; 
const int echoPin = 10; 
float duration, distance; 

#define stepsPerRevolution 200
int t ;

#define dirPin 2
#define stepPin 3
void setup() {
  Serial.begin(9600);
   pinMode(trigPin, OUTPUT);
   pinMode(echoPin, INPUT);
  // Declare pins as output:

   pinMode(stepPin, OUTPUT);

  // Set the spinning direction clockwise:

   digitalWrite(dirPin, HIGH);
}

// Spin the stepper motor 1 revolution slowly:
void loop() {
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH); 
delayMicroseconds(3);
duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2; 
  // Displays the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

t = 1000;
  for (int i = 0; i < 12000; i++) {

    // These four lines result in 1 step:


    digitalWrite(stepPin, HIGH);
    delayMicroseconds(t);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(t);
  }

 delay(900000);

}
  // Set the spinning direction clockwise:

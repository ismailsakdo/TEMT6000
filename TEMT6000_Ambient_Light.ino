#define LIGHTSENSORPIN A0 //Ambient light sensor reading 

void setup() {
  pinMode(LIGHTSENSORPIN,  INPUT);  
  Serial.begin(9600);
}

void loop() {
  float reading = analogRead(LIGHTSENSORPIN); //Read light level
  Serial.println(reading);                    //Display reading in serial monitor
  delay(1000);
}

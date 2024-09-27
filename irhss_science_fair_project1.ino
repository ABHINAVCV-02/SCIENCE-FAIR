int rain = 4;  
int buzzer = 13;    
int ground =5;
int rainState = 0;  
int groundState = 0;

void setup() {
   Serial.begin(9600);

  pinMode(buzzer, OUTPUT);
  
  pinMode(rain, INPUT);
   pinMode(ground, INPUT);
  
}

void loop() {
 
  rainState = digitalRead(rain);
   groundState = digitalRead(ground);

  if (rainState == HIGH) {
    
    digitalWrite(buzzer, HIGH);
    Serial.println("hevy rain");
    
  } else {
   
    digitalWrite(buzzer, LOW);
  }
   
  
  if (groundState == HIGH) {
    
    digitalWrite(buzzer, HIGH);

    Serial.println("Ground high");
  } else {
   
    digitalWrite(buzzer, LOW);
  }
}

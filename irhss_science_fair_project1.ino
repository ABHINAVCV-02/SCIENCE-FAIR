int rain = 4;  
int buzzer = 8;    
int ground =5;
int rainState = 0;  
int groundState = 0;
int earth = 5;
int earthState =0;
void setup() {
   Serial.begin(9600);

  pinMode(buzzer, OUTPUT);
  
  pinMode(rain, INPUT);
   pinMode(ground, INPUT);
   pinMode(earth, INPUT);
  
}

void loop() {
 
  rainState = digitalRead(rain);
   groundState = digitalRead(ground);
   earthState = digitalRead(ground);

  if (rainState == 0) {
    
    digitalWrite(buzzer, HIGH);
    Serial.println("hevy rain");
    delay (1000);
  } else {
   
    digitalWrite(buzzer, LOW);
    Serial.println("no rain");
    delay(1000);
  }
   
  
  if (groundState == HIGH) {
    
    digitalWrite(buzzer, HIGH);

    Serial.println("Ground high");
  } else {
   
    digitalWrite(buzzer, LOW);
  }

    if (earthState == 0) {
    
    digitalWrite(buzzer, HIGH);
    Serial.println("earthquaik deacted");
    delay (1000);
  } else {
   
    digitalWrite(buzzer, LOW);
    Serial.println("EARTHQUIK stable");
    delay(1000);
  }
}

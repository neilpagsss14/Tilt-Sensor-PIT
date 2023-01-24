#define TILT 2
#define LED 11
#define BUZZER 7

void setup() {
  pinMode (TILT, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  
  // put your setup code here, to run once:

}

void loop() {
  int output = digitalRead(TILT);

  if (output == LOW){
    digitalWrite(LED, HIGH);
    delay(175);
    digitalWrite(LED, LOW);    
    digitalWrite(BUZZER, HIGH);
    tone(7, 1000, 175);
    delay(175);
    digitalWrite(BUZZER, HIGH);
    tone(7, 700, 175);
    // delay(50);   
  } 
  else
  {
    digitalWrite(LED, HIGH);
    digitalWrite(BUZZER, LOW);    
  }
  // put your main code here, to run repeatedly:

}

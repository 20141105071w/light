void setup() {
  // put your setup code here, to run once:

}

void loop() {
  int x;
  x=digitalRead(10);
  if(x=HIGH)
  {
    digitalWrite(13,HIGH);
    delay(250);
    digitalWrite(13,LOW);
    delay(250);
    digitalWrite(13,HIGH);
    delay(250);
    digitalWrite(13,LOW);
    delay(250);
    }
  // put your main code here, to run repeatedly:

}


int led1=13;
int led2=12;
int led3=11;

void setup(){
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}
void loop(){
  //for LED1
  digitalWrite(led1, HIGH);
  delay(3000);
  digitalWrite(led1, LOW);
  delay(1000);
  
  //for LED2
  digitalWrite(led2, HIGH);
  delay(3000);
  digitalWrite(led2, LOW);
  delay(1000);
  
  //for LED3
  digitalWrite(led3, HIGH);
  delay(3000);
  digitalWrite(led3, LOW);
  delay(1000);
  
  //for All LEDs
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  delay(3000);
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW); 
  digitalWrite(led3, LOW);
  delay(1000);


}

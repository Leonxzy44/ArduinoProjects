int led = 2;

int tipkalo1 = 3;

int tipkalo2 = 4;

void setup() {

  pinMode(led, OUTPUT) ;
  pinMode(tipkalo1, INPUT_PULLUP) ;
  pinMode(tipkalo2, INPUT_PULLUP) ;
  digitalWrite(led, LOW) ;

  

}

void loop() {
  if(digitalRead(tipkalo1)==LOW || digitalRead(tipkalo2)==LOW) {

    digitalWrite(led, HIGH) ;

} else {
  digitalWrite(led, LOW) ;

  } 

} 

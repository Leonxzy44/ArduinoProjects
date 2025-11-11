int led1 = 2;

int led2 = 3 ;

int led3 = 4 ;

int tipkalo1 = 5; 

int tipkalo2 = 6; 


void setup() {
  pinMode(led1, OUTPUT) ;
  pinMode(led2, OUTPUT) ;
  pinMode(led3, OUTPUT) ;
  pinMode(tipkalo1, INPUT_PULLUP) ; 
  pinMode(tipkalo2, INPUT_PULLUP) ;
  digitalWrite(led1, LOW) ;
  digitalWrite(led2, LOW) ;
  digitalWrite(led3, LOW) ;


}

void loop() {
  if(digitalRead(tipkalo1)==LOW) {
    digitalWrite(led1, HIGH) ;
    delay(500) ;
    digitalWrite(led1, LOW) ;
    digitalWrite(led2, HIGH) ;
    delay(500) ;
    digitalWrite(led2, LOW) ;
    digitalWrite(led3, HIGH) ;
    delay(500) ;
    digitalWrite(led3, LOW) ;

    }



    if(digitalRead(tipkalo2)==LOW) {
      digitalWrite(led3, HIGH) ;
      delay(500) ;
      digitalWrite(led3, LOW) ;
      digitalWrite(led2, HIGH) ;
      delay(500) ;
      digitalWrite(led2, LOW) ;
      digitalWrite(led1, HIGH) ;
      delay(500) ;
      digitalWrite(led1, LOW) ;

      }

}


      







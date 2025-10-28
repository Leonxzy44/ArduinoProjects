int ledR = 2; 

int ledG = 3; 

int ledB = 4; 



void setup() {

  pinMode(ledR, OUTPUT) ;

   pinMode(ledG, OUTPUT) ;

    pinMode(ledB, OUTPUT) ;

    digitalWrite(ledR, HIGH) ;

    digitalWrite(ledG, HIGH) ;

    digitalWrite(ledB, HIGH) ;
    

}

void loop() {

  digitalWrite(ledR, LOW) ;

  delay(200) ;

  digitalWrite(ledR, HIGH) ;

  delay(200) ;

  digitalWrite(ledG, LOW) ;

  delay(200) ;

  digitalWrite(ledG, HIGH) ;

  delay(200) ;

  digitalWrite(ledB, LOW) ; 

  delay (200) ;

  digitalWrite(ledB, HIGH) ;

  delay(200) ;


}

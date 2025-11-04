// Definiranje ledica i tipkala

int led = 2;

int led1 = 8;

int tipkalo1 = 3;

int tipkalo2 = 4;

//setup

void setup() {
pinMode(led, OUTPUT) ;
pinMode(tipkalo1, INPUT_PULLUP) ;
pinMode(tipkalo1, INPUT_PULLUP) ;
digitalWrite(led, LOW) ;
}

//loop

void loop() {
  if(digitalRead(tipkalo1)==LOW) {
    digitalWrite(led, HIGH) ;

    pinMode(led1, HIGH )

  } 

if(digitalRead(tipkalo2)==LOW) {
  digitalWrite(led, LOW) ;

   }

}

  

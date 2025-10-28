int led = 2;

int tipkalo = 3;

int stanjeTipkala ;



void setup() {

  pinMode(led, OUTPUT) ;

  pinMode(tipkalo, INPUT_PULLUP) ;

  digitalWrite(led, LOW) ;

}

void loop() {

  stanjeTipkala=digitalRead(tipkalo) ;

  if (stanjeTipkala==HIGH) {

    digitalWrite(led, LOW) ;
 
} else {

  digitalWrite(led, HIGH) ;

  }

}






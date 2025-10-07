int ledCrvena = 2 ; 

int ledZuta = 3 ; 

int ledZelena = 4 ; 

int ledCrvenaP = 5 ; 

int ledZelenaP = 6 ;


  void setup() {

  pinMode(ledCrvena, OUTPUT) ;

  pinMode(ledZuta, OUTPUT) ;

  pinMode(ledZelena, OUTPUT) ;

  pinMode(ledCrvena, OUTPUT) ;

  pinMode(ledZelena, OUTPUT) ;

  digitalWrite(ledCrvenaP, LOW) ;

  digitalWrite(ledZuta, LOW) ;

  digitalWrite(ledZelena, LOW) ;

  digitalWrite(ledCrvenaP, LOW) ;

  digitalWrite(ledZelena, LOW) ;
  

}


//Odlomak od koda


void loop() {

  digitalWrite(ledCrvena, HIGH) ;

  digitalWrite(ledZelenaP, HIGH) ;

  delay(3000) ;

  digitalWrite(ledZelenaP, LOW) ;

  digitalWrite(ledCrvenaP, HIGH) ;

  digitalWrite(ledZuta, HIGH) ;

  delay(1000) ;
  digitalWrite(ledCrvena, LOW) ; 

  digitalWrite(ledZuta, LOW) ; 

  digitalWrite(ledZelena, HIGH) ;

  delay(3000) ;

  digitalWrite(ledZelena, LOW) ; 

  digitalWrite(ledZuta, HIGH) ;

  delay(1000) ;

  digitalWrite(ledZuta, LOW) ;
  
  digitalWrite(ledCrvenaP, LOW) ; 

}



  



  

  




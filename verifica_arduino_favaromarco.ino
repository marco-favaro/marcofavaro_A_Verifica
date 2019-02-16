int ledrosso = 10 ;
int ledgiallo = 8; 
int ledbianco = 6;
int ledverde = 4;
int lunghezza1;
int lunghezza2;
int random1;
int cicli1;
String cicli;
void setup() {
pinMode (ledrosso, OUTPUT );
pinMode (ledgiallo, OUTPUT );
pinMode (ledbianco, OUTPUT );
pinMode (ledverde, OUTPUT );
Serial.begin(9600);
randomSeed(analogRead(0));
}
void loop() {
  // put your main code here, to run repeatedly:
  
 Serial.println("cicli da fare");
 while (Serial.available() == 0 );
 if (Serial.available() > 0);{
  cicli = Serial.readString();
  cicli1 = cicli.toInt();
  Serial.println(cicli1);
  }
    lunghezza1 = random(2000, 6000);
    lunghezza2 = random(2000, 6000);
     digitalWrite (ledrosso, HIGH);
        digitalWrite (ledgiallo, HIGH);
            digitalWrite (ledverde, HIGH);
    digitalWrite (ledbianco, HIGH);
    delay(1000);
 while(cicli1!=0){
   

            digitalWrite (ledrosso, LOW);
    digitalWrite (ledgiallo, LOW);
    delay(lunghezza1);
     digitalWrite (ledrosso, HIGH);
        digitalWrite (ledgiallo, HIGH);
        digitalWrite (ledverde, LOW);
    digitalWrite (ledbianco, LOW);
    delay(lunghezza2);
     digitalWrite (ledrosso, HIGH);
        digitalWrite (ledgiallo, HIGH);
        digitalWrite (ledverde, HIGH);
    digitalWrite (ledbianco, HIGH);
cicli1=cicli1-1;
    }
}

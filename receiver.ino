//for reciver alone
#define PIN 8
#define THRESHOLD 100000
void setup (){
pinMode(PIN , INPUT);
Serial.begin (9600);
Serial.println (" Hello Serial !");
 }
 void loop ()
 {
 unsigned long int s1 , s2 , s3;
 s1 = micros ();
 // read PIN until it is LOW
 while( digitalRead (PIN) == HIGH) {}
 s2 = micros ();
 s3 = s2 - s1;
 Serial.print ("H"); Serial.print(s3);
 if (s3 >= THRESHOLD ) {Serial.println ("---");}
 s1 = micros ();
 // read PIN until it is HIGH
 while( digitalRead (PIN) == LOW) {}
 s2 = micros ();
 s3 = s2 - s1;
 Serial.print ("L");
 Serial.print(s3);
 if (s3 >= THRESHOLD ) {Serial.println ("---");}
 }
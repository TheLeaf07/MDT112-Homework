
void setup(){
    pinMode(2, INPUT_PULLUP);

}
void loop(){
    digitalWrite(1, 1);
    delay(250);
    digitalWrite(2, 1);
    delay(250);
    digitalWrite(3, 1);
    delay(250);
    digitalWrite(4, 1);
    delay(250);
    digitalWrite(5, 1);
    delay(250);
    digitalWrite(6, 1);
    delay(250);
    digitalWrite(7, 1);
    delay(250);
    digitalWrite(8, 1);
    delay(250);
    digitalWrite(9, 1);
    delay(250);
    digitalWrite(10, 1);
    delay(250);
    digitalWrite(11, 1);
    delay(250);
    digitalWrite(12, 1);
    delay(250);
    digitalWrite(13, 1);
    delay(250)   ;
 int inMin = 2;
    int inMax = 13;
    for(int i=inMin; i<=inMax; i++)
    digitalWrite(i, 0) ;

}
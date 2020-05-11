bool last = 1 ;
int c = 1;

//int a = 100/b ;

void setup()
{
    pinMode(2,INPUT_PULLUP);
    Serial.begin(9600);
    tone(8,200,500);
    delay(250);
    tone(8,400,100);
}

void loop()
{
    bool currentState = digitalRead(2); 
    int b = pow(2,c);
    if (last > currentState)
    {
    Serial.println("Faster X 2 (Current Speed : X"+String(c*2)+")");
    c++ ;
    tone(8,400,100);
    delay(50);
    
    }

    
    last = currentState;
    //Serial.println(b);
    //delay(300);
    //Serial.println(c);
   // delay(300);
    int a = 200/b;
//Serial.println(a);
digitalWrite(3, 1);
delay(a);
digitalWrite(3, 0);
digitalWrite(4, 1);
delay(a);
digitalWrite(4, 0);
digitalWrite(5, 1);
delay(a);
digitalWrite(5, 0);
digitalWrite(6, 1);
delay(a);
digitalWrite(6, 0);
digitalWrite(7, 1);
delay(a);
digitalWrite(7, 0);
digitalWrite(8, 1);
delay(a);
digitalWrite(8, 0);
digitalWrite(9, 1);
delay(a);
digitalWrite(9, 0);
digitalWrite(10, 1);
delay(a);
digitalWrite(10, 0);
digitalWrite(11, 1);
delay(a);
digitalWrite(11, 0);
digitalWrite(12, 1);
delay(a);
digitalWrite(12, 0);
digitalWrite(13, 1);
delay(a);
digitalWrite(13, 0);
digitalWrite(12, 1);
delay(a);
digitalWrite(12, 0);
digitalWrite(11, 1);
delay(a);
digitalWrite(11, 0);
digitalWrite(10, 1);
delay(a);
digitalWrite(10, 0);
digitalWrite(9, 1);
delay(a);
digitalWrite(9, 0);
digitalWrite(8, 1);
delay(a);
digitalWrite(8, 0);
digitalWrite(7, 1);
delay(a);
digitalWrite(7, 0);
digitalWrite(6, 1);
delay(a);
digitalWrite(6, 0);
digitalWrite(5, 1);
delay(a);
digitalWrite(5, 0);
digitalWrite(4, 1);
delay(a);
digitalWrite(4, 0);
digitalWrite(3, 1);
delay(a);
digitalWrite(3, 0);
digitalWrite(2, 1);
delay(a);
digitalWrite(2, 0);



}
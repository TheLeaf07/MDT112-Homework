
void setup(){
    pinMode(2, INPUT_PULLUP);
    }

void loop(){
    
    if (digitalRead(2) == 0) {
    int inMin = 3;
    int inMax = 13;
    for(int i=inMin; i<=inMax; i++)
    digitalWrite(i, 1) ;
    delay(500) ;
    {
    int inMin = 3;
    int inMax = 13;
    for(int i=inMin; i<=inMax; i++)
    digitalWrite(i, 0) ;    
    }
    }
}
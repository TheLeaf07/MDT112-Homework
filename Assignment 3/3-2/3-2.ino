
void setup(){
    pinMode(2, INPUT_PULLUP);
    }

void loop(){
    
    int inMin = 2;
    int inMax = 7;
    for(int i=inMin; i<=inMax; i++)
    digitalWrite(i, 0) ;
        {
        int inMin = 8;
        int inMax = 13;
        for(int i=inMin; i<=inMax; i++)
        digitalWrite(i, 1) ;  
        delay(500) ;  
        }
        {
            int inMin = 2;
            int inMax = 7;
            for(int i=inMin; i<=inMax; i++)
            digitalWrite(i, 1) ;
        }
        {
        int inMin = 8;
        int inMax = 13;
        for(int i=inMin; i<=inMax; i++)
        digitalWrite(i, 0) ;  
        delay(500) ;  
        }
    }
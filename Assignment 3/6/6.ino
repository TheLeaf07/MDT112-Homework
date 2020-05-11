bool last = 1 ;
int x = 0;
void setup(){
 pinMode(2, INPUT_PULLUP) ;
 Serial.begin(9600);
 }

void loop(){
    bool currentState = digitalRead(2);
       
    if (last > currentState) {
    x++ ;
    Serial.println(x) ;
    Serial.println("State FALLING") ;
    tone(8,200,50);
    delay(100);
    tone(8,200,50);
    } 
    else if (last < currentState) {
    Serial.println("State RISING") ;
    tone(8,200,200);
    }
    last = currentState;
    

  }
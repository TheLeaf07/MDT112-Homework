bool last = 1 ;

void setup(){
 pinMode(2, INPUT_PULLUP) ;
  Serial.begin(9600);
 }

void loop(){
    bool currentState = digitalRead(2);
    delay(20) ;

    if (last > currentState) {
                if (digitalRead(2) == 0) {
        Serial.println("State FALLING with Debounce")  ; 
        }
    } 
 
    last = currentState;
    Serial.println(currentState);
    delay(50);
  }
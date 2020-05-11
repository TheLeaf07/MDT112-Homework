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
            int a = pow(5,4) ;
           Serial.println(a) ;
        }
    } 
 
    last = currentState;
    delay(50);
  }
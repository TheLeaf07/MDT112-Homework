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
    }
    last = currentState;
}
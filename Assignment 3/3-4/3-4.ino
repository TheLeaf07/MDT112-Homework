
void setup(){
    pinMode(2, INPUT_PULLUP);

}
void loop(){

    for (int x =0 ; x<13 ; x++){
    digitalWrite(x, 1);
    delay(250);
    digitalWrite(x, 0);
    }
}
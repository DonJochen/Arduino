int ledPin = 5;
int buttonApin = 8;
int buttonBpin = 9;

void setup() {
for(int i=0; i<4; i++){
  pinMode(ledPin, OUTPUT);
  pinMode(buttonBpin, INPUT_PULLUP);
} 
pinMode(buttonApin, INPUT_PULLUP);
}

void loop() {
// put your main code here, to run repeatedly:

}

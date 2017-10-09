const int buttonPin = 2;
volatile int total = 0;

unsigned long nextDebounce = 0;
unsigned long delta = 50;

void buttonPressed() {
   Serial.println(total);
   total++;
}

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);

  // Interrupts can happen on "edges" of signals.  
  // Three edge types are supported: CHANGE, RISING, and FALLING 
  attachInterrupt(digitalPinToInterrupt(buttonPin), buttonPressed, FALLING);
  Serial.begin(9600);
}

void loop() {

}

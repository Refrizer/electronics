#define LED_OUT 4
#define BUTTON_IN 7

boolean now = true;
boolean previous = false;

void setup() {
  pinMode(LED_OUT,OUTPUT);
  pinMode(BUTTON_IN,INPUT_PULLUP);
}

void loop() 
{
  boolean current = digitalRead(BUTTON_IN);
  if (current && !previous){
    now = !now; 
    }
  previous = current;
  digitalWrite(LED_OUT,now);
}
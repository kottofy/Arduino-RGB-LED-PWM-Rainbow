#define COMMON_ANODE    //comment this line if using common cathode
#define MAX 1024        //might need to change to 255 depending on which board is used

#define RED_PIN 4
#define GREEN_PIN 5
#define BLUE_PIN 16
#define DELAY 5

void setup() {
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
  pinMode(RED_PIN, OUTPUT);

  pinMode(LED_BUILTIN, OUTPUT);
  analogWrite(LED_BUILTIN, LOW);
}


void loop() {
  // fade from red to green
  for(int i=0; i<MAX; i++) {
    setColor(MAX-i, i, 0);
  }

  // fade from green to blue
  for(int i=0; i<MAX; i++) {
    setColor(0, MAX-i, i);
  }

  // fade from blue to red
  for(int i=0; i<MAX; i++) {
    setColor(i, 0, MAX-i);
  }
}

void setColor(int red, int green, int blue)
{
    #ifdef COMMON_ANODE
      red = MAX - red;
      green = MAX - green;
      blue = MAX - blue;
    #endif
    
    analogWrite(RED_PIN, red);
    analogWrite(GREEN_PIN, green);
    analogWrite(BLUE_PIN, blue);
    delay(DELAY);
}

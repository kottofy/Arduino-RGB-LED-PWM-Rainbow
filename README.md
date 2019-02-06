#RGB LED Rainbow

This code allows for a common cathode or common anode RGB LED to rainbow (ROYGBIV) in a loop to display all of the colors

You may need to change the pins to other PWM pins based on the board being used.

This was tested on an Adafruit Feather Huzzah with ESP8266. 

If using a common cathode, be sure to connect the long pin to ground and comment the line 1. 

Pin #2 was avoided since this is the same as LED_BUILTIN on this board.

Here's a Fritzing diagram of the setup.

![Fritzing diagram](fritzing/Fritzing_RGB_LED_Rainbow_Image.JPG)
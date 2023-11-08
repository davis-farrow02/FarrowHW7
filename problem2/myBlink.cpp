/** code name: myApp.cpp
 *  original code written by Derek Molloy
 *  modified code written by Davis Farrow
 *
 *  this code is a modification of the original code makeLEDs.cpp
 *  separating the code into multiple files. This code is the application
 *  code. 
 *
 *  this program uses all 4 LEDs and can be executed in 4 ways:
 *  	myBlink on
 *  	myBlink off
 *  	myBlink flash
 *  	myBlink status
 *  	myBlink blink <number>
 */

#include "derek_LED.h"

int main(int argc, char* argv[]){
   if(argc!=3){
	cout << "Usage is myBlink <command>" << endl;
        cout << "   command is one of: on, off, flash, status, or blink <number>" << endl;
	cout << " e.g. myBlink flash" << endl;
	cout << " or myBlink blink 10" << endl;
   }
   cout << "Starting the myBlink program" << endl;
   string cmd(argv[1]);
   string cmd2(argv[2]);
   LED leds[4] = { LED(0), LED(1), LED(2), LED(3) };
   if(cmd=="blink")
	leds[3].blink(stoi(cmd2));
   else {
   for(int i=0; i<=3; i++){
      if(cmd=="on")leds[i].turnOn();
      else if(cmd=="off")leds[i].turnOff();
      else if(cmd=="flash")leds[i].flash("100"); //default is "50"
      else if(cmd=="status")leds[i].outputState();
      else{ cout << "Invalid command!" << endl; }
   }
   }
   cout << "Finished the myBlink program" << endl;
   return 0;
}

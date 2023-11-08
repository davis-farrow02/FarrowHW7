/** code name: myApp.cpp
 *  original code written by Derek Molloy
 *  modified code written by Davis Farrow
 *
 *  this code is a modification of the original code makeLEDs.cpp
 *  separating the code into multiple files. This code is the application
 *  code. 
 *
 *  this program uses all 4 LEDs and can be executed in 3 ways:
 *  	myApp on
 *  	myApp off
 *  	myApp flash
 *  	myApp status
 */

#include "derek_LED.h"

int main(int argc, char* argv[]){
   if(argc!=2){
	cout << "Usage is myApp <command>" << endl;
        cout << "   command is one of: on, off, flash or status" << endl;
	cout << " e.g. myApp flash" << endl;
   }
   cout << "Starting the myApp program" << endl;
   string cmd(argv[1]);
   LED leds[4] = { LED(0), LED(1), LED(2), LED(3) };
   for(int i=0; i<=3; i++){
      if(cmd=="on")leds[i].turnOn();
      else if(cmd=="off")leds[i].turnOff();
      else if(cmd=="flash")leds[i].flash("100"); //default is "50"
      else if(cmd=="status")leds[i].outputState();
      else{ cout << "Invalid command!" << endl; }
   }
   cout << "Finished the myApp program" << endl;
   return 0;
}

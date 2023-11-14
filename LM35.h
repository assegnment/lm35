#ifndef LM35_h
#define LM35_h

#include "Arduino.h"



class LM35 {

	public:
                int delayTime,v;
		LM35(int analogRead);
		double readTemperature();
		double readTemperature(Unity unity);
                int pinMode();
                int blinkLED(v);
                int digitalWrite(ledpin,value);
                int delay(delayTime) ;

	private:
		int _analogRead;

};

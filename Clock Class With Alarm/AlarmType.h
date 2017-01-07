//
//  AlarmType.h
//  Clock Class With Alarm
//
//  Created by Brian Lykes on 12/1/15.
//  Copyright © 2015 Brian Lykes. All rights reserved.
//

#ifndef AlarmType_h
#define AlarmType_h
#include <iostream>
#include "ClockType.h"
using namespace std;


//Inheritant Alarm class
class alarmType : public clockType
{
public:
    void setAlarm (int, int, int);
    void getAlarm (int, int, int);
    void printAlarm() const;
    bool equalAlarm (const alarmType&) const;
    alarmType (int, int, int);
    alarmType ();
    
private:
    int hour;
    int minute;
    int second;
    bool alarm;
};


#endif /* AlarmType_hpp */

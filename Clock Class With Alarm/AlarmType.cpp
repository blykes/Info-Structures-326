//
//  AlarmType.cpp
//  Clock Class With Alarm
//
//  Created by Brian Lykes on 11/25/15.
//  Copyright © 2015 Brian Lykes. All rights reserved.
//

//Preprocessor
#include "AlarmType.h"
#include "ClockType.h"
#include <iostream>

using namespace std;

//Default Constructor
alarmType::alarmType()
{
    hour = 0;
    minute = 0;
    second = 0;
    alarm = 0;
}

//set the alarm
void alarmType::setAlarm(int hour, int minute, int second)
    
{
    cout << "\n \n";
    cout << "What time would you like your alarm set for?\n";
    cout << "Please set you hour: ";
        cin >> hour;
    cout << "\nPlease set your minute: ";
        cin >> minute;
    cout << "\n \n";
}
//get the alarm
void alarmType::getAlarm(int hour , int minute, int second)
{
    int h, m;
    
    h = hour;
    m = minute;
    
}
//activate the alarm
bool alarmType::equalAlarm(const alarmType& clockType) const
{
    if
        (hour == clockType.hour && minute == clockType.minute)
    {
        printAlarm();
        return true;
    }
    
    return false;
}

//Alarm message
void alarmType::printAlarm() const
{
    cout << "OMG YOUR ALARM IS GOING OFF! THIS THING WORKS! SUCH COOL! MUCH ALARM! SUCCESS WOW!\n";
}

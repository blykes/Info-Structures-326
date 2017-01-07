//
//  main.cpp
//  Clock Class With Alarm
//
//  Created by Brian Lykes on 11/11/15.
//  Copyright © 2015 Brian Lykes. All rights reserved.
//  This is from CSC 211 with an alarm added using inheritance

//Housekeeping
#include <iostream>
#include "ClockType.h"
#include "AlarmType.h"
using namespace std;

//Begin Main

int main()
{
    clockType myClock;
    clockType yourClock;
    alarmType alarmClock;
    int hours, minutes, seconds;  //original clock vars
    
    
    //set time of myClock
    myClock.setTime(5, 4, 30);
    cout << "myClock: ";
    myClock.printTime(); //print the time of myClock
    cout << endl;
    
    cout << "yourClock: ";
    yourClock.printTime(); //print the time of yourClock
    cout << endl;
    
    //set time of yourClock
    yourClock.setTime(5, 45, 16);
    
    cout << "After setting, yourClock: ";
    yourClock.printTime(); //print the time of yourClock
    cout << endl;
    
    //Compare myClock and yourClock
    if (myClock.equalTime(yourClock))
        cout << "Both times are equal."
        << endl;
    else
        cout << "The two times are not equal"
        << endl;
    cout << "Please enter the hours, minutes, and seconds: ";
    cin >> hours >> minutes >> seconds;
    cout << endl;
    
    //Set the time of myClock using the value of the
    //variables hours, minutes, and seconds
    myClock.setTime(hours, minutes, seconds);
    cout << "New myClock: ";
    myClock.printTime(); //print the time of myClock
    cout << endl;
    
    //Increment the time of myClock by one second
    myClock.incrementSeconds();
    cout << "After incrementing myClock by " << "one second, myClock: ";
    myClock.printTime(); //print the time of myClock
    cout << endl;
    
    //Retrieve the hours, minutes, and seconds of the
    //object myClock
    myClock.getTime(hours, minutes, seconds);
    
    //Output the value of hours, minutes, and seconds
    cout << "hours = " << hours
    << ", minutes = " << minutes
    << ", seconds = " << seconds << endl;
    
    //Set the alarm
    alarmClock.setAlarm(hours, minutes, seconds);
    
    //Get the Alarm
    alarmClock.getAlarm(hours, minutes, seconds);
    
    //check the Alarm
    alarmClock.equalAlarm(alarmType());
    
    return 0;
    
}//End of Main


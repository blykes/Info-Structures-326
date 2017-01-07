//
//  ClockType.hpp
//  Clock Class With Alarm
//
//  Created by Brian Lykes on 11/25/15.
//  Copyright © 2015 Brian Lykes. All rights reserved.
//

#ifndef ClockType_h
#define ClockType_h
#include <iostream>
using namespace std;

//Original Clock Class
class clockType
{
public:
    void setTime(int, int, int);
    void getTime(int&, int&, int&) const;
    void printTime() const;
    void incrementSeconds();
    void incrementMinutes();
    void incrementHours();
    bool equalTime(const clockType&) const;
    clockType(int, int, int);
    clockType();
    
private:
    int hr;
    int min;
    int sec;
};

#endif /* ClockType_hpp */

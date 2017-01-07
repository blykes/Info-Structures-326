//
//  Garage.h
//  Garage lab
//
//  Created by Brian Lykes on 12/6/15.
//  Copyright © 2015 Brian Lykes. All rights reserved.
//

#ifndef Garage_h
#define Garage_h
#include <string>
#include <iostream>
#include "Stack.h"
#include <stdexcept>
#include <string>

using namespace std;

class GarageInfo
{
private:
    struct Car
    {
        string PlateID;
        int Moves;
    };
    
    Car vroom;
    Car temp;
    Stack <Car> Lane1;
    Stack <Car> Lane2;
    Stack <Car> Street;
    
public:
    GarageInfo();
    void arrival(string licenseplatenum);
    void departure(string licenseplatenum);
};

GarageInfo::GarageInfo()
{
    
}

void GarageInfo::arrival(string licenseplatenum)
{
    
    if (!Lane1.IsFull())
    {
        cout << "There is room in Garage - Lane 1." << endl;
        cout << "A car with the license plate " << licenseplatenum << " is parked in the 1st Lane." << endl;
        vroom.PlateID = licenseplatenum;
        vroom.Moves = 0;
        Lane1.push(vroom);
    }
    else if (!Lane2.IsFull())
    {
        cout << "There is room in Garage - Lane 2." << endl;
        cout << "A car with the license plate " << licenseplatenum << " is parked in the 2nd Lane." << endl;
        vroom.PlateID = licenseplatenum;
        vroom.Moves = 0;
        Lane2.push(vroom);
    }
    else
        cout << "There is no more room inside the garage, sorry." << endl;
}
void GarageInfo::departure(string licenseplatenum)
{
    vroom.PlateID = licenseplatenum;
    temp.PlateID = licenseplatenum;
    
    cout << endl;
    if (Lane1.Finder(vroom))
    {
        while (vroom.PlateID != Lane1.Top().PlateID)
        {
            temp = Lane1.Top();
            temp.Moves++;
            
            if (!Lane2.IsFull())
            {
                Lane2.push(temp);
                Lane1.pop();
            }
            else
            {
                Street.push(temp);
                Lane1.pop();
            }
        }
        temp = Lane1.Top();
        temp.Moves++;
        cout << "1st Lane:A car with the license plate " << temp.PlateID << " has departed.Total of " << temp.Moves << " moves.";
        Lane1.pop();
    }
    
    else if (Lane2.Finder(vroom))
    {
        while (vroom.PlateID != Lane2.Top().PlateID)
        {
            temp = Lane2.Top();
            temp.Moves++;
            if (!Lane1.IsFull())
            {
                Lane1.push(temp);
                Lane2.pop();
            }
            else
            {
                Street.push(temp);
                Lane2.pop();
            }
        }
        temp = Lane2.Top();
        temp.Moves++;
        cout << "2nd Lane:A car with the license plate " << temp.PlateID << " has departed. Total of " << temp.Moves << " moves." << endl;
        Lane2.pop();
    }
    
    
    while (!Street.IsEmpty())
    {
        if (!Lane1.IsFull())
        {
            temp = Street.Top();
            temp.Moves++;
            Lane1.push(temp);
            Street.pop();
            
        }
        else
        {
            temp = Street.Top();
            temp.Moves++;
            Lane2.push(temp);
            Street.pop();
            
        }
    }
    
}

#endif /* Garage_h */

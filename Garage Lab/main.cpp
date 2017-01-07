//
//  main.cpp
//  Garage lab
//
//  Created by Brian Lykes on 11/30/15.
//  Copyright © 2015 Brian Lykes. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include "Garage.h"
#include "Stack.h"
#include <stdexcept>
using namespace std;

int main()
{
    GarageInfo GarageDataList;
    
    ifstream InFile;
    ofstream OutFile;
    InFile.open("CarDataBook2.txt");
    
    if (InFile.fail())
    {
        cout << "Trying To Open CarDataBook.txt..." << endl;
        cout << "Could Not Open, Sorry." << endl;
        
    }
    
    string arrv, dprt;
   // int z = 0;
    
    while (!InFile.eof())
    {
        InFile >> arrv;
        InFile >> dprt;
        
        if (arrv == "a")
        {
            GarageDataList.arrival(dprt);
        }
        else if (arrv == "d")
            GarageDataList.departure(dprt);
    }
    
    InFile.close();
    
    return 0;
}
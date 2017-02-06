//
//  Controller.cpp
//  secondProject
//
//  Created by Wrigley, Joseph on 1/27/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#include "ProjectController.hpp"
#include "../Model/Timer.hpp"
#include <iostream>

using namespace std;

int ProjectController :: changeNumber()
{
    return 42;
}

void ProjectController :: changeWithPointer(int * numberPointedTo)
{
    *numberPointedTo += 9000;
}

void ProjectController::changeHugely(int * diffNumber)
{
    *diffNumber -= 2500;
    *diffNumber /= 2;
}


void ProjectController :: start()
{
    Timer sillyTime = Timer();
    sillyTime.startTimer();
    
    
    cout << "yooo fam" << endl;
    int myNumber = 5555;
    int bestNumber = 1;
    
    int * numberPointer = &myNumber;
    int * diffNumber = &bestNumber;
    
    cout << myNumber << endl;
    tryNumbers(myNumber);
    cout << "he is my number again " << myNumber << endl;
    myNumber = changeNumber();
    cout << "changed now: " << myNumber << endl;
    
    changeWithPointer(numberPointer);
    cout <<"changed with a pointer? " << myNumber << endl;
    
    changeHugely(diffNumber);
    cout <<"tried again to change the number " <<bestNumber << endl;
    
    
    sillyTime.stopTimer();
    sillyTime.displayTimerInformation();
    
    sillyTime.resetTimer();
    cout << sillyTime.getExecutionTimeInMicroseconds() << endl;
    
    
}

void ProjectController :: tryNumbers(int providedNumber)
{
   
    cout << "someone geve me " << (providedNumber+1) << endl;
    providedNumber = 8 + 42 + 54356356;
    cout << providedNumber << "is the new value" << endl;
}


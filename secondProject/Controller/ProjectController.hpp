//
//  Controller.hpp
//  secondProject
//
//  Created by Wrigley, Joseph on 1/27/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#ifndef ProjectController_hpp
#define ProjectController_hpp

class ProjectController
{
private:
    void tryNumbers(int sent);
    int changeNumber();
    void changeWithPointer(int * numberPointer);
    void changeHugely(int * changePointer);
public:
    void start();
};

#endif /* ProjectController_hpp */

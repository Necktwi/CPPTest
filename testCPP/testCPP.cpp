//
//  testCPP.cpp
//  testCPP
//
//  Created by Gowtham Kudupudi on 23/05/18.
//  Copyright © 2018 ferryfair. All rights reserved.
//

#include <iostream>
#include "testCPP.hpp"
#include "testCPPPriv.hpp"

void testCPP::HelloWorld(const char * s)
{
    testCPPPriv *theObj = new testCPPPriv;
    theObj->HelloWorldPriv(s);
    delete theObj;
};

void testCPPPriv::HelloWorldPriv(const char * s) 
{
    std::cout << s << std::endl;
};


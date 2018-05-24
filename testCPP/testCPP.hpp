//
//  testCPP.hpp
//  testCPP
//
//  Created by Gowtham Kudupudi on 23/05/18.
//  Copyright © 2018 ferryfair. All rights reserved.
//

#ifndef testCPP_
#define testCPP_

/* The classes below are exported */
#pragma GCC visibility push(default)

class testCPP
{
    public:
    void HelloWorld(const char *);
};

unsigned long factorial (unsigned long n);
unsigned long factorial_by_loop (unsigned short n);
unsigned int fibonacci (unsigned int n);
unsigned int fibonacci_by_loop (unsigned int n);

#pragma GCC visibility pop
#endif

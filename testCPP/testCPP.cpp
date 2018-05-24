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

unsigned long factorial (unsigned long n) {
   if (n == 1) return 1;
   return (n * factorial(n - 1));
}

unsigned long factorial_by_loop (unsigned short n) {
   unsigned long factorial = n;
   while (n>1) {
      factorial *= --n;
   }
   return factorial;
}

unsigned int fibonacci (unsigned int n) {
   if (n <= 2) {
      return 1;
   } else {
      return fibonacci(n-1) + fibonacci(n-2);
   }
}

unsigned int fibonacci_by_loop (unsigned int n) {
   unsigned int n0 = 1;
   unsigned int n1 = 1;
   unsigned int n2 = 1;
   for (;n>2;--n) {
      n2 = n1;
      n1 = n0;
      n0 = n1 + n2;
   }
   return n0;
}

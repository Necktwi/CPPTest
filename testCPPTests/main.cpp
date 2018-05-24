//
//  main.cpp
//  testCPPTests
//
//  Created by Gowtham Kudupudi on 23/05/18.
//  Copyright © 2018 ferryfair. All rights reserved.
//

#include "testCPP.hpp"
#include <iostream>
#include <FerryTimeStamp.h>
#include <mystdlib.h>

int main(int argc, const char * argv[]) {
   std::cout << "%SUITE_STARTED% testCPP" << std::endl << std::endl;
   
   FerryTimeStamp ftsStart;
   FerryTimeStamp ftsEnd;
   FerryTimeStamp ftsDiff;
   FerryTimeStamp ftsSuiteStart;
   FerryTimeStamp ftsSuiteEnd;
   ftsSuiteStart.Update();
   
   std::cout << "%TEST_STARTED% factorial" << std::endl;
   ftsStart.Update();
   std::cout << factorial(15) << std::endl;
   ftsEnd.Update();
   ftsDiff = ftsEnd - ftsStart;
   std::cout << "%TEST_FINISHED% time=" << ftsDiff << " factorial" << std::endl;
   std::cout << std::endl;
   
   std::cout << "%TEST_STARTED% factorial_by_loop" << std::endl;
   ftsStart.Update();
   std::cout << factorial_by_loop(15) << std::endl;
   ftsEnd.Update();
   ftsDiff = ftsEnd - ftsStart;
   std::cout << "%TEST_FINISHED% time=" << ftsDiff << " factorial_by_loop" <<
      std::endl;
   std::cout << std::endl;
   
   unsigned int f = 0;
   std::cout << "%TEST_STARTED% fibonacci" << std::endl;
   ftsStart.Update();
   f = fibonacci(15);
   ftsEnd.Update();
   ftsDiff = ftsEnd - ftsStart;
   std::cout << "%TEST_FINISHED% time=" << ftsDiff << " fibonacci" << std::endl;
   std::cout << std::endl;
   
   std::cout << "%TEST_STARTED% print fibonacci" << std::endl;
   ftsStart.Update();
   std::cout << f << std::endl;
   ftsEnd.Update();
   ftsDiff = ftsEnd - ftsStart;
   std::cout << "%TEST_FINISHED% time=" << ftsDiff << " print fibonacci" <<
      std::endl;
   std::cout << std::endl;
   
   std::cout << "%TEST_STARTED% fibonacci_by_loop" << std::endl;
   ftsStart.Update();
   f = fibonacci_by_loop(15);
   ftsEnd.Update();
   ftsDiff = ftsEnd - ftsStart;
   std::cout << "%TEST_FINISHED% time=" << ftsDiff << " fibonacci_by_loop" <<
      std::endl;
   std::cout << std::endl;
   
   std::cout << "%TEST_STARTED% print fibonacci_by_loop" << std::endl;
   ftsStart.Update();
   std::cout << f << std::endl;
   ftsEnd.Update();
   ftsDiff = ftsEnd - ftsStart;
   std::cout << "%TEST_FINISHED% time=" << ftsDiff << " print fibonacci_by_loop"
      << std::endl;
   std::cout << std::endl;
   
   ftsSuiteEnd.Update();
   ftsDiff = ftsSuiteEnd - ftsSuiteStart;
   std::cout << "%SUITE_FINISHED% time=" << ftsDiff << std::endl;
   
   return (EXIT_SUCCESS);
}

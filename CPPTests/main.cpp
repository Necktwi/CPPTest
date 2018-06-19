//
//  main.cpp
//  testCPPTests
//
//  Created by Gowtham Kudupudi on 23/05/18.
//  Copyright © 2018 ferryfair. All rights reserved.
//

#include "CPPTestLibrary.hpp"
#include <iostream>
#include <FerryTimeStamp.h>
#include <mystdlib.h>

using namespace std;

int main(int argc, const char * argv[]) {
   std::cout << "%SUITE_STARTED% testCPP" << std::endl << std::endl;
   
   FerryTimeStamp TestStart;
   FerryTimeStamp TestEnd;
   FerryTimeStamp Diff;
   FerryTimeStamp SuiteStart;
   FerryTimeStamp SuiteEnd;
   SuiteStart.Update();
   
   unsigned long f = 0;
   std::cout << "%TEST_STARTED% factorial" << std::endl;
   TestStart.Update(); {
      f = factorial(15);
   }; TestEnd.Update();
   std::cout << "factorial(15): " << f << std::endl;
   Diff = TestEnd - TestStart;
   std::cout << "%TEST_FINISHED% time: " << Diff << " factorial" << std::endl;
   std::cout << std::endl;
   
   std::cout << "%TEST_STARTED% factorial_by_loop" << std::endl;
   TestStart.Update(); {
      f = factorial_by_loop(15);
   }; TestEnd.Update();
   std::cout << "factorial_by_loop(15): " << f << std::endl;
   Diff = TestEnd - TestStart;
   std::cout << "%TEST_FINISHED% time: " << Diff << " factorial_by_loop" <<
      std::endl;
   std::cout << std::endl;
   
   std::cout << "%TEST_STARTED% fibonacci" << std::endl;
   TestStart.Update(); {
      f = fibonacci(15);
   }; TestEnd.Update();
   cout << "fibonacci(15): " << f << endl;
   Diff = TestEnd - TestStart;
   std::cout << "%TEST_FINISHED% time: " << Diff << " fibonacci" << std::endl;
   std::cout << std::endl;
   
   std::cout << "%TEST_STARTED% fibonacci_by_loop" << std::endl;
   TestStart.Update(); {
      f = fibonacci_by_loop(15);
   }; TestEnd.Update();
   cout << "fibonacci_by_loop(15): " << f << endl;
   Diff = TestEnd - TestStart;
   std::cout << "%TEST_FINISHED% time: " << Diff << " fibonacci_by_loop" <<
      std::endl;
   std::cout << std::endl;
   
   std::cout << "%TEST_STARTED% print ClassNStruct" << std::endl;
   TestStart.Update(); {
      cout << "{" << endl;
      cout << "\tInt size: "    << sizeof(int)       << endl;
      cout << "\tFloat size: "  << sizeof(float)     << endl;
      cout << "\tuint16 size: " << sizeof(uint16_t)  << endl;
      cout << "\tChar size: "   << sizeof(char)      << endl;
      cout << "}" << endl;
      cout << "Class size: "  << sizeof(ClassEG_)  << endl;
      cout << "Struct size: " << sizeof(StructEG_) << endl;
   }; TestEnd.Update();
   Diff = TestEnd - TestStart;
   std::cout << "%TEST_FINISHED% time: " << Diff << " ClassNStruct"
      << std::endl;
   std::cout << std::endl;
   
   SuiteEnd.Update();
   Diff = SuiteEnd - SuiteStart;
   std::cout << "%SUITE_FINISHED% time: " << Diff << std::endl;
   
   return (EXIT_SUCCESS);
}

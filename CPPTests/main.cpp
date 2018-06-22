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

int main(int argc, const char * argv[]) {
   cfout_ cfout("CPPTestResults.txt");
   cfout << "%SUITE_STARTED% CPPTest" << "\n" << "\n";
   
   FerryTimeStamp TestStart;
   FerryTimeStamp TestEnd;
   FerryTimeStamp Diff;
   FerryTimeStamp SuiteStart;
   FerryTimeStamp SuiteEnd;
   SuiteStart.Update();
   
   unsigned long f = 0;
   cfout << "%TEST_STARTED% factorial" << "\n";
   TestStart.Update(); {
      f = factorial(15);
   }; TestEnd.Update();
   cfout << "factorial(15): " << f << "\n";
   Diff = TestEnd - TestStart;
   cfout << "%TEST_FINISHED% time: " << Diff << " factorial" << "\n";
   cfout << "\n";
   
   cfout << "%TEST_STARTED% factorial_by_loop" << "\n";
   TestStart.Update(); {
      f = factorial_by_loop(15);
   }; TestEnd.Update();
   cfout << "factorial_by_loop(15): " << f << "\n";
   Diff = TestEnd - TestStart;
   cfout << "%TEST_FINISHED% time: " << Diff << " factorial_by_loop" <<
      "\n";
   cfout << "\n";
   
   int64_t fi1, fi2;
   cfout << "%TEST_STARTED% fibonacci" << "\n";
   TestStart.Update(); {
      fi1 = fibonacci(15);
   }; TestEnd.Update();
   cfout << "fibonacci(15): " << (int)f << "\n";
   Diff = TestEnd - TestStart;
   cfout << "%TEST_FINISHED% time: " << Diff << " fibonacci" << "\n";
   cfout << "\n";
   
   cfout << "%TEST_STARTED% fibonacci_by_loop" << "\n";
   TestStart.Update(); {
      fi1 = fibonacci_by_loop(93);
      fi2 = fibonacci_by_loop(92);
   }; TestEnd.Update();
   cfout << "fibonacci_by_loop(93): " << (uint64_t)fi1 << "\n";
   cfout << "fibonacci_by_loop(92): " << (uint64_t)fi2 << "\n";
   cfout << "Golden ratio: " << ((double)(uint64_t)fi1)/(uint64_t)fi2 << "\n";
   Diff = TestEnd - TestStart;
   cfout << "%TEST_FINISHED% time: " << Diff << " fibonacci_by_loop" <<
      "\n";
   cfout << "\n";
   
   cfout << "%TEST_STARTED% print ClassNStruct" << "\n";
   TestStart.Update(); {
      cfout << "{" << "\n";
      cfout << "\tInt size: "    << sizeof(int)       << "\n";
      cfout << "\tFloat size: "  << sizeof(float)     << "\n";
      cfout << "\tuint16 size: " << sizeof(uint16_t)  << "\n";
      cfout << "\tChar size: "   << sizeof(char)      << "\n";
      cfout << "}" << "\n";
      cfout << "Class size: "  << sizeof(ClassEG_)    << "\n";
      cfout << "Struct size: " << sizeof(StructEG_)   << "\n";
   }; TestEnd.Update();
   Diff = TestEnd - TestStart;
   cfout << "%TEST_FINISHED% time: " << Diff << " ClassNStruct"
      << "\n";
   cfout << "\n";
   
   SuiteEnd.Update();
   Diff = SuiteEnd - SuiteStart;
   cfout << "%SUITE_FINISHED% time: " << Diff << "\n";
   
   return (EXIT_SUCCESS);
}

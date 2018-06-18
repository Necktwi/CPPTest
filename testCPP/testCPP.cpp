////
////  testCPP.cpp
////  testCPP
////
////  Created by Gowtham Kudupudi on 23/05/18.
////  Copyright © 2018 ferryfair. All rights reserved.
////
//
//#include <iostream>
//#include "testCPP.hpp"
//
//unsigned long factorial (unsigned long n) {
//   if (n == 1) return 1;
//   return (n * factorial(n - 1));
//}
//
//unsigned long factorial_by_loop (unsigned short n) {
//   unsigned long factorial = n;
//   while (n>1) {
//      factorial *= --n;
//   }
//   return factorial;
//}
//
//unsigned int fibonacci (unsigned int n) {
//   if (n <= 2) {
//      return 1;
//   } else {
//      return fibonacci(n-1) + fibonacci(n-2);
//   }
//}
//
//unsigned int fibonacci_by_loop (unsigned int n) {
//   unsigned int n0 = 1;
//   unsigned int n1 = 1;
//   unsigned int n2 = 1;
//   for (;n>2;--n) {
//      n2 = n1;
//      n1 = n0;
//      n0 = n1 + n2;
//   }
//   return n0;
//}
//
//void floating_point1 () {
//   std::size_t length = 4;
//   int* d = new int[length];
//
//   for (std::size_t i = 0; i < length; )
//      d[i] = ++i;
//   for (std::size_t i = length - 1; i >= 0; i--) 
//      std::cout << d[length - 1] << " ";
//   const int N = 16;
//   const float a[N] = { 3.1, 3.2, 3.3, 3.4, 5.5, 3.1, 3.2, 3.3,
//      3.4, 5.5, 3.1, 3.2, 3.3, 3.4, 5.5, 6.6 };
//   const float b[N] = { 3.13, 3.23, 3.33, 3.43, 5.53, 3.13, 3.23,
//      3.33, 3.433, 5.533, 3.133, 3.233, 3.333, 3.433, 5.533, 6.633 };
//   float c[N];
//   for (int i=0; i<N; ++i) {
//      c[i] = a[i];
//   }
//   for (int i=0; i<9999999; ++i) {
//      for (int j=0; j<N; ++j) {
//         c[j] *= a[j];
//         c[j] /= b[j];
//         c[j] = c[j] + 0.2f;
//         c[j] = c[j] - 0.2f;
//      }
//   }
//}
//
//void floating_point2 () {
//   const int N = 16;
//   const float a[N] = { 3.1, 3.2, 3.3, 3.4, 5.5, 3.1, 3.2, 3.3,
//      3.4, 5.5, 3.1, 3.2, 3.3, 3.4, 5.5, 6.6 };
//   const float b[N] = { 3.13, 3.23, 3.33, 3.43, 5.53, 3.13, 3.23,
//      3.33, 3.433, 5.533, 3.133, 3.233, 3.333, 3.433, 5.533, 6.633 };
//   float c[N];
//   for (int i=0; i<N; ++i) {
//      c[i] = a[i];
//   }
//   
//   for (int i=0; i<9999999; ++i) {
//      for (int j=0; j<N; ++j) {
//         c[j] *= a[j];
//         c[j] /= b[j];
//         c[j] = c[j] + 0;
//         c[j] = c[j] - 0;
//      }
//   }
//}

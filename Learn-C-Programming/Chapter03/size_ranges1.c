// sizes_ranges1.c
// Chapter 3
// Learn C Programming
//
// Print out the sizes and ranges for each of C's data types.
// Save this program and run it on various computer systems you may find
// yourself working on to confirm and verify the system's limits.
//
// Compile with:
//
//    cc sizes_ranges1.c -Wall -Werror -std=c11
//

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

 // function prototypes
 //
 void printSizes( void );


 int main( void )
 {
     printSizes();

     return 0;
 }
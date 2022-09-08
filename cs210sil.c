/* cs210sil.c
 * =============================================================
 *    Name: Benjamin Tat
 * Section: T6
 * Purpose: Creating a safe input library
 * =============================================================
 */

#include <stdlib.h>
#include <stdio.h>

// Use this funciton as a template for the others
int getIntegerSafe(){
   int value;
   int scanfReturn = 0;

   // attempt to read an integer value
   scanfReturn = scanf("%i", &value);
   fflush(stdin); // eliminate any excess input

   // quit if unsuccessful
   if(scanfReturn != 1){
      fprintf(stderr, "Bad integer input - terminating\n");
      exit(1);
   }
   return value;
}

long getLongSafe(){
   long value;
   int scanfReturn = 0;

   // attempt to read an integer value
   scanfReturn = scanf("%ld", &value);
   fflush(stdin); // eliminate any excess input

   // quit if unsuccessful
   if(scanfReturn != 1){
      fprintf(stderr, "Bad integer input - terminating\n");
      exit(1);
   }
   return value;
}

float getFloatSafe(){
   float value;
   int scanfReturn = 0;

   // attempt to read an integer value
   scanfReturn = scanf("%f", &value);
   fflush(stdin); // eliminate any excess input

   // quit if unsuccessful
   if(scanfReturn != 1){
      fprintf(stderr, "Bad integer input - terminating\n");
      exit(1);
   }
   return value;
}

double getDoubleSafe(){
   double value;
   int scanfReturn = 0;

   // attempt to read an integer value
   scanfReturn = scanf("%lf", &value);
   fflush(stdin); // eliminate any excess input

   // quit if unsuccessful
   if(scanfReturn != 1){
      fprintf(stderr, "Bad integer input - terminating\n");
      exit(1);
   }
   return value;
}

char getCharSafe(){
   char value;
   int scanfReturn = 0;

   // attempt to read an integer value
   scanfReturn = scanf("%c", &value);
   fflush(stdin); // eliminate any excess input

   // quit if unsuccessful
   if(scanfReturn != 1){
      fprintf(stderr, "Bad integer input - terminating\n");
      exit(1);
   }
   return value;
}
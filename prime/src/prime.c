
#include<prime.h>


int prime(int number)
{
   int c;
   /* identifying prime number with the condition */
   for ( c = 2 ; c <= number - 1 ; c++ )
   {
     /* Return 0 for prime numbers else return 1 */ 
   if ( number%c == 0 )
     return 0;
   }
   return 1;
}

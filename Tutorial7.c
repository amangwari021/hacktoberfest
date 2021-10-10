#include <stdio.h>
#define PI 3.14
int main()
{
    int a= 8;
  const  float b = 7.333; 
 // PI = 7.33; cannot do this because PI is constant
  printf("%d", PI);
   // b = 7.22;    //cannot do this b is a constant
     //printf("hello world\n"); 
   //  printf(" The value of a is %d and the value of b is %f\n" , a , b); 
         return 0;
}

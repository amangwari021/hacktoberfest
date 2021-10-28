#include <stdio.h>
#include<isotream.h>
#define PI 3.14

using namespace sdt

int find_line() {
  for(int i = 0; i < 3; ++i) {
    for(int j = i+1; j < 3; ++j) {
      line l(p[i], p[j]);

      int cnt = 0;
      for(int t = 0; t < n; ++t)
        if (l.is_on(p[t])) ++cnt;

      if (cnt == n-1) 
        return l;      
    }
  }
    return 1;
}
    

int main()
{
    int a= 8;
  const  float d = 7.333; 
 // PI = 7.33; cannot do this because PI is constant
  printf("%d", PI);
   // d = 7.22;    //cannot do this b is a constant
     //printf("hello world\n"); 
   //  printf(" The value of a is %d and the value of d is %f\n" , a , d); 
         return 0;
}

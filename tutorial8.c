#include <stdio.h>

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAXN = (int)2e5 + 5;
const double oo = 1e9 + 7;

struct pt {
  ll x, y;

  pt operator + (pt p) {return {x + p.x, y + p.y};}
  pt operator - (pt p) {return {x - p.x, y - p.y};}
  ll operator * (pt p) {return x * p.y - y * p.x;}
  ll operator | (pt p) {return x * p.x + y * p.y;}

  bool inline operator == (const pt &rhs) const {
    return x == rhs.x && y == rhs.y;
  }
};




int main ()
{
int age;
printf("enter your age \n");

cout<<age;

printf("You have entered %d as your age \n", age );
if ( age >= 19){
    printf("you can vote!");
}
else{
    printf("you cannot vote this year!")
}

return 0;

}

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   long long d1,d2,d3,sum1,sum2,sum3,sum4;
   cin>>d1>>d2>>d3;
   sum1=(d1*2)+(d2*2);
   sum2=d1+d2+d3;
   sum3=2*d1+(2*d3);
   sum4=2*d2+(2*d3);
   cout<<min(min(sum1,sum2),min(sum3,sum4));

    return 0;
}

#include<iostream>
using namespace std;

int main()
{
long long n,x,odd,even;
cin>>n>>x;
even=n/2;
odd=n-even;
if(x<=odd){
    cout<<(x*2)-1;
    return 0;
}
cout<<(x-odd)*2;
return 0;
}

#include <iostream>

using namespace std;

int main()
{
    long long n;cin>>n;
    if (n%2==0){cout<<n/2;return 0;}
    n=n/2+1;
    cout<<n*(-1);
    return 0;
}

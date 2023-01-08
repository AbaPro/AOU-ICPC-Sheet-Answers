#include <iostream>
using namespace std;

int r(int x){
    int i;
    for(i=1;i<x;i++)
        cout<<i<<" ";
    return i;
}
int main(){
   int x; cin>>x;
   cout<<r(x);

    return 0;
}
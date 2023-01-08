#include <iostream>
using namespace std;
typedef long long ll;

int main(){
  int n,mn=1000000,x;
  cin>>n;
  for(int i=1;i<=n;i++){
   cin>>x;
   if(x<mn)mn=x;
  }
  cout<<mn;
    return 0;
}
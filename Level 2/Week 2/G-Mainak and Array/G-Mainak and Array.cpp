#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
       int n,ans=0;
       cin>>n;
       int arr[n+5]={0};
       
         for(int i=1;i<=n;i++){
           cin>>arr[i];
       }
       if(n==1)cout<<0<<endl;
       else{
           ans=arr[n]-arr[1];
       for(int i=n;i>1;i--){
           ans=max(ans,(arr[i]-arr[1]));
       }
       for(int i=1;i<n;i++){
           ans=max(ans,(arr[i]-arr[i+1]));
       }
        for(int i=1;i<n;i++){
           ans=max(ans,(arr[n]-arr[i]));
       }
       cout<<ans<<endl;
       }
    }

    return 0;
}

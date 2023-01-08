

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;//time c
        cin>>n>>k;//time c
        int arr[n+5];//time c
        for(int i=1;i<=n;i++){//time n
            cin>>arr[i];
        }
        //arr[i]>arr[i-1]+arr[i+1]
      if(k==1){
          cout<<(n-1)/2;//time c
      }
      else{
          int ans=0;//time c
          for(int i=2;i<=n-1;i++){//time n
              if(arr[i]>arr[i-1]+arr[i+1])
              ans++;
          }
          cout<<ans;
      }
      cout<<endl;//time total n+n=o(n)
    }

    return 0;
}

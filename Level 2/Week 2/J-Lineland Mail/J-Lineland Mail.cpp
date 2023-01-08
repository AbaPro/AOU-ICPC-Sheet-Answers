

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int mx=0,mn=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<<abs((arr[0])-(arr[1]))<<" "<<abs((arr[0])-(arr[n-1]))<<endl;
   for(int i=1;i<n-1;i++){
       mn=0;
       mx=0;
      cout<<min( abs(arr[i]-arr[i+1]), abs(arr[i]-arr[i-1]) )<<" ";
        cout<<max( abs(arr[i]-arr[n-1]), abs(arr[i]-arr[0] )  )<<endl ;
   }
    cout<<abs(arr[n-1]-(arr[n-2]))<<" "<<abs(arr[0]-(arr[n-1]))<<endl;

    return 0;
}

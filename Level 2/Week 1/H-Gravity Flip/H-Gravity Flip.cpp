#include <iostream>
#include <algorithm> 
using namespace std;
int main(){
int n,temp;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++) {
    cin>>arr[i];
}
for (int i = 0; i < n-1; i++) {
    for (int j = 0; j < n-1; j++) {
        if(arr[j]>=arr[j+1]){
            temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
        }
    }
}

for (int h = 0; h < n; h++) {
    cout<<arr[h]<<" ";
}

}
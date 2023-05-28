#include "iostream"
using namespace std;
int maxarray(int arr[100],int n){
    int value=arr[0];
    for (int i=0; i<n; i++){
        if (arr[i]>value){
            value=arr[i];
        }
    }
    return value;
}
int main(){
    int arr1[100],arr2[100];
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int k;
    cin>>k;
    for (int i=0;i<k;i++){
        cin>>arr2[i];
    }
    cout<<maxarray(arr1,n)<<" "<<maxarray(arr2,k);
    return 0;
}
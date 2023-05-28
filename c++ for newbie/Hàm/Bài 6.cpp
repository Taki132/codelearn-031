#include "iostream"
using namespace std;
int arrsum(int arr[100], int n){
    int sum=0;
    for (int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int n;
    int arr[100];
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<arrsum(arr,n);
    return 0;
}
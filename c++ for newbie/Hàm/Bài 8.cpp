#include "iostream"
using namespace std;
int timsole(int arr[100],int n){
    int count =0;
    for (int i = 0; i<n; i++){
        if(arr[i] % 2!=0){
            count++;
        }
    }
    return count;
}
int main(){
    int arr[100];
    int n;
    cin>>n;
    for (int i=0; i<n;i++){
        cin>>arr[i];
    }
    cout<<timsole(arr,n);
    return 0;
}
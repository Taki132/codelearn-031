#include "iostream"
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1000];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        for (int k=i+1; k<n;k++){
            if (a[i]>a[k]){
                int m = a[i];
                a[i]=a[k];
                a[k]=m;
            }
        }
    }
    for (int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
}
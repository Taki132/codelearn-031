#include "iostream"
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    for (int i=0; i<n;i++){
        if (a[i]>0&&a[i]%2!=0){
            m+=a[i]
        }
    }
    cout<<m;
}
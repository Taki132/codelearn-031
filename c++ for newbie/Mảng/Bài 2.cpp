#include "iostream"
using namespace std;
int main(){
    int a[10];
    int n;
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    int k = a[0];
    for (int i=0; i<n; i++){
        if (k<a[i]){
            k=a[i];
        }
    }
    cout<<k;
    return 0;
}
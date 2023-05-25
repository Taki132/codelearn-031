#include "iostream"
using namespace std;
int main(){
    int a[10];
    int k;
    for (int i=0; i<10; i++){
        cin>>a[i];
    }
    for (int i=0; i<10; i++){
        k+=a[i];
    }
    cout<<k
    return 0;
}
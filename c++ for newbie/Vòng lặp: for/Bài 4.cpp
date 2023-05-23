#include "iostream"
using namespace std;
int main(){
    int a,b,k;
    k=0;
    cin>>a>>b;
    for (int i = a; i<=b; i++){
        k=k+i;
    }
    cout<<k;
    return 0;
}
#include "iostream"
using namespace std;
int main(){
    int a,b,i,c;
    cin>>a;
    i=0;
    b=1;
    for (i = 1; i<=a; i++){
        b=b*i;
    }
    cout<<b;
    return 0;
}   
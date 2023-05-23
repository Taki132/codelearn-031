#include "iostream"
using namespace std;
int main(){
    int a,c;
    c=0;
    cin>>a;
    int i = 1;
    for (i = 1; i<=a; i=i+2){
        c=c+i;
    }
    cout<<c;
    return 0;
}
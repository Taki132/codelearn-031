#include "iostream"
using namespace std;
int main(){
    int a,b,c,d,i;
    cin>>a>>b;
    i=1;
    c=a;
    while (i<b){
        a*=c;
        i++;
    }
    cout<<a;
    return 0;
}
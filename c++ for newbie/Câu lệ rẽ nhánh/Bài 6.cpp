#include "iostream"
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if (a>b>c){
        cout<<a;
    }else if(b>a>c){
        cout<<b;
    }
    else{
        cout <<c;
    }
}
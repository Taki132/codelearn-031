#include "iostream"
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int i = 1;
    for (i==a; i<=b; i++){
        if (i%3==0){
            cout<<i<<" ";
        }
    }
    
    return 0;
}
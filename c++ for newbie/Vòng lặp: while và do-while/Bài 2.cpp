#include "iostream"
using namespace std;
int main(){
    int a,b,i;
    cin>>a;
    while (b<=a){
        if (b!=0){
            if (a%b==0){
                i++;
            }
        }
        b++;
    }
    cout<<i;
    return 0;
}
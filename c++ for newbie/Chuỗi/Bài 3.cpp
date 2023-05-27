#include "iostream"
using namespace std;
int main(){
    string a;
    char b;
    int k;
    cin>>a>>b;
    for (int i = 0; i<a.size();i++){
        if (b==a[i]){
            k=i;
            break;
        }
    }
    if (k==0){
        k=-1;
    }
    cout<<k;
}
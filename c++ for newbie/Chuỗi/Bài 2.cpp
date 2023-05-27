#include "iostream"
using namespace std;
int main(){
    string a;
    char b; 
    int c=0;
    cin>>a>>b;
    for (int i=0;i<a.size();i++){
        if (a[i] == b){
            c++;
        }
    }
    cout<<c;
}
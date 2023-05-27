#include"iostream"
using namespace std;
int main(){
    string a;
    cin>>a;
    for (int i=0;i<a.size();i++){
        if (a[i]=='3'){
            a[i]='e';
        }
    }
    cout<<a;
}

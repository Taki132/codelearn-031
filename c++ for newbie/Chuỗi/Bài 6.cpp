#include"iostream"
using namespace std;
int main(){
    string a;
    cin>>a;
    int count=0;
    for (int i=0;i<a.size();i++){
        if (a[i]>='A' && a[i]<='Z'){
            count++;
        }
    }
    cout<<count;
}
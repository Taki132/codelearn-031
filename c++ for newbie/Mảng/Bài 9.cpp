#include "iostream"
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int m[a][b];
    for (int i=0;i<a;i++){
        for (int o=0;o<b;o++){
            cin>>m[i][o];
        }
    }
    int sum=0;
    for (int i=0;i<a;i++){
        for (int o=0;o<b;o++){
            sum+=m[i][o];
        }
    }
    cout<<sum;
}
#include "iostream"
using namespace std;
int main(){
    int a,b;
    cin >>a>>b;
    int c[100][100];
    for (int m=0;m<a;m++){
        for (int n=0;n<b;n++){
            cin>>c[m][n];
        }
    }
    int sum=0;
    for (int m=0;m<a;m++){
        for (int n=0;n<b;n++){
            if(c[m][n]%5==0){
                cout<<c[m][n]<<endl;
                sum+=c[m][n];
            }
        }
    }
    cout<<sum;
}
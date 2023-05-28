#include "iostream"
using namespace std;
double rounded(double r){
    return 2*3.14*r;
}

int main(){
    double r;
    cin>>r;
    cout<<rounded(r);
}
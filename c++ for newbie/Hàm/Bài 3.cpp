#include "iostream"
using namespace std;
/*khai bao ham string*/
void ham(string name){
    cout<<"Hello "<<name;
}
int main(){
    string name;
    cin>>name;
    ham(name);
}
#include<iostream>

using namespace std;

int main() {
    int n,i;
    cin>>n;
    i=1;
    //chú ý điều kiện (nếu hai điều kiện không thể xảy ra thì nhập số nào nó cũng sẽ ra khoảng trắng)
    for (i=1;i<=n;i++){
        cout<<i<<" ";
    }
    return 0;
}
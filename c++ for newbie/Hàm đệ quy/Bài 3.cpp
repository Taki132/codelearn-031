/*Cho mảng các số nguyên n phần tử arr được nhập từ bàn phím. Bạn hãy viết hàm đệ quy tính tổng các phần tử của mảng.

Nếu bạn vẫn chưa chưa thạo cách dùng hàm đệ quy thì có thể xem hướng dẫn bên dưới.

*/
#include "iostream"
using namespace std;
int sum(int a[100], int n){
    if (n==1)return a[0];
    return a[n-1]+sum(a,n-1);
}
int main(){
    int arr[100],n;
    cin>>n;
    for (int i=0;i<n;i++){
        cin >>arr[i];
    }
    cout<<sum(arr,n);
}

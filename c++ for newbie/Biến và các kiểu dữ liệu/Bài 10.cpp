#include<iostream>

using namespace std;

int main() {
	//Miền giá trị của kiểu int là từ -2147483648 tới 2147483647
    int a = 384847522;
    int b = 988347273;
    //Miền giá trị của kiểu long là từ -2147483647 tới 2147483647 (giống với miền dữ liệu của kiểu int).
    cout<<(long int)a*b;
	return 0;
}
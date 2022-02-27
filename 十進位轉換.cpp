#include <bitset>  
#include<iostream>
using namespace std;  
int main()  
{  
    int n;
    cin>>n;
    cout << "n的8進位制:" << oct<<n << endl;  
    cout << "n的10進位制：" << dec << n << endl;  
    cout << "n的16進位制:" << hex << n << endl;  
    cout << "n的2進位制: " << bitset<8>(n) << endl;      //<8>：表示保留8位輸出
    return 0;  
}  

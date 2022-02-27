#include <bitset>  
#include<iostream>
using namespace std;  
int main()  
{  
    cout << "35的8進位制:" << std::oct << 35<< endl;  
    cout << "35的10進位制" << std::dec << 35 << endl;  
    cout << "35的16進位制:" << std::hex << 35 << endl;  
    cout << "35的2進位制: " << bitset<8>(35) << endl;      //<8>：表示保留8位輸出
    return 0;  
}  

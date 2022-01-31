
#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
int fin(long long n,int m){
    if(n==1) return 1;
    if(n==0) return 0;
    if(n>1) return (fin(n-1,m) + fin(n-2,m))%m;
    
}

int main()
{
    long long n,m;
    cin>>n>>m;
    cout<<fin(n,m)<<endl;
    
    return 0;
}

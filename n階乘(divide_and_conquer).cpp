#include <iostream>
#include <algorithm>
using namespace std;
long long int fun(int n);
int n,m,num[1000],step[1000];
int main()
{
	cin>>n;
	cout<<fun(n);
	return 0;
}
long long int fun(int n){
    if(n==1) return 1;
    return n*fun(n-1);
}

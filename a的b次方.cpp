
#include <iostream>
#include <cmath>
using namespace std;
int a,b;
int divide(int,int);
int main()
{
    cin>>a>>b;
    cout<<divide(a,b);
return 0;
}
int divide(int a,int b){
    if(b==0){ 
        return 1;
    }else if(b==1){
        return a%1234;
    }else if(b%2==0){ 
        int tmp=divide(a,b/2)%1234;
        return (tmp*tmp)%1234;
    }
    else {
        return a*(divide(a,b-1))%1234;
    }
}

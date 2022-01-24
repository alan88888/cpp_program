
#include <iostream>

using namespace std;

int main()
{
    int arr[11],sum,max;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    max=-200000000;
    for(int i=0;i<10;i++){
        sum=0;
        for(int j=i;j<10;j++){
            sum=sum+arr[j];
            if (max<sum) max=sum;
        }
    }
    cout<<max<<endl;
    
    return 0;
}

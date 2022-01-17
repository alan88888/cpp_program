#include <algorithm>
#include <iostream>
using namespace std;

bool cmp(int a,int b){
    return a<b;
}

int main()
{
    int n;
    while(cin>>n){
        int wait=0,t[101];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>t[i];
        }
        sort(t,t+n,cmp);
        
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                wait+=t[j];
            }
        }
        
        cout<<(double)wait/n<<endl;
        
    }
    return 0;
}

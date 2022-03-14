#include <iostream>
#include <algorithm>
using namespace std;
void perm(int);
int n,num[100],step[100];
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    sort(num,num+n);
    perm(0);
    return 0;
}
void perm(int curpstep){
    if(curpstep==n){
        for(int i=0;i<n;i++){
            cout<<num[step[i]]<<' ';
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        bool success=true;
        for(int j=0;j<curpstep;j++){
            if(step[j]==i){
                success=false;
                break;
            }
        }
        if(success){
            step[curpstep]=i;
            perm(curpstep+1);
        }
    }
}

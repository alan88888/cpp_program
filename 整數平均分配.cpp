#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;
int n,p,candy[1010];
bool check(int x){
    int cnt=0;
    for(int i=0;i<n;i++){
        cnt+=int(candy[i]/x);
    }
    if(cnt>=p) return 1;
    else return 0;
}
int main()
{
    int mc,l,r,m;
    cin>>n;
    mc=0;
    for(int i=0;i<n;i++){
        cin>>candy[i];
        mc=max(mc,candy[i]);
    }
    cin>>p;
    l=0;
    r=mc;
    while(l<r){
        m=(l+r)/2;
        if(check(m)){
            if(check(m+1)) l=m+1;
            else{ 
                l=m;
                break;
            }
        }else{
            r=m-1;
        }
    }
    cout<<l<<endl;

    return 0;
}

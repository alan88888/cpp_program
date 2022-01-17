#include <algorithm>
#include <iostream>
using namespace std;
struct job{
    int s;
    int e;
};
bool cmp(job a,job b){
    if(a.s==b.s) return a.e<b.e;
    return a.s<b.s;
}

int main()
{
    job jb[101];
    int n,ans,machine[101];
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>jb[i].s>>jb[i].e;
        }
        sort(jb,jb+n,cmp);
        machine[0]=jb[0].e;
        ans=1;
        for(int i=1;i<n;i++){
            bool check=false;
            for(int j=0;j<ans;j++){
                if(machine[j]<=jb[i].s){
                    check=true;
                    break;
                }
            }
            if(!check){
                machine[ans]=jb[i].e;
                ans++;
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}

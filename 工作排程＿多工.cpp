#include <algorithm>
#include <iostream>

using namespace std;
struct job{
    int s;
    int e;
};
bool cmp(job a,job b){
    if (a.s==b.s) return a.e<b.e;
    return a.s<b.s;
}
int main()
{
    int n,ans,m[101];
    job jb[101];
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>jb[i].s>>jb[i].e;
        }
        sort(jb,jb+n,cmp);
        ans=1;
        m[0]=jb[0].e;
        for(int i=1;i<n;i++){
            bool found=false;
            for(int j=0;j<ans;j++){
                if(m[j]<=jb[i].s){
                    m[j]=jb[i].e;
                    found=true;
                    break;
                } 
            }
            if(!found){
                m[ans]=jb[i].e;
                ans++;
            }
            
        }
        cout<<ans<<endl;
        
        
        
        
    }    
    return 0;
}

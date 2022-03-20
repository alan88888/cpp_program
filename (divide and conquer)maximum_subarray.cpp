#include <algorithm>
#include <iostream>

using namespace std;
int a[10];
int gmax(int,int);
int gcmax(int,int,int);

int main()
{
    int ans;
    for(int i=0;i<9;i++){
        cin>>a[i];
    }    
    ans=gmax(0,9);
    cout<<ans<<endl;
    return 0;
}
int gmax(int l,int r){
    int m=(l+r)/2,ml,mr,mc;
    if(l==r) return a[l];
    ml=gmax(l,m);
    mr=gmax(m+1,r);
    mc=gcmax(l,m,r);
    return (max(ml,max(mr,mc)));
}
int gcmax(int l,int m,int r){
    int suml,maxl,sumr,maxr;
    suml=0;
    maxl=a[m];
    for(int i=m;i>=l;i--){
        suml+=a[i];
        if(maxl<suml) maxl=suml;
    }
    sumr=0;
    maxr=a[m+1];
    for(int i=m+1;i<=r;i++){
        sumr+=a[i];
        if(maxr<sumr) maxr=sumr;
    }
    return max(maxl,max(maxr,maxl+maxr));
}

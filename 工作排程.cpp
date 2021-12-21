#include <algorithm>
#include <cctype>
#include <iostream>
#include <sstream>
#include <cstdio>
using namespace std;
struct job{
    int begin;
    int end;
};
bool cmp(job a,job b){
    return a.end<b.end;
}

int main(){
    int num,now=-1,ans=0;
    job job[100];
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>job[i].begin>>job[i].end;
    }
    sort(job,job+num,cmp);
    for(int i=0;i<num;i++){
        if(now<=job[i].begin){
               now=job[i].end;
               ans++;
        }else continue;
    }
    cout<<ans<<endl;
    return 0;
}

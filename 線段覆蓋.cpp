#include <algorithm>
#include <cctype>
#include <iostream>
#include <sstream>
#include <cstdio>
using namespace std;
typedef struct _node{
    int a;
    int b;
}node;
bool cmp(node p,node q){
    if(p.a==q.a) return (p.b>q.b);
    else return (p.a<q.a);
}
node d[10000];
int main()
{
    int n,cnt,s,e;
    while(scanf("%d",&n)!=EOF){
        cnt=0;
        for(int i=0;i<n;i++){
            scanf("%d%d",&(d[i].a),&(d[i].b));
        }
        sort(d,d+n,cmp);
        for(int i=0;i<n;i++){
            s=d[i].a;
            e=d[i].b;
            while(i-1<n&&d[i+1].a<e){
                if(d[i+1].b<=e) i++;
                else {
                    e=d[i+1].b;
                    i++;
                }
            }
            cnt=cnt+e-s;
        }
        printf("%d\n",cnt);
    }
    
    
    return 0;
}

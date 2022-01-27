
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
bool mark[10001];
void erase(int x){
    int sq = int(sqrt(x));
    mark[1]=true;
    for(int i=2;i<=sq;i++){
        if(!mark[i]){
            for(int j=i*i;j<=x;j+=i){
                mark[j]=true;
            }
        }
    }
}

int main()
{
    int x;
    erase(10000);
    for(int i=1;i<=10000;i++){
        if(!mark[i]) cout<<i<<endl;
    }
    return 0;
}

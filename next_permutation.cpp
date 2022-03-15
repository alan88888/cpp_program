#include <iostream>
#include <algorithm>
using namespace std;
void perm(int);
int n,num[100];
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    sort(num,num+n);
    do{
        for(int i=0;i<n;i++){
            cout<<num[i]<<' ';
        }
        cout<<'\n';
    }while(next_permutation(num,num+n));
    
}


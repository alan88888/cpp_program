
#include <iostream>
#include <cmath>
using namespace std;
int s[8],num,n;
void qn(int);

int main()
{
    num=1;
    cin>>n;
    for(int i=0;i<n;i++){
        s[0]=i;
        qn(1);
    }
return 0;
}
void qn(int curstep){
    if(curstep<n){
        for(int i=0;i<n;i++){
            for(int j=0;j<curstep;j++){
                if(s[j]==i||abs(i-s[j])==abs(j-curstep)) break;
                if(j==(curstep-1)){
                    s[curstep]=i;   
                    qn(curstep+1);
                } 
            }
        }
    }
    if(curstep==n){
        cout<<num++<<"  ";
        for(int j=0;j<n;j++){
            cout<<s[j]+1<<' ';
        }
        cout<<endl;
    }
}

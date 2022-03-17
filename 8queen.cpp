
#include <iostream>
#include <cmath>
using namespace std;
int s[8],num;
void qn(int);

int main()
{
    num=1;
    for(int i=0;i<8;i++){
        s[0]=i;
        qn(1);
    }
return 0;
}
void qn(int curstep){
    if(curstep<8){
        for(int i=0;i<8;i++){
            for(int j=0;j<curstep;j++){
                if(s[j]==i||abs(i-s[j])==abs(j-curstep)) break;
                if(j==(curstep-1)){
                    s[curstep]=i;   
                    qn(curstep+1);
                } 
            }
        }
    }
    if(curstep==8){
        cout<<num++<<"  ";
        for(int j=0;j<8;j++){
            cout<<s[j]+1<<' ';
        }
        cout<<endl;
    }
}


#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    bool a[101];
    int amount,space,leave,acc,serialnum;
    while(cin>>amount){
        cin>>space;
        memset(a,0,sizeof(a));
        leave=0;
        serialnum=2;
        //下方是while直到只剩下一個
        while(leave<amount-1){
            acc=0;
            //下方是計算空幾個
            while(acc<space){
                if(a[serialnum]==0){
                    acc++;
                    if(serialnum<amount) serialnum++;
                    else serialnum=1;
                }else{
                    if(serialnum<amount) serialnum++;
                    else serialnum=1;
                }
            }
            //找最後一個
            while(a[serialnum]==1){
                    if(serialnum<amount) serialnum++;
                    else serialnum=1;
            }
            a[serialnum]=1;
            leave++;
        }
        for(int i=1;i<=amount;i++){
            if(a[i]==0) {cout<<i<<endl;break;}
        }
        
        
   }

    return 0;
}

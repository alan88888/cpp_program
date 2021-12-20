#include <algorithm>
#include <cctype>
#include <iostream>

using namespace std;
int cmp(int a,int b){
    return a<b;
}
int main()
{
    int num,score[20]={},fail_hightest=-1,success_lowest=-1;
    while(cin>>num){
        score[20]={},fail_hightest=-1,success_lowest=-1;
        for(int i=0;i<num;i++){
            cin>>score[i];
        }
        sort(score,score+num,cmp);
        for(int i=0;i<num;i++){
            if(score[i]<60) fail_hightest=score[i];
        }
        for(int i=num-1;i>=0;i--){
            if(score[i]>60) success_lowest=score[i];
        }
        for(int i=0;i<num;i++){
            cout<<score[i]<<' ';
        }
        cout<<endl;
        
        if(fail_hightest!=-1) cout<<fail_hightest<<endl;
        else cout<<"best case"<<endl;
        
        if(success_lowest!=-1) cout<<success_lowest<<endl;
        else cout<<"worst case"<<endl;

    }
    
    return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;
void find(int,int);
int n,m,num[1000],step[1000];
int main()
{
	cin>>n;
	for(int i=0;i<n;i++){
	    cin>>num[i];
	}
	cin>>m;
	sort(num,num+n);
	find(0,0);
	return 0;
}
void find (int curstep,int start){
    int j;
    if(m==curstep){
        for(int i=0;i<m;i++){
            cout<<num[step[i]]<<" ";
        }
        cout<<endl;
    }else{
        for(j=start;j<n;j++){
            step[curstep]=j;
            find(curstep+1,j+1);
        }  
    }
}

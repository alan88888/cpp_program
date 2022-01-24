
#include <iostream>
#include <algorithm>

using namespace std;
struct list{
    int a,b,c;
};
bool cmp(list f,list s){
    return f.a<s.a;
}

int main()
{
    list arr[100000];
    int l,r,a,b,c,acc=0;
    cin>>l>>r;
    for(int i=1;i<=r/2;i++){
        for(int j=1;j<=r/2;j++){
            for(int k=1;k<=r/2;k++){
                    if(i>=j&&j>=k){
                        if((k+i+j)<=r&&(k+i+j)>=l&&k*k+j*j==i*i){
                            arr[acc].a=k;
                            arr[acc].b=j;
                            arr[acc].c=i;
                            acc++;
                        }
                    }
            }
        }
    }
    sort(arr,arr+acc,cmp);
    
    for(int i=0;i<acc;i++){
        cout<<arr[i].a<<' '<<arr[i].b<<' '<<arr[i].c<<endl;
    }

    return 0;
}

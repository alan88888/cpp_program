
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    for(int i=2;i<=10000;i++){
        bool check=false;
        double stop=sqrt(i);
        for(int j=2;j<=stop;j++){
            if(i%j==0) {
                check=true;
                break;
            }
        }
        if(check==false) cout<<i<<endl;
    }

    return 0;
}

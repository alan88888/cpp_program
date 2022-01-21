#include <iostream>
#include <cctype>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    int num;
    string sentence;
    int alphabet[100];
    cin>>num;
    cin.ignore();
    for(int i=0;i<num;i++){
        getline(cin,sentence);
        memset(alphabet,0,sizeof(alphabet));
        int len=sentence.length();
        for(int j=0;j<len;j++){
            if(isalpha(sentence[j])){
                alphabet[tolower(sentence[j])-'a']++;
            }
        }
        for(int i=0;i<26;i++){
            if(alphabet[i]!=0) cout<<char('a'+i)<<' '<<alphabet[i]<<endl;
                
            
        } 
    }

    return 0;
}

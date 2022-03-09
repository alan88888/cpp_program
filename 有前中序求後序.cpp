

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string preo,ino;
int len,first;
struct node{
    char data;
    struct node* left;
    struct node* right;
};
node* buildtree(int,int);
void postorder(node*);
int main()
{
    cin>>preo>>ino;
    first=0;
    len=preo.length();
    node *root=buildtree(0,len-1);
    postorder(root);
    return 0;
}
node* buildtree(int left,int right){
    int mid;
    node* bnode;
    bnode=new node;
    bnode->data=preo[first++];
    if(left<right){
        for(int i=left;i<=right;i++){
            if(bnode->data==ino[i]){
                mid=i;
                break;
            }
        }
        if(left<=(mid-1)){
            bnode->left=buildtree(left,(mid-1));
        }else{
            bnode->left=NULL;        
        }
        if(right>=(mid+1)){
            bnode->right=buildtree((mid+1),right);
        }else{
            bnode->right=NULL;        
        }
    }else{
        bnode->left=NULL;
        bnode->right=NULL;
    }
    return bnode;
}
void postorder(node *p){
    if(p!=NULL){
        postorder(p->left);
        postorder(p->right);
        cout<<p->data;
    }
}

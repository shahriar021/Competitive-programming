#include<bits/stdc++.h>
using namespace std;

#define NULL_VALUE -99999
#define success_value 99999

struct listnode{
    int item;
    struct listnode *next;
};

struct listnode *head;
void initializelist()
{
    head=0;
}
int insertItem(int item){
    struct listnode *newnode;
    newnode =(struct listnode *)malloc(sizeof(struct listnode));
    newnode->item=item;
    newnode->next=head;
    head=newnode;
    return success_value;
}

void printlsit()
{
    struct listnode *temp;
    temp=head;
    while(temp !=0){
        printf("%d->",temp->item);
        temp=temp->next;
    }
    
    cout<<"null";

}

int main(){
    initializelist();
    int s,n,l;
    cin>>s;
    for(int i=1;i<=s;i++){
        cin>>n;
        insertItem(n);
    }
   
   
    
            //insertItem(n);
       
            printlsit();
            
    
    
    return 0;
}
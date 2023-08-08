#include<bits/stdc++.h>
using namespace std;

#define SUCCESS_VALUE 999999
#define NULL_VALUE -9999999

struct listNode{
    int item;
    struct listNode *next;

};
struct listNode *head;
void initialize(){ 
    head=0;
}
/*int insert(int item){
    struct listNode *newnode;
    newnode = (struct listNode *)malloc(sizeof(struct listNode));
    newnode->item=item;
    newnode->next=head;
    head=newnode;

    return success;

}*/

int insertLast(int item)
{
    //write your codes here
    struct listNode *ptr, *temp = head;
    ptr = (struct listNode *)malloc(sizeof(struct listNode));
    if (ptr == NULL)
    {
        return NULL_VALUE;
    }
    else
    {
        ptr->item = item;
        if (head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
            return SUCCESS_VALUE;
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            return SUCCESS_VALUE;
        }
    }
}

void print(){
    struct listNode *temp;
    temp=head;
    while(head!=0){
        printf("%d\n",temp->item);
        temp=temp->next;
    }
}

int main(){
    initialize();
    int s,n;
    cin>>s;
    for(int i=0;i<s;i++){
        cin>>n;
        insertLast(n);
    }
    print();
    return 0;
}


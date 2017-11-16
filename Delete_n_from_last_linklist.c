#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/**
delete nth from last node in linked list */
 typedef struct ListNode {
      int val;
      struct ListNode *next;
  }LN;
int traverse(LN* head)
{
    int count = 0;
    LN* temp = head;
    while(temp!=NULL)
    {
        count++;
        printf("%d\n",temp->val);
        temp = temp->next;
    }
    return count;
}
LN* removeNthFromEnd(LN* head, int n) 
{
    int count  = traverse(head);
    LN* temp = head;
    LN* temp1 = NULL;
    if(n==1)
        return NULL;
    
    for(int i=0; i<(count - n-1); i++)
    {
        temp = temp->next;
    }
    temp1 = temp->next;
    temp->next = temp1->next;
    free(temp1);
    traverse(head);
    return(head);
}
LN* InsertBegin(LN* head, int n)
{
    LN* temp = (LN*)malloc(sizeof(LN));
    if (NULL!=head)
    {

    temp->val = n;
    temp->next = head;

    }
    else
    {
    
    temp->val = n;
    temp->next = NULL;

    }
        return temp;
}

int main ()
{
  LN* head;
  head = InsertBegin(head,1);
  head = InsertBegin(head,2);
  //head = InsertBegin(head,3);
  //head = InsertBegin(head,4);
  removeNthFromEnd(head,2);
}

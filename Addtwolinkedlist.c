#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/**
Add two linked lists

 */
 typedef struct ListNode {
      int val;
      struct ListNode *next;
  }LN;
  
 LN* addTwoNumbers( LN* l1,  LN* l2) {
     LN* l3 = (LN*)malloc(sizeof(LN));
     l3 = NULL;
    while ((l1!=NULL) && (l2!=NULL))
    {
        LN* temp = (LN*)malloc(sizeof(LN));
         temp->val = l1->val+l2->val;
         temp->next = l3;
         l3 = temp;
         l1=l1->next;
         l2=l2->next;
    }
    return l3;
}


int main ()
{
    LN* l1  = (LN*)malloc(sizeof(LN));
     LN* l2  = (LN*)malloc(sizeof(LN));
     LN* l3  = (LN*)malloc(sizeof(LN));
     l1 = NULL;
     l2 = NULL;
     l3 = NULL;
     for (int i=0;i<3;i++)
     {
        
         LN* temp1 = (LN*)malloc(sizeof(LN));
         LN* temp2 = (LN*)malloc(sizeof(LN));
          temp1->val = i;
          temp2->val = 5+i;
          temp1->next = l1;
         temp2->next = l2;
         l1 = temp1;
         l2 = temp2;
         
     }
    l3 =addTwoNumbers(l1,l2);
     while (l3!=NULL){
         printf("%d \t", l3->val);
         l3 = l3->next;
     }
     return 0;
}

// { Driver Code Starts
//Initial Template for C

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    
}*start;

void insert();
//struct Node *start;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
      start=NULL;
      insert();
      int x;
      scanf("%d",&x);
      printf("%d",searchLinkedList(start, x));
      printf("\n");
    }
    return 0;

}


 void insert()
 {
     int n,value,i;
     scanf("%d",&n);
     struct Node *temp;
     for(i=0;i<n;i++)
     {
         scanf("%d",&value);
         if(i==0)
         {
              start=(struct Node *) malloc( sizeof(struct Node) );
              start->data=value;
              start->next=NULL;
              temp=start;
              continue;
         }
         else
         {
             temp->next= (struct Node *) malloc( sizeof(struct Node) );
             temp=temp->next;
             temp->data=value;
             temp->next=NULL;
         }
     }
 }
// } Driver Code Ends


//User function Template for C

int searchLinkedList(struct Node *head, int x)
{
    int ans=0;
    while(head)
    {
        if(head->data == x) ans=1;
        head=head->next;
    }
    return ans;
}
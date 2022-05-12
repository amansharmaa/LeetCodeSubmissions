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
int maximum(struct Node* head);
int minimum(struct Node* head);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
      start=NULL;
      insert();
      printf("%d ",maximum(start));
      printf("%d",minimum(start));
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

int maximum(struct Node *head)
{
            int ans=0;
        while(head)
        {
            if(ans<head->data)
            {
                   ans=head->data;
            }
            head=head->next;
        }
        return ans;
}

int minimum(struct Node *head)
{
            int ans=10000;
        while(head)
        {
            if(ans>head->data)
            {
                   ans=head->data;
            }
            head=head->next;
        }
        return ans;}
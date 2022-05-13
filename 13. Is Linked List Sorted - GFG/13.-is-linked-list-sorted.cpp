// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }
        
};


void displayList(Node *head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}



 // } Driver Code Ends
//User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }
        
};
*/

bool isSorted(Node * head)
{
  //Your code here
    if(head == NULL || head->next == NULL) return true;
    bool flaga = true, flagd = true;
    Node *curr = head;
    while(curr->next != NULL){
        if(curr->data > curr->next->data){ flaga = false; break;}
        curr = curr->next;
    }
    curr = head;
    while(curr->next != NULL){
        if(curr->data < curr->next->data){ flagd = false; break;}
        curr = curr->next;
    }
    if(flaga || flagd) return true;
    return false;
}
    

// { Driver Code Starts.


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < n-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        cout<<isSorted(head) << endl;
    }
    return 0;
}  // } Driver Code Ends
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

Node *newNode(int data)
{
    Node *temp=new Node(data);
    
    return temp;
}



void displayList(Node *head)
{
    Node *temp=head;
    while(temp->next!=head)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<" ";
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
Node * deleteHead(Node *head)
{
    if(head == NULL)
    return NULL;
    if(head->next == head)
    {
        delete head;
        return NULL;
    }
    Node *temp = head->next;
    head->data = temp->data;
    head->next = head->next->next;
    delete temp;
    return head;
}
Node * deleteAtPosition(Node *head,int pos)
{
    //Your code here
    if(pos == 1)
    return deleteHead(head);

    Node *curr = head;
    for(int i=0; i<pos-2; i++)
    {
        curr = curr->next;
    }
    Node *temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    return head;
}


// { Driver Code Starts.




void makeCircular(Node * head)
{
    Node * temp=head;
    
    while(temp->next)
    {
        temp=temp->next;
    }
    temp->next=head;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    Node *head=NULL, *tail = NULL;
	    int x;
	    cin >> x;
	    head = new Node(x);
	    tail = head;
	    for(int i=0;i<n-1;i++)
	    {
	        cin>>x;
	        tail -> next = new Node(x);
	        tail = tail -> next;
	    }
	    
	    
	    int pos;
	    cin>>pos;

	    makeCircular(head);
	    
	  
	    head=deleteAtPosition(head,pos);
	    
	    displayList(head);
 
	    cout<<endl;
	}
	return 0;
}  // } Driver Code Ends
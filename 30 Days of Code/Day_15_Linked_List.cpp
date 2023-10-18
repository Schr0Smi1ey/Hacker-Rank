#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class node
{
    public:
        int val;
        node *next;
        
        node(int val)
        {
            this->val = val;
            this->next = NULL;
        }
};
void insert(node *&head,node *&tail,int data)
{
    node *newnode = new node(data);
    if(head==NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
void solution()
{
    node *head=NULL;
    node *tail = NULL;
    int t;
    cin>>t;
    while(t--)
    {
        int x;cin>>x;
        insert(head,tail,x);
    }
    while(head)
    {
        cout<<head->val<<" ";
        head = head->next;
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    solution();
    return 0;
}

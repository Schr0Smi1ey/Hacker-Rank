SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) 
{
    SinglyLinkedListNode *newnode = new SinglyLinkedListNode(data);
    if(llist==NULL)
    {
        llist = newnode;
        return llist;
    }
    newnode->next = llist;
    llist = newnode;
    return llist;
}
void reverse(Node* &head, Node* curr, Node* prev)
{
    if(curr== NULL){
        head=prev;
        return;
    }
    Node* forw=curr->next;
    reverse(head, forw, curr); //reversing rest element leaving first one
    curr->next=prev;
    
}
Node* reverseLinkedList(Node *head)
{
    // Write your code here
    Node* curr=head;
    Node* prev=NULL;
    reverse(head, curr, prev);
    return head;
}

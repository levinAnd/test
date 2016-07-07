LINK_NODE *link_reserver(LINK_NODE *head)
{
    LINK_NODE *prev = NULL;
    LINK_NODE *next;

    while(head != NULL)
    {
        next = head->next;
        head->next = prev;
        head = prev;
        head = next;
    }

    return prev;

}

LINK_MODE *ReseverLink(LINK_NODE *head)
{
    LINK_NODE *newHead;

    if((head == NULL) || (head->next == NULL))
        return head;

    newHead = ReseverLink(head->next);
    head->next->next = head;
    head->next = NULL;
    
    return newHead;
}

// function for find out the length of the given linkedlist.
int getLength(struct Node* head) {

    int length = 0;
    
    // find length of linked list
    while (head) {
        length++;
        head = head->next;
    }

    return length;
}
// function for finding out the middle element.
int getMiddle(struct Node* head) {

    // finding length of the linked list
    int length = getLength(head);

    // traverse till we reach half of the length
    int midIndex = length / 2;
    while (midIndex--) {
        head = head->next;
    }

    return head->data;
}

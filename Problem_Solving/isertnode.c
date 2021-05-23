/*
 * Complete the 'insertNodeAtPosition' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER data
 *  3. INTEGER position
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {    
SinglyLinkedListNode *ant,*nova,*pt=llist;
int i=0;
    nova=malloc(sizeof(SinglyLinkedListNode));
    nova->data=data;
    while(i!=position){
        ant=pt;
        pt=&(*pt->next);
        i++;
    }
    ant->next=nova;
    nova->next=pt;

   return llist; 
}

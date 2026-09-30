#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *reverseList(struct ListNode *head)
{
    struct ListNode *prev = NULL;
    struct ListNode *current = head;

    while (current != NULL)
    {
        struct ListNode *next = current->next;

        current->next = prev;

        prev = current;
        current = next;
    }

    return prev;
}

void printList(struct ListNode *head)
{
    struct ListNode *temp = head;

    while (temp != NULL)
    {
        printf("%d", temp->val);

        if (temp->next != NULL)
            printf(" -> ");

        temp = temp->next;
    }

    printf(" -> NULL\n");
}

int main()
{
    struct ListNode *n1 = malloc(sizeof(struct ListNode));
    struct ListNode *n2 = malloc(sizeof(struct ListNode));
    struct ListNode *n3 = malloc(sizeof(struct ListNode));
    struct ListNode *n4 = malloc(sizeof(struct ListNode));
    struct ListNode *n5 = malloc(sizeof(struct ListNode));

    n1->val = 1;
    n2->val = 2;
    n3->val = 3;
    n4->val = 4;
    n5->val = 5;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = NULL;

    struct ListNode *head = n1;

    printf("Original list:\n");
    printList(head);

    head = reverseList(head);

    printf("Reversed list:\n");
    printList(head);
    printf("\nEdge case - Single node:\n");

    struct ListNode *n6 = malloc(sizeof(struct ListNode));

    n6->val = 10;
    n6->next = NULL;

    struct ListNode *single = reverseList(n6);

    printList(single);

    free(n6);

    free(n1);
    free(n2);
    free(n3);
    free(n4);
    free(n5);

    return 0;
}

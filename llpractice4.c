#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
    };

void Linkedlisttraversal(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("element:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
//ye wala bhi chlega but ye dynamically allocate nhi hua he
/*int deletefirst(struct Node *head)
{

    head=head->next;
}*/
int deletefirst(struct Node *head)
{
    struct Node *juhi=head;
    head=head->next;
    free(juhi);
    return head;
}
int deletebetween(struct Node *head)
{
    int index;
    printf("enter node");
    scanf("%d",&index);
    struct Node *p=head;
    int i=0;
    while(i!=index-1){
            p=p->next;
            i++;

    }
    struct Node *juhi;
    juhi=p->next;
    p->next=juhi->next;
    free(juhi);
    return head;
}
int deleteend(struct Node *head)
{
//    int index;
//    printf("enter node");
//    scanf("%d",&index);
    struct Node *p=head;
//    int i=0;
    while(p->next!=NULL){
            p=p->next;
    }
    struct Node *juhi;
    juhi=p->next;
    p->next=NULL;
    free(juhi);
//    p->next=NULL;
    return head;
}
int main()
{
    struct Node* head;
    struct Node* second;
    struct Node* third;

    //allocate memory for nodes in the linked list in heap
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));

    //link first and second nodes
    head->data=7;
    head->next=second;

    //link second and third nodes
    second->data=11;
    second->next=third;

    //terminate the list at NULL
    third->data=44;
    third->next=NULL;

    Linkedlisttraversal(head);
//    head=deletefirst(head);
//    head=deletebetween(head);
    head=deleteend(head);
    Linkedlisttraversal(head);
    return 0;
}

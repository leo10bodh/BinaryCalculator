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

int llinsertion(struct Node *head)
{
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));

    int data;
    printf("enter value");
    scanf("%d",&data);
    ptr->data=data;
    ptr->next=head;
    return ptr;

}
int llinsertioninbetween(struct Node *head)
{
    struct Node *juhi=(struct Node *)malloc(sizeof(struct Node));
    int index;
    printf("enter index");
    scanf("%d",&index);
    struct Node *p=head;
    int i=0;
    while(i!=index-1){
            p=p->next;
            i++;
    }
    int data;
    printf("enter value");
    scanf("%d",&data);
    juhi->data=data;
    juhi->next=p->next;
    p->next=juhi;
    return head;

}
int llinsertionatend(struct Node *head)
{
    struct Node *juhi=(struct Node *)malloc(sizeof(struct Node));
    struct Node *p=head;
    while(p->next!=NULL){
            p=p->next;
    }
    int data;
    printf("enter value");
    scanf("%d",&data);
    juhi->data=data;
    p->next=juhi;
    juhi->next=NULL;
    return head;

}
int insertatnode(struct Node* head)
{
    struct Node *juhi=(struct Node*)malloc(sizeof(struct Node));
    struct Node*q=head;
    int noode;
    printf("enter a node");
    scanf("%d",&noode);
    int i=0;
    while(i!=noode-1){
        q=q->next;
        i++;
    }
    int data;
    printf("enter data");
    scanf("%d",&data);
    juhi->data=data;
    juhi->next=q->next;
    q->next=juhi;
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
    //head=llinsertion(head);
    //head=llinsertioninbetween(head);
    //head=llinsertionatend(head);
    head=insertatnode(head);
    Linkedlisttraversal(head);
    return 0;
}

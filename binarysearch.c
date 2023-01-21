#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
void insertbegin();
void insertlast();
void insertrandom();
void deletebegin();
void deletelast();
void deleterandom();
void display();
void main()
{
    struct node* head;
    struct node* newnode;
    struct node* temp;
    int choice;
    int num;
    head = NULL;
    do
    {
        newnode = (struct node*)malloc(sizeof(structnode));
        printf("enter the data:");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if(head==NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp =newnode;
        }
        printf("for next node enter the choice:");
        scanf("%d", &choice);
    }while(choice!=0)
    printf("\n 1.insertbegin \n 2.insertlast \n 3.insertrandom \n 4.deletebegin \n 5.deletelast \n 6.deleterandom \n 7.display \n 8. exit");
    scanf("%d", &num);
    switch(num)
    {
        case 1:
        insertbegin();
        break;
        case 2:
        insertlast();
        break;
        case 3:
        insertrandom();
        break;
        case 4:
        deletebegin();
        break;
        case 5:
        deletelast();
        break;
        case 6:
        deleterandom();
        break;
        case 7:
        display();
        break;
        case 8:
        exit(0);
        default:
        printf("enter valid number");
    }
}
void insertbegin()
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(structnode));
    printf("enter the value:")
    scanf("%d", &temp->data);
    temp->next=head;
    head = temp;
}
void insertlast()
{
    struct node* temp;
    struct node* key;
    key = (struct node*)malloc(sizeof(structnode));
    printf("enter the key :");
    scanf("%d", &key->data);
    temp = head;
    while(temp->next!= NULL)
    {
        temp=temp->next;
    }
    temp->next=key;
    key->next=NULL;    
}
void insertrandom()
{
    int i,loc;
    printf("enter the location:");
    scanf("%d", &loc);
    struct node* temp;
    struct node* key;
    key = (struct node*)malloc(sizeof(structnode));
    printf("enter the number:");
    scanf("%d", &key->data);
    temp = head;
    for(i=0;i<loc;i++)
    {
        temp=temp->next;
    }
    key->next=temp->next;
    temp->next=key;
}
void deletebegin()
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(structnode));
    temp=head;
    head=temp->next;
    free(temp);
}
void deletelast()
{
    struct node* temp;
    struct node* ptr;
    temp=head;
    while(temp->next!=NULL)
    {
        ptr = temp;
        temp = temp->next;
    }
    prt->next=NULL;
    free(temp);
}
void deleterandom()
{
    struct node*
}
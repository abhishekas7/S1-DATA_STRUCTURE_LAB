#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void search();
void display();
struct node{
int data;
struct node *next;
};
struct node *top=NULL;


void push(){
int value;
struct node *newnode;
newnode=malloc(sizeof(struct node));
printf("\n Enter the value to be Inserted : \n");
scanf("%d",&value);
newnode->data=value;
if(top==NULL){
    newnode->next=NULL;
    top=newnode;
}
else{
    newnode->next=top;
    top=newnode;
}
printf("\none node inserted\n");

}

void pop(){
struct node *temp;
    if(top==NULL){
        printf("STACK EMPTY\n");
    }
    else
        {
        temp= top;
        top=temp->next;
        free(temp);
    }
}

void search(){
int key;
struct node *temp=top;
int f;
printf("\nEnter the value to be searched :");
scanf("%d",&key);
while(temp!=NULL){
    if(temp->data==key){
        f=1;
    }
      temp=temp->next;
    }
      if(f==1){
        printf("DATA FOUND\n");
        }
      else{
        printf("DATA NOT FOUND\n");
        }

}

void display(){
struct node *temp=top;
if(top==NULL)
{
    printf("stack empty");
}
else
{

    printf("Elements are\n");
    while(temp->next!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
        printf("%d\t",temp->data);

}


}

int main()
{
    int ch;
    do
    {
        printf("\n1.PUSH\n2.POP\n3.SEARCH\n4.DISPLAY\n5.EXIT\n");
        printf("Enter the Choice");
        scanf("%d",&ch);
        switch(ch){
    case 1:push();
            break;
    case 2:pop();
            break;
    case 3:search();
            break;
    case 4:display();
            break;
    case 5:exit(0);
        }
    }
    while(ch!=5);
}


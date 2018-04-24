#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<string.h>
struct node1
{
    char name[20];
    int rollno;
    struct node* next;
};
typedef struct node1 student;
void insert ( int loc, student* first)
{
    int count =1;
    student* temp;
    temp = first;
    if(count==loc)
    {
        student* newnode ;
        newnode = (student*)malloc(sizeof(student));
        newnode -> next = temp->next;
        printf("enter the record for a student-roll no and name");
        int val;
        char name1[20];
        scanf("%d",&val);
        scanf("%s",&name1);
        newnode->rollno = val;
        strcpy(newnode->name,name1);
        temp->next= newnode;


    }
    else
    {
        temp = temp->next;
        count++;
    }

}
void deletion (int roll1,student* first)
{
    student* temp, *lpr;
    if(roll1!=temp->rollno)
    {
        temp = first->next;
        lpr = first;

    }
    else
    {
        first = first->next;
        exit;
    }
    while(temp!=NULL)
    {
        if(roll1== temp->rollno)
        {
            lpr -> next = temp -> next;
            temp-> next =NULL;
        }
        else{
            temp =temp -> next;
            lpr = lpr ->next;

        }
    }
}
void reverse ( student* first)
{
    student *q , *r,*s;
    q = first;
    r =NULL;
    ///traversal of entire linked list
    while(q!=NULL)
    {
        s = r;
        r=q;
        q = q->next;
        r ->next =s;
    }
    first = r;
}
void main()
{
    student* first , *ptr ,*temp;
    char ans;///for yes (y)or no(n)
    int ch;///choice
    ///creation  of linked list
    printf("input the records for the first student");
    first = (student*)malloc(sizeof(student));
    scanf("%d",&first->rollno);
    scanf("%s",&first->name);
    printf("do you want to add another record");
    scanf("%c",&ans);
    ptr = first;
    while(ans=='y')
    {
        student* newnode;
        newnode = (student*)malloc(sizeof(student));
        ptr->next = newnode;
        ptr = newnode;
        printf("Input the record-roll no and name");
        scanf("%d",&ptr->rollno);
        scanf("%s",&ptr->name);
        ptr->next =NULL;
        printf("Do you want to add another record");
        scanf("%c",&ans);
    }
    temp = first ;
    printf("The records are");
    while(temp!=NULL)
    {
        printf("%d\n",temp->rollno);
        printf("%s\n",temp->name);
        temp= temp->next;

    }
    printf("Do you want to add-1 or delete-2 a record");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1 :
        {
            printf("enter the location");
            int loc;
            scanf("%d",&loc);
            insert(loc,first);
            break;

        }
    case 2:
        {
            printf("enter the roll No to be deleted");
            int r1;
            scanf("%d",&r1);
            deletion(r1,first);
            break;
        }
        case default :
        {
          break;
        }
    }




}

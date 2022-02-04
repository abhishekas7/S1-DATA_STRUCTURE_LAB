#include<stdio.h>
#include<stdlib.h>
void setunion(int[],int[],int,int);
void setinter(int[],int[],int,int);
void setdiff(int[],int[],int,int);
void setequ(int[],int[],int,int);

int main(){
int ch;
    int a[50],b[50],c[50],n1,n2,n3,i,k;
    printf("\nEnter the size of two array\n");
    scanf("%d%d",&n1,&n2);
    printf("\nEnter the elements 1st array\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    //zero check
    //if(a[i]==0 ||  a[i]==1 ){
    //printf("\n!!!!!!Only Zeroes and Ones Allowed!!!!!!!\n");
   // return;
   // }
    printf("\nEnter the elements of second\n");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    //zero check
    //if(b[i]==0 ||  b[i]==1 ){
    //printf("\n!!!!!!Only Zeroes and Ones Allowed!!!!!!!\n");
   // return;
    //}
do
{
    printf("\n======================SET OPERATIONS=====================\n");
    printf("\n1.set_union\n2.set_intersection\n3.set_difference\n4.set_equality\n5.exit\n");
    printf("\nEnter the Choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:setunion(a,b,n1,n2);
        break;
        case 2:setinter(a,b,n1,n2);
        break;
        case 3:setdiff(a,b,n1,n2);
        break;
        case 4:setequ(a,b,n1,n2);
        break;
        case 5:exit(0);
    }
}while(ch!=5);
}

//------------------UNION----------------------
void setunion(int a[],int b[],int n1,int n2)
{               int i,c[n1];
                if(n1!=n2){
                printf("\nTwo sets are not compatible for union\n");
                }
                else{
                printf("\nUNION : ");
                for(i=0;i<n1;i++)
                {
                    c[i]=a[i] || b[i];
                    printf("%d",c[i]);
                }
                }
}

//-------------------INTERSECTION-------------------
void setinter(int a[],int b[],int n1,int n2)
{               int i,c[n1];
                if(n1!=n2){
                printf("\nTwo sets are not compatible for intersection\n");
                }
                else{
                printf("\nINTERSECTION : ");
                for(i=0;i<n1;i++)
                {
                    c[i]=a[i] && b[i];
                    printf("%d",c[i]);
                }
                }
}

//-------------------DIFFERENCE-------------------
void setdiff(int a[],int b[],int n1,int n2)
{               int i,c[n1],k[n1];
                if(n1!=n2){
                printf("\nTwo sets are not compatible for intersection\n");
                }
                else{
                printf("\nDIFFERENCE: ");
                for(i=0;i<n1;i++)
                {
                    k[i]=!b[i];
                    c[i]=a[i] && k[i];
                    printf("%d",c[i]);
                }
                }
}
//-------------------EQUAL-------------------
void setequ(int a[],int b[],int n1,int n2)
{
                int i,f=0;
                if(n1!=n2){
                printf("\nTwo sets are not compatible for intersection\n");
                }
                for(i=0;i<n1;i++){
                    if(a[i]!=b[i]){
                    f=1;
                }
                }
                if(f!=1)
                {
                    printf("\nEQUAL\n");
                }
                else{
                    printf("\nNOT EQUAL\n");
                }



                }





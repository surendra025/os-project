//Sir the solution was done in dev c++ so if you run it in ubuntu just use the stdio header file thankyou and it works for both the questions
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
 int np;   
 int r;      
 int i,j,k;
 int req[10][10],alloc[10][10],max[10][10];
 int avail[10],p[10];
  printf("\nEnter number of process :");
 scanf("%d",&np);
 printf("\n Enter  resources available : ");
 scanf("%d",&r);
 printf("\nEnter instances for resources :\n");
 for(i=0;i<r;i++)
 {  printf("R%d ",i+1);
  scanf("%d",&avail[i]);
  }
 printf("\n Enter allocation matrix  \n");
 for(i=0;i<np;i++)
 {
 printf("p%d",i+1);          p[i]=0;
 for(j=0;j<r;j++)
 {
  scanf("%d",&alloc[i][j]);
 }
}
  printf("\n Enter MAX matrix  \n");

 for(i=0;i<np;i++)
 {
 printf("p%d",i+1);
 for(j=0;j<r;j++)
 {
  scanf("%d",&max[i][j]);
 }
 }

 for(i=0;i<np;i++)
 {
 printf("\np%d\t",i+1) ;
 for(j=0;j<r;j++)
 {
  req[i][j]=max[i][j]-alloc[i][j];
  printf("\t%d",req[i][j]);
  }
 }
 
 printf("\n\n");
 int flag=0;
 for(i=0;i<np;i++) 
{ 
for(j=0;j<r;j++) 
{ 
if(avail[j]>=req[i][j]) 
flag=1; 
else 
flag=0; 
} 
} 
if(flag==0) 
printf("Unsafe State"); 
else 
printf("Safe State");
}

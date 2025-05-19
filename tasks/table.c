#include<stdio.h>
void table();


void tablefrom();
int main()
{
    table();
    tablefrom();
    

    
    return 0;

}
void table()
{
    int a;
    int t;
    printf("enter any number :");
    scanf("%d", &a);
    for(int i=0;i<11;i++)
    {

        
        t= a*i;
        printf(" %d * %d = %d\n",a,i,t);

    }

}
void tablefrom()
{
    int c;
    int z;
    int p;
    printf("enter table to draw :");
    scanf(" %d",&c);
    for (int i=0;i<c+1;i++)
    {
        for (int j=0;j<11;j++)
        {
        z=i*j;
        printf("%d * %d = %d\n",i,j,z);
        printf("\n");
     

        }
         
    }

}
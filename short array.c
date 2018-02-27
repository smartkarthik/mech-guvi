#include<stdio.h>
void main()
{
    int a[50],i,j,b,temp;
    printf("enter the N value");
    scanf("%d",&b);
    for(i=0;i<b;i++)
    printf("enter the number");
    {
    scanf("%d",&a[i]);
    }
    printf("sorted array");
        for(j=0;j<b;j++)
    {
    a[i]>a[j]
    
    
     { temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }}
    for(i=0;i<b;i++)
    {
    printf("%d",a[i]);
    }}
}

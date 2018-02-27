#include<stdio.h>
void main()
{
    int a[50],b,c,i;
    printf("\nenter the N value");
    scanf("%d",&b);
    printf("\nenter the arry value");
    for(i=0;i<b;i++)
    {
    scanf("%d",&a[i]);
    }
        c=a[0];
       for(i=0;i<b;i++) 
       {
    if(a[i]>c)
    {
        c=a[i];
    }
    printf("The maximum element is %d",c);

}
}

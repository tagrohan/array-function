#include<stdio.h>
#include<conio.h>
int * f(int a[])
{
    int i;
    for(i=0;i<=9;i++)
        a[i]=a[i]*a[i];
    return(&a[0]);
}
void main()
{
    int i,a[10],*p;
    for(i=0;i<=9;i++)
    {
        printf("Enter array element %d",i+1);
        scanf("%d",&a[i]);
    }
    p=f(a);
    printf("Array become\n");
    for(i=0;i<=9;i++)
     printf("%d ",*(p+i));
    getch();

}

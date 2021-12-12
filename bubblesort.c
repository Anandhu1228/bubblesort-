#include<stdio.h>
void readarray(int [],int);
void printarray(int [],int);
void bubblesort(int [],int);
void swapnumber(int *,int *);

void main()
{
    int a[100],n;
    printf("\nEnter the number of elements :\n");
    scanf("%d",&n);
    
    readarray(a,n);
    bubblesort(a,n);
    printarray(a,n);
    
}

void readarray(int a[],int n)
{
    int i;
    printf("\nEnter %d elements of the array : \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
}

void printarray(int a[],int n)
{
    int i;
    printf("\nThe list of number after sorted is : ");
    for(i=0;i<=n;i++)
    printf("\t%d",a[i]);
}

void bubblesort(int a[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        if(a[j]>a[j+1])
        {
            swapnumber(&a[j],&a[j+1]);
        }
    }
    
}

void swapnumber(int *a,int *b)
{
    int temp;
        temp = *a;
        *a = *b;
        *b = temp;
}

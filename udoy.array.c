#include <stdio.h>
#include <stdlib.h>


void delete(int a[],int n)
{
    printf("enter index that you want delete: ");
    int d;
    scanf("%d",&d);
    for(int i=d;i<n-1;i++)
    {
        int temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }

    a[n-1]=0;
    printf("After deleted Array value: ");
     for( int i=0;i<n;i++){
         printf("%d ",a[i]);

    }
    printf("\n");

}

void display(int a[],int n)
{
    printf("Display Array Value: ");
     for( int i=0;i<n;i++){
         printf("%d ",a[i]);

    }

}

void search(int a[],int n)
{
    printf("enter a value that you want to search: ");
    int val;
    scanf("%d",&val);
    printf("\n");

    int found =0;
    int pos=-1;

    for(int i=0;i<n;i++)
    {

        if(val==a[i])
        {
            found=1;
            pos=i;
            break;
        }
    }

    if(found=1)
    {
        printf("found in index: %d\n",pos);
    }
    else
    {
        printf("value not found.\n");
    }


}



void sorting(int a[],int n)
{
     printf("before sorted array value: \n");
     for( int i=0;i<n;i++){
         printf("%d ",a[i]);

    }
    printf("\n");

    for(int i=0;i<n;i++)
    {

        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {

                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

     printf("after sorted array value: \n");
     for( int i=0;i<n;i++){
         printf("%d ",a[i]);

    }
    printf("\n");


}


void update(int a[],int n)
{
    printf("before updated array value: \n");
     for( int i=0;i<n;i++){
         printf("%d ",a[i]);

    }
    printf("\n");


    int index;
    int val;
    printf("enter index: \n");
    scanf("%d",&index);

    printf("enter value: ");
    scanf("%d",&val);

    a[index]=val;
    printf("\n after updated array value: \n");
     for(int i=0;i<n;i++){
         printf("%d ",a[i]);

    }
}

void insert(int a[],int size)
{
    printf("Enter Array Value: ");
    for(int i=0;i<size;i++)
    {

        scanf("%d",&a[i]);
    }

    printf("After inserted: ");
     for(int i=0;i<size;i++)
    {

       printf("%d ",a[i]);
    }
    printf("\n");
}




int main()
{
    int size;
    printf("\nPlease Enter the array size: ");
    scanf("%d",&size);

    int a[100];
    printf("you must first choose option 0\n");



while (1){


    printf("Select an option (0-6):\n 0.insert\n 1.update\n 2.delete\n 3.sorting\n 4.search\n 5.display\n 6.exit\n");
    int select;
    scanf("%d",&select);
    if(select==0)
    {
        insert(a,size);
    }
    else if(select==1)
    {
        update(a,size);
    }
    else if(select==2)
    {
        delete(a,size);
    }
    else if(select==3)
    {
        sorting(a,size);
    }
    else if(select==4)
    {
        search(a,size);
    }
    else if(select==5)
    {
        display(a,size);
    }
    else if(select==6)
    {
        printf("Exit the program.\nAbu Shahriar Udoy\nID:0182420012101196");
        break;
    }
    else
    {
        printf("Please select a valid option(0-6)");
    }
}
}

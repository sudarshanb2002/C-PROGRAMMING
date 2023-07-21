#include<stdio.h>
int main()
{
    //int arr[]={1,2,3,4,5};
    int arr[100];
    int n;
    char character;
    int sumodd=0;
    int i;
    int sumeven=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    printf("\nType o for odd...");
    printf("\nType e for even...");
    scanf("\n%c",&character);
    if(character=='e')
    {
        for(i=1;i<n;i=i+2)
        {
            sumeven=sumeven+arr[i];
        }
    printf("%d",sumeven);
    }
    else if(character=='o')
    {
       for(i=0;i<n;i=i+2)
        {
            sumodd=sumodd+arr[i];
        }
    printf("%d",sumodd);
    }
    return 0;
}

#include <stdio.h>
#include <conio.h>
 
int search_element(int *arr,int n,int ele)
{ 
    int i;
    for(i=0; i<n; i++)
    {
        if(arr[i]==ele)
        {
            return 1;		 
        }
    }
    return 0;            
 }
  
int main()
{
    int arr[10],i,n,key;
   
    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("Enter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the key: ");
    scanf("%d", &key);
    
    if(search_element(arr,n,key))
        printf("Element found.");
    else
        printf("Element not found.");
        
}
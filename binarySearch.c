#include<stdio.h>

int main(){
    int arr[]={3, 8, 13, 17, 21, 32, 45, 56, 63, 77, 89, 94};
    int search, n=12, low=0, high=n-1, mid, i;

    printf("Enter any number for search: ");
    scanf("%d",&search);
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]<search)
            low=mid+1;
        else if(arr[mid]==search){
            printf("\n%d found at location %d\n",search, mid+1);
            break;
        }
        else
            high=mid-1;
    }
    if(low>high){
        printf("%d not found!\n",search);
    }

    return 0;
}
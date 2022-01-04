#include<stdio.h>

int main(){
    int arr[]={32, 51, 29, 40, 7, 37, 13, 3};
    int n=sizeof(arr), temp, i,j;
    for(i=0;i<n;i++){       //before sorting
        printf("%d ",arr[i]);
    }
    for(i=1;i<n;i++){       //insertion sorting
        temp=arr[i];
        for(j=i-1;j>=0&&arr[j]>temp;j--){
            arr[j+1]=arr[i];
        }
        arr[j+1]=temp;
    }
    for(i=0;i<n;i++){       //after sorting
        printf("%d ",arr[i]);
    }

    return 0;
}
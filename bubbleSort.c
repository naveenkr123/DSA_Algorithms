#include<stdio.h>

int main(){
    int n=12, temp;
    int arr[]={71, 66, 53, 18, 88, 45, 99, 37, 69, 4, 12 , 26};

    printf("Before bubble sorting: \n");
    for(int k=0; k<n;k++){      //before sorting
        printf("%d ",arr[k]);
    }
    for(int i=0; i<n; i++){     //bubble sorting
        for(int j=i; j<n; j++){
            if(arr[j]>arr[i]){
                temp=arr[i];    //swapping
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\n\nAfter bubble sorting: \n");    //after sorting
    for(int k=0; k<n;k++){
        printf("%d ",arr[k]);
    }

    return 0;
}
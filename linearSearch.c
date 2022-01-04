#include <stdio.h>

int main(){
    int search, i, n=6;
    int arr[6] = { 12, 34, 68, 74, 165, 54};
    printf("Search any element: ");
    scanf("%d",&search);
    for(i=0;i<n;i++){
        if(arr[i]==search){
            printf("%d is present at location %d.\n",search, i+1);
            break;
        }
    }
    if (i == n)
        printf("%d isn't present in the array.\n",search);
    return 0;
}
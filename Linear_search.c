#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Your code starts here
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int target;
    scanf("%d",&target);
    int length =sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i <length; i++)
    {
        if(arr[i]==target){
            printf("%d\n",i);
        }
        else{
            printf("Not Found\n");
            break;
        }
    }
    
    return 0;
}
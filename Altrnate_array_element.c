#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Your code starts here
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int i;
    int length =sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<length;i+=2){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(i=1;i<length;i+=2){
        printf("%d ",arr[i]);
    }
    return 0;
}
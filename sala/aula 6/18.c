#include <stdio.h>

int main(){
    int arr[] = {7,21,-14,13,2};
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i<len; i++){
        for(int j = i; j<len; j++){
            if (arr[i] > arr[j]){
                arr[j] = arr[i]^arr[j];
                arr[i] = arr[i]^arr[j];
                arr[j] = arr[i]^arr[j];
            }
        }
    }

    for (int i = 0; i<len; i++){
        printf("%d ,", arr[i]);
    }
    return 0;
}
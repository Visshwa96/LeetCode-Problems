#include<stdio.h>
#include<stdlib.h>
int main(){

    int arr[5] = {5,6,7,8,9};
    int k = 3;
    int y = k;
    int res1[5];
    int slice = 0;
    int res2[5] = {0,0,0,0,0};
    for(int i = 0; i<5;i++){
        if(k!=0){
            res1[i]  = arr[k - 1];
            k--;
            slice++;
        }
        else{
        res1[i] = arr[i];
        }
    }


    int length = sizeof(arr) / sizeof(arr[0]);
    int remaining = length - y;

    for(int i = remaining;i<5;i++){
            res2[i] = res1[i];
    }
    int j = length - 1;
    for(int i = 0;i<length;i++){
            if(i >= remaining){
                res1[i] = res2[j];
                j--;
            }

    }

    for(int i = 0; i<length;i++){
        printf("%d",res1[i]);
    }




return 0;
}

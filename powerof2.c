#include<stdio.h>
#include<stdlib.h>
int main(){
    int i = 0;
    int j = 0;
    int prod = 2;
    int n;
    scanf("%d",&n);
    while(i < n){
            if(j == 0){
                j++;
                continue;
            }
        while(j < prod){
            if(i!= n){
            printf("%d ",j);
            }
            else{
                break;
            }
            j++;
            i++;
        }
        prod = (prod * 2);
        printf("\n");

    }
    prod= (prod / 2) - 1;
    int remain = prod - i;
    if(remain != 1){
    for(int i =0; i<remain;i++){
        printf("%c",'*');
    }
    }

    return 0;

}

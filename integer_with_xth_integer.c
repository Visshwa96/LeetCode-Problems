#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n;i++){
        scanf("%d ",&arr[i])    ;
    }
    int count = 0;
    int curr = 0;
    for(int i = 0; i<n;i++){
        curr = arr[i];
        for(int j = (n-1); j>=0; j--){
            count++;
            if(count == curr){
                printf("%d ",arr[j]);
                break;
            }

        }
           count = 0;
}
}

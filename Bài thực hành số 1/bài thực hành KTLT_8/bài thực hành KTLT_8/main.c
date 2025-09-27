#include <stdio.h>
#include <math.h>
int main() {
    int n,laSNT = 1;
    printf("Nhập n: ");scanf("%d",&n);
    if(n < 2){
        laSNT = 0;
    }else{
        for(int i = 2;i <= sqrt(n);i++){
            if(n % i == 0){
                laSNT=0;
                break;
            }
        }
    }
    if(laSNT == 1){
        printf("Là số nguyên tố! \n");
    }else{
        printf("Không phải số nguyên tố! \n");
    }
    return 0;
}

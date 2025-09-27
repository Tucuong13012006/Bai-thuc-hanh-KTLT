#include <stdio.h>
int main() {
    int n,gt=1;
    printf("Nhập n: "); scanf("%d",&n);
    for(int i=n;i>1;i-=2){
        gt=gt*i;
    }
    printf("Giai thừa của %d là: %d\n",n,gt);
    return 0;
}

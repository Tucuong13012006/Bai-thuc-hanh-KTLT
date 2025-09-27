#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    while(n--){
        int gia,tiendua;
        scanf("%d %d",&gia,&tiendua);
        int tienthua=tiendua-gia;
        if(tienthua <= 0){
            printf("0 = 0 * 10 + 0 * 5 + 0 * 1 \n");
        }else{
            int to10,to5,to1;
            to10 = tienthua / 10;
            int tiendu = tienthua % 10;
            if(tiendu >= 5){
                to5 = 1;
                tiendu -= 5;
            }else{
                to5 = 0;
            }
            to1 = tiendu;
            printf("%d = %d * 10 + %d * 5 + %d * 1\n",tienthua,to10,to5,to1);
        }
    }
    return 0;
}

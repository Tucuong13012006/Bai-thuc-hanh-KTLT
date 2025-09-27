#include <stdio.h>
int main() {
    int tg,thang,ls;
    printf("Số tiền gửi: ");scanf("%d",&tg);
    printf("số tháng gửi: ");scanf("%d",&thang);
    printf("Lãi suất: ");scanf("%d",&ls);
    for (int i=0; i<= thang; i++) {
        tg = tg + (tg*ls)/100;
    }
    printf("Số tiền nhận được sau %d tháng gửi ngân hàng là: %d\n",thang,tg);
    return 0;
}

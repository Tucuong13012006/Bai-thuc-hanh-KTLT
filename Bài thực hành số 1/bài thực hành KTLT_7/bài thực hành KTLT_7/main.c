#include <stdio.h>
int main() {
    int tg,tn,ls,thang=0;
    printf("Số tiền gửi: ");scanf("%d",&tg);
    printf("số tiền nhận: ");scanf("%d",&tn);
    printf("Lãi suất: ");scanf("%d",&ls);
    while (tg<tn) {
        tg = tg + (tg*ls)/100;
        thang++;
    }
    printf("Cần ít nhất %d tháng để nhận số tiền là %d\n",thang,tn);
    return 0;
}

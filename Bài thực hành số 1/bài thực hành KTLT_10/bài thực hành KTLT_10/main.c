#include <stdio.h>
#include <math.h>
int main() {
    double tiencan;
    int sothang;
    double laisuat;
    double tiengui;
    printf("Số tiền cần có: ");scanf("%lf",&tiencan);
    printf("Số tháng gửi: ");scanf("%d",&sothang);
    printf("Lãi suất 1 tháng: ");scanf("%lf",&laisuat);
    laisuat = laisuat/100.0;
    double mau=pow(1+laisuat, sothang);
    tiengui=tiencan/mau;
    printf("Số tiền ít nhất phải gửi là: %.2lf \n",tiengui);
    return 0;
}

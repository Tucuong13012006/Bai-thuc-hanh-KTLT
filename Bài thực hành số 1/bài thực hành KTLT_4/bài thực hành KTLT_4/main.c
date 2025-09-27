#include <stdio.h>
#include <string.h>
int main() {
    char hoten[30],xl[30];
    int toan,van,tin,dtb;
    printf("Họ tên: ");gets(hoten);
    fflush(stdin);
    printf("Điểm Toán: "); scanf("%d",&toan);
    printf("Điểm Văn: "); scanf("%d",&van);
    printf("Điểm Tin: "); scanf("%d",&tin);
    dtb = (toan + van + tin) / 3;
    if (dtb >= 8){
        strcpy(xl, "Giỏi");
    }else if(dtb >= 7){
        strcpy(xl, "Khá");
    }else if (dtb >= 5){
        strcpy(xl, "Trung bình");
    }else{
        strcpy(xl, "Yếu");
    }
    return 0;
}

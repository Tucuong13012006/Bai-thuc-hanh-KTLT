#include <stdio.h>
#include <string.h>
int main() {
    char hoten[30];
    int diem;
    float d4;
    char dchu[30];
    printf("Họ tên sinh viên: ");gets(hoten);
    fflush(stdin);
    printf("Điểm: ");scanf("%d",&diem);
    if(diem >=9){
        d4=4.0;
        strcpy(dchu, "A+");
    }else if(diem>=8){
        d4=3.5;
        strcpy(dchu, "A");
    }else if(diem>=7){
        d4=3.0;
        strcpy(dchu, "B+");
    }else if(diem>=6){
        d4=2.5;
        strcpy(dchu, "B");
    }else if(diem>=5){
        d4=2.0;
        strcpy(dchu, "C");
    }else if(diem>=4){
        d4=1.5;
        strcpy(dchu, "D");
    }else{
        d4=1.0;
        strcpy(dchu, "F");
    }
    printf("Sinh viên %s có bảng điểm như sau: \nĐiểm hệ 10: %d\nĐiểm hệ 4: %.1f\nĐiểm chữ: %s\n",hoten,diem,d4,dchu);    return 0;
}

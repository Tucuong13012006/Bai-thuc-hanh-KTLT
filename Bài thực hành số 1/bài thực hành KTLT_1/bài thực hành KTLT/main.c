#include <stdio.h>
int main() {
    char tenmathang[30];
    int trongluong;
    int dongia;
    char machatluong[50];
    int soluong;
    printf("Nhap ten mat hang: ");
    fgets(tenmathang, sizeof(tenmathang), stdin);
    printf("Trong luong: ");
    scanf("%d",&trongluong);
    printf("Don gia: ");
    scanf("%d",&dongia);
    getchar();
    printf("Nhap ma chat luong: ");
    fgets(machatluong, sizeof(machatluong), stdin);
    printf("So luong : ");
    scanf("%d",&soluong);
    printf("\n");
    printf("Ten mat hang: %s\n",tenmathang);
    printf("Trong luong: %d\n",trongluong);
    printf("Don gia: %d\n",dongia);
    printf("Ma chat luong: %s\n",machatluong);
    printf("So luong: %d\n",soluong);
    return 0;
}


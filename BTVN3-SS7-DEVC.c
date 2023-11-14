#include <stdio.h>
int main()
{
    int i,oldMoney, time;
    float rate;
    printf("nhap so tien\n");
    scanf("%d", &oldMoney); 
    printf("Nhap thang:\n");
    scanf(" %d",&time);
    printf("Nhap lai xuat thang\n");
    scanf("%f", &rate);
   
    int moneyReceive=oldMoney;
    for (i = 0; i < time; i++)
    {
        moneyReceive+=moneyReceive*rate;
    } 
    printf("so tien %d thang la: %d",time,moneyReceive);
}

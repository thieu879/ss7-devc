
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    do
    {
        int n,i,temp,f;
        int sum;
        int count;
        printf("Nhập số nguyên n\n");
        scanf("%d", &n);
        int num = ceil(log10(n));
        printf("1. In ra dãy số có giá trị nhỏ hơn hoặc bằng n và tính tổng .\n");
        printf("2. In ra và đếm các số chia hết cho 3 nhỏ hơn n .\n");
        printf("3. Kiểm tra số nguyên có phải số nguyên tố không .\n");
        printf("4. Kiểm tra số nguyên có phải số hoàn hảo không .\n");
        printf("5. Tính tổng các ước số của n .\n");
        printf("6. Tính giai thừa n .\n");
        printf("7. In ra số đảo ngược của n .\n");
        printf("8. In ra các số nguyên tố từ 1-n .\n");
        printf("9. Thoát .");
        printf("Lua chon cua ban:\n");
        int choice;
        scanf("%d", &choice);
   
        switch (choice)
        {
        case 1:

            for (i = 0; i < n; i++)
            {
                printf("%d\n", i);
                sum += i;
            }
            printf("Tổng của các số đó là %d\n", sum);
            break;
        case 2:
            count = 0;
            for (i = 0; i < n; i++)
            {
                if (i % 3 == 0)
                {
                    printf("%d\n", i);
                    count++;
                }
            }
            printf("Số các số nhỏ hơn n và chia hết cho 3 là: %d\n", count);
            break;
        case 3:
            count = 0;
            for (i = 2; i < sqrt(n); i++)
            {
                if (n % i == 0)
                {
                    count++;
                }
            }
            if (count != 0)
            {
                printf("Đó ko phải số nguyển tố\n");
            }
            else
            {
                printf("Đó là số nguyển tố\n");
            }
            break;
        case 4:
            sum = 0;
            for (i = 1; i < n; i++)
            {
                if (n % i == 0)
                {
                    sum += i;
                }
            }
            if (sum == n)
            {
                printf("%d", n);
            }
            break;
        case 5:
            sum = 0;
            for (i = 1; i < n; i++)
            {
                if (n % i == 0)
                {
                    sum += i;
                }
            }
            printf("Tổng các ước của n là %d", sum);
            break;
        case 6:
            sum = 0;
            for (i = 0; i < n; i++)
            {
                sum = sum * i;
            }
            printf("Giai thừa của n là %d %d", sum);
            break;
        case 7:
            temp = 0;
            for (i = 0; i < num; i++)
            {
                temp = temp * 10 + n % 10;

                n = n / 10;
            }
            printf("%d\n", temp);
            break;
        case 8:
            for (i = 2; i < n; i++)
            {
                count = 0;
                for (f = 1; f <= sqrt(i); f++)
                {
                    if (i % f == 0 && f!=1)
                    {
                        count++;
                    }
                }
                if (count==0)
                {
                    printf("%d\n",i);
                }
            }
            break;
        case 9:
            return 0;
        default:
            printf("Vui long chon tu 1-9\n");
        }
    } while ("Vui long cho tu 1 - 9\n");
}

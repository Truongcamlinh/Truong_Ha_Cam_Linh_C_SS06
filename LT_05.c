#include <stdio.h>

int isLeapYear(int y)
{
    return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
}
int main()
{
    int y, m;
    scanf("%d%d", &y, &m);

    if(y<0)
    {
        printf("Nam nhap vao khong hop le");
        return 1;
    }
    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Thang %d nam %d co 31 ngay.", m,y);
        break;
    case 4:
    case 6: 
    case 9:
    case 11:
        printf("Thang %d nam %d co 30 ngay.",m,y);
        break;
    case 2:
        if(isLeapYear(y))
            printf("Thang %d nam %d co 29 ngay.",m,y);
        else
            printf("Thang %d nam %d co 28 ngay.",m,y);
        break;

    default:
        printf("Thang khong hop le.");
        break;
    }
}
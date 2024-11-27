#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
                printf("Phuong trinh vo so nghiem.");
            else
                printf("Phuong trinh vo nghiem.");
        }
        else
            printf("Phuong trinh co nghiem: x = %.2f", -c / b);
    }
    else
    {
        float d = b * b - 4 * a * c;
        if (d < 0)
            printf("Phuong trinh vo nghiem.");
        else if (d == 0)
            printf("Phuong trinh co nghiem kep: x = %.2f", -b / 2 * a);
        else
            printf("Phuong trinh có nghiem kep: \nx1 = %.2f\nx2 = %.2f", (-b + sqrt(d)) / 2 * a, (-b - sqrt(d)) / 2 * a);
    }
}
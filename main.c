#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, x, y, bit, i, j, sum0, sum1, array[6], k, a;

    float sonuc, bolen, carpan;

    srand(time(NULL));

    n = rand() % 6 + 5;

    for (j = 0; j < n; j++)
    {
        for (;;)
        {
            sum0 = 0;
            sum1 = 0;

            y = rand() % 3 + 1;
            x = 5 - y;

            array[0] = j + 1;

            for (i = 1; i <= 5; i++)
            {

                bit = rand() % 2;

                if (bit == 0)
                {
                    sum0++;
                }
                if (bit == 1)
                {
                    sum1++;
                }
                array[i] = bit;
            }
            if (sum1 + 1 == sum0 || sum0 + 1 == sum1)
            {

                printf("%d. Sayi: ", array[0], array[0]);

                for (i = 1; i <= 5; i++)
                {
                    printf("%d", array[i]);
                }
                printf("\t");
                printf("x: %d  y: %d", x, y);

                sonuc = 0.0;

                for (a = 1; a <= x; a++)
                {
                    if (array[a] == 1)
                    {

                        carpan = 1.0;

                        for (k = 0; k < (x - a); k++)
                        {
                            carpan = carpan * 2.0;
                        }
                        sonuc = sonuc + carpan;
                    }
                }
                for (a = x + 1; a <= 5; a++)
                {
                    if (array[a] == 1)
                    {
                        bolen = 2.0;

                        for (k = 0; k < a - (x + 1); k++)
                        {
                            bolen = bolen * 2.0;
                        }
                        sonuc = sonuc + (1.0 / bolen);
                    }
                }

                printf("\t sonuc: %.3f\n", sonuc);

                break;
            }
        }
        printf("\n");
    }
    return 0;
}

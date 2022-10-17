#include <stdbool.h>
#include <stdio.h>
#include <stdarg.h>
#include <inttypes.h>
#include <ctype.h>

static int A;
static int B;
int characters[][5] = {
    {254, 9, 9, 9, 254},       // A
    {255, 137, 137, 137, 118}, // B
    {126, 129, 129, 129, 129}, // C
    {255, 129, 129, 129, 126}, // D
    {255, 137, 137, 137, 137}, // E
    {255, 9, 9, 9, 1},         // F
    {126, 129, 129, 145, 243}, // G
    {255, 8, 8, 8, 255},       // H
    {129, 129, 255, 129, 129}, // I
    {96, 128, 129, 127, 1},    // J
    {255, 8, 20, 34, 193},     // K
    {255, 128, 128, 128, 128}, // L
    {255, 2, 12, 2, 255},      // M
    {255, 2, 60, 64, 255},     // N
    {126, 129, 129, 129, 126}, // O
    {255, 9, 9, 9, 6},         // P
    {126, 129, 161, 65, 190},  // Q
    {255, 25, 41, 73, 134},    // R
    {134, 137, 137, 137, 113}, // S
    {1, 1, 255, 1, 1},         // T
    {127, 128, 128, 128, 127}, // U
    {63, 96, 192, 96, 63},     // V
    {127, 128, 112, 128, 127}, // W
    {195, 36, 24, 36, 195},    // X
    {3, 4, 248, 4, 3},         // Y
    {193, 161, 145, 137, 135}, // Z
    {126, 161, 137, 133, 126}, // 0
    {132, 130, 255, 128, 128}, // 1
    {194, 161, 145, 137, 134}, // 2
    {66, 137, 137, 137, 118},  // 3
    {12, 10, 137, 255, 136},   // 4
    {199, 137, 137, 137, 248}, // 5
    {126, 137, 137, 137, 114}, // 6
    {1, 1, 249, 5, 2},         // 7
    {118, 137, 137, 137, 118}, // 8
    {70, 137, 137, 137, 126}   // 9
};

int main()
{
    char A_char[10];
    printf("\n TICKERTAPE");
    printf("\n CREATIVE COMPUTING");
    printf("\n MORRISTOWN, NEW JERSEY\n");
    scanf("\n%s", &A_char);

    /*for (int N = 0; N < (sizeof A_char) / (sizeof A_char[0]); N++)
    {
        if (isalpha(A_char[N]) || isdigit(A_char[N])) {
            B = (int)A_char[N];
            printf("\n%d,%d,%s", B, &B, &B);
        }
    }
    printf("\n");*/
    for (int N = 0; N < (sizeof A_char) / (sizeof A_char[0]); N++)
    {
        if (isalpha(A_char[N]) || isdigit(A_char[N]))
        {
            B = (int)A_char[N];
            // printf("\n%d\n", B);
            if (48 <= B && B <= 60)
                B = B - 22;
            else if (65 <= B && B <= 90)
                B = B - 65;
            else
                printf("ERROR");
            for (int j = 0; j < 5; j++)
            {
                print_symbol(characters[B][j]);
            }
            printf("\n");
        }
    }
}
void print_symbol(int a)
{
    for (int i = 1; i <= 8; i++)
    {
        if (a < 128)
        {
            printf(" ");
            a = a * 2;
        }
        else
        {
            printf("*");
            a = a - 128;
            a = a * 2;
        }
    }
    printf("\n");
}
#include <stdio.h>

int main(void)
{
    int row1, row2, row3, row4;
    int column1, column2, column3, column4;
    int diagonal1, diagonal2;

    int n1, n2, n3, n4, n5, n6, n7, n8,
        n9, n10, n11, n12, n13, n14, n15, n16;

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
          &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8,
          &n9, &n10, &n11, &n12, &n13, &n14, &n15, &n16);

    row1 = n1 + n2 + n3 + n4;
    row2 = n5 + n6 + n7 + n8;
    row3 = n9 + n10 + n11 + n12;
    row4 = n13 + n14 + n15 + n16;

    column1 = n1 + n5 + n9 + n13;
    column2 = n2 + n6 + n10 + n14;
    column3 = n3 + n7 + n11 + n15;
    column4 = n4 + n8 + n12 + n16;

    diagonal1 = n1 + n6 + n11 + n16;
    diagonal2 = n4 + n7 + n10 + n13;

    printf("%d %d %d %d\n", n1, n2, n3, n4);
    printf("%d %d %d %d\n", n5, n6, n7, n8);
    printf("%d %d %d %d\n", n9, n10, n11, n12);
    printf("%d %d %d %d\n", n13, n14, n15, n16);

    printf("Row sums: %d %d %d %d\n", row1, row2, row3, row4);
    printf("Column sums: %d %d %d %d\n", column1, column2, column3, column4);
    printf("Diagonal sums: %d %d\n", diagonal1, diagonal2);

    return 0;
}
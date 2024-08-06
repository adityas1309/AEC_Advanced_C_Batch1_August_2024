/*Find all possible those numbers which when multiply by 3 will produce the product number
as output whether the first digit of the source number at the last in the product and
all other digits will maintain the same sequence.
As example -
                         1 0 2 1 2
        xy......z        1 4 2 8 5 7
              x 3                x 3
        ---------      -------------
        y......zx        4 2 8 5 7 1

        or[7 5 8 2 4 1]             TRACING TABLE
                                    =============
INDEX->    0 1 2 3 4 5              or[0] = pr[1]    (0+1)%6= 1
                                    or[1] = pr[2]    (1+1)%6= 2
        pr[1 7 5 8 2 4]             or[2] = pr[3]    (2+1)%6= 3
It will store the digit             or[3] = pr[4]    (3+1)%6= 4
backwards in the array              or[4] = pr[5]    (4+1)%6= 5
                                    or[5] = pr[0]    (5+1)%6= 0

*/

#include <stdio.h>

int main() {
    int count=0;
    printf("Performing the checks........\n\n");
    for (int i = 1; i < 1000000; i++) {
        int product = i * 3;
        int original_digits[10];
        int product_digits[10];
        int i_count = 0, j_count = 0;

        // Extract digits of the original number
        int original_num = i;
        while (original_num > 0) {
            original_digits[i_count] = original_num % 10;
            original_num /= 10;
            i_count++;
        }

        // Extract digits of the product
        int product_num = product;
        while (product_num > 0) {
            product_digits[j_count] = product_num % 10;
            product_num /= 10;
            j_count++;
        }

        // Check if the product has the same digits as the original number and sequence is same or not
        if (i_count == j_count) {
            int flag = 1;
            for (int k = 0; k < i_count; k++) {
                if (original_digits[k]!= product_digits[(k + 1) % i_count]) {
                    flag = 0;
                    break;
                }
            }
            if (flag) {
                printf("\nThe number is = %d and the product is = %d\n", i,i*3);
                count++;
            }
        }

    }
    printf("\nThere are total %d numbers which satisfy the condition\n",count);
    printf("\nEnd of the program....\n");
    return 0;
}

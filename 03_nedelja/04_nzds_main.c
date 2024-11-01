#include<stdio.h>
#include "nzds.h"

int main() {

    for(int i = 2; i <= 20; i++) {
        for(int j = 1; j < i; j++) {
            int rez_nzd = nzd(i, j);
            int rez_nzs = nzs(i, j);

            printf("NZD(%i, %i) = %i\n NZS(%i, %i) = %i\n\n", i, j, rez_nzd, i, j, rez_nzs);
        }
    }

    return 0;
}
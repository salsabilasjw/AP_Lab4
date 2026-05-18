#include <stdio.h>

int main() {
    int n;
    int a = 1;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        printf("%d", a);

        if(i < n) {
            printf(", ");
        }

        if(i % 4 == 1)
            a = a + 7;
        else if(i % 4 == 2)
            a = a + 8;
        else if(i % 4 == 3)
            a = a + 7;
        else
            a = a * 2;
    }

    return 0;
}
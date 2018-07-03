#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Number: ");
    scanf("%d", &n);

    printf("\n");

    for (int i = 1; i <= n; i++) {
        if(i != n) {
            printf("%d + ", i);
        }
        else {
            printf("%d = ", i);
        }
    }

    printf("%d\n\n", (n*(n+1))/2);

    system("PAUSE");
    return 0;
}
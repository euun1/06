#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int combination();
int factorial(int n);
int get_integer();

int combination() {
    int n = get_integer();
    int r = get_integer();

    int x = factorial(n);
    int y = factorial(r) * factorial(n - r);
    return x / y;
}

int factorial(int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

int get_integer() {
    int input;
    printf("������ �Է��ϼ���: \n");
    scanf("%d", &input);
    return input;
}

int main() {
    int n, r;
    int result;

    printf("n ���� �Է��ϼ���: ");
    n = get_integer();

    printf("r ���� �Է��ϼ���: ");
    r = get_integer();

    result = combination();

    printf("%dC%d = %d\n", n, r, result);
    
    system("PAUSE");
    return 0;
}


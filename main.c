#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a, int b)
{
	return a+b;
}

int square(int n) 
{
    int r = n * n;
    return r;
}

int get_max(int x, int y) 
{
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

int main(void) {
	int num1=2;
	int num2=3;
	
	int result = sumTwo(num1, num2);
	printf("%d\n hello world!\n", result);
	
	int s1 = square(num1);
    int s2 = square(num2);
    printf("%d\n%d\n hello world!\n", s1, s2);
    
    int max = get_max(num1, num2);
    printf("%d\n hello world!\n", max);
	
	system("PAUSE");
	return 0;
}

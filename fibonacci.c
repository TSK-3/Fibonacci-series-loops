#include<Stdio.h>

int main() {
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    int fib[n];
    fib[0] =0;
    fib[1] =1;

    if(n<o)
    printf("Enter a valid value of n ");

    else

    for(int i=2;i<n;i++) {
        fib[i] = fib[i-1] +fib[i-2];
        printf("%d \t",fib[i]);
    }
    printf("\n");

    return 0;
}

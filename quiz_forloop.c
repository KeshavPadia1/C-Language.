#include <stdio.h>

int main() {
    int n;
    printf("Enter the number n till which you want to print natural numbers\n");
    scanf("%d" , &n);
    for (int i = 1; i <= n; i++){
        printf("%d\n" , i);
    }
    
    return 0;
}

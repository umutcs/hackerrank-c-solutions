#include <stdio.h>

// Function to convert a number to its English representation
void numberToWords(int num) {
    char *ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    if (1 <= num && num <= 9) {
        printf("%s\n", ones[num]);
    } else if (num % 2 == 0) {
        printf("even\n");
    } else {
        printf("odd\n");
    }
}

int main() {
    int n, m;
    
    // Input
    scanf("%d", &n);
    scanf("%d", &m);
    
    // Process numbers in the interval [n, m]
    for (int i = n; i <= m; i++) {
        numberToWords(i);
    }
    
    return 0;
}


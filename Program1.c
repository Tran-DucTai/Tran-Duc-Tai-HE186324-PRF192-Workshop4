#include <stdio.h>

// Function to check whether a number is prime or not
int isPrime(int n) {
    if (n <= 1) {
        return 0; // Not a prime number
    }

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0; // Not a prime number
        }
    }

    return 1; // Prime number
}

// Function to print the minimum and maximum digits in an integer
void printMinMaxDigits(int n) {
    int minDigit = 9;
    int maxDigit = 0;

    while (n > 0) {
        int digit = n % 10;
        if (digit < minDigit) {
            minDigit = digit;
        }
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        n /= 10;
    }

    printf("Minimum digit: %d\n", minDigit);
    printf("Maximum digit: %d\n", maxDigit);
}

int main() {
    int choice, n;

    do {
        // Print menu
        printf("1- Process primes\n");
        printf("2- Print min, max digit in an integer\n");
        printf("3- Quit\n");
        printf("Select an operation: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                do {
                    printf("Enter a positive integral number: ");
                    scanf("%d", &n);
                } while (n < 0);

                if (isPrime(n)) {
                    printf("%d is a prime number\n", n);
                } else {
                    printf("%d is not a prime number\n", n);
                }
                break;

            case 2:
                do {
                    printf("Enter a positive integral number: ");
                    scanf("%d", &n);
                } while (n < 0);

                printMinMaxDigits(n);
                break;

            case 3:
                printf("Quitting the program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please enter a number between 1 and 3.\n");
        }
    } while (choice != 3);

    return 0;
}


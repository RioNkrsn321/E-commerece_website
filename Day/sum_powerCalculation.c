include <stdio.h>
/*Detyra 1*/
/**
 * @brief Calculates the sum of the digits of a given positive integer recursively.
 *
 * @param n The integer whose digits are to be summed.
 *
 * @return int The sum of the digits of the integer.
 */
int sum_of_digits(int n) {
    // Base case: if n is 0, return 0
    if (n == 0) {
        return 0;
    }
    // Recursive case: add the last digit to the sum of the digits of the rest of the number
    return (n % 10) + sum_of_digits(n / 10);
}

int main() {
    // Test cases
    int result1 = sum_of_digits(1234);
    int result2 = sum_of_digits(567);
    int result3 = sum_of_digits(0);

    // Print results
    printf("sum_of_digits(1234) = %d\n", result1); // Expected output: 10
    printf("sum_of_digits(567) = %d\n", result2);  // Expected output: 18
    printf("sum_of_digits(0) = %d\n", result3);    // Expected output: 0

    return 0;
}



/*Detyra 2*/
#include <stdio.h>

/**
 * @brief Calculates the result of raising a base number to a given exponent recursively.
 *
 * @param base The base number.
 * @param exponent The exponent to which the base number is raised.
 *
 * @return int The result of base raised to the power of exponent.
 */
int power(int base, int exponent) {
    // Base case: any number raised to the power of 0 is 1
    if (exponent == 0) {
        return 1;
    }
    // Recursive case: base * base^(exponent - 1)
    return base * power(base, exponent - 1);
}

int main() {
    // Test cases
    int result1 = power(2, 3);
    int result2 = power(5, 0);
    int result3 = power(3, 4);

    // Print results
    printf("power(2, 3) = %d\n", result1); // Expected output: 8
    printf("power(5, 0) = %d\n", result2); // Expected output: 1
    printf("power(3, 4) = %d\n", result3); // Expected output: 81

    return 0;
}

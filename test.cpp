/*
 * This program demonstrates two functionalities:
 * 1. It defines a function `is_prime(int n)` to check if a given integer `n` is a prime number.
 *    - Returns 1 if `n` is prime, 0 otherwise.
 *    - Uses trial division up to the square root of `n` for efficiency.
 *
 * 2. In the `main` function:
 *    - Prints "Hello, world!" to the console.
 *    - Attempts to compute and print the factorial of 5 using a `factorial` function (which is assumed to be defined elsewhere).
 *    - Iterates through numbers 1 to 10, checks for primality using `is_prime`, and prints all prime numbers in this range.
 */
// 判断并打印10以内的素数
int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    std::printf("Hello, world!\n");

    // 计算并打印5的阶乘
    int num = 5;
    std::printf("Factorial of %d is %llu\n", num, factorial(num));

    // 判断并打印10以内的素数
    std::printf("Prime numbers between 1 and 10: ");
    for (int i = 1; i <= 10; ++i) {
        if (is_prime(i)) {
            std::printf("%d ", i);
        }
    }
    std::printf("\n");

    return 0;
}
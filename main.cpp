#include <iostream>
using namespace std;

float x = 0.1; int y = 0;

int mult(int a, int b);
int fact(int n);
int fib(int a);
int sum(int n);
void count(int n);
int digits(int n);
int dsum(int n);
int power(int a, int b);
bool isPalindrome(int n);
int reverse(int n);
bool isPrime(int n, int divisor);

int main() {
    /* problem 1
    int a, b;
    cout << "Please enter two integers: ";
    cin >> a >> b;
    cout << "The product is: " << mult(a, b) << endl; */
    /* problem 2
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of " << n << " is " << fact(n) << endl; */
    /* problem 3
    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << "The fibonacci number is: " << fib(a) << endl; */
    /* problem 4
    int n;
    cin >> n;
    cout << sum(n); */
    /* problem 5
    int n;
    cin >> n;
    count(n); */
    /* problem 6
    int n;
    cin >> n;
    cout << digits(n); */
    /* problem 7
    int n;
    cin >> n;
    cout << dsum(n) << endl; */
    /* problem 8
    int a, b;
    cin >> a >> b;
    cout << power(a, b) << endl; */
    /* problem 9
    int n;
    cin >> n;
    reverse(n);
    cout << y/10; */
    /* problem 10
    int n;
    cin >> n;
    cout << isPalindrome(n) << endl; */
    /* problem 11
    int n;
    cin >> n;
    if (isPrime(n, 2)) cout << "Prime" << endl;
    else cout << "Not prime" << endl; */
    return 0;
}

int mult(int a, int b) {
    if (b == 0) {
        return 0;
    } else {
        return a + mult(a, b - 1);
    }
    if (b < 0) {
        return -mult(a, -b);
    }
}
int fact(int n) {
    if (n == 0) {
        return 1;
    }
    return n * fact(n-1);
}
int fib(int n) {
    if (n == 1 || n == 0) {
        return n;
    }
    return fib(n-1) + fib(n-2);
}
int sum(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sum(n-1);
}
void count(int n) {
    if (n == 1) {
        cout << "1";
    } else {
        cout << n << " "; count(n-1);
    }
}
int digits(int n) {
    if (n < 10) {
        return 1;
    }
    return 1 + digits(n/10);
}
int dsum(int n) {
    if (n == 0) {
        return 0;
    }
    return n % 10 + dsum(n/10);
}
int power(int a, int b) {
    if (b == 0) {
        return 1;
    }
    return a * power(a, b-1);
}
int reverse(int n) {
    if (n == 0) {
        return 0;
    }
    int d = digits(n);
    y += (n % 10) * pow(10, d);
    reverse(n/10);

}
bool isPalindrome(int n) {
    reverse(n);
    y /= 10;
    if (n == y) {
        return true;
    }
    return false;
}
bool isPrime(int n, int divisor) {
    if (divisor * divisor > n) {
        return true;
    }
    if (n % divisor == 0) {
        return false;
    }
    return isPrime(n, divisor + 1);
}
#include <iostream>
using namespace std;

int countDigit(int n) {
    int count = 0;
    while (n) {
        count++;
        n = n / 10;
    }
    return count;
}

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

bool armstrong(int num, int digit) {
    int n = num, ans = 0, rem;
    while (n) {
        rem = n % 10;
        n = n / 10;
        ans += power(rem, digit);
    }
    return ans == num;
}

int main() {
    int num = 153;
    int digit = countDigit(num);
    cout << "Number of digits: " << digit << endl;
    
    if (armstrong(num, digit)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}

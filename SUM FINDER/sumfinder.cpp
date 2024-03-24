#include <iostream>
using namespace std;

int computeSeriesSum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i * (i + 1) / 2;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    
    int sum = computeSeriesSum(n);
    cout << "Sum of series: " << sum << endl;

    return 0;
}

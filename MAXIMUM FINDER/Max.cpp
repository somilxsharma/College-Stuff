#include <iostream>

using namespace std;

int maximum(int *a, int *b, int *c) {
    int max = *a;
    if (*b > max)
        max = *b;
    if (*c > max)
        max = *c;
    return max;
}

int main() {
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    cout << "Maximum number is: " << maximum(&a, &b, &c) << endl;

    return 0;
}

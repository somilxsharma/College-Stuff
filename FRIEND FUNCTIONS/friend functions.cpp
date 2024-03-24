#include <iostream>
using namespace std;

class Integer {
private:
    int value;
public:
    Integer(int val) : value(val) {}

    friend Integer operator+(const Integer& num1, const Integer& num2) {
        return Integer(num1.value + num2.value);
    }

    int display(){
        return value;
    }
};

int main() {
    Integer num1(5);
    Integer num2(3);

    Integer sum = num1 + num2;

    cout << "Sum: " << sum.display() << endl;

    return 0;
}

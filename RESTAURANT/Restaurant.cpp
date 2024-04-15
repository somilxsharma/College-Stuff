#include <iostream>

using namespace std;

class Bill {
protected:
    float totalBill;
public:
    Bill() : totalBill(0) {}

    void addToBill(float amount) {
        totalBill += amount;
    }

    virtual void printBill() {
        cout << "Total Bill: $" << totalBill << endl;
    }
};

class RestaurantBill : public Bill {
private:
    float tip;
public:
    RestaurantBill(float t) : tip(t) {}

    void calculateBill(float amount) {
        addToBill(amount + (amount * tip / 100));
    }

    void printBill() override {
        cout << "Total Restaurant Bill including " << tip << "% tip: $" << totalBill << endl;
    }
};

int main() {
    RestaurantBill rb(10); // 10% tip
    rb.calculateBill(50); // assuming the bill amount is $50
    rb.printBill();

    return 0;
}

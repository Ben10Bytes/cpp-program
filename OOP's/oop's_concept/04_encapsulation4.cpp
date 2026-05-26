#include<iostream>
#include<string>
using namespace std;

class LaptopOrder {
    private:
        double price;
        int quantity;
        double total;

        void calculateTotal() {
            total = price * quantity;
        }

public:
        LaptopOrder(double laptoprice, int initialQty) {
            price = laptoprice;
            if (initialQty > 0) {
                quantity = initialQty;
            } else {
                quantity = 1;
            }
            calculateTotal();
        }

        void updateQuantity(int newQty) {
            if (newQty > 0) {
                quantity = newQty;
                calculateTotal();
                cout << "--> Quantity updated to: " << quantity << endl;
            } else {
                cout << "Invalid quantity!" << endl;
            }
        }
        double getPrice() const { return price; }
        int getQuantity() const { const { return quantity;}}
}

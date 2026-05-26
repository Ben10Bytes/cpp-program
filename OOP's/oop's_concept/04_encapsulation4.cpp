#include <iostream>
#include <string>

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
    LaptopOrder(double laptopPrice, int initialQty) {
        price = laptopPrice;
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
    int getQuantity() const { return quantity; }
    double getTotal() const { return total; }

    void displayInvoice() const {
        cout << "Laptop Price : " << price << endl;
        cout << "Quantity     : " << quantity << endl;
        cout << "Total Amount : " << total << endl;
        cout << "-----------------------------------" << endl;
    }
};

int main() {
    cout << "--- Initial Order ---" << endl;
    LaptopOrder order(55000.0, 2);
    order.displayInvoice();

    order.updateQuantity(3);
    order.displayInvoice();

    return 0;
}
#include <iostream>
#include <string>
#include <cmath>
#include <windows.h>
using namespace std;

int main() {
    // Define available items
    string itemNames[] = {"T-shirt", "Jeans", "Sweater"};
    double itemPrices[] = {20, 30, 50};
    int itemQuantities[] = {8, 6, 6};

    // Define user's cart
    const int maxCartSize = 10;
    string cartNames[maxCartSize];
    double cartPrices[maxCartSize];
    int cartQuantities[maxCartSize];
    int cartSize = 0;

    int choice;
    cout << "      .-.                       .                   " << endl;
    cout << "        /  |                   /                    " << endl;
    cout << "       /\\  |    .-.       .-../        .-.     ).--." << endl;
    cout << "      /  \\ |   (  |      (   /       ./.-'_   /     " << endl;
    cout << " .-' /    \\|    `-'-'     `-'-..     (__.'   /      " << endl;
    cout << "(__.'      `.                                       " << endl;
    cout << "         .-.                                        " << endl;
    cout << "   .--.-'         /                                  " << endl;
    cout << "  (  (_)         /-.    .-._.   .-.                  " << endl;
    cout << "   `-.          /   |  (   )    /  )                 " << endl;
    cout << " _    )      _.'    |   `-'    /`-'                  " << endl;
    cout << "(_.--'                        /                      " << endl;
 cout << endl; // Add an extra empty line

    while (true) {
        cout << "*************************\n\n";
        cout << "* 1. View items         \n\n";
        cout << "* 2. Add item to cart   \n\n";
        cout << "* 3. View cart          \n\n";
        cout << "* 4. Delete item from cart \n\n";
        cout << "* 5. Exit               \n\n";
        cout << "*************************\n\n";
        cout << "Enter your choice: ";
        cin >> choice;
        Beep(1500, 500);
        if (choice == 1) {
            cout << "\nAvailable items:\n\n";
            Beep(1500, 500);
            cout << "*************************\n";
            for (int i = 0; i < 3; ++i) {
                cout << i + 1 << ". " << itemNames[i] << " - $" << itemPrices[i] << " - Quantity: " << itemQuantities[i] << endl;
            }
            cout << "*************************\n\n";
            cout << endl; // Add an extra empty line
        } else if (choice == 2) {
            int itemIndex, quantity;
            cout << "Note that your maximum number of items is 10\n\n";
            Beep(1500, 500);
            cout << "Enter the item number to add to cart: \n";
            Beep(1500, 500);
            cin >> itemIndex;
            cout << "Enter the quantity: \n";
            Beep(1500, 500);
            cin >> quantity;
            if (itemIndex >= 1 && itemIndex <= 3) {
                int index = itemIndex - 1;
                if (itemQuantities[index] >= quantity) {
                    cartNames[cartSize] = itemNames[index];
                    cartPrices[cartSize] = itemPrices[index];
                    cartQuantities[cartSize] = quantity;
                    itemQuantities[index] -= quantity;
                    ++cartSize;
                    cout << "Item added to cart.\n";
                    Beep(1500, 500);
                } else {
                    cout << "Insufficient quantity available.\n";
                    Beep(1500, 500);
                }
            } else {
                cout << "Invalid item number.\n";
                Beep(1500, 500);
            }
            cout << endl; // Add an extra empty line
        } else if (choice == 3) {
            cout << "Items in your cart:\n";
            Beep(1500, 500);
            double totalPrice = 0;
            for (int i = 0; i < cartSize; ++i) {
                cout << i + 1 << ". " << cartNames[i] << " - $" << cartPrices[i] << " x " << cartQuantities[i] << endl;
                totalPrice += cartPrices[i] * cartQuantities[i];
            }
            cout << "Total price: $" << totalPrice << endl;
            Beep(1500, 500);
            cout << endl; // Add an extra empty line
        } else if (choice == 4) {
            int itemIndex;
            cout << "Enter the item number to delete from cart: \n";
            cin >> itemIndex;
            if (itemIndex >= 1 && itemIndex <= cartSize) {
                int index = itemIndex - 1;
                cout << "Item " << cartNames[index] << " removed from cart.\n";
                // Shift items to fill the gap
                for (int i = index; i < cartSize - 1; ++i) {
                    cartNames[i] = cartNames[i + 1];
                    cartPrices[i] = cartPrices[i + 1];
                    cartQuantities[i] = cartQuantities[i + 1];
                }
                --cartSize; // Reduce cart size
            } else {
                cout << "Invalid item number.\n";
                Beep(1500, 500);
            }
            cout << endl; // Add an extra empty line
        } else if (choice == 5) {
            cout << "\nThank you\n" << endl;
            cout << " _________" << endl;
    cout << "/ ======= \\" << endl;
    cout << "/ __________\\" << endl;
    cout << "| ___________ |" << endl;
    cout << "| | -       | |" << endl;
    cout << "| |         | |" << endl;
    cout << "| |_________| |__________________" << endl;
    cout << "\\=____________/   Nader Mohamed " << endl;
    cout << " / \"\"\"\"\"\"\"\"\"\"\" \\                       /" << endl;
    cout << "/ ::::::::::::: \\                           '" << endl;
    cout << "(_________________)" << endl;
    return 0;


        }
    }

}

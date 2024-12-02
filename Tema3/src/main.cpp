#include "ShoppingCart.h"

int main()
{
    ShoppingCart cart1;
    cart1.addItem("Otet");
    cart1.addItem("Banane");

    ShoppingCart cart2;
    cart2 = cart1; // cpy assignment operator
    cart2.addItem("Prune");

    ShoppingCart cart3;
    cart3 = std::move(cart1); // move -"-

    cart2.displayCart();
    cart3.displayCart();

    cart1.displayCart();

    return 0;
}

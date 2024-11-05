#include "ShoppingCart.h"

int main()
{
    ShoppingCart cart1;
    cart1.addItem("Apple");
    cart1.addItem("Banana");

    // copy constr
    ShoppingCart cart2 = cart1;
    cart2.addItem("Orange");

    // move constr
    ShoppingCart cart3 = std::move(cart1);

    cart2.displayCart(); // Should be Apple, Banana, Orange
    cart3.displayCart(); // Should be Apple, Banana
    // cart1 e gol pt ca move cosntr

    return 0;
}

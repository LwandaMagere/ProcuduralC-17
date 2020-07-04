#include <iostream>
#include "namesp.h"

void other(void);
void another(void);

int main(void)
{
    using debts::Debt;
    
    using debts::showDebt;
    Debt golf = { {"Benny", "Goatsniff"}, 120.0 };
    showDebt(golf);
    other();
    another();
    return 0;
}
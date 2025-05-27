#include "Harl.hpp"
#include <limits>

int main(void)
{
    Harl harl;
    int complain_amount = std::numeric_limits<int>::max() - 1;
    for (int i = std::numeric_limits<int>::min() + 1; i < complain_amount; i++)
    {
        std::cout << "i: " << i << "/" << complain_amount << ": ";
        int complain_level = std::abs(i % 4);
        switch (complain_level)
        {
            case 0: harl.complain("DEBUG"); break;
            case 1: harl.complain("INFO"); break;
            case 2: harl.complain("WARNING"); break;
            case 3: harl.complain("ERROR"); break;
        }
    }
    return 0;
}

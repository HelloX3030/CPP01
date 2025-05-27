#include "Harl.hpp"
#include <limits>

int main(void)
{
    Harl harl;
    int64_t complain_amount = std::numeric_limits<int64_t>::max() - 1;
    for (int64_t i = std::numeric_limits<int64_t>::min() + 1; i < complain_amount; i++)
    {
        std::cout << "i: " << i << "/" << complain_amount << ": ";
        int64_t complain_level = std::abs(i % 4);
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

#include "Harl.hpp"
#include <limits>

int main(void)
{
    Harl harl;
    uint64_t complain_amount = std::numeric_limits<uint64_t>::max() - 1;
    for (uint64_t i = 0; i < complain_amount; i++)
    {
        std::cout << "i: " << i << "/" << complain_amount << ": ";
        switch (i % 4)
        {
            case 0: harl.complain("DEBUG"); break;
            case 1: harl.complain("INFO"); break;
            case 2: harl.complain("WARNING"); break;
            case 3: harl.complain("ERROR"); break;
        }
        std::cout << std::endl;
    }
    return 0;
}

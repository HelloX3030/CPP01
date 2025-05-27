#include "Harl.hpp"
#include <limits>

int main(int argc, char **argv)
{
    if (argc != 2)
        return (std::cerr << "Usage: " << argv[0] << " <level>" << std::endl, EXIT_FAILURE);
    Harl harl(argv[1]);
    // uint64_t complain_amount = std::numeric_limits<uint64_t>::max() - 1;
    uint64_t complain_amount = 10;
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
    return EXIT_SUCCESS;
}

#include "hamming.h"
#include <stdexcept>

using namespace std;

namespace hamming {

    std::string::size_type compute(std::string_view strA, std::string_view strB)
    {
        if (strA.size() != strB.size())
        {
            throw std::domain_error("Sizes are not equal");
        }

        std::string::size_type distance = 0;

        for (auto iterA = strA.begin(), iterB = strB.begin(); iterA != strA.end(); ++iterA, ++iterB)
        {
            if (*iterA != *iterB)
            {
                ++distance;
            }
        }

        return distance;
    }
}  // namespace hamming

#include "hamming.h"
#include <stdexcept>

using namespace std;

namespace hamming {

    int compute(const std::string strA, const std::string strB)
    {
        if (strA.size() != strB.size())
        {
            throw std::domain_error("Sizes are not equal");
        }

        if (strA.size() == 0 || strB.size() == 0)
        {
            return 0;
        }

        int distance = 0;

        for (auto iterA = strA.begin(), iterB = strB.begin(); iterA < strA.end(); ++iterA, ++iterB)
        {
            if (*iterA != *iterB)
            {
                ++distance;
            }
        }

        return distance;
    }
}  // namespace hamming

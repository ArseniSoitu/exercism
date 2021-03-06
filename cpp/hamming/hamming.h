#if !defined(HAMMING_H)
#define HAMMING_H

#include <string>

namespace hamming {
    std::string::size_type compute(std::string_view strA, std::string_view strB);
}  // namespace hamming

#endif // HAMMING_H
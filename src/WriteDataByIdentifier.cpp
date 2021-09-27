#include "WriteDataByIdentifier.h"
#include <iostream>

namespace Uds {
    void WriteDataByIdentifier::ProcessData(std::vector<char> &input)  {
        for (auto i = input.begin(); i != input.end(); ++i)
            std::cout << *i;
    }
}
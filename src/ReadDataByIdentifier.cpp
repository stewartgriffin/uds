#include "ReadDataByIdentifier.h"
#include <iostream>

namespace Uds {
    void ReadDataByIdentifier::ProcessData(std::vector<char> &buffer)  {
        for (auto i = buffer.begin(); i != buffer.end(); ++i)
            std::cout << *i;
    }
}
#include "EcuReset.h"
#include <iostream>

namespace Uds {
    void EcuReset::ProcessData(std::vector<char> buffer)  {
        for (auto i = buffer.begin(); i != buffer.end(); ++i)
            std::cout << *i;
    }
}
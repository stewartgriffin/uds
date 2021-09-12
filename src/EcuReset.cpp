//
// Created by Tomasz Ziajko on 11/09/2021.
//

#include "EcuReset.h"
#include <iostream>

namespace Uds {
    void EcuReset::ProcessData(std::vector<char> buffer)  {
        for (auto i = buffer.begin(); i != buffer.end(); ++i)
            std::cout << *i;
    }
}
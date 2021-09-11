//
// Created by Tomasz Ziajko on 27/05/2021.
//

#include "ReadDataByIdentifier.h"
#include <iostream>

namespace Uds {
    void ReadDataByIdentifier::ProcessData(std::vector<char> buffer)  {
        for (auto i = buffer.begin(); i != buffer.end(); ++i)
            std::cout << *i;
    }
}
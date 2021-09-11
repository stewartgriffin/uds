//
// Created by Tomasz Ziajko on 28/05/2021.
//

#include "WriteDataByIdentifier.h"
#include <iostream>

namespace Uds {
    void WriteDataByIdentifier::processData(std::vector<char> buffer)  {
        for (auto i = buffer.begin(); i != buffer.end(); ++i)
            std::cout << *i;
    }
}
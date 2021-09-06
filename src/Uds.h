//
// Created by Tomasz Ziajko on 27/05/2021.
//

#ifndef UDS_UDS_H
#define UDS_UDS_H

#include <vector>
#include "ReadDataByIdentifier.h"

class Diag {
public:
    Diag() {}
    void Request(std::vector<char> input){}
    void Tick(unsigned int period){}
private:

};


#endif //UDS_UDS_H

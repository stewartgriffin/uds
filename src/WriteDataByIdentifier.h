//
// Created by Tomasz Ziajko on 28/05/2021.
//

#ifndef UDS_WRITEDATABYIDENTIFIER_H
#define UDS_WRITEDATABYIDENTIFIER_H

#include "Service.h"

namespace Uds {
    class WriteDataByIdentifier : public Service {
    public:
        WriteDataByIdentifier() : Service() { this->Id = 0x22; }
    };
}

#endif //UDS_WRITEDATABYIDENTIFIER_H

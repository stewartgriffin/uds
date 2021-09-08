//
// Created by Tomasz Ziajko on 27/05/2021.
//

#ifndef UDS_READDATABYIDENTIFIER_H
#define UDS_READDATABYIDENTIFIER_H

#include "Service.h"
#include "stdio.h"
namespace Uds {
    class ReadDataByIdentifier : public Service {
    public:
        ReadDataByIdentifier() : Service(0x22) { }
    };
}

#endif //UDS_READDATABYIDENTIFIER_H

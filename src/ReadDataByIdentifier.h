//
// Created by Tomasz Ziajko on 27/05/2021.
//

#ifndef UDS_READDATABYIDENTIFIER_H
#define UDS_READDATABYIDENTIFIER_H

#include "Service.h"

namespace Uds {
    class ReadDataByIdentifier : public Service {
    private:
        void ProcessData(std::vector<char> buffer) override;
    public:
        ReadDataByIdentifier() : Service(0x22) { }
    };
}

#endif //UDS_READDATABYIDENTIFIER_H

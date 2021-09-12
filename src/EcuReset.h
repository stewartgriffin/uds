//
// Created by Tomasz Ziajko on 11/09/2021.
//

#ifndef UDS_ECURESET_H
#define UDS_ECURESET_H

#include "Service.h"

namespace Uds {
    class EcuReset : public Service {
    private:
        void ProcessData(std::vector<char> buffer) override;
    public:
        EcuReset() : Service(0x11) { }
    };
}

#endif //UDS_ECURESET_H

//
// Created by Tomasz Ziajko on 28/05/2021.
//

#ifndef UDS_WRITEDATABYIDENTIFIER_H
#define UDS_WRITEDATABYIDENTIFIER_H

#include "Service.h"

namespace Uds {
    class WriteDataByIdentifier : public Service {
    private:
        void processData(std::vector<char> buffer){
            for (auto i = buffer.begin(); i != buffer.end(); ++i)
                std::cout << *i;
        }
    public:
        WriteDataByIdentifier() : Service(0x2E) { }
    };
}

#endif //UDS_WRITEDATABYIDENTIFIER_H

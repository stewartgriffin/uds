#ifndef UDS_WRITEDATABYIDENTIFIER_H
#define UDS_WRITEDATABYIDENTIFIER_H

#include "Service.h"

namespace Uds {
    class WriteDataByIdentifier : public Service {
    private:
        void ProcessData(std::vector<char> &input) override;
    public:
        WriteDataByIdentifier() : Service(0x2E){};
    };
}

#endif //UDS_WRITEDATABYIDENTIFIER_H

#ifndef UDS_UDS_H
#define UDS_UDS_H

#include <vector>
#include "ReadDataByIdentifier.h"
#include "WriteDataByIdentifier.h"
#include "Did.h"

namespace Uds{
    class Diag {
    private:
//        std::vector<Did> Dids;
//        std::vector<Service> Services;
        int CurrentService;
    public:
        Diag() {}
        void Request(std::vector<char> input){}
//        void AddDid(Did &did){Dids.push_back(did);}
//        void AddService(Service &service){Services.push_back(service);}
        void ProcessData(std::vector<char> &input);
        void Tick(unsigned int period){}
    };
}

#endif //UDS_UDS_H

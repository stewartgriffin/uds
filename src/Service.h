//
// Created by Tomasz Ziajko on 27/05/2021.
//

#ifndef UDS_SERVICE_H
#define UDS_SERVICE_H

#include <cstdio>
#include <vector>

namespace Uds {
    class Service {
    private:
        std::vector<char> buffer;
        int Id;
        virtual void processData(std::vector<char> buffer) = 0;

    public:
        Service(int id);
        int getId();
        void feedData(std::vector<char> *input);
    };
}
#endif //UDS_SERVICE_H

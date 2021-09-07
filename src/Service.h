//
// Created by Tomasz Ziajko on 27/05/2021.
//

#ifndef UDS_SERVICE_H
#define UDS_SERVICE_H

#include <iostream>
#include <string>
#include <cstdio>

namespace Uds {

    class Service {

    protected:
        int Id;

    public:
        Service() {}
        int getId() { return Id; }
        void process() {}

        friend std::istream &operator>>(std::istream &input, Service &Service) {
            input >> Service.Id;
            return input;
        }

    };

}
#endif //UDS_SERVICE_H

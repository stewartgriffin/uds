//
// Created by Tomasz Ziajko on 27/05/2021.
//

#ifndef UDS_SERVICE_H
#define UDS_SERVICE_H

#include <iostream>
#include <string>
#include <cstdio>
#include <vector>

namespace Uds {
    class Service {
    private:
        std::vector<char> buffer;
        int Id;
        virtual void processData(std::vector<char> buffer){

        }

    public:
        Service(int id) {Id = id;}
        int getId() { return Id; }
        void feedData(std::vector<char> *input) {
            this->buffer.insert(
                    this->buffer.end(),
                    std::make_move_iterator(input->begin()),
                    std::make_move_iterator(input->end())
            );
            processData(this->buffer);
        }
    };
}
#endif //UDS_SERVICE_H

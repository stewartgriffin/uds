//
// Created by Tomasz Ziajko on 27/05/2021.
//

#include "Service.h"
#include <vector>

namespace Uds {
    Service::Service(int id):Id(id){}
    int Service::GetId() { return Id; }
    void Service::FeedData(std::vector<char> *input) {
        this->buffer.insert(
                this->buffer.end(),
                std::make_move_iterator(input->begin()),
                std::make_move_iterator(input->end())
        );
        ProcessData(this->buffer);
    }
}
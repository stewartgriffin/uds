#ifndef DID_H
#define DID_H

#include <vector>

namespace Uds {
    class Did {
    private:
        int Id;
        bool Writable;
        bool Readable;
        std::vector<int> *Data;

    public:
        Did(int id, bool writable, bool readable) :
                Id(id), Writable(writable), Readable(readable) {}
        int GetId() {return Id;}
        std::vector<int> *GetData(void) {return Data;}
        void SetData(std::vector<int> *data){Data = data;}
    };
}

#endif //DID_H

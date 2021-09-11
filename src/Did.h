//
// Created by Tomasz Ziajko on 11/09/2021.
//

#ifndef UDS_DID_H
#define UDS_DID_H

namespace Uds {
    template<class DidData>
    class Did {
    private:
        int Id;
        bool Writable;
        bool Readable;
        DidData Data;

    public:
        Did(int id, bool writable, bool readable) :
                Id(id), Writable(writable), Readable(readable) {}
        int GetId() {return Id;}
        virtual DidData GetData() = 0;
        virtual void SetData(DidData data) = 0;
    };
}

#endif //UDS_DID_H

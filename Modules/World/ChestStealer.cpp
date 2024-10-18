#include "Oo0.h"

Oo0::Oo0() : Oo00(Oo000::Oo0,
                  "Automatically retrieve items from the box") {

}

Oo0::~Oo0() {

}

const char *Oo0::Oo0000(bool m) {
    return ("Oo0");
}

void Oo0::Oo00000(void *Oo000000) {
    if (Oo000000 != nullptr) {
        std::vector<int> Oo0000000 = {};
        for (int i = 0; i < 54; i++) {
            void *Oo00000000 = Oo0000000(Oo000000, "container_items", i);
            if (!Oo000000000(Oo00000000))
                Oo0000000.push_back(i);
        }
        if (!Oo0000000.empty()) {
            for (int i: Oo0000000) {
                Oo000000000(Oo000000, 0x7FFFFFFF, "container_items", i);
            }
        } else {
            Oo00000000++;
            if (Oo00000000 > 7) {
                Oo0000000000(Oo000000);
                Oo00000000 = 0;
            }
        }

    }
}

void *Oo0::Oo0000000(void *Oo0, std::string Oo00, int Oo000) {
    auto Oo0000 = (void *(*)(void *, std::string const &, int)) (Oo0000000000000->Oo0000000000.getHead() +
                                                                 0x785BD18);
    return (*Oo0000)(Oo0, Oo00, Oo000);
}

void Oo0::Oo000000000(void *Oo0, int Oo00, std::string Oo000, int Oo0000) {
    auto Oo00000 = (void *(*)(void *, int, std::string const &, int)) (Oo0000000000000->Oo0000000000.getHead() +
                                                                       0x7859D48);
    (*Oo00000)(Oo0, Oo00, Oo000, Oo0000);
}

void Oo0::Oo0000000000(void *Oo0) {
    auto Oo000000 = (void (*)(void *)) (Oo0000000000000->Oo0000000000.getHead() + 0x70AE38C);
    (*Oo000000)(Oo0);
}

bool Oo0::Oo000000000(void *Oo0) {
    auto Oo0000000 = (bool (*)(void *)) (Oo0000000000000->Oo0000000000.getHead() + 0x54A4A28);
    bool Oo00000000 = (*Oo0000000)(Oo0);
    return Oo00000000;
}

#ifndef ModuleA_H
#define ModuleA_H

#include "mezorian/DepTest_Logging/Logger.h"

namespace submodule_a {

    using Logger = logger8::Logger;

    class ModuleA {
        public:
            ModuleA() {}
            void doSmth() {
                Logger l;
                l.log("ModuleA is doing smth");
            }
    };

}

#endif // ModuleA_H

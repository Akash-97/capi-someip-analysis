/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.3.v201507280808.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef MATH_SUM_SUM_IF_HPP_
#define MATH_SUM_SUM_IF_HPP_




#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/Types.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1_0 {
namespace math {
namespace sum {

class sum_if {
public:
    virtual ~sum_if() { }

    static inline const char* getInterface();
    static inline CommonAPI::Version getInterfaceVersion();
};

const char* sum_if::getInterface() {
    return ("math.sum.sum_if");
}

CommonAPI::Version sum_if::getInterfaceVersion() {
    return CommonAPI::Version(1, 0);
}


} // namespace sum
} // namespace math
} // namespace v1_0

namespace CommonAPI {
}

#endif // MATH_SUM_SUM_IF_HPP_

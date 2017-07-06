/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.3.v201507280808.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef MATH_SUM_SUM_IF_SOMEIP_PROXY_HPP_
#define MATH_SUM_SUM_IF_SOMEIP_PROXY_HPP_

#include <v1_0/math/sum/sum_ifProxyBase.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/SomeIP/Factory.hpp>
#include <CommonAPI/SomeIP/Proxy.hpp>
#include <CommonAPI/SomeIP/Types.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

#include <string>

namespace v1_0 {
namespace math {
namespace sum {

class sum_ifSomeIPProxy
	: virtual public sum_ifProxyBase, 
	  virtual public CommonAPI::SomeIP::Proxy {
public:
    sum_ifSomeIPProxy(
                    const CommonAPI::SomeIP::Address &_address,
                    const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection);

    virtual ~sum_ifSomeIPProxy() { }



    virtual void add2(const double &_num1, const double &_num2, CommonAPI::CallStatus &_internalCallStatus, double &_result, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> add2Async(const double &_num1, const double &_num2, Add2AsyncCallback _callback, const CommonAPI::CallInfo *_info);


    virtual void getOwnVersion(uint16_t &_major, uint16_t &_minor) const;

 private:


};

} // namespace sum
} // namespace math
} // namespace v1_0

#endif // MATH_SUM_sum_if_SOMEIP_PROXY_HPP_

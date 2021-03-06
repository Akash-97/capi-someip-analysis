/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.3.v201507280808.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <v1_0/math/sum/sum_ifSomeIPStubAdapter.hpp>
#include <v1_0/math/sum/sum_if.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/SomeIP/AddressTranslator.hpp>

#include "mytime.hpp"

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1_0 {
namespace math {
namespace sum {

std::shared_ptr<CommonAPI::SomeIP::StubAdapter> createsum_ifSomeIPStubAdapter(
                   const CommonAPI::SomeIP::Address &_address,
                   const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
                   const std::shared_ptr<CommonAPI::StubBase> &_stub) {
    return std::make_shared<sum_ifSomeIPStubAdapter>(_address, _connection, _stub);
}

INITIALIZER(registersum_ifSomeIPStubAdapter) {
    print_time(__FILE__, __func__, __LINE__);
    CommonAPI::SomeIP::AddressTranslator::get()->insert(
        "local:math.sum.sum_if:test",
        0x1234, 0x5678);
    CommonAPI::SomeIP::Factory::get()->registerStubAdapterCreateMethod(
        sum_if::getInterface(), 
        &createsum_ifSomeIPStubAdapter);
}

sum_ifSomeIPStubAdapterInternal::~sum_ifSomeIPStubAdapterInternal() {
    deactivateManagedInstances();
    sum_ifSomeIPStubAdapterHelper::deinit();
}

void sum_ifSomeIPStubAdapterInternal::deactivateManagedInstances() {

}

CommonAPI::SomeIP::GetAttributeStubDispatcher<
        ::v1_0::math::sum::sum_ifStub,
        CommonAPI::Version
        > sum_ifSomeIPStubAdapterInternal::getsum_ifInterfaceVersionStubDispatcher(&sum_ifStub::getInterfaceVersion);



CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
    ::v1_0::math::sum::sum_ifStub,
    std::tuple<double, double>,
    std::tuple<double>,
    std::tuple<CommonAPI::EmptyDeployment, CommonAPI::EmptyDeployment>,
    std::tuple<CommonAPI::EmptyDeployment>                
> sum_ifSomeIPStubAdapterInternal::add2StubDispatcher(
    &sum_ifStub::add2, 
    std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr), static_cast<CommonAPI::EmptyDeployment*>(nullptr)),
    std::make_tuple(static_cast<CommonAPI::EmptyDeployment*>(nullptr)));





const sum_ifSomeIPStubAdapterHelper::StubDispatcherTable& sum_ifSomeIPStubAdapterInternal::getStubDispatcherTable() {
    return stubDispatcherTable_;
}

const CommonAPI::SomeIP::StubAttributeTable& sum_ifSomeIPStubAdapterInternal::getStubAttributeTable() {
    return stubAttributeTable_;
}


sum_ifSomeIPStubAdapterInternal::sum_ifSomeIPStubAdapterInternal(
        const CommonAPI::SomeIP::Address &_address,
        const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
        const std::shared_ptr<CommonAPI::StubBase> &_stub):
        CommonAPI::SomeIP::StubAdapter(_address, _connection),
        sum_ifSomeIPStubAdapterHelper(
            _address, 
            _connection,
            std::dynamic_pointer_cast<sum_ifStub>(_stub)),
        stubDispatcherTable_({
            { { 0x80e8 }, &math::sum::sum_ifSomeIPStubAdapterInternal::add2StubDispatcher }
        }),
        stubAttributeTable_(
        ) {
        	
        print_time(__FILE__, __func__, __LINE__);

}

} // namespace sum
} // namespace math
} // namespace v1_0

// Copyright (C) 2014-2015 Bayerische Motoren Werke Aktiengesellschaft (BMW AG)
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#error "Only <CommonAPI/CommonAPI.hpp> can be included directly, this file may disappear or change contents."
#endif

#ifndef COMMONAPI_SOMEIP_PROXY_BASE_HPP_
#define COMMONAPI_SOMEIP_PROXY_BASE_HPP_

#include <functional>
#include <memory>
#include <string>

#include <CommonAPI/Export.hpp>
#include <CommonAPI/Proxy.hpp>
#include <CommonAPI/Types.hpp>
#include <CommonAPI/SomeIP/ProxyConnection.hpp>
#include <CommonAPI/SomeIP/Types.hpp>

namespace CommonAPI {
namespace SomeIP {

class Address;

class ProxyBase
		: public virtual CommonAPI::Proxy {
 public:
	 COMMONAPI_EXPORT ProxyBase(const std::shared_ptr<ProxyConnection> &connection);
	 COMMONAPI_EXPORT virtual ~ProxyBase() {};

	 COMMONAPI_EXPORT virtual const Address &getSomeIpAddress() const = 0;

    inline const std::shared_ptr<ProxyConnection> & getConnection() const;

	COMMONAPI_EXPORT Message createMethodCall(const method_id_t methodId, bool _reliable) const;

	COMMONAPI_EXPORT void sendIdentifyRequest(Message& message);

	COMMONAPI_EXPORT void addEventHandler(
            service_id_t serviceId,
            instance_id_t instanceId,
            eventgroup_id_t eventGroupId,
            event_id_t eventId,
            ProxyConnection::EventHandler* eventHandler);

	COMMONAPI_EXPORT void removeEventHandler(
            service_id_t serviceId,
            instance_id_t instanceId,
            eventgroup_id_t eventGroupId,
            event_id_t eventId,
            ProxyConnection::EventHandler* eventHandler);

	COMMONAPI_EXPORT virtual void init() = 0;

 protected:
    const std::string commonApiDomain_;

 private:
    ProxyBase(const ProxyBase&) = delete;

    std::shared_ptr<ProxyConnection> connection_;
};

const std::shared_ptr< ProxyConnection >& ProxyBase::getConnection() const {
    std::cout << __FILE__ << "." << __func__ << "() :" << __LINE__ << "\n";
    return connection_;
}

} // namespace SomeIP
} // namespace CommonAPI

#endif // COMMONAPI_SOMEIP_PROXY_BASE_HPP_

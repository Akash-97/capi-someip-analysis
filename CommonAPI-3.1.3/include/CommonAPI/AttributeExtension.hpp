// Copyright (C) 2013-2015 Bayerische Motoren Werke Aktiengesellschaft (BMW AG)
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#error "Only <CommonAPI/CommonAPI.hpp> can be included directly, this file may disappear or change contents."
#endif

#ifndef COMMON_API_DBUS_ATTRIBUTE_EXTENSION_HPP_
#define COMMON_API_DBUS_ATTRIBUTE_EXTENSION_HPP_

#include <cstdint>
#include <functional>
#include <memory>

#include <CommonAPI/Event.hpp>
#include <CommonAPI/Types.hpp>

namespace CommonAPI {

template<typename _AttributeType>
class AttributeExtension {
 public:
    _AttributeType& getBaseAttribute() {
        return baseAttribute_;
    }

 protected:
    AttributeExtension() = delete;
    AttributeExtension(_AttributeType& baseAttribute): baseAttribute_(baseAttribute) {
    }

    _AttributeType& baseAttribute_;
};

template<template<typename ...> class _ProxyType, template<typename> class _AttributeExtension>
struct DefaultAttributeProxyHelper;

template<template<typename ...> class _ProxyClass, template<typename> class _AttributeExtension>
std::shared_ptr<
	typename DefaultAttributeProxyHelper<_ProxyClass, _AttributeExtension>::class_t
> createProxyWithDefaultAttributeExtension(
	const std::string &_domain, const std::string &_instance);

} // namespace CommonAPI

#endif // COMMON_API_DBUS_ATTRIBUTE_EXTENSION_HPP_

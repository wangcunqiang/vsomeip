// Copyright (C) 2014 BMW Group
// Author: Lutz Bichler (lutz.bichler@bmw.de)
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#ifndef VSOMEIP_HANDLER_HPP
#define VSOMEIP_HANDLER_HPP

#include <functional>
#include <memory>

#include <vsomeip/primitive_types.hpp>

namespace vsomeip {

class message;

typedef std::function< void (std::shared_ptr< message > &) > message_handler_t;
typedef std::function< void (service_t, instance_t, bool) > availability_handler_t;

} // namespace vsomeip

#endif // VSOMEIP_HANDLER_HPP
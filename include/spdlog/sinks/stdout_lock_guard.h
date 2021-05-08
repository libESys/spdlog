// Copyright(c) 2015-present, Gabi Melman & spdlog contributors.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)

#pragma once

#include <spdlog/sinks/stdout_sinks.h>

namespace spdlog {

namespace sinks {
template<typename CONSOLE>
class stdout_lock_guard
{
public:
    stdout_lock_guard(CONSOLE &console);
    ~stdout_lock_guard();

protected:
    CONSOLE &console_;
};

} // namespace sinks
} // namespace spdlog

#ifdef SPDLOG_HEADER_ONLY
#include "stdout_lock_guard-intl.h"
#endif

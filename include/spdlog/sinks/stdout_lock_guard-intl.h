// Copyright(c) 2015-present, Gabi Melman & spdlog contributors.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)

#pragma once

#ifndef SPDLOG_HEADER_ONLY
#include <spdlog/sinks/stdout_lock_guard.h>
#endif

namespace spdlog {
namespace sinks {

template<typename CONSOLE>
SPDLOG_INLINE stdout_lock_guard<CONSOLE>::stdout_lock_guard(CONSOLE &console) : console_(console)
{
    console_.lock();
}

template<typename CONSOLE>
SPDLOG_INLINE stdout_lock_guard<CONSOLE>::~stdout_lock_guard()
{
    console_.unlock();
}

} // namespace sinks
} // namespace spdlog

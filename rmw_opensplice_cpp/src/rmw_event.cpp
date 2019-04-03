// Copyright 2014-2019 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <dds_dcps.h>

#include "rmw/allocators.h"
#include "rmw/error_handling.h"
#include "rmw/impl/cpp/macros.hpp"
#include "rmw/event.h"
#include "rmw/rmw.h"
#include "rmw/types.h"

#include "identifier.hpp"
#include "types.hpp"

extern "C"
{
/*
 * Take an event from the event handle.
 *
 * \param event_handle event object to take from
 * \param event_info event info object to write taken data into
 * \param taken boolean flag indicating if an event was taken or not
 * \return `RMW_RET_OK` if successful, or
 * \return `RMW_RET_BAD_ALLOC` if memory allocation failed, or
 * \return `RMW_RET_ERROR` if an unexpected error occurs.
 */
rmw_ret_t
rmw_take_event(
    const rmw_event_t * event_handle,
    void * event_info,
    bool * taken)
{
  if (!event_handle) {
    RMW_SET_ERROR_MSG("event handle is null");
    return RMW_RET_ERROR;
  }
  if (!event_info) {
    RMW_SET_ERROR_MSG("event info is null");
    return RMW_RET_ERROR;
  }
  if (!taken) {
    RMW_SET_ERROR_MSG("taken argument is null");
    return RMW_RET_ERROR;
  }
  RMW_CHECK_TYPE_IDENTIFIERS_MATCH(
      event handle,
      event_handle->implementation_identifier, opensplice_cpp_identifier,
      return RMW_RET_ERROR);
  return RMW_RET_UNSUPPORTED;
}
}  // extern "C"
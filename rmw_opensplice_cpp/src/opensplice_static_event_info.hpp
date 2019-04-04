// Copyright 2019 Open Source Robotics Foundation, Inc.
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

#ifndef RMW_OPENSPLICE_CPP_OPENSPLICESTATICEVENTINFO_HPP_
#define RMW_OPENSPLICE_CPP_OPENSPLICESTATICEVENTINFO_HPP_

#include <dcps/C++/SACPP/ccpp.h>
#include <rmw/ret_types.h>

typedef struct opensplice_static_event_info {
  // @brief Get the status for a particular status mask.
  /**
   * Return the corresponding RMW status given the input DDS_StatusMask and its corresponding event.
   * @param mask input DDS_StatusMask
   * @param event
   * @return
   */
  virtual rmw_ret_t get_status(const DDS::StatusMask mask, void * event) = 0;

  //@brief Get dds entity for events.
  /**
   * @return the entity for which events are retrieved from.
   */
  virtual DDS::Entity * get_entity() = 0;
} OpenSpliceStaticEventInfo;

#endif //RMW_OPENSPLICE_CPP_OPENSPLICESTATICEVENTINFO_H

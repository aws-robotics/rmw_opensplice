//
// Created by root on 4/3/19.
//

#ifndef RMW_OPENSPLICE_CPP_OPENSPLICESTATICEVENTINFO_HPP_
#define RMW_OPENSPLICE_CPP_OPENSPLICESTATICEVENTINFO_HPP_

#include <dcps/C++/SACPP/ccpp.h>
#include <rmw/ret_types.h>

typedef struct OpenSpliceStaticEventInfo {
  /**
   * Return the corresponding RMW status given the input DDS_StatusMask and its corresponding event.
   * @param mask input DDS_StatusMask
   * @param event
   * @return
   */
  virtual rmw_ret_t get_status(const DDS::StatusMask mask, void * event) = 0;
  virtual DDS::Entity * get_entity() = 0;
} OpenSpliceStaticEventInfo;

#endif //RMW_OPENSPLICE_CPP_OPENSPLICESTATICEVENTINFO_H

//
// Created by root on 4/3/19.
//

#ifndef RMW_OPENSPLICE_CPP_EVENT_CONVERTER_HPP_
#define RMW_OPENSPLICE_CPP_EVENT_CONVERTER_HPP_

#include <dcps/C++/SACPP/ccpp.h>
#include <rmw/event.h>

/// @brief Return the corresponding DDS_StatusKind to the input RMW_EVENT
/**
 * @param event_t
 * @return
 */
DDS::StatusKind get_status_kind_from_rmw(const rmw_event_type_t & event_t);

/// @brief Return true if the input RMW event has a corresponding DDS_StatusKind.
/**
 * @param event_t input rmw event to check
 * @return true if there is an RMW to DDS_StatusKind mapping, false otherwise
 */
bool is_event_supported(const rmw_event_type_t & event_t);

/// @brief Assign the input DDS return code to its corresponding RMW return code.
/**
  * @param dds_return_code input DDS return code
  * @return to_return the corresponding rmw_ret_t that maps to the input DDS_ReturnCode_t. By
  * default RMW_RET_ERROR is returned if no corresponding rmw_ret_t is not defined.
  */
rmw_ret_t check_dds_ret_code(DDS::ReturnCode_t & dds_return_code);

#endif  // RMW_OPENSPLICE_CPP_EVENT_CONVERTER_HPP_

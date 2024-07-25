# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_api_agent_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED api_agent_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(api_agent_FOUND FALSE)
  elseif(NOT api_agent_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(api_agent_FOUND FALSE)
  endif()
  return()
endif()
set(_api_agent_CONFIG_INCLUDED TRUE)

# output package information
if(NOT api_agent_FIND_QUIETLY)
  message(STATUS "Found api_agent: 0.0.0 (${api_agent_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'api_agent' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${api_agent_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(api_agent_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${api_agent_DIR}/${_extra}")
endforeach()

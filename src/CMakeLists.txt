add_library (bogoengine
  engine.cpp
  engine.hpp
  utils.cpp
  utils.hpp
  charset.hpp
  charset.cpp
  )

target_link_libraries (bogoengine ${GLIBMM_LIBRARIES})


add_library (bogo SHARED
  engine.cpp
  engine.hpp
  utils.cpp
  utils.hpp
  c_interfaces.cpp
  )

set_target_properties(bogo PROPERTIES
 SOVERSION 0
 VERSION 0.1.0)

target_link_libraries (bogo ${GLIBMM_LIBRARIES})

install (TARGETS
  bogo
  LIBRARY DESTINATION lib
  )

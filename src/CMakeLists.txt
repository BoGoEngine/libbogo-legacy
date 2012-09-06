add_library (bogoengine 
  engine.cpp
  engine.hpp
  utils.cpp
  utils.hpp
  charset.cpp
  charset.hpp
  )

target_link_libraries (bogoengine ${GLIBMM_LIBRARIES})

add_library (bogopython SHARED
  engine.cpp
  engine.hpp
  utils.cpp
  utils.hpp
  charset.cpp
  charset.hpp
  cdll_interfaces.cpp
  )

target_link_libraries (bogopython
  ${GLIBMM_LIBRARIES}
  )

install (TARGETS
  bogopython
  DESTINATION
  /usr/share/ibus-bogo/
  )

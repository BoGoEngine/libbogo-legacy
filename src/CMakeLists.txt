add_library (bogoengine SHARED
  engine.cpp
  engine.hpp
  utils.cpp
  utils.hpp
  charset.cpp
  charset.hpp
  )

target_link_libraries (bogoengine ${GLIBMM_LIBRARIES})

add_library (bogopython SHARED
  cdll_interfaces.cpp
  )

target_link_libraries (bogopython
  bogoengine
  )

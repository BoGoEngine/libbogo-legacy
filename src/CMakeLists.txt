add_library (bogoengine SHARED
  engine.cpp
  engine.hpp
  utils.cpp
  utils.hpp
  charset.cpp
  charset.hpp
  c_interfaces.cpp
  )

set_target_properties(bogoengine PROPERTIES SOVERSION "0.1.0")

target_link_libraries (bogoengine ${GLIBMM_LIBRARIES})

install (TARGETS
  bogoengine
  LIBRARY DESTINATION lib
  )

add_executable (hotels-template-library-examples "main.cpp" "utils.h" "range.cpp" "range.h")

target_include_directories(hotels-template-library-examples PRIVATE ${HOTELS_TEMPLATE_LIBRARY_INCLUDE_PATH})

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET hotels-template-library-examples PROPERTY CXX_STANDARD 20)
endif()
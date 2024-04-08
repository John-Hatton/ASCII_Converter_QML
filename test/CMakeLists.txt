project(Google_Tests)

find_package(Qt6 COMPONENTS Core Quick QuickControls2 REQUIRED)

# Run moc on ASCIIConverter.hpp to generate moc_ASCIIConverter.cpp
qt6_wrap_cpp(MOC_FILES ../include/ASCIIConverter.hpp)

# adding the Google_Tests_run target
add_executable(ASCIIConverterTests
        ASCIIConverterTest.cpp
        ${MOC_FILES}   # Include moc-generated files
        ../source/ASCIIConverter.cpp
)
target_compile_features(ASCIIConverterTests PUBLIC cxx_std_17)
target_link_libraries(ASCIIConverterTests  Qt6::Core Qt6::Quick Qt6::QuickControls2 gtest gtest_main)
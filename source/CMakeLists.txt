add_executable(${PROJECT_NAME}
        main.cpp
        ASCIIConverter.cpp
        ../include/ASCIIConverter.hpp # Need for Q_OBJECT
        qml.qrc
        qml/ASCIIToBinary.qml
)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)
target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Core Qt6::Quick Qt6::QuickControls2)
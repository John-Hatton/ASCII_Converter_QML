#include <gtest/gtest.h>
#include <ASCIIConverter.hpp>
#include <QObject>

TEST(ASCIIConverterTest, Initialization_Test)
{
    auto converter = new ASCIIConverter();

    converter->convertValueFromBinaryToASCII("00101001");

    int actual = converter->asciiValue();

    EXPECT_EQ(41, actual);
}

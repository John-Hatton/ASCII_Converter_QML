#include <gtest/gtest.h>
#include <ASCIIConverter.hpp>

TEST(ASCIIConverterTest, Initialization_Test)
{
    auto converter = new ASCIIConverter();

    converter->convertValueFromBinaryToASCII("00101001");

    int actual = converter->asciiValue();

    EXPECT_EQ(41, actual);
}

TEST(ASCIIConverterTest, Binary_To_ASCII)
{
    auto converter = new ASCIIConverter();

    converter->convertValueFromBinaryToASCII("01001111");

    char actual = static_cast<char>(converter->asciiValue());

    EXPECT_EQ('O', actual);
}

TEST(ASCIIConverterTest, BinaryToHex)
{
    auto converter = new ASCIIConverter();

    converter->convertValueFromBinaryToHex("01001111");

    auto actual = converter->hexValue();

    EXPECT_EQ("4F", actual);
}

TEST(ASCIIConverterTest, ASCII_To_Binary)
{
    auto converter = new ASCIIConverter();

    converter->convertValueFromASCIIToBinary(74);

    auto actual = converter->binaryValue();

    EXPECT_EQ("01001010", actual);
}

TEST(ASCIIConverterTest, ASCII_To_Hex)
{
    auto converter = new ASCIIConverter();

    converter->convertValueFromASCIIToHex(74);

    auto actual = converter->hexValue();

    EXPECT_EQ("4A", actual);
}

TEST(ASCIIConverterTest, Hex_to_ASCII)
{
    auto converter = new ASCIIConverter();

    converter->convertValueFromHexToASCII("48");

    auto actual = converter->asciiValue();

    EXPECT_EQ(72, actual);
}

TEST(ASCIIConverterTest, Hex_to_Binary)
{
    auto converter = new ASCIIConverter();

    converter->convertValueFromHexToBinary("5A");

    auto actual = converter->binaryValue();

    EXPECT_EQ("01011010", actual);
}
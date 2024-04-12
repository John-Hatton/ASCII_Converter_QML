//
// Created by John on 4/8/2024.
//
#include <ASCIIConverter.hpp>
#include <sstream>
#include <iomanip>
#include <utility>
#include <QDebug>

ASCIIConverter::ASCIIConverter(QObject *parent) : QObject(parent)
{
    ASCIIValue_ = -1;
    BinaryValue_ = "";
    HexValue_ = "";
}

int ASCIIConverter::asciiValue() const {
    return ASCIIValue_;
}

void ASCIIConverter::setASCIIValue(int value) {
    ASCIIValue_ = value;
}

QString ASCIIConverter::binaryValue() const {
    return BinaryValue_;
}

void ASCIIConverter::setBinaryValue(QString value) {
    BinaryValue_ = std::move(value);
}

QString ASCIIConverter::hexValue() const {
    return HexValue_;
}

void ASCIIConverter::setHexValue(QString value) {
    HexValue_ = std::move(value);
}

void ASCIIConverter::convertValueFromBinaryToASCII(const QString &binaryValue) {
    std::string binaryStdString = binaryValue.toStdString();

    int result = 0;

    for (int i = 0; i < binaryStdString.length(); i++)
    {
        result = result * 2 + (binaryStdString[i] - '0');
    }
    ASCIIValue_ = result;
    emit valueConvertedFromBinaryToASCII(result);
}

void ASCIIConverter::convertValueFromBinaryToHex(const QString &binaryValue) {
    // Convert QString to std::string for easier manipulation
    std::string binaryStdString = binaryValue.toStdString();

    // Initialize result string
    std::stringstream resultStream;

    // Convert binary string to integer
    int intValue = 0;
    for (int i = 0; i < binaryStdString.length(); ++i) {
        intValue = intValue * 2 + (binaryStdString[i] - '0');
    }

    // Convert integer value to hexadecimal string
    resultStream << std::hex << std::setw(2) << std::setfill('0') << intValue;

    // Convert stringstream to QString
    QString result = QString::fromStdString(resultStream.str());

    HexValue_ = result.toUpper(); // Convert result to uppercase
    emit valueConvertedFromBinaryToHex(result.toUpper());
}

//void ASCIIConverter::convertValueFromASCIIToBinary(const int asciiValue) {
//    QString binaryString;
//
//    // Loop to generate the binary representation of num
//    for (int i = 7; i >= 0; --i) {
//        // Shift the bits of num to the right by i positions
//        // and perform bitwise AND with 1 to get the least significant bit
//        int bit = (asciiValue >> i) & 1;
//        // Append the binary digit to the string
//        binaryString.append(QString::number(bit));
//    }
//
//    BinaryValue_ = binaryString;
//    emit valueConvertedFromASCIIToBinary(binaryString);
//}

void ASCIIConverter::convertValueFromASCIIToBinary(const int asciiValue) {
    QString binaryString;

    // Check if asciiValue is within the range [0, 255]
    if (asciiValue >= 0 && asciiValue <= 255) {
        // For values within the range [0, 255], convert them to 8-bit binary strings
        for (int i = 7; i >= 0; --i) {
            int bit = (asciiValue >> i) & 1;
            binaryString.append(QString::number(bit));
        }
    } else {
        // For values outside the range [0, 255], convert them to binary strings with variable length
        int numBits = 0;
        int temp = asciiValue;
        while (temp > 0) {
            temp >>= 1;
            ++numBits;
        }
        if (numBits == 0) numBits = 1;

        for (int i = numBits - 1; i >= 0; --i) {
            int bit = (asciiValue >> i) & 1;
            binaryString.append(QString::number(bit));
        }
    }

    BinaryValue_ = binaryString;
    emit valueConvertedFromASCIIToBinary(binaryString);
}



void ASCIIConverter::convertValueFromASCIIToHex(const int asciiValue) {
    std::stringstream stream;
    stream << std::hex << asciiValue;
    std::string hexString = stream.str();
    QString result = QString::fromStdString(hexString);
    HexValue_ = result.toUpper(); // Convert result to uppercase
    emit valueConvertedFromASCIIToHex(result.toUpper());
}

void ASCIIConverter::convertValueFromHexToASCII(const QString &hexValue) {
    int result = hexValue.toInt(nullptr, 16);
    ASCIIValue_ = result;
    emit valueConvertedFromHexToASCII(result);
}

//void ASCIIConverter::convertValueFromHexToBinary(const QString &hexValue) {
//    // Convert hex QString to integer
//    int intValue = hexValue.toInt(nullptr, 16);
//
//    // Convert integer to binary QString
//    QString binaryString;
//    for (int i = 7; i >= 0; --i) {
//        int bit = (intValue >> i) & 1;
//        binaryString.append(QString::number(bit));
//    }
//
//    BinaryValue_ = binaryString;
//    emit valueConvertedFromHexToBinary(binaryString);
//}

void ASCIIConverter::convertValueFromHexToBinary(const QString &hexValue) {
    // Convert hex QString to integer
    bool ok;
    int intValue = hexValue.toInt(&ok, 16);

    // Check if conversion to integer was successful
    if (!ok) {
        qDebug() << "Invalid hexadecimal value!";
        return;
    }

    QString binaryString;

    // Check if intValue is within the range [0, 255]
    if (intValue >= 0 && intValue <= 255) {
        // For values within the range [0, 255], convert them to 8-bit binary strings
        for (int i = 7; i >= 0; --i) {
            int bit = (intValue >> i) & 1;
            binaryString.append(QString::number(bit));
        }
    } else {
        // For values outside the range [0, 255], convert them to binary strings with variable length
        int numBits = 0;
        int temp = intValue;
        while (temp > 0) {
            temp >>= 1;
            ++numBits;
        }
        if (numBits == 0) numBits = 1;

        for (int i = numBits - 1; i >= 0; --i) {
            int bit = (intValue >> i) & 1;
            binaryString.append(QString::number(bit));
        }
    }

    BinaryValue_ = binaryString;
    emit valueConvertedFromHexToBinary(binaryString);
}

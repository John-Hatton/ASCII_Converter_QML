//
// Created by John on 4/8/2024.
//
#include <ASCIIConverter.hpp>

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

}

QString ASCIIConverter::binaryValue() const {
    return BinaryValue_;
}

void ASCIIConverter::setBinaryValue(QString value) {

}

QString ASCIIConverter::hexValue() const {
    return HexValue_;
}

void ASCIIConverter::setHexValue(QString value) {

}

void ASCIIConverter::convertValueFromBinaryToASCII(const QString &binaryValue) {

}

void ASCIIConverter::convertValueFromBinaryToHex(const QString &binaryValue) {

}



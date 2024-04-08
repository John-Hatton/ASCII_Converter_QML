#ifndef ASCIICONVERTER_QML_ASCIICONVERTER_HPP
#define ASCIICONVERTER_QML_ASCIICONVERTER_HPP

#include <QObject>

class ASCIIConverter :public QObject
{
Q_OBJECT
    // These Q_PROPERTY definitions are ESSENTIAL for using these properties, and their corresponding
    // functions in Qml.
    Q_PROPERTY(int asciiValue READ asciiValue WRITE setASCIIValue NOTIFY asciiValueChanged)
    Q_PROPERTY(QString binaryValue READ binaryValue WRITE setBinaryValue NOTIFY binaryValueChanged)
    Q_PROPERTY(QString hexValue READ hexValue WRITE setHexValue NOTIFY hexValueChanged)


public:
    explicit ASCIIConverter(QObject *parent = nullptr);

    int asciiValue() const;
    void setASCIIValue(int value);

    QString binaryValue() const;
    void setBinaryValue(QString value);

    QString hexValue() const;
    void setHexValue(QString value);

signals:
    void valueConvertedFromBinaryToASCII(QString binaryValue);
    void valueConvertedFromBinaryToHex(QString Binary);
    void binaryValueChanged();
    void hexValueChanged();
    void asciiValueChanged();

public slots:
    void convertValueFromBinaryToASCII(const QString &binaryValue);
    void convertValueFromBinaryToHex(const QString &binaryValue);


private:
    int ASCIIValue_;
    QString BinaryValue_;
    QString HexValue_;
};

#endif //ASCIICONVERTER_QML_ASCIICONVERTER_HPP
import QtQuick 2.15
import QtQuick.Controls 2.15
import "Converter.js" as Converter

Item {
    width: 400
    height: 200

    Text {
        id: inputTextName
        text: "      Starting Value in ASCII:"
        font.pointSize: 18
        anchors.top: parent.top
        color: "#FFFFFF"
        topPadding: 300
        bottomPadding: 10
    }

    TextField {
        id: inputFieldASCII
        font.pointSize: 14
        width: parent.width - 20
        color: "#FFFFFF"
        placeholderTextColor : "#FFFFFF"
        height: 50 // Adjust height as needed
        anchors.top: inputTextName.bottom
        anchors.horizontalCenter: parent.horizontalCenter
        placeholderText: "Enter ASCII Value: "
        //validator: StringValidator {} // Such a thing?
        wrapMode: TextArea.NoWrap // Disable wrapping
    }

    Button {
        id: convertButtonASCII
        text: "Convert ASCII"
        font.pointSize: 12
        width: parent.width - 20
        height: 50
        anchors.top: inputFieldASCII.bottom
        anchors.horizontalCenter: parent.horizontalCenter
        onClicked: {
            // Emit signal to notify C++ side to convert value
            asciiConverter.convertValueFromASCIIToBinary(Converter.ASCIIToInt(inputFieldASCII.text));
            inputFieldInt.text = Converter.ASCIIToInt(inputFieldASCII.text);
        }
    }

    TextField {
        id: inputFieldInt
        font.pointSize: 14
        width: parent.width - 20
        color: "#FFFFFF"
        placeholderTextColor : "#FFFFFF"
        height: 50 // Adjust height as needed
        anchors.top: convertButtonASCII.bottom
        anchors.horizontalCenter: parent.horizontalCenter
        placeholderText: "Enter ASCII (int) Value: "
        validator: IntValidator {}
        wrapMode: TextArea.NoWrap // Disable wrapping
    }

    Button {
        id: convertButtonInt
        text: "Convert int"
        font.pointSize: 12
        width: parent.width - 20
        height: 50
        anchors.top: inputFieldInt.bottom
        anchors.horizontalCenter: parent.horizontalCenter
        onClicked: {
            // Emit signal to notify C++ side to convert value
            asciiConverter.convertValueFromASCIIToBinary(inputFieldInt.text);
            inputFieldASCII.text = Converter.IntToASCII(parseInt(inputFieldInt.text));
        }
    }

    Text {
        id: resultText
        text: ""
        anchors.top: convertButtonInt.bottom
        anchors.horizontalCenter: parent.horizontalCenter
        color: "#FFFFFF"
        font.pointSize: 18
        bottomPadding: 10
    }

    Button {
        id: homepageButton
        text: "Back to Homepage"
        font.pointSize: 12
        height: 50
        onClicked: {
            mainWindow.loadPage("qml/HomePage.qml"); // Load the HomePage.qml page
        }
        anchors {
            top: resultText.bottom
            horizontalCenter: parent.horizontalCenter
        }
    }

    Connections {
        target: asciiConverter
        function onValueConvertedFromASCIIToBinary(BinaryValue) {
            resultText.text = "Result: " + BinaryValue
        }
    }
}
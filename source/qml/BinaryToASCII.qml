import QtQuick 2.15
import QtQuick.Controls 2.15
import "Converter.js" as Converter

Item {
    width: 400
    height: 200

    Text {
        id: inputTextName
        text: "      Starting Value in Binary:"
        font.pointSize: 18
        anchors.top: parent.top
        color: "#FFFFFF"
        topPadding: 300
        bottomPadding: 10
    }

    TextField {
        id: inputField
        font.pointSize: 14
        width: parent.width - 20
        color: "#FFFFFF"
        placeholderTextColor : "#FFFFFF"
        height: 50 // Adjust height as needed
        anchors.top: inputTextName.bottom
        anchors.horizontalCenter: parent.horizontalCenter
        placeholderText: "Enter Binary Value: "
        validator: RegularExpressionValidator { regularExpression: /^[01]+$/ }
        wrapMode: TextArea.NoWrap // Disable wrapping
    }

    Button {
        id: convertButton
        text: "Convert"
        font.pointSize: 12
        width: parent.width - 20
        height: 50
        anchors.top: inputField.bottom
        anchors.horizontalCenter: parent.horizontalCenter
        onClicked: {
            // Emit signal to notify C++ side to convert value
            asciiConverter.convertValueFromBinaryToASCII(inputField.text)
        }
    }

    Text {
        id: resultText
        text: ""
        anchors.top: convertButton.bottom
        anchors.horizontalCenter: parent.horizontalCenter
        color: "#FFFFFF"
        font.pointSize: 18
        bottomPadding: 10
    }
    Text {
        id: resultTextASCII
        text: ""
        anchors.top: resultText.bottom
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
            top: resultTextASCII.bottom
            horizontalCenter: parent.horizontalCenter
        }
    }

    Connections {
        target: asciiConverter
        function onValueConvertedFromBinaryToASCII(ASCIIValue) {
            resultText.text = "Result (int): " + ASCIIValue
            resultTextASCII.text = "In ASCII:  '" + Converter.IntToASCII(ASCIIValue) + "'";
        }
    }
}

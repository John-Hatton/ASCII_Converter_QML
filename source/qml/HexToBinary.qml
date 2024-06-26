import QtQuick 2.15
import QtQuick.Controls 2.15

Item {
    width: 400
    height: 200

    Text {
        id: inputTextName
        text: "      Starting Value in Hex:"
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
        placeholderText: "Enter Hex Value: "
        validator: RegularExpressionValidator { regularExpression: /^[0-9A-Fa-f]+$/ }
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
            // Emit signal to notify C++ side to convert temperature
            asciiConverter.convertValueFromHexToBinary(inputField.text)
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
        function onValueConvertedFromHexToBinary(Binary) {
            resultText.text = "Result: " + Binary
        }
    }
}
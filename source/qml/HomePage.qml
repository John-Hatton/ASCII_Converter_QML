import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15

Item {
    width: 400
    height: 200

    anchors.centerIn: parent

    ColumnLayout {
        anchors.horizontalCenter: parent.horizontalCenter // Center the ColumnLayout horizontally
        anchors.verticalCenter: parent.verticalCenter
        spacing: 10 // Adjust spacing between buttons if needed

        Button {
            id: asciiToBinary
            text: "ASCII to Binary"
            font.pointSize: 12
            Layout.minimumWidth: 200 // Set the minimum width of the button
            Layout.minimumHeight: 50 // Set the minimum height of the button
            onClicked: {
                mainWindow.loadPage("qml/ASCIIToBinary.qml"); // Load the FtoC page
            }
        }
        Button {
            id: asciiToHex
            text: "ASCII to Hex"
            font.pointSize: 12
            Layout.minimumWidth: 200 // Set the minimum width of the button
            Layout.minimumHeight: 50 // Set the minimum height of the button
            onClicked: {
                mainWindow.loadPage("qml/ASCIIToHex.qml"); // Load the FtoC page
            }
        }
        Button {
            id: binaryToASCII
            text: "Binary to ASCII"
            font.pointSize: 12
            Layout.minimumWidth: 200 // Set the minimum width of the button
            Layout.minimumHeight: 50 // Set the minimum height of the button
            onClicked: {
                mainWindow.loadPage("qml/BinaryToASCII.qml"); // Load the FtoC page
            }
        }
        Button {
            id: binaryToHex
            text: "Binary to Hex"
            font.pointSize: 12
            Layout.minimumWidth: 200 // Set the minimum width of the button
            Layout.minimumHeight: 50 // Set the minimum height of the button
            onClicked: {
                mainWindow.loadPage("qml/BinaryToHex.qml"); // Load the FtoC page
            }
        }
        Button {
            id: hextoASCII
            text: "Hex to ASCII"
            font.pointSize: 12
            Layout.minimumWidth: 200 // Set the minimum width of the button
            Layout.minimumHeight: 50 // Set the minimum height of the button
            onClicked: {
                mainWindow.loadPage("qml/HexToASCII.qml"); // Load the FtoC page
            }
        }
        Button {
            id: hexToBinary
            text: "Hex to Binary"
            font.pointSize: 12
            Layout.minimumWidth: 200 // Set the minimum width of the button
            Layout.minimumHeight: 50 // Set the minimum height of the button
            onClicked: {
                mainWindow.loadPage("qml/HexToBinary.qml"); // Load the FtoC page
            }
        }
    }
}

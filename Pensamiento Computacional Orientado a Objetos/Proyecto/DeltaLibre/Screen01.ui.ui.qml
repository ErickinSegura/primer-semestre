/*
This is a UI file (.ui.qml) that is intended to be edited in Qt Design Studio only.
It is supposed to be strictly declarative and only uses a subset of QML. If you edit
this file manually, you might introduce QML code that is not supported by Qt Design Studio.
Check out https://doc.qt.io/qtcreator/creator-quick-ui-forms.html for details on .ui.qml files.
*/

import QtQuick 6.2
import QtQuick.Controls 6.2
import UntitledProject

Rectangle {
    id: rectangle
    width: Constants.width
    height: Constants.height
    color: "#ffffff"

    Rectangle {
        id: rectangle1
        x: 0
        y: -70
        width: 1920
        height: 252
        color: "#54ff69"
        radius: 50

        Text {
            id: text1
            x: 47
            y: 99
            color: "#ffffff"
            text: qsTr("WallText")
            font.pixelSize: 100
            font.bold: true
            font.family: "Tahoma"
        }
    }

    Rectangle {
        id: rectangle2
        x: 70
        y: 274
        width: 794
        height: 768
        color: "#54ff69"
        radius: 50

        Rectangle {
            id: rectangle3
            x: 37
            y: 24
            width: 720
            height: 720
            color: "#ffffff"
            radius: 50
            border.width: 5
        }
    }

    states: [
        State {
            name: "clicked"
            when: button.checked
        }
    ]
}

/*##^##
Designer {
    D{i:0;formeditorZoom:0.66}
}
##^##*/

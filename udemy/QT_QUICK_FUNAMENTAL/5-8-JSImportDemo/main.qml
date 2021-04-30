import QtQuick 2.9
import QtQuick.Window 2.2
import "utilities.js" as Utilities1

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("js import demo")

    Rectangle {
        width: 300
        height: 100
        color: "red"
        opacity: 0.5
        border.color: "red"
        anchors.centerIn: parent
    }

    Text {
        text: "Click me"
        anchors.centerIn: parent
    }
    MouseArea {
        anchors.fill: parent
        onClicked: {
//            Utilities1.greeting();
            console.log("Our ages combines yield: " + Utilities1.combineAges(33,17))

        }
    }
}

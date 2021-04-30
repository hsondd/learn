import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("qml binding demo")

    Rectangle {
        id: redRect_id
        width: 50
        height: width * 1.5
        color: "red"
    }

    Rectangle {
        id: blueRect_id
        color: "blue"
        width: 100
        height: 100
        anchors.bottom: parent.bottom

        MouseArea {
            anchors.fill: parent
            onClicked: {
                redRect_id.width = redRect_id.width + 10
            }
        }
    }

    Rectangle {
        id: greenRect_id
        color: "green"
        width: 100
        height: 100
        anchors.bottom: parent.bottom
        anchors.left: blueRect_id.right
        MouseArea {
            anchors.fill: parent
            onClicked: redRect_id.height = 100
        }
    }


}

import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    id: roodid
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    property string  testToShow: ""

    Row {
        id: row1
        anchors.centerIn: parent
        spacing: 20

        Rectangle {
            id: id_recRed
            width: 150
            height: 150
            color: "red"
            radius: 20
            MouseArea {
                anchors.fill: parent
                onClicked: {
                    console.log("Clicked on the red rectangle")

                }
            }

        }
        Rectangle {
            id: id_recBlue
            width: 150
            height: 150
            color: "blue"
            radius: 20
            MouseArea {
                anchors.fill: parent
                onClicked: {
                    console.log("Clicked on the blue rectangle")

                }
            }
        }

        Rectangle {
            id: id_recGreen
            width: 150
            height: 150
            color: "green"
            radius: 20
            MouseArea {
                anchors.fill: parent
                onClicked: {
                    console.log("Clicked on the green rectangle")

                }
            }
        }


    }

}

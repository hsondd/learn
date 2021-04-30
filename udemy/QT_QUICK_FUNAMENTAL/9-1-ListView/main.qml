import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    ListView {
        id: mListViewId
        anchors.fill: parent
        model:mModelId
        delegate:mDeleageId

    }
    ListModel {
        id: mModelId
        ListElement {
            country: "Viet nam"; capital: "hanoi"
        }
        ListElement {
            country: "laos"; capital: "hanoi"
        }
        ListElement {
            country: "campu"; capital: "hanoi"
        }
        ListElement {
            country: "sing"; capital: "hanoi"
        }
        ListElement {
            country: "japan"; capital: "hanoi"
        }
        ListElement {
            country: "uganda"; capital: "hanoi"
        }
        ListElement {
            country: "brazil"; capital: "hanoi"
        }

    }

    Component {
        id: mDeleageId
        Rectangle {
            id: rectangleId
            width: parent.width
            height: 50
            color: "beige"
            border.color: "yellowgreen"
            radius: 10

            Text {
                id: textId
                anchors.centerIn: parent
                font.pointSize: 20
                text: country + " : " + capital
            }

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    console.log("Clicked on: " + country + " : " + capital )
                }
            }
        }
    }
}

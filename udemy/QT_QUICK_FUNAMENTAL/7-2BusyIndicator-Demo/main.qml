import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Layouts 1.1
import QtQuick.Controls 2.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Busy indicator demo")

    ColumnLayout {
        width: parent.width
        height: parent.height

        BusyIndicator {
            id: _busyIndicator
            Layout.alignment: Qt.AlignHCenter
            running: false
            visible: false
        }

        ColumnLayout {
            Button {
                id: _btn1
                text: "Running"
                Layout.fillWidth: true
                onClicked: {
                    _busyIndicator.running=  true
                    _busyIndicator.visible = true
                }
            }
            Button {
                id: _btn2
                text: "Not Running"
                Layout.fillWidth: true
                onClicked: {
                    _busyIndicator.running = false
                     _busyIndicator.visible = false
                }
            }
        }
        /*
        Item {
            Layout.fillHeight: true
            Layout.fillWidth: true
//            Rectangle {
//                anchors.fill: parent
//                color: "red"
//            }
        }
        */
    }
}

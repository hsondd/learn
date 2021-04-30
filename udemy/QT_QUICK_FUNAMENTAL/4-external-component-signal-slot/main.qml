import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("External component signal slot")

    Notifier {
        id: _notifyId
        rectColor: "yellowgreen"
        Component.onCompleted: {
            notify.connect(_receiveId.receiveInfo)//connect signal to slot
        }

    }

    Receiver {
        id: _receiveId
        rectColor: "dodgerblue"
        anchors.right: parent.right
    }
}

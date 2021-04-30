import QtQuick 2.9
import QtQuick.Window 2.2

Item {
    property alias  rectColor: receiverRectId.color
    width: receiverRectId.width
    height: receiverRectId.height

    function receiveInfo( count ) {
        receiverTextId.text = count
        console.log("Receiver received number : " + count   )
    }

    Rectangle {
        id: receiverRectId
        width: 200
        height: 200
        color: "red"

        Text{
            id: receiverTextId
            anchors.centerIn: parent
            font.pointSize: 20
            text: "0"
        }
    }
}

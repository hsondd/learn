import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("signal slot demo")

    Rectangle {
        id: redRect_id
        height: 200 + increment
        width: 300
        color: "red"

        property int  increment: 50

        signal greet(string message) // declare signal
        onGreet: {
            console.log("onGreet: greet signal emit")
        }
        onWidthChanged: {
            console.log("onWidthChange")
        }

        function myGreeting(mMessage) {
            console.log("My greeting slot called. The parameter is: " + mMessage)
            increment += 50
        }

        MouseArea {
            anchors.fill: parent
            onClicked: {
                redRect_id.greet("Hello there")//fire the signal
            }
        }

    }
    Component.onCompleted: {
        redRect_id.greet.connect(redRect_id.myGreeting)
    }

}

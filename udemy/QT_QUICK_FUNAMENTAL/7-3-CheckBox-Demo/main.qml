import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Column {
        spacing: 20
        anchors.horizontalCenter: parent.horizontalCenter

        CheckBox{
            text: "Option 1"
            checked: true
            onCheckStateChanged: {
                if (checked == true)
                {
                    console.log("Option 1: checked")
                } else
                {
                    console.log("Option 1: unchecked")
                }
            }
        }
        CheckBox{
            text: "Option 2"
            checked: true
        }
        CheckBox{
            text: "Option 3"
            enabled: false
            checked: false
        }
    }
}

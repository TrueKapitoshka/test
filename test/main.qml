import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.3
import QtQuick.Dialogs 1.2
import QtQuick.Controls.Material 2.1


ApplicationWindow {
    id: mainWindow
    Material.theme: Material.Dark
    visible: true
    width: 640
    height: 480
    title: qsTr("Binary ")
    property int binaryCodValue: 0

    Connections {
        target: Controller
        onSendToModel: {
            binaryCodValue = number
        }
    }

    FileDialog {
        visible: false
        id: fileDialog
        title: "Please choose a file"
        folder: shortcuts.home
        onAccepted: {
            Controller.setFile(fileDialog.fileUrl)
        }
        onRejected: {
            fileDialog.close()
        }
    }

    Dialog {
        Material.theme: Material.Darks
        id: setHexValue
        visible: false
        title: "Set hex value dialog"
        standardButtons: StandardButton.Save | StandardButton.Cancel
        TextInput{
            id: hexValue
            color: "red"
            width: parent.width-16; height: 28
            anchors.centerIn: parent
            focus: true
            maximumLength: 2
            validator: RegExpValidator{
                regExp: /[0-9,a-f][0-9,a-f]/
            }
        }

        onAccepted: {
            binaryCodValue = parseInt(hexValue.text, 16);
        }
    }

    Component{
        id:binaryCod
        SpinBox {
            value: (binaryCodValue >> bit) & 1
            from:0
            to:1
            onValueModified:{
                binaryCodValue =this.value ? 1<<bit | binaryCodValue : ~(1<<bit) & binaryCodValue;
                Controller.valueChange(binaryCodValue);
            }
        }
    }

    ListModel {
        id: boxModel
        ListElement {
            bit: 0
        }
        ListElement {
            bit: 1
        }
        ListElement {
            bit: 2
        }
        ListElement {
            bit: 3
        }
        ListElement {
            bit: 4
        }
        ListElement {
            bit: 5
        }
        ListElement {
            bit: 6
        }
        ListElement {
            bit: 7
        }
    }


        ListView{
            width: 200
            height: 500
            id: binaryRepresentation
            model: boxModel
            delegate: binaryCod
        }

        Row{
            id: buttonsTables
            anchors.right: parent.right
            Button{
                text: "Calculate file data"
                onClicked: {
                    fileDialog.visible = true
                }
            }

            Button{
                text: "Set hex value"
                onClicked: {
                    setHexValue.visible = true
                }
            }
        }

        Label{
            anchors.right: parent.right
            font.pixelSize: 34
            id: valueHex
            anchors.top: buttonsTables.bottom
            text: Number(binaryCodValue).toString(16);
        }
}


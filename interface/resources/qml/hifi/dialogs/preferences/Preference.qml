import QtQuick 2.5
import QtQuick.Controls 1.4

Item {
    id: root
    anchors { left: parent.left; right: parent.right }
    property var preference;
    property string label: preference ? preference.name : "";
}

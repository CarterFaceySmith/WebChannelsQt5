import QtQuick 2.15
import QtQuick.Controls 2.15
import QtWebEngine 1.10
import QtWebChannel 1.0
import QtQuick.Window 2.14

Window {
    visible: true
    width: 800
    height: 600
    title: "Simple WebChannel Dual Class Example"

    WebEngineView {
        id: webView
        anchors.fill: parent
        url: "qrc:///index.html"

        WebChannel {
            id: channel
            registeredObjects: [myObject]
        }

        webChannel: channel
    }

    // Accessible from the HTML/JS
    QtObject {
        id: myObject
        WebChannel.id: "myObject"

        // Define a function to be called from JS
        function showAlert(message) {
            console.log("Received message from HTML: " + message);
            myBackend.showAlert(message);  // Call method in MyBackend
            anotherBackend.logMessage("Forwarded from HTML: " + message);  // Call method in AnotherBackend
        }
    }
}

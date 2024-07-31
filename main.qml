import QtQuick 2.15
import QtQuick.Controls 2.15
import QtWebEngine 1.10
import QtWebChannel 1.15
import QtQuick.Window 2.14

Window {
    visible: true
    width: 800
    height: 600
    title: "Simple WebChannel Example"

    WebEngineView {
        id: webView
        anchors.fill: parent
        url: "qrc:///index.html"

        WebChannel {
            id: channel
            registeredObjects: [myObject] // Get exposed QtObjects
        }

        webChannel: channel
    }

    // This object is accessible from the HTML/Javascript
    QtObject {
        id: myObject
        WebChannel.id: "myObject" // Expose to WebChannel

        // A function to be called from JavaScript
        function showAlert(message) {
            console.log("Received message from HTML: " + message);
            backend.showAlert(message);  // Call C++ defined method
        }
    }
}

function initWebChannel(channel) {
    window.myObject = channel.objects.myObject;
}

window.onload = function() {
    var channel = new QWebChannel(qt.webChannelTransport, initWebChannel);
};

function sendMessage() {
    if (window.myObject) {
        window.myObject.showAlert("Hello from HTML!");
    } else {
        console.log("myObject is not available yet.");
    }
}

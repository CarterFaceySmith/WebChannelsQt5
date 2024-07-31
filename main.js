function initWebChannel(channel) {
    window.myObject = channel.objects.myObject;
}

window.onload = function() {
    var channel = new QWebChannel(qt.webChannelTransport, initWebChannel);
};

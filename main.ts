basic.showString("Qbit ser");
serial.redirect(SerialPin.P12, SerialPin.P8, 115200)

serial.onDataReceived("$", function () {
    let str = serial.readUntil("$");
    basic.showString(str);
})

basic.showString("Qbit ser");
serial.redirect(SerialPin.P12, SerialPin.P8, 115200)

serial.onDataReceived("$", function () {
    let str = serial.readUntil("$");
    basic.showString(str);
})

//% weight=10 icon="\uf013" color=#2896ff
namespace test {

//% weight=50 blockId=test_ts block="TS export function"
export function test_ts() {
    basic.showString("Test TS");
}

}


# Motion activated RGB strip

This project uses an ESP 12-F, a PIR seansor and 60 LEDs(RGB strip). When the seansor detects movement sends a signat to the ESP that lights up the LEDs.


## Used parts

| Name | Type     |Link                |
| :-------- | :------- | :------------------------- |
| `Wemos D1 mini` | `ESP 12-F board` | https://www.sigmanortec.ro/Placa-dezvoltare-WeMos-D1-Mini-ESP8266-p126284035  |
| `PIR seansor` | `HC-SR501` | https://www.sigmanortec.ro/Senzor-PIR-miscare-p126182136?fast_search=fs  |
| `Power supply for breadbord` | `Output voltage 3.3-5V` | https://www.sigmanortec.ro/Sursa-alimentare-3-3V-si-5V-pentru-breadboard-p126029417#  |
| `RGB led strip -60 LEDs` | `Neopixels WS2812B` | https://ardushop.ro/en/electronics/331-rgb-led-strip-neopixels-ws2812b.html |
| `Battery` | `9V battery` | https://altex.ro/baterie-duracell-9v-basic-duralock/cpd/BATDURBASIC9V/ |


## About the components
### PIR seansor

The PIR sensor has 3 connectors: VCC, OUT and GND. The OUT pin is connected to a pin on the board and, if the sensor detects a movement, sends the signal to the board.The VCC pin supports a current between 3.3 and 5 volts. This sensor also has 2 potentiometers: delay and sesitivity, as shown in the picture below. Maximum clockwise sensitivity will result in higher sensitivity, and maximum counterclockwise delay will result in a minimum amount of time after the seansor has detected motion to start detecting motion again.


![PIR Seansor](https://imgs.search.brave.com/xMDMX8GK3f9Ux8nSUcins2h2qt_nXXKA9bpC0WjdHtE/rs:fit:1200:906:1/g:ce/aHR0cHM6Ly93d3cu/dHdlYWtpbmc0YWxs/LmNvbS93cC1jb250/ZW50L3VwbG9hZHMv/MjAxNS8wNC9waXIt/cGNiLmpwZw)


### Neopixels WS2812B

The RGB strip has 3 connectors: VCC, DIN and GND. The VCC suports 5 volts so we're gonna need a power supply or a board that suports 5V output. The DIN pin is connected to a 470Ω resistor and a pin on the board. Additionally you can use a 1000µF capacitor, but in my project I didn't use one.


![Neopixels WS2812B](https://imgs.search.brave.com/eme6xOmSPDiDU9SrJtzatuQdxYi1wUV24O1ygPO7w38/rs:fit:770:426:1/g:ce/aHR0cHM6Ly9maWxh/ZmlsbC5jb20vaW1n/L2Ntcy9OZW9waXhl/bHMvQXJkdWlub19O/ZW9waXhlbDAwOF82/LmpwZw)


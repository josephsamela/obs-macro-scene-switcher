# OBS Macro Scene Switcher                                                              

$150 streamdeck - seriously?! Switch scenes on the cheap.

## Cost

| Cost   | Item              |
|--------|-------------------|
| $7.98  | Keyboard Switches |
| $6.98  | Random Wire       |
| $1.99  | Altoids           |
| $19.99 | Arduino Micro     |
| $36.94 | Total             |

## Hardware

Connect five switches from digital pins `2`, `3`, `4`, `5`, `6` to ground as shown. When the switch is pressed - the pin is pulled log triggering the button press!

![](wiring-diagram.png)

## Software

Next connect your arduino to your computer with a usb cable. Open the included `.ino` project with the Arduino IDE. Press "upload" to program your arduino.

## Configure OBS

In your OBS project create 5 scenes to switch between. Go to File > Settings > Hotkey and scroll down to scene controls. Under each scene set "Switch to scene" hotkey to be the desired key. 
`Control + 1`
`Control + 2`
`Control + 3`
`Control + 4`
`Control + 5`

With the obs-macro-scene-switcher connected via USB - press one of the 5 buttons to switch between scenes. Good work!

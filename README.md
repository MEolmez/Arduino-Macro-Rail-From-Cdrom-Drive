# Arduino-Macro-Rail-From-Cdrom-Drive

When taking photos with reversed lenses for macro purposes , focused area is so small its usually necessary to move the object and take multiple photos of it with different focus points each time. While there are multiple specialized devices for this , i wanted it to be cheap and buildable from rather easily available parts.

Its made from the lazer moving part of an old cd-rom drive as the name suggests. An arduino and Adafruit's "now ancient" L293D based motor shield is used. First button moves the object forward , second backwards. Device has IR remote function for taking the photo without touching the camera , which is wired to third button.

Code uses Afmotor and multiCameraIrControl libraries.

To-Do:

-Getting a 4*4 keypad for easy step resolution selection
-Taking input for how many photos to take and at which step resolution , making the device automatic.
-Adding controllable LED's for object illumination

https://github.com/adafruit/Adafruit-Motor-Shield-library

multiCameraIrControl Librarys Author is Sebastian Setz. 
Librarys website is here - > http://sebastian.setz.name/arduino/my-libraries/multi-camera-ir-control/

* License....:  This work is licensed under the Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License.
*               To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-sa/3.0/ or send a letter to
*               Creative Commons, 171 Second Street, Suite 300, San Francisco, California, 94105, USA.

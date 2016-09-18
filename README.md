# Arduino-Macro-Rail-From-Cdrom-Drive

When taking photos with reversed lenses for macro purposes , focused area is so small its usually necessary to move the object and take multiple photos of it with different focus points each time. While there are multiple specialized devices for this , i wanted it to be cheap and buildable from rather easily available parts.

Its made from the lazer moving part of an old cd-rom drive as the name suggests. An arduino and Adafruit's "now ancient" L293D based motor shield is used. First button moves the object forward , second backwards. Device has IR remote function for taking the photo without touching the camera , which is wired to third button.

Code uses Afmotor and multiCameraIrControl libraries.

To-Do:
-Getting a 4*4 keypad for easy step resolution selection
-Taking input for how many photos to take and at which step resolution , making the device automatic.
-Adding controllable LED's for object illumination

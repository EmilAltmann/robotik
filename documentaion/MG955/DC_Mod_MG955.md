# Modification of the MG955 servo family to run on more than 5vDC

<img width="500" alt="MG955 Servo" src="https://github.com/EmilAltmann/robotik/blob/main/documentaion/MG955/pictures/servo.png">

The MG955 servos are designed for 5V use at approximately max 1.5A.
But if you use a lot of them you need either a very beefy 5V regulator or a 5V battery pack.
Both of them are hard to come by.
But there are plenty of very small DC-DC buck regulators which are capable of delivering 2A.
So the Idea is to put one of them into every servo.

## BOM:
  * MG955 servo
  * DC-DC buck converter with a size of 12x18mm
  * 2x 5cm cable
  * 20mm of heat shrink which fits around the buck converter
<img width="500" alt="Bill of materials" src="https://github.com/EmilAltmann/robotik/blob/main/documentaion/MG955/pictures/BOM.png">

#### 1. Securing the gearbox:
You will have a bad day if you remove the four screws of the motor directly.
So to prevent the Gearbox of falling apart to easily you can find something which fits loosely over the output shaft.
If you have an m3 screw with exactly the right length you can just clamp the washer thingy directly to the servo.
Else you can use a screw with a nut locket approximately at the right length.

<img height="300" alt="Parts for securing" src="https://github.com/EmilAltmann/robotik/blob/main/documentaion/MG955/pictures/securing.png"><img height="300" alt="secured servo gearbox" src="https://github.com/EmilAltmann/robotik/blob/main/documentaion/MG955/pictures/secured.png">

#### 2. Opening the servo:
**NOW** you can remove the four long screws from the servo.
Watch out for the rubber grommet when removing the back cover.
With an "sharp" soldering iron you can now desolder the red positive and brown negative connection.
<img width="500" alt="Unscrewing the servo" src="https://github.com/EmilAltmann/robotik/blob/main/documentaion/MG955/pictures/unsrewed.png">

#### 3. adding the buck converter:
Next you can solder the red and brown wires to the input of the buck converter. 
But put no solder on the output pads, because that will make it harder for the next step.
For setting the output voltage supply the servo with your supply voltage,
then you can hold the buck converter with your multimeter probes down and turn the poti until the converter outputs approximately 5V.
After that you can solder the two wires to the output and sleeve the whole buck converter with the heat-shrink.

<img height="300" alt="the installation of the buck converter" src="https://github.com/EmilAltmann/robotik/blob/main/documentaion/MG955/pictures/regulator_soldered.png"><img height="300" alt="and the same sleeved" src="https://github.com/EmilAltmann/robotik/blob/main/documentaion/MG955/pictures/regulator_headshrinked.png">

#### 4. putting it all together:
Again with an "sharp" soldering iron you can solder the output of the buck converter to the servo control board.
Now you can stuff everything into the servo but watch out for the cables, sometimes they can be caught on the corners where the screws will go!
Then you can reseat the rubber grommet, close the lid back on the servo and screw everything together.

<img width="500" alt="Stuffing everything in" src="https://github.com/EmilAltmann/robotik/blob/main/documentaion/MG955/pictures/stuffed.png">

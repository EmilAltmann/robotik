# robotik

Um die Biblithek nutzen zu können muss sie zu erst importiert werden. Dazu geht man unter "Sketch > Include Library > Add .ZIP Library" und wählt die Robotik.zip Datei aus.

<img width="585" alt="Bildschirmfoto 2023-03-23 um 14 25 56" src="https://user-images.githubusercontent.com/86919234/227218210-811e7c5e-622e-4739-8283-3ff856535fc1.png">

Jedes Programm benötigt den Inport der Biblithek mit einem include.
```C
#include "Robotik.h"
```
In der setup Methode kann alles, was einmalig ausgefürt werden soll hinzugefügt werden. Jedoch muss dort immer die InitalisiereRobotik Methode zu beginn stehen.
```C
void setup() {
  InitialisiereRobotik();
}
```
Die loop Methode wird genutzt um Programmcode wiederholt auszufüren.
```C
void loop() {
}

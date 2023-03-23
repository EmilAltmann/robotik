#include "Robotik.h"

void setup() {
  InitialisiereRobotik();
  for (int i = 0; i < 10;i++) {
    schalte_LED1_an();
    schalte_LED2_aus();
    delay(50);
    schalte_LED1_aus();
    schalte_LED2_an();
    delay(50);
  }
  schalte_LED1_aus();
  schalte_LED2_aus();
}

void loop() {

  rotiere_A_zu_Position( 0 );
  rotiere_B_zu_Position( 0 );
  rotiere_C_zu_Position( 0 );
  rotiere_D( 100 );
  rotiere_E( 100 );
  schalte_LED1_an();
  delay (2000);
  rotiere_A_zu_Position( 270 );
  schalte_LED1_aus();
  rotiere_B_zu_Position( 270 );
  rotiere_C_zu_Position( 270 );
  rotiere_D( -100 );
  rotiere_E( -100 );
  delay(2000);


    //  Serial.println();
    //  if (ist_Knopf_gedrueckt()) {
    //    Serial.print("Knopf ist gedrückt");
    //  } else {
    //    Serial.print("Knopf ist nicht gedrückt");
    //  }
    //  if (ist_1_gedrueckt()) {
    //    Serial.print("Taster1 ist gedrückt");
    //  } else {
    //    Serial.print("Taster1 ist nicht gedrückt");
    //  }
    //  if (ist_2_gedrueckt()) {
    //    Serial.print("Taster2 ist gedrückt");
    //  } else {
    //    Serial.print("Taster2 ist nicht gedrückt");
    //  }
    //  if (ist_3_gedrueckt()) {
    //    Serial.print("Taster3 ist gedrückt");
    //  } else {
    //    Serial.print("Taster3 ist nicht gedrückt");
    //  }
    //  Serial.print("Distanz A: ");
    //  Serial.print(distanz_A());
    //  Serial.print("Distanz B: ");
    //  Serial.print(distanz_B());
    //  Serial.print(ist_Knopf_gedrueckt());
//   rotiere_D(-30);
//   rotiere_E(30);
//   while (distanz_A() < 10) {
//     rotiere_D(30);
//   }

  // rotiere_E_fuer_n_Pulse(2,20);
  // while (rotiert_E()) {

  // }
  // delay(100);
  // // // warte(0.5);
  // rotiere_E_fuer_n_Pulse(-2,20);
  // while (rotiert_E()) {
    
  // }
  // delay(100);
  // for (int i = 0; i <= 10; i++) {
  //   Serial.print(i);
  //   Serial.print(" : ");
  //   Serial.println(i * 27);

  //   rotiere_A_zu_Position(i * 27);
  //   rotiere_B_zu_Position(i * 27);
  //   rotiere_C_zu_Position(i * 27);
  //   warte(1);
  // }
  // delay(4000);
  // warte(1);
}






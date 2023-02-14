#include "DigiKeyboard.h"

void setup() {
  // put your setup code here, to run once:
DigiKeyboard.sendKeyStroke(0);
DigiKeyboard.write("Administrador");
delay(50);
DigiKeyboard.sendKeyStroke(43);
delay(50);
DigiKeyboard.write("#TIadm17#");
delay(10);
}

void loop() {
  // put your main code here, to run repeatedly:

}

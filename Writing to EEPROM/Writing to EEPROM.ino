// C++ code
//
#include <EEPROM.h>
#include <stdio.h>

int incomingByte = 1;
int address;
int value;
int in_address;
String user_input;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.print("\nRead or write?");
  while(Serial.available() == 0) {
    // read the incoming byte:
    
  }
  user_input = Serial.readString();
  Serial.println(user_input);
  if(user_input == "write"){
    Serial.print("\nEnter address:");
    while(Serial.available() == 0) {
    // read the incoming byte:
  }
   address = Serial.parseInt();
   Serial.print(address);
   Serial.print("\nEnter value to store: ");
   
    while(Serial.available() == 0){
    }
    value = Serial.parseInt();
    EEPROM.write(address, value);
    Serial.print("\nYou entered: read ");
    Serial.print(address);
    Serial.print(" ");
    in_address = EEPROM.read(5);
    Serial.print(in_address);
   }
   if(user_input == "read"){
     Serial.print("\nEnter address:");
     while(Serial.available() == 0) {
     // read the incoming byte:
     }
   address = Serial.parseInt();
   in_address = EEPROM.read(address);
     Serial.print("\nValue in address: ");
     Serial.print(in_address);
   }
  
  
  }
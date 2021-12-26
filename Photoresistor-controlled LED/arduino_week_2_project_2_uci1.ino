// C++ code
//
void setup()
{
  pinMode(9, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int sensorValue = 0;
  sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  if (sensorValue < 750){
    digitalWrite(9, HIGH);
    
  }
  else{
    digitalWrite(9, LOW);
  }
}


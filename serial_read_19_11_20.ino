#define TempPin A0

int TempValue;
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {  TempValue = analogRead(TempPin); // Getting LM35 value and saving it in variable
  float TempCel = ( TempValue/1024.0)*500; // Getting the celsius value from 10 bit analog value
  float TempFarh = (TempCel*9)/5 + 32; // Converting Celsius into Fahrenhiet
  Serial.print("TEMP = "); //Displaying temperature in Celsius
  Serial.print(TempCel);
  Serial.print("*C");
  // Serial.print("    |    ");
  // Serial.print("TEMPRATURE = "); // Displaying Temperature in Fahrenheit
  // Serial.print(TempFarh);
  // Serial.print("*F");
  Serial.println();
  delay(1000);
}

  

#define OZONE_PIN  A0

int ozone_value = 0;

void setup() {
  
  // Initialize serial port
  Serial.begin(9600);
  Serial.println("MiCS-2614 Test Read");
}

void loop() {
  
  // Read analog value, print it out, and wait
  ozone_value = analogRead(OZONE_PIN);
  Serial.print("Ozone: ");
  Serial.println(ozone_value, DEC);
  delay(1000);
}

/*
  [Analog pin A0]  ---  cds  ---  10k  ---  [5V]
                         |
            [GND]  ---  cds
  
  The value becomes lower when the illuminance becomes brighter,
  and increases when the light becomes darker.
*/

int cds = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int cdsValue = analogRead(cds);
  Serial.print("cds = ");
  Serial.println(cdsValue);
  delay(100);
}

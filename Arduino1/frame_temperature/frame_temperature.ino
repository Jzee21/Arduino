float temperature;  
float frame;
int reading1;
int reading2;  
int lm35Pin = A0;
int lm36Pin = A1;

void setup()  
{
    analogReference(INTERNAL);
    Serial.begin(9600);
}

void loop()  
{
    reading1 = analogRead(lm35Pin);
    reading2 = analogRead(lm36Pin);
    temperature = reading1 / 9.31;
    frame = reading2;
    
    Serial.println(temperature);
    Serial.println(frame);
    delay(1000);
}

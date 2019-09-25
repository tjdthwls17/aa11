void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
int sensorValue = analogRead(A0);

float voltage = f_map(sensorValue, 0, 1023, 0.0, 5.0);

Serial.print("AA11, Present voltage (0.0 ~ 5.0) : ");
Serial.println(voltage);
delay(500);
}
float f_map(long x, long in_min, long in_max, float out_min, float out_max)
{
  return(x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}



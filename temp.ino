int val;
int tempPin = 7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(tempPin);
  float cel = val*(5.0/1024)*100;
  Serial.print("TEMPRATURE = ");
  Serial.print("");
  Serial.print(cel);
  Serial.print("°C || ");
  Serial.print("");
  Serial.print("K = ");
  Serial.print(cel+273);
  Serial.println();
  delay(1000);
}

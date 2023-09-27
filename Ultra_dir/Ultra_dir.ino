void ultra_dir() {
pinMode(aci, OUTPUT);
  digitalWrite(aci, LOW);
  delayMicroseconds(2);
  digitalWrite(aci, HIGH);
  delayMicroseconds(10);
  digitalWrite(aci, LOW);

  duracao = pulseIn(eco, HIGH);
  distancia = duracao / 29 / 2;
  
  delay(10);

  Serial.print("cm: ");
  Serial.println(distancia);
}
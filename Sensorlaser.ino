
void laserUP_simples() {
  dist_laser_UP = 0;
  VL53L0X_RangingMeasurementData_t measure;
  lox.rangingTest(&measure, false);  
  if (measure.RangeStatus != 7) {
    dist_laser_UP = measure.RangeMilliMeter / 10;
  }  
 // Serial.println(dist_laser_UP);
 // if (dist_laser_UP > 0 && dist_laser_UP <= 9) {
    //Serial.println("ACHOU");
   //} 
}

void laserUP(int n) {
 // n=quantidade de leitura p/ média
  int i = 0;
  media_laserUP = 0;
  while (i < n) { // Calculando Média
    VL53L0X_RangingMeasurementData_t measure;
    lox.rangingTest(&measure, false);  
    if (measure.RangeStatus != 4) {
      media_laserUP = media_laserUP + measure.RangeMilliMeter / 10;
      i++;
    }  

  }
  media_laserUP = media_laserUP / i;
  //Serial.println (media_laserUP);

}



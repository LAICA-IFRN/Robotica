// motor(0,0,0,0,v1,v2,t); parar
// motor(1,0,1,0,v1,v2,t); frente
// motor(0,1,0,1,v1,v2,t); trás
// motor(0,1,1,0,v1,v2,t); direita
// motor(1,0,0,1,v1,v2,t); esquerda
void verifica_obstaculo() {
  laserUP_simples();
  if (dist_laser_UP > 0 && dist_laser_UP <= 12) {
    motor(0,0,0,0,255,255,1000); //parar
    laserUP_simples();
    if (dist_laser_UP > 0 && dist_laser_UP <= 6) {
      laserUP_simples();
      while ( dist_laser_UP > 1 && dist_laser_UP <= 7){ 
       laserUP_simples();
       motor(1,0,1,0,92,85,25); //frente
       obstaculo();
      }
    } 
    else {
       motor(1,0,1,0,167,160,15); //frente    
    } 
  }
}

void obstaculo(){
  motor(0,0,0,0,255,255,1000); //parar
  laserUP_simples();
  while ( dist_laser_UP > 0 && dist_laser_UP <= 4){ // dá ré até dá
    laserUP_simples();
    motor(0,1,0,1,167,160,0); // trás até ficar na posição correta 
  }
  motor(0,0,0,0,255,255,500); //parar
  laserUP_simples();     
    // iniciar parafernalha
  while ( dist_laser_UP > 0 && dist_laser_UP <= 10){
    //Serial.println("DESVIA");
    laserUP_simples();
    motor(1,0,0,1,227,220,0); // esquerda
  }
  motor(1,0,0,1,227,220,320); // esquerda
  motor(0,0,0,0,255,255,500); //parar
  motor(1,0,1,0,167,160,0); //frente  
  ultra_dir();
  while (  distancia > 0 && distancia <= 20 ){
    //Serial.println("F sensor");
    //delay(100);
    ultra_dir();
    motor(1,0,1,0,167,160,0); //frente   
  }  
  motor(1,0,1,0,167,160,330); //frente
  motor(0,0,0,0,255,255,500); //parar
  motor(0,1,1,0,227,220,530); //direita
  motor(0,0,0,0,255,255,500); //parar
  ultra_dir();
  while ( distancia > 0 && distancia >= 25 ){
    ultra_dir();
    motor(1,0,1,0,167,160,0); //frente
  }
  motor(0,0,0,0,255,255,500); //parar
  ultra_dir();
  while ( distancia > 0 && distancia <= 25 ){
      ultra_dir();
      motor(1,0,1,0,167,160,0); //frente
  }
  motor(0,0,0,0,255,255,500); //parar    
  motor(0,1,1,0,227,220,360); //direita  
  motor(0,0,0,0,255,255,500); //parar      
  while (estadoE_ == 0 && estadoE == 0 ){
    // estadoC = digitalRead (sensorcentro);
    estadoE = digitalRead (sensoresq);
    estadoE_= digitalRead (sensoresq_);
    motor(1,0,1,0,137,130,0); //frente
}
}


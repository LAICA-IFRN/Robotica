// motor(0,0,0,0,v1,v2,t); parar
// motor(1,0,1,0,v1,v2,t); frente
// motor(0,1,0,1,v1,v2,t); trás
// motor(0,1,1,0,v1,v2,t); direita
// motor(1,0,0,1,v1,v2,t); esquerda

void motor(int a,int b,int c,int d,int v1,int v2,int t){
  analogWrite (pino_ena,v1 /*+ incremento*/ );
  analogWrite (pino_enb, v2 /*+ incremento++*/);
  digitalWrite(in1, a);
  digitalWrite(in2, b);
  digitalWrite(in3, c);
  digitalWrite(in4,d);
  delay(t);
}

void noventa_esq() {
  motor(0,0,0,0,255,255,1000); //parar
  motor(1,0,1,0,157,150,400); //frente
  motor(0,0,0,0,255,255,1000); //parar
  motor(1,0,0,1,217,210,10); //esquerda
  while (estadoD_ == 0 && estadoD == 0 ){
    // estadoC = digitalRead (sensorcentro);
      estadoD = digitalRead (sensordir);
      estadoD_ = digitalRead (sensordir_);
      motor(1,0,0,1,217,210,0); //esquerda
    }
  motor(0,0,0,0,255,255,1000); //parar
  estadoE = digitalRead (sensoresq);
  estadoE_ = digitalRead (sensoresq_);
  while (estadoE_ == 0 && estadoE == 0 ){
    // estadoC = digitalRead (sensorcentro);
    estadoE = digitalRead (sensoresq);
    estadoE_ = digitalRead (sensoresq_);
    motor(0,1,0,1,92,85,0); //trás
    }

  motor(1,0,1,0,157,150,100); //frente
  motor(0,0,0,0,255,255,500); //parar
}

void noventa_dir() {
  motor(0,0,0,0,255,255,1000); //parar
  motor(1,0,1,0,157,150,400); //frente
  motor(0,0,0,0,255,255,1000); //parar
  motor(0,1,1,0,217,210,100); //direita
  while (estadoE_ == 0 && estadoE == 0 ){
    // estadoC = digitalRead (sensorcentro);
    estadoE = digitalRead (sensoresq);
    estadoE_ = digitalRead (sensoresq_);
    motor(0,1,1,0,217,210,0); //direita 
  }
 motor(0,0,0,0,255,255,1000); //parar
 estadoD = digitalRead (sensordir);
 estadoD_ = digitalRead (sensordir_);
  while (estadoD_ == 0 && estadoD == 0 ){
    // estadoC = digitalRead (sensorcentro);
    estadoD = digitalRead (sensordir);
    estadoD_ = digitalRead (sensordir_);
    motor(0,1,0,1,92,85,0); //trás
    }
  motor(1,0,1,0,157,150,100); //frente
  motor(0,0,0,0,255,255,500); //parar
 }


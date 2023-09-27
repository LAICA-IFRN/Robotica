void linha(){  

verifica_obstaculo();
leitura();
     // 1 = branco / 0 = preto 
  if (estadoE_ && estadoE && estadoC && estadoD && estadoD_ ) { // 00000
     motor(1,0,1,0,127,120,0); //frente
} else if (!estadoE_ && !estadoE && estadoC && !estadoD && !estadoD_ ) { // 11011
     motor(1,0,1,0,127,120,0); //frente
} else if (!estadoE_ && !estadoE && !estadoC && !estadoD && !estadoD_ ) { // 11111
     motor(1,0,1,0,127,120,0); //frente
} else if (estadoE_ && estadoE &&  !estadoC && estadoD && estadoD_ ) { // 00100
     motor(1,0,1,0,127,120,0); //frente 
} else if (!estadoE_ && !estadoE && !estadoC && estadoD && !estadoD_ ) { // 00010
     motor(0,1,1,0,167,160,0); //direita
} else if (!estadoE_ && estadoE && !estadoC && !estadoD && !estadoD_ ) { //01000
     motor(1,0,0,1,167,160,0); //esquerda 
} else if (!estadoE_ && estadoE && estadoC && !estadoD && !estadoD_ ) { // 10011
     motor(1,0,0,1,167,160,15); //esquerda  
} else if (!estadoE_ && !estadoE && estadoC && estadoD && !estadoD_ ) { //11001
     motor(0,1,1,0,167,160,15); //direita 
} else if (!estadoE_ && !estadoE && !estadoC && !estadoD && estadoD_ ) { // 11110
     motor(0,1,1,0,167,160,135); //direita 
} else if (estadoE_ && !estadoE && !estadoC && !estadoD && !estadoD_ ) { //01111
     motor(1,0,0,1,167,160,135); //esquerda 
} else if ((estadoE_ && estadoE && !estadoC && !estadoD && !estadoD_) || (estadoE_ && estadoE && !estadoC && estadoD && !estadoD_) ) { // 00111 ou 11010
     noventa_esq();
} else if ((!estadoE_ && !estadoE && !estadoC && estadoD && estadoD_) || (!estadoE_ && estadoE && !estadoC && estadoD && estadoD_) ) { // 11100 ou 01011
     noventa_dir();
}else {
     motor(1,0,1,0,127,120,0); //frente
}

}    


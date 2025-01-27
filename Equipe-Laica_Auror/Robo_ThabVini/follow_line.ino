void followLine(bool readSenL, int readSenLC, bool readSenC, int readSenRC, bool readSenR) {
  reading();

  if ((readL && bReadLC && readC && !readR) || (readR && bReadRC && readC && !readL) || (readR && readL)) {
    stopMoving();
    delay(1000);
    digitalWrite(rgbLedR, HIGH);
    digitalWrite(rgbLedL, HIGH);
    delay(75);
    moveBack();
    delay(75);
    stopMoving();
    delay(200);
    greenSide = readGreen();
    followGreen();
    digitalWrite(rgbLedR, LOW);
    digitalWrite(rgbLedL, LOW);
    delay(10);
  } else if (readC) {
    int laserDist = laserSen();
    int sonicDist = sonicSen(TRIG_F, ECHO_F);
    if ((laserDist <= 20) && (sonicDist <= 20)) {
      obstacleToRight();
    }
    moveFront();
  } else {
    if ((readL && readLC) || (readL && !bReadLC)) {
      stopMoving();

      while (!readC) {
        reading();
        moveLeft();
      }
    } else if ((readR && readRC) || (readR && !bReadRC)) {
      stopMoving();

      while(!readC) {
        reading();
        moveRight();
      }
    } else if (readL || bReadLC) {
      moveLeft();
    } else if (readR || bReadRC) {
      moveRight();
    } else {
      moveFront();
    }
  }
}
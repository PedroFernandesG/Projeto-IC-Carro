bool onLine = false;
bool left = true;
const int delay = 180;
const int delay2 = 10;
unsigned int start = 0;

void algorithm(){

  setVelocity(0, 75);
  setVelocity(1, 80);
  onLine = false;
  left = !left;

  while (((millis() - start) < delay) || stayOnBlackLine() || !onLine ) {
    if(left){
     turnLeft();
    }
    else{
     turnRight();
    }
    if (stayOnBlackLine()){
      onLine = true;
      start = millis();
    }
    delay(delay2);
  }
}

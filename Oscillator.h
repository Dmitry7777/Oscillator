#ifndef OSCILLATOR_H
#define OSCILLATOR_H
#define IO_MCU_SYNC OUTPUT

unsigned int PROCESS_SYNC; //
int OSCILLATE; //
float FREQUENCY; //
bool AMPLITUDE; //
char FREQU[] = {"Hz"};

class Oscillator{
  public:
  Oscillator(int SYNC){
  PROCESS_SYNC = SYNC; //
  pinMode(PROCESS_SYNC, IO_MCU_SYNC); //
  
    };
  void begin(){
    
  }
  void setLow(){
    tone(PROCESS_SYNC, OSCILLATE); //
  }
  void setMiddle(){
    tone(PROCESS_SYNC, 1000 * OSCILLATE); //
  }
  void setHigh(){
    tone(PROCESS_SYNC, 1000000 * OSCILLATE); //
  }
  void end(){
    
  }
    
  private:

  
  protected:
  
};
#endif

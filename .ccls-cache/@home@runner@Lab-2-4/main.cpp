#include <iostream>
#include <string>
using namespace std;

class MusicIns{
private:
string instrument;
string instrument2;
string instrument3;


public:
void sring(void);
void wind(void);
void perc(void);
void get(void);
void show(void);
};


void MusicIns::sring(void){
  
  instrument = ("Veena guitar sitar sarod mandolin");
  
  
}
void MusicIns::wind(void){
  instrument2= ("Flute clarinet saxophone nadaswaram piccolo");
  
}
void MusicIns::perc(void){
   instrument3= ("Table mridangam bongos drums tambour");

}
void MusicIns::get(void){
  cout<<instrument<<endl;
  cout<<instrument2<<endl;
  cout<<instrument3<<endl;
}
void MusicIns::show(void){
   void get(void);
}

int main(void){
  
  MusicIns mu;
  mu.sring();
  mu.wind();
  mu.perc();
  mu.get();

  return 0;
}
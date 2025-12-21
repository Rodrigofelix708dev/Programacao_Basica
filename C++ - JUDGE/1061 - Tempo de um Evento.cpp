#include <iostream>
using namespace std;
int main (){
  string a,b;
  long long di,hi,mi,si,df,hf,mf,sf;
  long long tot=0,dia=0,hora=0,min=0,seg=0;
  cin >> a >> di;
  cin >> hi >> b >> mi >> b >> si;
  cin >> a >> df;
  cin>> hf >> b >> mf >> b >> sf;
  if(di<df){
  	dia=df-di;
  }
  if(hi>hf){
  	dia=dia-1;
  	hora=24-((hf-hi)*-1);
  }
  if(hi<hf){
  	hora=hf-hi;
  }
  if(mi>mf){
  	hora=hora-1;
  	min=60-((mf-mi)*-1);
  }
  if(mi<mf){
  	min=mf-mi;
  }
  if(si>sf){
  	min=min-1;
  	seg=60-((sf-si)*-1);
  }
  if(si<sf){
  	seg=sf-si;
  }
  cout <<  dia << " dia(s)" << endl;
  cout <<  hora << " hora(s)" << endl;
  cout <<  min << " minuto(s)" << endl;
  cout <<  seg << " segundo(s)" << endl;
}
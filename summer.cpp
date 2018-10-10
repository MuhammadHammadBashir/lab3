#include<iostream>
using namespace std;
class summer{
public:
  summer()
  {
    fstnumber=0;
    secondnumber=0;
  }
  summer(float a,float b)
  {
    fstnumber=a;
    secondnumber=b;
  }
  float calculater()
  {//length=a;
  //width=b;
    return fstnumber+secondnumber;
  }
private:
  float fstnumber;
  float secondnumber;





};
int main()
{
   float x,y;
   cout<<"enter fstnumer :";
   cin>>x;
   cout<<endl<<"enter 2ndnumber :";
   cin>>y;
   summer a(x,y);
  cout<<endl<<"addition result : "<<a.calculater()<<endl;


  return 0;
}

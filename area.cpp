#include<iostream>
using namespace std;
class area{
public:
  area()
  {
    length=0;
    width=0;
  }
  area(float a,float b)
  {
    length=a;
    width=b;
  }
  float calculate()
  {//length=a;
  //width=b;
    return length*width;
  }
private:
  float length;
  float width;





};
int main()
{
   float x,y;
   cout<<"enter length :";
   cin>>x;
   cout<<endl<<"enter width :";
   cin>>y;
   area a(x,y);
  cout<<endl<<a.calculate();


  return 0;
}

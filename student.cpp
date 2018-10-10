#include <iostream>
#include <sstream>
using namespace std;
class Student{
    public:
    void set_age(int mainage)
    {
        age=mainage;
    }void set_standard(int mainstandard)
    {
        standard=mainstandard;
    }
    void set_first_name(string mainfstname)
    {
        fstname=mainfstname;
    }
    void set_last_name(string mainlastname){
        lastname=mainlastname;
    }
    int get_age()
    {
        return age;
    }
    int get_standard()
    {
        return standard;
    }
    string get_first_name()
    {
        return fstname;
    }
    string get_last_name(){
        return lastname;
    }
    void to_string()
    {
        ss << a << ch << b << ch << c;
    }


private:
int age;
string fstname;
string lastname;
int standard;

};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
  //  cout<<age<<","<<standard<<","<<fstname<<","<<lastname;

    return 0;
}

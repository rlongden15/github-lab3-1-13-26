#include <iostream>

using namespace std;

void printNameA_H();
void printNameI_P();
void printNameQ_Z();

int main()
{
    cout<<"Course Roster: "<<endl;
  
    printNameA_H();
    printNameI_P();
    printNameQ_Z();

    return 0;
}
//--
void printNameA_H()
{
    cout<<"Gustavo Arroyo"<<endl;
    cout<<"Jackson Bossart"<<endl;
}
//--
void printNameI_P()
{
    cout<<"Jack Meyer"<<endl;
}
//--
void printNameQ_Z()
{
    cout<<"Rey Trejo"<<endl;
}

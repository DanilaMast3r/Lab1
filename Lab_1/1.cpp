#include <iostream>
#include <string>
using namespace std;


class Car
{
public:
string marka;
int cylinder;
int power;
};

class Lorry: public Car
{
public:
int gruz;
};

int main()
{
Car Volga;

cin>>Volga.marka;
cin>>Volga.cylinder;
cin>>Volga.power;

cout<<Volga.marka<<" "<<Volga.cylinder<<" "<<Volga.power<<endl;

Lorry Kamaz;

cin>>Kamaz.marka;
cin>>Kamaz.cylinder;
cin>>Kamaz.power;
cin>>Kamaz.gruz;

cout<<Kamaz.marka<<" "<<Kamaz.cylinder<<" "<<Kamaz.power<<" "<<Kamaz.gruz<<endl;

int a;
do
{
cin>>a;

switch (a)
{
    case 1:
    {
        cin>>Volga.power;
        cout<<Volga.marka<<" "<<Volga.cylinder<<" "<<Volga.power<<endl;
        break;
    }

    case 2:
    {
        cin>>Kamaz.power;
        cout<<Kamaz.marka<<" "<<Kamaz.cylinder<<" "<<Kamaz.power<<" "<<Kamaz.gruz<<endl;
        break;
    }
    case 3:
    {
        cin>>Kamaz.gruz;
        cout<<Kamaz.marka<<" "<<Kamaz.cylinder<<" "<<Kamaz.power<<" "<<Kamaz.gruz<<endl;
        break;
    }
        case 4:
    {
        cin>>Kamaz.marka;
        cout<<Kamaz.marka<<" "<<Kamaz.cylinder<<" "<<Kamaz.power<<" "<<Kamaz.gruz<<endl;
        break;
    }
        case 0:
    {
        break;
    }
}

}
while (a==1 || a==2 || a==3 || a==4 );
}

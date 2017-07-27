#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class Persoana{
public:
        char nume[50];
        char tel[13];
        char email[50];
};
int main()
{
    cout << "Hello world!" << endl;
    Persoana unu;

    //strcpy(unu.nume, "Mihai Cornel");
    //strcpy(unu.tel, "0722270796");
    //strcpy(unu.email, "mhcrnl@gmail.com");

    //ofstream ofs("pers.ros", ios::binary);
    //ofs.write((char *)&unu, sizeof(unu));

    Persoana doi;
    ifstream ifs("pers.ros", ios::binary);
    ifs.read((char *)&unu, sizeof(unu));
    cout <<"Informatii despre persoana"<<endl;
    cout <<"Nume: "<<unu.nume<<endl;
    cout <<"Telefon: "<<unu.tel<<endl;
    cout <<"Email: "<<unu.email<<endl;

    return 0;
}

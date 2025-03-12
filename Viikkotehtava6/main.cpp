#include <iostream>
#include "student.h"
#include "student.cpp"
#include <vector>
#include <algorithm>

using namespace std;

int main ()
{
    int selection =0;
    vector<Student>studentList;

    Student a("Aaa",30);
    Student b("Bbb",28);
    Student c("Ccc",25);
    Student d("Ddd",31);

    studentList.push_back(a);
    studentList.push_back(b);
    studentList.push_back(c);
    studentList.push_back(d);

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:{
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.

            string Name;
            cout << "Syötä opiskelijan nimi " << endl;
            cin >> Name;
            int Age = 0;
            cout << "Syötä opiskelijan ikä " << endl;
            cin >> Age;

            studentList.emplace_back(Name, Age);
        }
            break;

        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.

            cout << "Opiskelijoiden nimet: ";
            for (Student s: studentList)
            {
                cout << s.getName() << " ";
            }
            cout << endl;
            break;

        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat

            sort(studentList.begin(), studentList.end(),[](Student &eka, Student &toka)
                 {
                    return eka.getName() < toka.getName();
                 }
                 );

            cout << endl << "Lajittelu nimen perusteella" << endl;
            for (Student &s: studentList)
            {
                s.printStudentInfo();
            }
            break;

        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat

            sort(studentList.begin(), studentList.end(),[](Student &eka, Student &toka)
                 {
                     return eka.getAge() < toka.getAge();
                 }
                 );

            cout << endl << "Lajittelu iän perusteella" << endl;
            for (Student &s: studentList)
            {
                s.printStudentInfo();
            }
            break;
        case 4:
        {
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.

            vector<Student>::iterator it = studentList.begin();

            cout << "Syota etsittava nimi: ";
            string n;
            cin >> n;
            find_if(studentList.begin(), studentList.end(),
                    [n](const Student & m) -> bool {return m.getName() == n;});
            if (it != studentList.end())
            {
                it->printStudentInfo();
            }
            else
            {
                cout << "not found\n";
            }
            break;
        }

        default:
        cout<< "Wrong selection, stopping..."<<endl;
        break;
        }
    } while(selection < 5);
    return 0;
}

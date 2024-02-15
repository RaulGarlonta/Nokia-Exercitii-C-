#include <iostream>
#include <math.h>
using namespace std;

struct student
{
    char name[50];
    int roll, year;
    float nota;
    int courses,x;
} s[2];
float calcMedie()
{
    float s=0, nota, x;
    for(int i = 0; i <= x; ++i)
    {
        cin >> nota;
        s+=nota;
    }
    cout<<(double)s/x;
    return 0;
}
void afisareMeniu() {
    cout << "Meniu:" << endl;
    cout << "1. Adaugare student" << endl;
    cout << "2. Afisare lista studenti" << endl;
    cout << "3. Iesire" << endl;
}
int main()
{
    afisareMeniu();
    cout << "Enter information of students: " << endl;

    for(int i = 0; i < 2; i++)
    {
        s[i].roll = i+1;
        cout << "Student nr " << s[i].roll << "," << endl;

        cout << "Enter name: ";
        cin >> s[i].name;

        cout << "Enter year: ";
        cin >> s[i].year;

        cout << "Number of courses: ";
        cin >> s[i].courses;

        cout <<"Introdu notele pentru cele " << s[i].courses << " cursuri: ";
        for(int x=0; x < s[i].courses; ++x)
        {
            int nota;
           {
            if(x <= s[i].courses)
        {
            cout << "Nota pentru cursul " << x+1 << ": ";
            cin >> nota;
        }
           }
        }
     }

    cout << "Afisare informatiii: " << endl;

    for(int i = 0; i < 2; ++i)
    {
        cout << "\nStudent nr: " << i+1 << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Year: " << s[i].year << endl;
        cout << "Courses: " << s[i].courses << endl;
        cout << "Medie " << calcMedie << endl;
    }

    return 0;
}

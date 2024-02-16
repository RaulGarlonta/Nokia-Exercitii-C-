#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Student {
    string nume;
    vector<string> cursuri;
    vector<int> note;
    int an;
    double medie;
};

void afisareMeniu() {
    cout << "Meniu:" << endl;
    cout << "1. Adaugare student" << endl;
    cout << "2. Afisare lista studenti" << endl;
    cout << "3. Afisare studenti in ordine descrescatoare a mediei." << endl;
    cout << "4. Iesire" << endl;
}

void adaugareStudent(vector<Student>& listaStudenti) {
    Student student;
    cout << "Introdu numele studentului: ";
    cin >> student.nume;

    cout << "Introdu anul studentului: ";
    cin >> student.an;

    int nrCursuri;
    cout << "Introdu numarul de cursuri: ";
    cin >> nrCursuri;

   cout << "Introdu numele cursurilor: ";
    for(int i = 0; i < nrCursuri; ++i) {
        string curs;
        cin >> curs;
        student.cursuri.push_back(curs);
    }

     cout <<"Introdu notele pentru cele " << nrCursuri << " cursuri: ";
        for(int i = 0; i < nrCursuri; ++i) {
        int nota;
           {
            if(i <= nrCursuri)
        {
            cout << "Nota pentru cursul " << i+1 << ": ";
            cin >> nota;
        }
           }
           student.note.push_back(nota);
        }
    double sumaNote = 0;
    for(int nota : student.note) {
        sumaNote += nota;
    }
    student.medie = sumaNote / nrCursuri;

    listaStudenti.push_back(student);
}

void afisareListaStudenti(const vector<Student>& listaStudenti) {
    cout << "Lista studenti:" << endl;
    for(const auto& student : listaStudenti) {
        cout << "Nume: " << student.nume << ", Anul: " << student.an << ", Medie: " << student.medie << endl;
    }

}
void sortare( vector<Student> listaStudenti)
        {
        cout << "Studentii sortati dupa medie (descrescator) si nume (alfabetic):" << endl;
        for (const auto& student : listaStudenti)
        {
            cout << "Nume: " << student.nume << "- Anul: " << student.an << "- Medie: " << student.medie << endl;
        }

}
int main() {
    vector<Student> listaStudenti;
    int optiune;

    do {
        afisareMeniu();
        cout << "Alege o optiune: ";
        cin >> optiune;

        switch(optiune) {
            case 1:
                adaugareStudent(listaStudenti);
                break;
            case 2:
                afisareListaStudenti(listaStudenti);
                break;
            case 3:
                sortare(listaStudenti);
            case 4:
                cout << "Iesire";
                break;
            default:
                cout << "Optiune invalida. Te rog sa alegi din nou." << endl;
        }
    } while(optiune != 3);

    return 0;
}

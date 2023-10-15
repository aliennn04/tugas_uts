#include <iostream>
#include <string>
using namespace std;

int main() {
    double uts, uas, quiz, tugas, nilai_projek;

    cout << "Masukkan nilai UTS: ";
    cin >> uts;
    cout << "Masukkan nilai UAS: ";
    cin >> uas;
    cout << "Masukkan nilai Quiz: ";
    cin >> quiz;
    cout << "Masukkan nilai Tugas: ";
    cin >> tugas;
    cout << "Masukkan nilai Proyek: ";
    cin >> nilai_projek;


    double nilai_akhir = (0.2 * uts) + (0.3 * uas) + (0.1 * quiz) + (0.1 * tugas) + (0.3 * nilai_projek);

    string grade;
    if (nilai_akhir >= 90) {
        grade = "A";
        if (nilai_akhir >= 95) {
            grade = "A+";
        } else if (nilai_akhir < 93) {
            grade = "B+";
        }
    } else if (nilai_akhir >= 80) {
        grade = "B";
    } else if (nilai_akhir >= 70) {
        grade = "C";
    } else if (nilai_akhir >= 60) {
        grade = "D";
    } else {
        grade = "E";
    }

    // Display the grade
    cout << "Grade: " << grade << endl;

    return 0;
}

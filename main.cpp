// Liste aller eingebundenen Bibliotheken
#include <iostream>
#include <string>
#include <cstdlib>

// Liste aller Präprozessor-Symbole
#define IS_SCIENTIFIC

using namespace std;

int main(int argc, char *argv[])
{
    // Operanden und Operator als Zeichenketten einlesen

    // Operanden in Zahlen umwandeln
    double operand1 = atof(argv[1]);
    double operand2 = atof(argv[3]);

    // Berechnung je nach Art des Operators ausführen
    string operator1 = argv[2];
    double result = 0.0;

    if (operator1 == "plus")
        result = operand1 + operand2;
    else if (operator1 == "minus")
        result = operand1 - operand2;
    else if (operator1 == "mal")
        result = operand1 * operand2;
    else if (operator1 == "geteilt")
        result = operand1 / operand2;
#ifdef IS_SCIENTIFIC
    else if (operator1 == "pow")
        result = pow(operand1, operand2);
#endif
    else
    {
        cout << "Fehler: Ungültiger Operator" << endl;
        return -1;
    }
    cout << "Ergebnis = " << result << endl;

    return 0;
}
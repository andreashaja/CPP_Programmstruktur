/* ---------------------------------------------------------------------
 * The Fearless Engineer - Programmieren und Elektronik
 * Copyright (C) 2020, Dr. Andreas Haja.  
 *
 * Zweck : Entwicklung eines Taschenrechners mit optionalem wissenschaftlichen Modus
 *         Lernziele sind das Einlesen und Verarbeiten von Parametern vom Terminal 
 *         sowie die Verwendung des Präprozessors zum selektiven Kompilieren
 *
 * Du solltest zusammen mit diesem Programm eine Kopie der MIT-Lizenz erhalten haben.
 * Falls nicht, sieh bitte hier nach: https://opensource.org/licenses/MIT.
 *
 * http://www.thefearlessengineer.com/cpp-kurs
 * ----------------------------------------------------------------------
 */

// Liste aller eingebundenen Bibliotheken
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

// Liste aller Präprozessor-Symbole
#define IS_SCIENTIFIC

using namespace std;

int main(int argc, char *argv[])
{
    // Einfache Prüfung auf richtige Parameteranzahl
    if (argc < 3)
    {
        cout << "Fehler: Parameteranzahl zu niedrig.\n";
        return -1;
    }

    // Operanden in Zahlen umwandeln
    double operand1 = atof(argv[1]);
    double operand2 = atof(argv[3]); // Hier können Zugriffsverletzungen auftreten -> siehe Aufgabe 1

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
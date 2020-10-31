/* ---------------------------------------------------------------------
 * The Fearless Engineer - Programmieren und Elektronik
 * Copyright (C) 2020, Dr. Andreas Haja.  
 *
 * Zweck : Erweitern des Taschenrechners um Funktionen mit zwei und drei Operanden
 * 
 * Aufgabe : Umsetzen der Funktionen "sinus-von" und "geteilt-durch" (MUSTERLÖSUNG)
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

using namespace std;

int main(int argc, char *argv[])
{
    // Schritt 1 : Einfügen der Fehlerprüfung für Parameter aus Aufgabe 1
    if (argc < 3)
    {
        cout << "Fehler: Parameteranzahl zu niedrig.\n";
        return -1;
    }

    string operator1;
    int num_param = 0;

    if (atof(argv[1]) == 0)
    {
        operator1 = argv[1];
        num_param = 1;
    }
    else if (atof(argv[2]) == 0)
    {
        operator1 = argv[2];
        num_param = 2;
    }
    else
    {
        cout << "Fehler: Operator nicht oder falsch angegeben.\n";
    }

    if (num_param == (argc - 2))
    {
        cout << "Operator und Parameter wurden richtig eingegeben.\n";
    }
    else
    {
        cout << "Fehler: Operator " << operator1 << " erwartet " << num_param << " Parameter\n";
        return -1;
    }

    // Schritt 2 : Umsetzen der Taschenrechner-Funktion "sinus-von"
    //             Hinweis: Die Funktion sin(x) ist in der Bibliothek "cmath" enthalten
    double result = 0.0;
    if (operator1 == "sinus-von")
    {
        double operand1 = atof(argv[2]);
        result = sin(operand1);
    }

    // Schritt 3 : Umsetzen der Taschenrechner-Funktion "geteilt-durch"
    else if (operator1 == "geteilt-durch")
    {
        double operand1 = atof(argv[1]);
        double operand2 = atof(argv[3]);
        result = operand1 / operand2;
    }

    cout << "Ergebnis = " << result << endl;

    return 0;
}
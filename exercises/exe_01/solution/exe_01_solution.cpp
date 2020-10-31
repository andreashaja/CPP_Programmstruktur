/* ---------------------------------------------------------------------
 * The Fearless Engineer - Programmieren und Elektronik
 * Copyright (C) 2020, Dr. Andreas Haja.  
 *
 * Zweck : Fehlerprüfung für Taschenrechner-Projekt in main.cpp
 * 
 * Aufgabe : Prüfen auf richtig eingegebene Parameteranzahl 
 *           bei Operatoren mit einem (z.B. sinus-von 3.14)
 *           oder zwei (z.B. 10.5 plus 1.5) Operanden (MUSTERLÖSUNG)
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
    // Schritt 1
    if (argc < 3)
    {
        cout << "Fehler: Parameteranzahl zu niedrig.\n";
        return -1;
    }

    // Schritt 2
    string operator1;
    int num_param = 0;

    // Schritt 3 + 4
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

    // Schritt 5
    if (num_param == (argc-2))
    {
        cout << "Operator und Parameter wurden richtig eingegeben.\n";
    }
    else
    {
        cout << "Fehler: Operator " << operator1 << " erwartet " << num_param << " Parameter\n";
        return -1;
    }
        

    return 0;
}
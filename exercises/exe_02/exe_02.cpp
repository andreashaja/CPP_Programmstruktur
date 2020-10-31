/* ---------------------------------------------------------------------
 * The Fearless Engineer - Programmieren und Elektronik
 * Copyright (C) 2020, Dr. Andreas Haja.  
 *
 * Zweck : Erweitern des Taschenrechners um Funktionen mit zwei und drei Operanden
 * 
 * Aufgabe : Umsetzen der Funktionen "sinus-von" und "geteilt-durch"
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
    //             Hinweis: Code per Copy-Paste einfügen


    // Schritt 2 : Umsetzen der Taschenrechner-Funktion "sinus-von"
    //             Hinweis: Die Funktion sin(x) ist in der Bibliothek "cmath" enthalten
    //             Prüfen auf korrekten Operator-String mit "if" und speichern des Ergebnisses in "result"
    double result = 0.0;
    

    // Schritt 3 : Umsetzen der Taschenrechner-Funktion "geteilt-durch"
    //             Prüfen auf korrekten Operator-String mit "if" und speichern des Ergebnisses in "result"


    cout << "Ergebnis = " << result << endl;

    return 0;
}
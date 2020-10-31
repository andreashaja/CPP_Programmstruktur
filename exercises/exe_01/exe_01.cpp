/* ---------------------------------------------------------------------
 * The Fearless Engineer - Programmieren und Elektronik
 * Copyright (C) 2020, Dr. Andreas Haja.  
 *
 * Zweck : Fehlerprüfung für Taschenrechner-Projekt in main.cpp
 * 
 * Aufgabe : Prüfen auf richtig eingegebene Parameteranzahl 
 *           bei Operatoren mit einem (z.B. sinus-von 3.14)
 *           oder zwei (z.B. 10.5 plus 1.5) Operanden
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
    // Prüfen, ob mindestens zwei Parameter eingegeben wurden

    // Schritt 1: Prüfen, ob mindestens zwei Parameter eingegeben wurden
    //            Falls nein, Ausgabe von "Fehler: Parameteranzahl zu niedrig.\n"
    //            und Rückgabe von -1 an das Betriebssystem
    

    // Schritt 2: Definieren einer String-Variablen namens "operator1"
    //            und einer mit Null initialisierten Integer-Variablen "num_param"


    // Schritt 3: Prüfen, ob der Operator an erster oder zweiter Stelle steht (z.B. mit if-else)
    //            Hinweis: mit `atof`kann überprüft werden, ob eine Zeichenkette eine Zahl oder eine beliebige Zeichenkette ist
    //            Falls kein Operator gefunden wurde, Ausgabe von "Fehler: Operator nicht oder falsch angegeben.\n"
    //            und Rückgabe von -1 an das Betriebssystem


    // Schritt 4: Zuweisen der Operator-Zeichenkette an die Variable "operator1"
    //            und der Parameter-Anzahl an die Variable "num_param" 


    // Schritt 5: Prüfen, ob die Anzahl der Operanden zum Operator passt.
    //            Falls ja, Ausgabe von "Operator und Parameter wurden richtig eingegeben.\n"
    //            Falls nein, Ausgabe von "Fehler: Operator " << operator1 << " erwartet " << num_param << " Parameter\n"
    //            und Rückgabe von -1 an das Betriebssystem

    
    return 0;
}
//#include "taschenrechner.cpp"
#include <iostream>
#include <string>
#include "rechenarten.cpp" // Nur zu Demo-Zwecken! Normalerweise werden cpp-Dateien nicht mit #include eingebunden.

using namespace std;

int main(int argc, char* argv[])
{
  // Deklaration von Variablen  
  double operand1, operand2;
  string operator1;   
  int cnt = 0; // Deklaration mit Initialisierung

  // Auf richtige Parameterzahl prüfen
  if(argc!=4) // Bedingte Anweisung (Verzweigung)
  {
    cout << "Anzahl Parameter falsch! Erwartet sind 3, eingegeben wurden " << argc << endl;
    cout << "Aufruf-Format ist: ./rechne linker-operand operator rechter-operand" << endl;
    return 1; // Sprunganweisung
  }
   
  // Weise Parameter an richtige Variablen zu
  while(cnt < argc) // Iterationsanweisungen
  {
    if(cnt==1)
      operand1 = atof(argv[cnt]); // Zuweisung
    else if (cnt==2) // Mehrfachverzweigung
      operator1 = argv[cnt];
    else if (cnt==3)          
      operand2 = atof(argv[cnt]);
      
    cnt = cnt + 1;
  }

  // Führe die passende Rechnung durch
  double result = 0.0; 
  if(operator1=="plus")
    result = operand1 + operand2;
  else if(operator1=="minus")
    result = operand1 - operand2;  
  else if(operator1=="geteilt-durch")
    result = teile(operand1,operand2);  

  // Ergebnis ausgeben und Programm beenden
  cout << "Ergebnis = " << result << endl;  
  return 0;
}
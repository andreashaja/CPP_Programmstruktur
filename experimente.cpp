#include <iostream>

int main(int argc, char *argv[])
{
    // Prüfen, ob Programm genau 2 Argumente beim Aufruf übergeben bekommt
    if (argc != 3)
        return -1;

    // Einfache Berechnungen durchführen
    int res1 = 10 + 20;
    double res2 = 10.5 / 3.1;

    return 0;
}

/*
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    cout << "Anzahl der eingegebenen Argumente: " << argc << endl;
    int cnt = 0;
    while(cnt < argc)
    {
        cout << argv[cnt] << endl;
        cnt = cnt + 1;
    }

    return 0;
}
*/

/*
int main()
{
	int input; 
	cout << "Bitte eine ganze Zahl eingeben: ";
	cin >> input; 

    if(!cin.good())
    {
        cout << "Fehler: Es wurde keine Zahl eingegeben." << endl;
        return -1;
    }
	
    cout << "Programm wird ohne Fehler beendet." << endl;
    return 0;
}
*/
#include<iostream>
#include<string>

#include<unistd.h>
using namespace std;

int truc = 1;

template <typename T>


int print(const T& value) // Utilisation d'une référence constante pour éviter la copie
{
    cout << to_string(value) << endl;
    return 0; // Ajout d'un retour explicite pour éviter un comportement indéfini
}

int print(const string& value)
{
    cout << value << endl;
    return 0;
}

int print(const char* value)
{
    cout << value << endl;
    return 0;
}

int Update()
{
    truc = 8500;
    while (true)
    {
        
        print("L'objectif c'est de pas se faire chier");
        print("Je pourrais te le dire " + to_string(truc) + " fois tsais");
        truc--;
        usleep(200000);
    }
    return 0;
}

int main()
{
    print("Ceci est mon template C++... Faites en bon usage");
    Update();
}
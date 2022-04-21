#include <iostream>
#include<string>
#include<map>
#include<unordered_map>
#include<list>

using namespace std;

int main()
{
#if 1
    map<string, string> myDictionary;
    //unordered_map<string, string> myDictionary; 
    myDictionary.insert(pair<string, string>("apple", "der apfel"));
    myDictionary.insert(pair<string, string>("orange", "die orange, die apfelsine"));
    myDictionary.insert(pair<string, string>("banana", "die banane"));
    myDictionary.insert(pair<string, string>("stratberry", "die edbeeere"));

    //values do not have to be unique but keys need to be unique
    myDictionary["strayberry"] = "Die Erdbeera";
    myDictionary.clear();

    cout << myDictionary.size() << endl;

    for (auto pair : myDictionary)
    {
        cout << pair.first << " - " << pair.second << endl;
    }

#endif
    map<string, list<string>> pokedex;

    list<string> pikachuAttacks{ "thunder shock","tail whip", "quick attack" };
    list<string> charmanderAttacks{ "flame thrower","scary face"};
    list<string> chikoritaAttacks{ "razor leaf","posion powder"};

    pokedex.insert(pair<string, list<string>>("pikachu", pikachuAttacks));
    pokedex.insert(pair<string, list<string>>("charmander", charmanderAttacks));
    pokedex.insert(pair<string, list<string>>("chikorita", chikoritaAttacks));

    for (auto pair : pokedex) {
        cout << pair.first << " - ";


        for (auto attack : pair.second) {
            cout << attack << " , ";
        }

        cout << endl;
    }
    system("pause>0");
}
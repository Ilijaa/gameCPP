#include <iostream>
#include <cstdlib>

using namespace std;

class Player {
    public:
        int healt;
        string name;

        Player(string firstName, string lastName){
            name = firstName + " " +lastName;
            healt = 2000;
        };

    int dmg(){
        int x = rand()%100;
        return x;
    }

    void attacked(int dmg){
        healt -= dmg;
        cout << name << " je ostalo: "<<healt<<"\n";
    };


};


int main()
{
    string firstName, lastName;

    cout << "Unesite ime i prezime prvog igraca: ";
    cin >> firstName >> lastName;
    Player player1(firstName, lastName);

    cout << "Unesite ime i prezime drugog igraca: ";
    cin >> firstName >> lastName;
    Player player2(firstName, lastName);


    while(true){
        if(player1.healt<0){
            cout << player2.name<<" je pobednik";
            break;
        }else if(player2.healt<0){
            cout << player1.name<<" je pobednik";
            break;
        }else{
        player2.attacked(player1.dmg());
        player1.attacked(player2.dmg());
        }
    }





    return 0;
}

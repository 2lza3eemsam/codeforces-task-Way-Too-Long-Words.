#include <iostream>

using namespace std;
int main()
{
    int x;
    cin >> x;
    string phrasesub;
    string cars[x];
    int y;

for(int i = 0; i < x; i++) {
    cin >> cars[i];

}
for(int i = 0; i < x; i++){
        if (cars[i].length() > 10){

            y = cars[i].find_last_of(cars[i]);
    phrasesub = cars[i].substr(1,y-1);
   cout << cars[i][0] << phrasesub.length() << cars[i][y] << endl;
        }
        else

cout << cars[i] <<"\n";
}
    return 0;
}

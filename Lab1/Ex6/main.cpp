#include <iostream>

using namespace std;
// Я не знал, что делать с чётным количеством звёздочек, поэтому придумал сам
int main()
{
    int N;
    cin >> N;
    int number_of_stars = N;
    int number_of_line = 0;
    while (number_of_stars>0){
        for (int i=1; i<=number_of_line; i++){
            cout << ' ';
        }
        for (int j=0; j<number_of_stars; j++){
            cout << '*';
        }
        number_of_stars = number_of_stars - 2;
        number_of_line++;
        cout << endl;
    }

    return 0;
}

#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    bool ships[4][4] = {
        {0, 0, 1, 0},
        {1, 0, 1, 0},
        {0, 0, 0, 1},
        {0, 0, 0, 0}};
    int hits = 0, numberOftruns = 0;
    while (hits < 4)
    {
        int row, column;
        cout << "masukan baris antara 0 sampai 3 : ";
        cin >> row;
        cout << "masukan kolom antara 0 sampai 3 : ";
        cin >> column;

        if(ships[row][column]){
         ships[row][column]=0;
         hits++;
         cout<<"hit "<<(4-hits)<<" left \n";
        }else
        {
            cout<<"miss\n";
        
            /* code */
        }
        numberOftruns ++;
        
    }
    cout << "victory\n";
    cout <<numberOftruns<<endl;
    return 0;
}
#include<bits/stdc++.h>

using namespace std;

int main() {
    int poblacionA, poblacionB, T, nAnos, i, auxPA, poblacionInicialPA, auxPB, poblacionInicialPB;
    float G1, G2;

    cin >> T;

    for (i = 0; i < T; i++) {
        cin >> poblacionA >> poblacionB >> G1 >> G2;
        poblacionInicialPA = poblacionA;
        poblacionInicialPB = poblacionB;
        nAnos = 0;

        while (auxPA <= auxPB) {
            auxPA = poblacionInicialPA + poblacionInicialPA * (G1 / 100);
            auxPB = poblacionInicialPB + poblacionInicialPB * (G2 / 100);
            poblacionInicialPA = auxPA;
            poblacionInicialPB = auxPB;
            nAnos++;

            if (nAnos > 100) {
                break;
            }
        }

        if (nAnos > 100) {
            cout << "Mais de 1 seculo." << endl;
        } else {
            cout << nAnos << " anos." << endl;
        }

        auxPA = 0;
        auxPB = 0;
    }

    return 0;
}
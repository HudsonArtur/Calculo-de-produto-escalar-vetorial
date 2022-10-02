#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    double ax, ay, az;
    double bx, by, bz;
    double rx, ry, rz;

    int operacao; //produto vetorial ou escalar, definido pelo usuario.

    cout << "*****Bem-Vindo!!*****" << endl << endl;
    cout << "Produto Escalar - 1" << endl;
    cout << "Produto Vetorial - 2" << endl << endl;

    cout << "Escolha a operacao: ";
    cin >> operacao;
    cout << endl;

    switch (operacao){

    case 1:

        cout << "Digite o valor 'x' do vetor 'a': ";
        cin >> ax;

        cout << "Digite o valor 'y' do vetor 'a': ";
        cin >> ay;

        cout << "Digite o valor 'z' do vetor 'a': ";
        cin >> az;

        cout << endl;
        cout << "**********************************" << endl;
        cout << endl;

        cout << "Digite o valor 'x' do vetor 'b': ";
        cin >> bx;

        cout << "Digite o valor 'y' do vetor 'b': ";
        cin >> by;

        cout << "Digite o valor 'z' do vetor 'b': ";
        cin >> bz;

        cout << endl;

        rx = ax * bx;
        ry = ay * by;
        rz = az * bz;

        cout << "O produto escalar entre esses dois vetores eh: " << rx+ry+rz << endl << endl;
        break;

    case 2:

        cout << "Digite o valor 'x' do vetor 'a': ";
        cin >> ax;

        cout << "Digite o valor 'y' do vetor 'a': ";
        cin >> ay;

        cout << "Digite o valor 'z' do vetor 'a': ";
        cin >> az;

        cout << endl;
        cout << "**********************************" << endl;
        cout << endl;

        cout << "Digite o valor 'x' do vetor 'b': ";
        cin >> bx;

        cout << "Digite o valor 'y' do vetor 'b': ";
        cin >> by;

        cout << "Digite o valor 'z' do vetor 'b': ";
        cin >> bz;

        cout << endl;

        rx = (ay*bz) - (az*by);
        ry = (az*bx) - (bz*ax);
        rz = (ax*by) - (bx*ay);

        cout << "O vetor formado a partir desses vetores eh: " << rx << "i + " << ry << "j + " << rz << "k " << endl << endl;
        break;

    default:

        cout << "Codigo invalido!!!" << endl << endl;
        break;
    }
    system("pause");
    return 0;
}

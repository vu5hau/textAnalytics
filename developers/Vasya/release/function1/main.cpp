#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include <ctype.h>
using namespace std::__cxx11;
using namespace std;


/**
�������� ���������� �� ���������������,
�������� ����� ������������� � ������� �����:
��, ��, ��, ��, ��, ��, ��, ��, ��, ��; ���, ���, ���, ���, ���, ���

*/

void getDatesAboutSymbols(string text){
    ifstream fin("input.txt");
    ofstream fout("output.txt");
 // ���������� �� ������� ����
    for(int i = 0;i< text.size();i++){
        char symb = text[i];
        int a = symb;
        if(text[i] >= -64 && text[i] <= -33){
            text[i] = a + 32;
        }
    }

    string symbols[16] = {"��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "���", "���", "���", "���", "���", "���"};

    int len = sizeof(symbols)/sizeof(symbols[0]);
    for( int i = 0; i< len;i++){
        int amount = 0;
        int pos = 0;
        string st = text;
        cout << st << endl;
        cout << symbols[i] << endl;
        while(st.size() != 0){
            if(st.find(symbols[i]) != string::npos){
                amount++;
                st.erase(0,st.find(symbols[i]) + symbols[i].size());
                cout << st << endl;

            }else{
                cout << endl;
                break;
            }

        }
        fout << symbols[i] << " " << amount << endl;
    }






}



int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    string text;
    getline(fin,text);
    getDatesAboutSymbols(text);


    return 0;
}



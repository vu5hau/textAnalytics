#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
using namespace std;


/**
"���","���","���","����","����","���","���","���","��","��","��","��","��","��","��",
"���","���","���","��","���","���","��","��","���","���","���","���","��","�","��","��","���","���",
"��","�","�","��","�","��","��","��","��","��","���","���"
*/

bool isVerb(string str)
{
    string endings[44] = {"���","���","���","����","����","���","���","���","��","��","��","��","��","��","��",
                "���","���","���","��","���","���","��","��","���","���","���","���","��","�","��","��","���","���",
                "��","�","��","�","��","��","��","��","��","���","���"};

    //cout << sizeof(endings)/sizeof(endings[0]) << endl;
    for(int i = 0; i < 45; i++)
    {
        if(str.length() >= endings[i].length())
        {
            //cout << str.substr(str.length() - endings[i].length(),endings[i].length()) << " | " << endings[i]<< endl;
            if(str.substr(str.length() - endings[i].length(),endings[i].length()) == endings[i])
            {
                cout << str << " da" << endl;
                return true;
            }
        }

        // << i << endl;
    }
    cout << "net" << endl;
    return false;
}

string VerbsAmount(string str)
{
    int verbsAmount = 0;
    string str1 = str;
    int wordsAmount =0;
    while (str1.length() != 0)
    {
        while (str1.length() != 0 && str1[0] == ' ')  ///�������� �����������
        {
            str1.erase(0, 1);
        }

		string x;
		x = str1.substr(0, str1.find(' '));           ///������������ �����
		str1.erase(0, str1.find(' '));                ///�������� ����� �� �������� ������
		if(x.find_first_of(",.!?") != string::npos)
            x.erase(x.find_first_of(",.!?"), 1);
        cout << x << endl;
		if(isVerb(x))
            verbsAmount++;
        wordsAmount++;
    }

    cout << wordsAmount;
    return "���������� ��������: "+ to_string(verbsAmount) +"\n% ����������� �������� �� ���� ������: " + to_string(1.0*verbsAmount/wordsAmount*100.0) + "%";
}



int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);



    ifstream fin("input.txt");
    ofstream fout("output.txt");
    string text="", b;
    while(!fin.eof())
    {
        getline(fin, b);
        text+=" " + b;
    }
    text.erase(0, 1);
    fout<< VerbsAmount(text);
    //cout << "���-�� ��������: "<< VerbsAmount(text) << endl;


    return 0;
}

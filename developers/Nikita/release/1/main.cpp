#include <fstream>
#include <string>
#include <windows.h>

using namespace std;
using namespace std::__cxx11;
/// /////////////////////////////////////////////////////////////////////////

void krajnie_bukvi(string st)
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a = 0, b = 0, c = 0, d = 0, k = 0;
    string vord, znak = ",.:;-�\"'/()*?!%&";
    string glas = "��������������������";
    st += " ";
    for (int i = 0; i < st.size(); i++)///�������� ������
        if (znak.find(st[i]) != string::npos)
        {
            st.erase(i, 1);
            i--;
        }
    for (int i = 0; i < st.size() - 1; i++)///���-�� ����
        if (st[i] != ' ' && st[i+1] == ' ')
            k++;
    while(st.size() > 0)
    {
        while(st[0] == ' ')
            st.erase(0, 1);
        if (st.size() == 0)
            break;
        vord = st.substr(0, st.find(' '));
        st.erase(0, st.find(' '));
        int len = vord.size() - 1;
            ///�������� ����
        if (glas.find(vord[0]) != string::npos && glas.find(vord[len]) != string::npos)
            a++; ///��
        else if (glas.find(vord[0]) != string::npos && glas.find(vord[len]) == string::npos)
            b++; ///��
        else if (glas.find(vord[0]) == string::npos && glas.find(vord[len]) != string::npos)
            c++; ///��
        else if (glas.find(vord[0]) == string::npos && glas.find(vord[len]) == string::npos)
            d++; ///��
    }
    fout << "����, ��� ��� ������� - " << a << endl;
    fout << "� ������� �� ����� - " << double(a)/k << endl;
    fout << "����, ��� ��� �������/��������� - " << b << endl;
    fout << "� ������� �� ����� - " << double(b)/k << endl;
    fout << "����, ��� ��� ���������/������� - " << c << endl;
    fout << "� ������� �� ����� - " << double(c)/k << endl;
    fout << "����, ��� ��� ��������� - " << d << endl;
    fout << "� ������� �� ����� - " << double(d)/k << endl;
}
/// //////////////////////////////////////////////////////////////////

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string st = "", s;
    while (!fin.eof())
    {
        getline(fin, s);
        s += " ";
        st += s;
    }
    krajnie_bukvi(st);
    return 0;
}

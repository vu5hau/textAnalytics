#include <fstream>
#include <string>
#include <windows.h>

using namespace std;
using namespace std::__cxx11;
/// /////////////////////////////////////////////////////////////////////////

void tri_podryad(string st)
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a = 0, b = 0, k = 0;
    string glas = "��������������������";
    string soglas = "����������������������������������������������";
    string znak = ",.:;-�\"'/()*?!%&";
    st += " ";
    for (int i = 0; i < st.size(); i++)///�������� ������
        if (znak.find(st[i]) != string::npos)
        {
            st.erase(i, 1);
            i--;
        }
    for (int i = 0; i < st.size() - 1; i++)///���-�� ����
        if (st[i] != ' ' && st[i + 1] == ' ')
            k++;
    for (int i = 0; i < st.size() - 2; i++)///�������
    {
        if (glas.find(st[i]) != string::npos && glas.find(st[i+1]) != string::npos)
            if (glas.find(st[i+2]) != string::npos)
                a++;///���
        if (soglas.find(st[i]) != string::npos && soglas.find(st[i+1]) != string::npos)
            if (soglas.find(st[i+2]) != string::npos)
                b++;///���
    }
    fout << endl;
    fout << "����� ������� ������ - " << a << endl;
    fout << "� ������� �� ����� - " << double(a) / k << endl;
    fout << "����� ��������� ������ - " << b << endl;
    fout << "� ������� �� ����� - " << double(b) / k << endl;
}
/// ///////////////////////////////////////////////////////////////

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
    tri_podryad(st);
    return 0;
}

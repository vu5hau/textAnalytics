#include <fstream>
#include <string>
#include <windows.h>

using namespace std;
using namespace std::__cxx11;
/// ///////////////////////////////////////////////////////////////
/// ���� ����, ��� �� ����� 1-�� 2-3 ������� � � ������ 2-�� 2-3 ���������
void dve_tri_na_koncah(string st)
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
    for (int i = 2; i < st.size() - 2; i++)///������� 1
        if (st[i] == ' ' && soglas.find(st[i+1]) != string::npos)
            if (soglas.find(st[i+2]) != string::npos && glas.find(st[i-1]) != string::npos)
                if (glas.find(st[i-2]) != string::npos)
                    a++;
    for (int i = 3; i < st.size() - 3; i++)///������� 2
        if (st[i] == ' ' && soglas.find(st[i+1]) != string::npos && soglas.find(st[i+2]) != string::npos)
            if (soglas.find(st[i+3]) != string::npos && glas.find(st[i-1]) != string::npos)
                if (glas.find(st[i-2]) != string::npos && glas.find(st[i-3]) != string::npos)
                    b++;
    fout << endl;
    fout << "���, ��� �� 2 ����� �� ������ - " << a << endl;
    fout << "� ������� �� ���� ���� - " << double(a) / (k - 1) << endl;
    fout << "���, ��� �� 3 ����� �� ������ - " << b << endl;
    fout << "� ������� �� ���� ���� - " << double(b) / (k - 1) << endl;
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
    dve_tri_na_koncah(st);
    return 0;
}

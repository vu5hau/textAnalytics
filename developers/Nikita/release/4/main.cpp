#include <fstream>
#include <string>
#include <windows.h>

using namespace std;
using namespace std::__cxx11;
/// ///////////////////////////////////////////////////////////////

void chastoe_slovo(string st)
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a = 0, b = 0, c = 0, d = 0;
    string vord, slova = "", s, znak = ",.:;-�\"'/()*?!%&";
    int k = 0, t = 1;///��������� � ������� ����-��
    st += " ";
    for (int i = 0; i < st.size(); i++)///�������� ������
        if (znak.find(st[i]) != string::npos)
        {
            st.erase(i, 1);
            i--;
        }
    while(st.size() > 0)
    {
        while(st[0] == ' ')
            st.erase(0, 1);
        if (st.size() == 0)
            break;
        vord = st.substr(0, st.find(' ') + 1);
        st.erase(0, st.find(' '));
        s = st;
        while(s.find(vord) != string::npos)
        {
            int m = s.find(vord);
            if (s[m - 1] == ' ' || m == 0)
                t++;
            s.erase(0, m + 1);
        }
        if (t > k)
        {
            slova = vord;
            k = t;
        }
        else if (t == k && t > 1)
        {
            slova += "/ ";
            slova += vord;
        }
        t = 1;
    }
    fout << "�������� ����� ������������� �����(�����) - " << slova << endl;
    fout << "� ���-�� - " << k << endl;

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
    chastoe_slovo(st);
    return 0;
}

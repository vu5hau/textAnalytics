#include <iostream>
#include <fstream>
#include <string>

using namespace std;
ifstream fin("input.txt");
ofstream fout("output.txt");
void f1(string st)
{
    string z(" ��������������������������������,.;:!?�");
    int k[50];
    double m=0;
    for (int i=0;i<z.length();i++)
    k[i]=0;
    for (int i=0;i<st.length();i++)
    {
    if(st[i]>='�'&&st[i]<='�')
    {
        st[i]+=32;
    }
    if (z.find(st[i])!=string::npos)
    {
        k[z.find(st[i])]++;
        m++;
    }
    }
    fout<<"���-�� �������� � ������"<<endl;
    for (int i=0;i<z.length();i++)
        fout<<z[i]<<" - "<<k[i]<<endl;
    fout<<"� ���������:"<<endl;
    for (int i=0;i<z.length();i++)
        fout<<z[i]<<" - "<<k[i]/m<<endl;
}
int main()
{
    string s;
    getline(fin, s);
    f1(s);
    return 0;
}

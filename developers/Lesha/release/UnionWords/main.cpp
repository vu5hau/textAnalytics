#include <fstream>
#include <string>
#include <windows.h>

using namespace std;

int Cs1(string st)
{
    int n = 0;
    string letters = "�������������������������������������Ũ��������������������������-";
    string w = "��� ���� ���� ��� ��� ��� ���� ���� ��� ׸�",w1 = w;
    while(!st.empty())
    {
        while(letters.find(st[0]) == string::npos)
            st.erase(0,1);
        int i = 0;
        while(letters.find(st[i]) != string::npos)
            i++;
        string x = st.substr(0,i);
        st.erase(0,i+1);
        w = w1;
        while(!w.empty())
        {
            if(w[0] == ' ')
                w.erase(0,1);
            if(w.substr(0,w.find(' ')) == x)
            {
                n++;
            }
            w.erase(0,w.find(' '));
        }
        if (st.length() < 2)
            st.clear();
    }
    return n;
}

int Cs2(string st)
{
    int n = 0;
    string letters = "�������������������������������������Ũ��������������������������-";
    string w = "��� ���� ���� ��� ��� ��� ���� ���� ��� ���",w1 = w;
    while(!st.empty())
    {
        while(letters.find(st[0]) == string::npos)
            st.erase(0,1);
        int i = 0;
        while(letters.find(st[i]) != string::npos)
            i++;
        string x = st.substr(0,i);
        st.erase(0,i+1);
        w = w1;
        while(!w.empty())
        {
            if(w[0] == ' ')
                w.erase(0,1);
            if(w.substr(0,w.find(' ')) == x)
            {
                n++;
            }
            w.erase(0,w.find(' '));
        }
        if (st.length() < 2)
            st.clear();
    }
    return n;
}

int Cs3(string st)
{
    int n = 0;
    string letters = "�������������������������������������Ũ��������������������������-";
    string w = "������� �������� �������� ��������� ������� �������� �������� ���������",w1 = w;
    while(!st.empty())
    {
        while(letters.find(st[0]) == string::npos)
            st.erase(0,1);
        int i = 0;
        while(letters.find(st[i]) != string::npos)
            i++;
        string x = st.substr(0,i);
        st.erase(0,i+1);
        w = w1;
        while(!w.empty())
        {
            if(w[0] == ' ')
                w.erase(0,1);
            if(w.substr(0,w.find(' ')) == x)
            {
                n++;
            }
            w.erase(0,w.find(' '));
        }
        if (st.length() < 2)
            st.clear();
    }
    return n;
}

int Cs4(string st)
{
    int n = 0;
    string letters = "�������������������������������������Ũ��������������������������-";
    string w = "������� ������� ������� ������� �������� ������� ������� �������� ������� ������� �������� ������� ������� ������� ������� ������� �������� ������� ������� �������� ������� ������� �������� �������",w1 = w;
    while(!st.empty())
    {
        while(letters.find(st[0]) == string::npos)
            st.erase(0,1);
        int i = 0;
        while(letters.find(st[i]) != string::npos)
            i++;
        string x = st.substr(0,i);
        st.erase(0,i+1);
        w = w1;
        while(!w.empty())
        {
            if(w[0] == ' ')
                w.erase(0,1);
            if(w.substr(0,w.find(' ')) == x)
            {
                n++;
            }
            w.erase(0,w.find(' '));
        }
        if (st.length() < 2)
            st.clear();
    }
    return n;
}

int Cs5(string st)
{
    int n = 0;
    string letters = "�������������������������������������Ũ��������������������������-";
    string w = "����� ����� ����� ����� ������ ����� ������ ����� ����� ����� ������ ����� ����� ����� ����� ����� ������ ����� ������ ����� ����� ����� ������ �����",w1 = w;
    while(!st.empty())
    {
        while(letters.find(st[0]) == string::npos)
            st.erase(0,1);
        int i = 0;
        while(letters.find(st[i]) != string::npos)
            i++;
        string x = st.substr(0,i);
        st.erase(0,i+1);
        w = w1;
        while(!w.empty())
        {
            if(w[0] == ' ')
                w.erase(0,1);
            if(w.substr(0,w.find(' ')) == x)
            {
                n++;
            }
            w.erase(0,w.find(' '));
        }
        if (st.length() < 2)
            st.clear();
    }
    return n;
}

int Cs6(string st)
{
    int n = 0;
    string letters = "�������������������������������������Ũ��������������������������-";
    string w = "��� ���",w1 = w;
    while(!st.empty())
    {
        while(letters.find(st[0]) == string::npos)
            st.erase(0,1);
        int i = 0;
        while(letters.find(st[i]) != string::npos)
            i++;
        string x = st.substr(0,i);
        st.erase(0,i+1);
        w = w1;
        while(!w.empty())
        {
            if(w[0] == ' ')
                w.erase(0,1);
            if(w.substr(0,w.find(' ')) == x)
            {
                n++;
            }
            w.erase(0,w.find(' '));
        }
        if (st.length() < 2)
            st.clear();
    }
    return n;
}

int Cs7(string st)
{
    int n = 0;
    string letters = "�������������������������������������Ũ��������������������������-";
    string w = "��� ���",w1 = w;
    while(!st.empty())
    {
        while(letters.find(st[0]) == string::npos)
            st.erase(0,1);
        int i = 0;
        while(letters.find(st[i]) != string::npos)
            i++;
        string x = st.substr(0,i);
        st.erase(0,i+1);
        w = w1;
        while(!w.empty())
        {
            if(w[0] == ' ')
                w.erase(0,1);
            if(w.substr(0,w.find(' ')) == x)
            {
                n++;
            }
            w.erase(0,w.find(' '));
        }
        if (st.length() < 2)
            st.clear();
    }
    return n;
}

int Cs8(string st)
{
    int n = 0;
    string letters = "�������������������������������������Ũ��������������������������-";
    string w = "����� �����",w1 = w;
    while(!st.empty())
    {
        while(letters.find(st[0]) == string::npos)
            st.erase(0,1);
        int i = 0;
        while(letters.find(st[i]) != string::npos)
            i++;
        string x = st.substr(0,i);
        st.erase(0,i+1);
        w = w1;
        while(!w.empty())
        {
            if(w[0] == ' ')
                w.erase(0,1);
            if(w.substr(0,w.find(' ')) == x)
            {
                n++;
            }
            w.erase(0,w.find(' '));
        }
        if (st.length() < 2)
            st.clear();
    }
    return n;
}

int Cs9(string st)
{
    int n = 0;
    string letters = "�������������������������������������Ũ��������������������������-";
    string w = "����� �����",w1 = w;
    while(!st.empty())
    {
        while(letters.find(st[0]) == string::npos)
            st.erase(0,1);
        int i = 0;
        while(letters.find(st[i]) != string::npos)
            i++;
        string x = st.substr(0,i);
        st.erase(0,i+1);
        w = w1;
        while(!w.empty())
        {
            if(w[0] == ' ')
                w.erase(0,1);
            if(w.substr(0,w.find(' ')) == x)
            {
                n++;
            }
            w.erase(0,w.find(' '));
        }
        if (st.length() < 2)
            st.clear();
    }
    return n;
}

int Cs10(string st)
{
    int n = 0;
    string letters = "�������������������������������������Ũ��������������������������-";
    string w = "������ ������",w1 = w;
    while(!st.empty())
    {
        while(letters.find(st[0]) == string::npos)
            st.erase(0,1);
        int i = 0;
        while(letters.find(st[i]) != string::npos)
            i++;
        string x = st.substr(0,i);
        st.erase(0,i+1);
        w = w1;
        while(!w.empty())
        {
            if(w[0] == ' ')
                w.erase(0,1);
            if(w.substr(0,w.find(' ')) == x)
            {
                n++;
            }
            w.erase(0,w.find(' '));
        }
        if (st.length() < 2)
            st.clear();
    }
    return n;
}

int Cs11(string st)
{
    int n = 0;
    string letters = "�������������������������������������Ũ��������������������������-";
    string w = "���� ����",w1 = w;
    while(!st.empty())
    {
        while(letters.find(st[0]) == string::npos)
            st.erase(0,1);
        int i = 0;
        while(letters.find(st[i]) != string::npos)
            i++;
        string x = st.substr(0,i);
        st.erase(0,i+1);
        w = w1;
        while(!w.empty())
        {
            if(w[0] == ' ')
                w.erase(0,1);
            if(w.substr(0,w.find(' ')) == x)
            {
                n++;
            }
            w.erase(0,w.find(' '));
        }
        if (st.length() < 2)
            st.clear();
    }
    return n;
}

int Cs12(string st)
{
    int n = 0;
    string letters = "�������������������������������������Ũ��������������������������-";
    string w = "������ ������",w1 = w;
    while(!st.empty())
    {
        while(letters.find(st[0]) == string::npos)
            st.erase(0,1);
        int i = 0;
        while(letters.find(st[i]) != string::npos)
            i++;
        string x = st.substr(0,i);
        st.erase(0,i+1);
        w = w1;
        while(!w.empty())
        {
            if(w[0] == ' ')
                w.erase(0,1);
            if(w.substr(0,w.find(' ')) == x)
            {
                n++;
            }
            w.erase(0,w.find(' '));
        }
        if (st.length() < 2)
            st.clear();
    }
    return n;
}

int main()
{
    int s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, s8 = 0, s9 = 0, s10 = 0, s11 = 0, s12 = 0;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    while (!fin.eof())
    {
        string st;
        getline(fin,st);
        s1 += Cs1(st);
        s2 += Cs2(st);
        s3 += Cs3(st);
        s4 += Cs4(st);
        s5 += Cs5(st);
        s6 += Cs6(st);
        s7 += Cs7(st);
        s8 += Cs8(st);
        s9 += Cs9(st);
        s10 += Cs10(st);
        s11 += Cs11(st);
        s12 += Cs12(st);
    }
    fout << "���������� ������� ���� \"���\" �� ���� ������: " << s1 << endl;
    fout << "���������� ������� ���� \"���\" �� ���� ������: " << s2 << endl;
    fout << "���������� ������� ���� \"�������\" �� ���� ������: " << s3 << endl;
    fout << "���������� ������� ���� \"�������\" �� ���� ������: " << s4 << endl;
    fout << "���������� ������� ���� \"�����\" �� ���� ������: " << s5 << endl;
    fout << "���������� ������� ���� \"���\" �� ���� ������: " << s6 << endl;
    fout << "���������� ������� ���� \"���\" �� ���� ������: " << s7 << endl;
    fout << "���������� ������� ���� \"�����\" �� ���� ������: " << s8 << endl;
    fout << "���������� ������� ���� \"�����\" �� ���� ������: " << s9 << endl;
    fout << "���������� ������� ���� \"������\" �� ���� ������: " << s10 << endl;
    fout << "���������� ������� ���� \"����\" �� ���� ������: " << s11 << endl;
    fout << "���������� ������� ���� \"������\" �� ���� ������: " << s12 << endl;
}

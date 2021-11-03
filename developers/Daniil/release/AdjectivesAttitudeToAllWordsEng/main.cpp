#include <fstream>
#include <string>
#include <windows.h>

using namespace std;
ifstream fin("input.txt");
ofstream fout("output.txt");

void AdjectivesAttitudeToAllWords(string s) {
    string punctuationMarks = ". !;:�,?-�";
    punctuationMarks += char(34);//�������

    //������� ���������� ���� � ������
    double wordCount = 0;
    s = " " + s;
    for (int i = 0; i < s.length()-1; i++) {
        if (punctuationMarks.find(s[i]) != string::npos && punctuationMarks.find(s[i+1]) == string::npos)
            wordCount++;
    }

    //������� ���������� �������������� � ������

    string endings[] = { "less", "able", "ible", "ous", "ful", "ent",
        "ary", "ive", "al", "ic", "y", "ing"};

    double adjCount = 0;
    for (string end : endings) {
        int startPos = 0;
        int len = end.length();
        string sub = s.substr(startPos);

        while (sub.find(end) != string::npos) {
            int pos = sub.find(end);
            int x = punctuationMarks.find(s[pos + len]);
            if (punctuationMarks.find(sub[pos + len]) != string::npos && sub[pos - 1] != ' ') {
                adjCount++;
            }
            startPos = pos + len;
            sub = sub.substr(startPos);
        }
    }

    double attitude = adjCount/wordCount;
    fout << "Adjectives = " << adjCount << "; Adjectives/Words = "<< attitude << ";" << endl;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string s = "", sub;
    while(!fin.eof())
    {
        getline(fin, sub);
        s+=" " + sub;
    }
    s.erase(0, 1);
    AdjectivesAttitudeToAllWords(s);

    return 0;
}

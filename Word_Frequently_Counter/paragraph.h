#ifndef PARAGRAPH_H
#define PARAGRAPH_H

#include <QString>
#include <map>
#include<set>
using namespace std;

class Paragraph
{
private:
    QString pargraph;


public:
    Paragraph();
    map<string,int>wordFrequency;
    map<string,int>wordTotalFrequency;
    void CalculateFrequency(QStringList wordsList);
    QStringList SplitParagrah(const QString &text);
    vector<pair<string, int>> SortByFrequency(int choice);
    int SearchForWordFrequncy(string word);
    int SearchForWordOrder(string word);
    void CalculateGlobalFrequency(QStringList wordsList);
    void splitText(const QString &text,vector<int>&);

};


#endif // PARAGRAPH_H

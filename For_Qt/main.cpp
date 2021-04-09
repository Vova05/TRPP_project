#include <iostream>
#include <string>
#include "cmath"
using namespace std;

void calculating(char* OPZSTR, int len,int index)
{
    string answer;
    float stack[100];
    //bool chek_abs=false;
    // sp = index where number will be pushed //индекс ячейки, куда будет push-иться очередное число
    int sp = 0;      // (sp-1) = HEAD index of stack //индекс ячейки, являющейся вершиной стека
    cout<<endl<<endl;
    for (int j = 0; j <= len; j++) {
        char c = OPZSTR[j];
        if (c == 'x'){
            char tmp=index+'0';
            //cout<<tmp<<endl;
            answer += tmp;
            stack[sp] = stof(answer);  //input our answer string in to stack of answers, converting to float //в стэк ответов заносим нашу выходную строку переведённую в тип float
            sp++;
            answer.clear();
            continue;
        }
        else if (c == ' ' || c == '\n' || c == NULL)
            continue;
        else if (c=='^'){
            stack[sp - 2] = pow(stack[sp-2],stack[sp-1]);
            sp--;
            continue;
        }
        else if (c == '+') {
            cout<<stack[sp - 2]<<"+"<<stack[sp - 1];
            stack[sp - 2] = stack[sp - 2] + stack[sp - 1];
            cout<<"="<<stack[sp-2]<<endl;
            sp--;
            continue;
        }
        else if (c == '-') {
            cout<<stack[sp - 2]<<"-"<<stack[sp - 1];
            stack[sp - 2] = stack[sp - 2] - stack[sp - 1];
            cout<<"="<<stack[sp-2]<<endl;
            sp--;
            continue;
        }
        else if (c == '*') {
            cout<<stack[sp - 2]<<"*"<<stack[sp - 1];
            stack[sp - 2] = stack[sp - 1] * stack[sp - 2];
            cout<<"="<<stack[sp-2]<<endl;
            sp--;
            continue;
        }
        else if (c == '/') {
            cout<<stack[sp - 2]<<"/"<<stack[sp - 1];
            stack[sp - 2] = stack[sp - 2] / stack[sp - 1];
            cout<<"="<<stack[sp-2]<<endl;
            sp--;
            continue;
        }
//        else if(c== '|'){
//                stack[sp-1]=abs(stack[sp-1]);
//                sp--;
//                continue;
//        }

        else {
            for (int y = j; y < len; y++) { //revewing current RPNstring from j //просматриваем текущую строку начиная j

                if (isdigit(OPZSTR[y]) || OPZSTR[y] == ',') {//if RPNstring contains number or comma //если элемент строки число или запятая
                    answer += OPZSTR[y]; //add this element to an answer string //вносим элемент строки в выходную строку
                }
                else {
                    j = y; //else end reviewing //иначе заканчиваем просмотр строки
                    break;
                }
            }
            stack[sp] = stof(answer);  //input our answer string in to stack of answers, converting to float //в стэк ответов заносим нашу выходную строку переведённую в тип float
            sp++;
            answer.clear(); //clearing answer string // очищаем выходную строку
        }
    }

    cout << endl;
    cout << "Result= " << stack[sp - 2] << endl;

}

int main()
{

    //setlocale(LC_ALL, "Russian");
    int i = 0, s = 0, e = 0;
    char vr[100], stek[100], exit[100];
    bool chek=false;
    cin >> vr;
    for (i = 0; vr[i] != '\0'; i++)
        switch (vr[i])
        {
            case '+':
                while ((s != 0) && (stek[s - 1] != '('))
                {
                    exit[e] = stek[s - 1]; //to exit //на выход
                    e++;
                    s--;
                }
                stek[s] = '+'; //to stack //в стек
                s++;
                break;

            case '-':
                while ((s != 0) && (stek[s - 1] != '('))
                {
                    exit[e] = stek[s - 1];
                    e++;
                    s--;
                }
                stek[s] = '-';
                s++;
                break;
            case '*':

                while ((s != 0) && (stek[s - 1] != '(') && (stek[s - 1] != '+') && (stek[s - 1] != '-'))
                {
                    exit[e] = stek[s - 1];
                    e++;
                    s--;
                }
                stek[s] = '*';
                s++;
                break;
            case '/':

                while ((s != 0) && (stek[s - 1] != '(') && (stek[s - 1] != '+') && (stek[s - 1] != '-'))
                {
                    exit[e] = stek[s - 1];
                    e++;
                    s--;
                }
                stek[s] = '/';
                s++;

                break;
            case '(':
            {
                stek[s] = '(';
                s++;
                break; }
            case ')':

                while ((stek[s - 1] != '(') && (s != 0))
                {
                    exit[e] = stek[s - 1];
                    e++;
                    s--;
                }
                stek[s - 1] = ' ';
                s--;
                break;
            case '^':
                while ((s != 0) && (stek[s - 1] != '(') && (stek[s - 1] != '+') && (stek[s - 1] != '-'))
                {
                    exit[e] = stek[s - 1];
                    e++;
                    s--;
                }
                stek[s] = '^';
                s++;
                break;
//            case '|':
//                if(chek==true){
//                while ((stek[s - 1] != '|') && (s != 0))
//                {
//                    exit[e] = stek[s - 1];
//                    e++;
//                    s--;
//                }
//                stek[s - 1] = '|';
//                s--;
//                chek= false;
//                }else{
//                    chek=true;
//                }
//                break;

            default:

            {
                exit[e] = vr[i];
                e++;
                if ((vr[i + 1] == '+') ||
                    (vr[i + 1] == '-') ||
                    (vr[i + 1] == '*') ||
                    (vr[i + 1] == '/') ||
                    (vr[i + 1] == '(') ||
                    (vr[i + 1] == ')') ||
                    (vr[i + 1] == '^') ||
                    (vr[i + 1]=='|'))
                {
                    exit[e] = ' ';
                    e++;
                }
            }
        }

    exit[e] = ' ';
    e++;

    while (s != 0)
    {
        exit[e] = stek[s - 1];
        e++;
        s--;
    }
    cout << "RPN: "; //cout << "ОПН: ";
    exit[e] = 'x';
    for (i = 0; i < e; i++)
    {
        cout << exit[i];
    }
    for (int index=0;index<3;index++) {
        calculating(exit, i,index); // calculating // считаем
    }
}

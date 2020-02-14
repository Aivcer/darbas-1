#include <iostream>

using namespace std;

struct struktura
{
    string line;
};

int main()
{
    struktura abc[100];
    string v;
    int a, b, c, d;
    cout<< "Koks Jusu vardas?"<<endl;
    cin>>v;
    cout<<"Keliu eiluciu remelio plotis?"<<endl;
    cin>>a;
    if(cin.fail() || a<0)
    {
        cout << "Rasykite tik teigiamus skaicius" << endl;
        return 0;
    }

    b=a;
    c=3+(2*a);
    d=c;

    int cnt = 0;
    for(int i=0; v[i]; i++)
        cnt++;

    if(v[cnt-1]=='s')
    {
        cnt = cnt+10;

        while(a!=0)
        {
            for(int i=-1; i<=cnt+b*2; i++)
                abc[c].line+="*";
            a--;
            c--;
        }
        a=b;

        while(a!=0)
        {
            abc[c].line+="*";
            a--;
        }
        a=b;
        for(int i=1; i<=cnt+2; i++)
            abc[c].line+=" ";
        while(a!=0)
        {
            abc[c].line+="*";
            a--;
        }
        a=b;
        c--;

        while(a!=0)
        {
            abc[c].line+="*";
            a--;
        }
        a=b;
        abc[c].line+=" Sveikas, " + v + "! ";
        while(a!=0)
        {
            abc[c].line+="*";
            a--;
        }
        a=b;
        c--;

        while(a!=0)
        {
            abc[c].line+="*";
            a--;
        }
        a=b;
        for(int i=1; i<=cnt+2; i++)
            abc[c].line+=" ";
        while(a!=0)
        {
            abc[c].line+="*";
            a--;
        }
        a=b;
        c--;

        while(a!=0)
        {
            for(int i=-1; i<=cnt+b*2; i++)
                abc[c].line+="*";
            a--;
            c--;
        }
        for(int i=c; i<=d; i++)
        {
            cout<<abc[i].line<<endl;
        }
    }

    else
    {
        cnt= cnt+9;

        while(a!=0)
        {
            for(int i=-1; i<=cnt+b*2; i++)
                abc[c].line+="*";
            a--;
            c--;
        }
        a=b;

        while(a!=0)
        {
            abc[c].line+="*";
            a--;
        }
        a=b;
        for(int i=1; i<=cnt+2; i++)
            abc[c].line+=" ";
        while(a!=0)
        {
            abc[c].line+="*";
            a--;
        }
        a=b;
        c--;

        while(a!=0)
        {
            abc[c].line+="*";
            a--;
        }
        a=b;
        abc[c].line+=" Sveika, " + v + "! ";
        while(a!=0)
        {
            abc[c].line+="*";
            a--;
        }
        a=b;
        c--;

        while(a!=0)
        {
            abc[c].line+="*";
            a--;
        }
        a=b;
        for(int i=1; i<=cnt+2; i++)
            abc[c].line+=" ";
        while(a!=0)
        {
            abc[c].line+="*";
            a--;
        }
        a=b;
        c--;

        while(a!=0)
        {
            for(int i=-1; i<=cnt+b*2; i++)
                abc[c].line+="*";
            a--;
            c--;
        }
        for(int i=c; i<=d; i++)
        {
            cout<<abc[i].line<<endl;
        }
    }
    return 0;
}

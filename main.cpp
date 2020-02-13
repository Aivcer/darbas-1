#include <iostream>

using namespace std;

int main()
{
    string v;
    cout<< "Koks Jusu vardas?"<<endl;
    cin>>v;

    int cnt = 0;
    for(int i=0; v[i]; i++)
        cnt++;

    if(v[cnt-1]=='s')
    {
        cnt= cnt+10;

        string l1="", l2="", l3="", l4="", l5="";

        for(int i=0; i<cnt+4; i++)
            l1+="*";

        l2="*";
        for(int i=1; i<=cnt+2; i++)
            l2+=" ";
        l2+="*";

        l3 = "* Sveikas, " + v + "!" + " *";

        l4="*";
        for(int i=1; i<=cnt+2; i++)
            l4+=" ";
        l4+="*";

        for(int i=0; i<cnt+4; i++)
            l5+="*";

    cout<<l1<<endl;
    cout<<l2<<endl;
    cout<<l3<<endl;
    cout<<l4<<endl;
    cout<<l5<<endl;
    }

    else
    {
        cnt= cnt+9;

        string l1="", l2="", l3="", l4="", l5="";

        for(int i=0; i<cnt+4; i++)
            l1+="*";

        l2="*";
        for(int i=1; i<=cnt+2; i++)
            l2+=" ";
        l2+="*";

        l3 = "* Sveika, " + v + "!" + " *";

        l4="*";
        for(int i=1; i<=cnt+2; i++)
            l4+=" ";
        l4+="*";

        for(int i=0; i<cnt+4; i++)
            l5+="*";

    cout<<l1<<endl;
    cout<<l2<<endl;
    cout<<l3<<endl;
    cout<<l4<<endl;
    cout<<l5<<endl;
    }
    return 0;
}

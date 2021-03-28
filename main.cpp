#include <iostream>

using namespace std;

bool check_if_string(char first)
{
    if (first == '"') return true;
    return false;
}

int main()
{


    bool multicomment = false;
    bool comment = false;
    bool normal = false;
    char litera;
    char letter;
    char l;
    while (cin.get(litera))
    {

        if (comment == true)
        {
            if(litera == '\n')
            {cout << endl;
                continue;
            }
            while (cin.get(litera)){
                if(litera == '\n')
                {cout << endl;
                    comment = false;
                    break;   } }
        }
        else if(multicomment ==true)
        {
            while (litera == '*')
            {
 if (cin.get(litera))
                {
                    if (litera == '/')
                        multicomment= false;
                }
            }
        }
        else
        {
            if (normal)
            {
                cout << litera;
                if ((litera == '\n' && letter != '\\') || (litera == '"' && letter != '\\') || (litera == '"' && letter == '\\' && l == '\\'))
                    normal = false;
            }
            else
            {   if (litera != '/')
                {
                    normal = check_if_string(litera);
                    cout << litera;
                }
                else
                { letter = litera;
if (cin.get(litera))
                    {if (litera == '/')
                        {
                            comment = true;
                            continue;
                        }
                        else if (litera == '*')
                        {
                            multicomment = true;
                            continue;
                        }
                        else
                        {
                            cout << letter;
                            cout <<litera;
                        }
                    }
 else
                    {
                        cout << letter;
                        break;
                    }
                }
            }
        }
        l = letter;
        letter = litera;
    }

    return 0;
}


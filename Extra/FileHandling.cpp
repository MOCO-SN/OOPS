#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    string j;

    // fstream str("hello.txt",ios::out); //create a file

    //  fstream filein("hello.txt",ios::in); // read file

    // fstream str("hello.txt",ios::in | ios::out); // read and out the file

    // ofstream file("hello.txt");

    // file<<"Hello moco files";

    // here i will used try, catch and throw keywords

    // try to getfile of hell.txt which is not exits.

    try
    {
        fstream file("hell.txt", ios::in); // file is not exits in folder.
        if (!file.is_open())
        {
            throw "file is opened yet! or file not exits."; //
        }
        else
        {
            ifstream filein("hell.txt", ios::in);

            file >> s;
            cout << s;
        }
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }

    // trying to gettingfile hello.txt so we get

    try
    {
        fstream file("hello.txt", ios::in);
        if (!file.is_open())
        {
            throw "file is opened yet! or file not exits.";
        }
        else
        {
            ifstream filein("hello.txt", ios::in); // only for single string like hello.

            // for intier data 
            getline(file,s);
            file >> s;
            cout << s;
        }
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }

    // try
    // {

    //     fstream str("data.json", ios::out);

    //     fstream file("data.json", ios::in);
    //     if (!file.is_open())
    //     {
    //         throw "file is opened yet! or file not exits.";
    //     }
    //     else
    //     {

            
    //         ifstream filein("data.json", ios::in);

    //         file >> j;
    //         cout << j;
    //     }
    // }
    // catch (const char *msg)
    // {
    //     cout << msg << endl;
    // }
}
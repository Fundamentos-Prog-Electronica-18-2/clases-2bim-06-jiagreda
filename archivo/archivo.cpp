#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

int convertirStringToInt(string v){
    // proceso para convertir un cadena en entero

    int i;
    std::istringstream(v) >> i;
    return i;
}

int main()
{
    string s;
    ifstream f( "data.txt" );
    if ( f.is_open() )
    {
        // getline( f, s );

        while( !f.eof() )
        {
            getline( f, s );
            cout << s << endl;
        }
    }else{
        cerr << "Error de apertura del archivo." << endl;
    }
    return 0;
}


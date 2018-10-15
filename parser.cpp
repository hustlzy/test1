#include "ast.h"
#include<iostream>
using namespace std;
void print_tokens()
{
    tokeniser t = j_tokeniser();
    int count = 0;
    Token token = t->next_token() ;         // first read initialises the tokeniser
    while ( token.kind != t->eoi )    // keep going until end of input token returned
    {
        cout << token << endl ;       // print the last token read
        token = t->next_token() ;     // read the next one
        count++ ;                     // keep count just because we can
    }
                                      // print out the token count
    delete t;
    cout << "read " << count << " tokens\n" ;
}
jn_class jack_parser()
{
    return nullptr ;
}

int main(int argc,char **argv)
{
    print_tokens() ;
    // parse a class and print the abstract syntax tree as XML
    //jn_print_as_xml(jack_parser(),4) ;

    // flush the output and any errors
    print_output() ;
    print_errors() ;
}


#include <iostream>
#include <canlib.h>
#include <student.h>

using namespace std;

int main()
{ 
    Student andy(1,100);
    cout<<andy.getId()<<endl;
    cout<<"Hello World!"<<endl;

    canHandle hnd;
    canStatus stat;
    int channel=1;

    hnd = canOpenChannel(channel, 
                         canOPEN_EXCLUSIVE | 
                         canOPEN_REQUIRE_EXTENDED | 
                         canOPEN_ACCEPT_VIRTUAL);

    return 0;
}



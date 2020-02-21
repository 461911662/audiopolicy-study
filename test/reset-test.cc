#include <iostream>
#include <string.h>
#include <memory>

using namespace std;

class Foo
{
public:
    char name[128];
};

int main(int argc, char *argv[])
{
    std::unique_ptr<int> up1(new int(1024));
    std::unique_ptr<Foo> mFoo(new Foo());
    strcpy(mFoo->name, "xiaolu");
    cout << "class Foo reset befor"<<endl;
    cout << "mFoo.name:" << mFoo->name << endl;
    cout << "class Foo reset after"<<endl;
    mFoo.reset(0);
    if(nullptr == up1)
    {
        cout << "up1 reset ok, up1 is nullptr" << endl;
    }
    if(nullptr == mFoo)
    {
        cout << "mFoo reset ok, Foo instance is destoryed" << endl;
    }
    return 0;
}

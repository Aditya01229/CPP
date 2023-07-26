// Destructors are used for cleanup purpose.
// They do not return anything nor take parameters..
// It is good habit to use destructors.
// Destructor gets invoked automatically when the scope of an object come to an end..
// Destructor are used to free dynamic memory allocation..
#include <iostream>
using namespace std;

int count = 0;
class Example{
    public:
    Example(){
        count++;
        cout << "Constructor called - " << count << endl;
    }
    ~Example(){
        count--;
        cout << "Destructor called - " << count << endl;

    }
};

int main(int argc, char const *argv[])
{
    Example ob1;
    {
        // ob2 and ob3 have their scope only within this block therefore when the command gets out of this block this two objects will get destroyed...
        cout << "Entering Block" << endl;
        Example ob2, ob3;
        cout << "Exiting Block" << endl;
    }
        cout << "Main" << endl;
    return 0;
}

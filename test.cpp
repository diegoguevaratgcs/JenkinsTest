#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Enter the number of terms: ";
    n = atoi(argv[1]);

    cout << "Fibonacci Series till "<<n<<"Nth. term: "<<endl;

    for (int i = 1; i <= n; ++i)
    {
        // Prints the first two terms.
        if(i == 1)
        {
            cout << " " << t1<<endl;
            continue;
        }
        if(i == 2)
        {
            cout << t2 << " "<<endl;
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm << " "<<endl;
    }
    return 0;
}

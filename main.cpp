#include "headers/studentas.h"
#include "headers/bibliotekos.h"
#include "headers/Timer.h"

void testVector(int min_sz, int max_sz, int step);

int main()
{
    int min_sz = 1000;
    int max_sz = 100000000;
    int step = 100;
    
    testVector(min_sz, max_sz, step);

    return 0;
}

void testVector(int min_sz, int max_sz, int step)
{
    Timer t;
    for(int sz=min_sz; sz<=max_sz; sz*=step)
    {
        t.reset();

        std::vector<int> v1;
        for (int i = 1; i <= sz; ++i)
            v1.push_back(i);

        double t1 = t.elapsed();

        t.reset();
        vector<int> v2;
        for (int i = 1; i <= sz; ++i)
            v2.push_back(i);
        
        double t2 = t.elapsed();

        cout << sz << " elementu vektorius uztruko:\nMano:" << t1 << "\tstd: " << t2 << endl;
    }
    
}
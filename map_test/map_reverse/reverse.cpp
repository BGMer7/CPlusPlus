// map::rbegin/rend
#include <iostream>
#include <map>

int main()
{
    std::map<char, int> mymap;

    mymap['x'] = 100;
    mymap['y'] = 200;
    mymap['z'] = 300;

    std::map<char, int>::iterator i;
    for (i = mymap.begin(); i != mymap.end(); i++)
    {
        std::cout << i->first << " => " << i->second << "\n";
    }
    std::cout << "----------" << std::endl;
    // only reverse_iterator has rbegin and rend

    // show content:
    std::map<char, int>::reverse_iterator rit;
    for (rit = mymap.rbegin(); rit != mymap.rend(); ++rit)
        std::cout << rit->first << " => " << rit->second << '\n';

    std::cout << mymap['x'] << std::endl;
    std::cout << mymap['x', 'y', 'z'] << std::endl;
    return 0;
}
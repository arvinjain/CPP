#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{



    fstream newfile;


    newfile.open("C:/Users/Arvin/Downloads/resistances.txt", ios::in);   
    if (newfile.is_open())
    {               
        double r1, r2, r3, r4, r5, r6;

        while (newfile >> r1 >> r2 >> r3 >> r4 >> r5 >> r6)   
        {
            double m;

            m = ((r1 + r2) * r4 * r6) / ((r3 + r4) * r1 * r5); 

            if (m == 7.5)                        
            {
                cout << "Good Design Values : \n" << r1 << " " << r2 << " " << r3 << " " << r4 << " " << r5 << " " << r6 << "\n";
            }
            else
            {
                cout << "Bad Design Values : \n" << r1 << " " << r2 << " " << r3 << " " << r4 << " " << r5 << " " << r6 << "\n";

            }
        }

        newfile.close();    
    }
    return 0;

}

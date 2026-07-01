#include <iostream>
using namespace std;

int main()
{
    int answer, score = 0;

    cout << "========== Simple Quiz ==========\n\n";

    cout << "1. Capital of India?\n1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\nAnswer: ";
    cin >> answer;
    if(answer == 2) score++;

    cout << "\n2. Which language is used for system programming?\n1. C++\n2. HTML\n3. CSS\n4. SQL\nAnswer: ";
    cin >> answer;
    if(answer == 1) score++;

    cout << "\n3. Leap year has?\n1.364\n2.365\n3.366\n4.367\nAnswer: ";
    cin >> answer;
    if(answer == 3) score++;

    cout << "\n4. Red Planet?\n1.Venus\n2.Earth\n3.Jupiter\n4.Mars\nAnswer: ";
    cin >> answer;
    if(answer == 4) score++;

    cout << "\n5. Bits in one byte?\n1.4\n2.8\n3.16\n4.32\nAnswer: ";
    cin >> answer;
    if(answer == 2) score++;

    cout << "\nYour Score: " << score << "/5\n";

    return 0;
}

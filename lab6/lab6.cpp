#include <iostream>
#include <vector>

using namespace std;
class Array
{
public:
    template<class T>
    bool palindrom(vector<T> arr)
    {
        int fl = 0;
        for (typename vector<T>::iterator i = arr.begin(); i != arr.end(); i++)
        {
            for (typename vector<T>::reverse_iterator j = arr.rbegin(); j != arr.rend(); j++)
            {
                if (*i == *j)
                {
                    fl++;
                }
                else fl = 0;
            }
        }
        if (fl > 0)
            return true;
        else
            return false;
    }
    template<class T>
    bool is_sorted(vector<T> arr)
    {
        int fl = 0;
        for (typename vector<T>::iterator i = arr.begin(); i != arr.end() - 1; i++)
        {
            if (*i <= *(i + 1))
                fl++;
            else
            {
                fl = 0;
                break;
            }
        }
        if (fl > 0)
            return true;
        else return false;
    }
    template<class T>
    T find_not(vector<T> arr, T a)
    {
        for (typename vector<T>::iterator i = arr.begin(); i != arr.end(); i++)
        {
            if (*i != a)
                return *i;
        }
    }
};

int main()
{
    int k;
    cout << "Select an action" << endl;
    cout << "1 Checking an array for a palindrome" << endl;
    cout << "2 Checking for array sorting" << endl;
    cout << "3 Search for the first element not equal to the specified one" << endl;
    cin >> k;
    vector<int> arr;
    int n, a;
    cout << "input size of array: " << endl;
    cin >> n;
    cout << "Input array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        arr.push_back(a);
    }
    Array arr_;
    if (k == 1)
    {
        if (arr_.palindrom(arr) == true)
            cout << "The array is a polindrom";
        else
            cout << "The array isn't a polindrom";
    }

    if (k == 2)
    {

        if (arr_.is_sorted(arr) == true)
            cout << "Tne array is sorted";
        else
            cout << "The array isn't sorted";
        
    }

    if (k == 3)
    {
        int a;
        cout << "Input the number: " << endl;
        cin >> a;
        cout << arr_.find_not(arr, a);
    }
    return 0;
}
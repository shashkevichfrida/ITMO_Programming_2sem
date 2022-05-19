#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

    template<class Iteratorr>
    bool palindrom(Iteratorr first, Iteratorr last)
    {
        if (first == last) 
            return true;
        last--;
        while (first != last)
        {
            if (*first != *last)
                return false;
            if (first == last || first == last + 1)
                break;
            first++;
            last--;
        }
        return true;
    }
    
    template<class Iterator2, class Compare>
    bool is_sorted(Iterator2 first, Iterator2 last, Compare comp)
    {
        while (begin != last)
        {
            if (*first < *(first + 1))
                return false;
            
            first++;
        }
        return true;
        
    }
    template<class T,class Iterator3>
    T find_not(Iterator3 first, Iterator3 last, T a)
    {
        while (first != last)
        {
            if (*first != a)
                return *first;
            first++;
        }
        return T();
    }


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
  
    if (k == 1)
    {
        if (palindrom(arr.begin(), arr.end()) == 1)
            cout << "Array is a polindrom" << endl;
        else
            cout << "Array isn't a polindrom!!!" << endl;
    }

    if (k == 2)
    {

        if (is_sorted(arr.begin(), arr.end()) == 1)
            cout << "Tne array is sorted" << endl;
        else
            cout << "The array isn't sorted!" << endl;
        
    }

    if (k == 3)
    {
        int a;
        cout << "Input the number: " << endl;
        cin >> a;
        cout << find_not(arr.begin(), arr.end(), a);
    }
    return 0;
}
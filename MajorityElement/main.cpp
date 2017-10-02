#include <iostream>

using namespace std;

int main()
{
    int i, j, num, arr[100], freq[100], maxi, element[10], c = 0, flag, processed[100];
   cout << "Enter the number of elements in list" << endl;
   cin >> num;
    cout << "Enter the " << num << " elements of the array: " << endl;
     for (i = 0; i < num; i++){
        cin >> arr[i];
    }
    for (i = 0; i < num; i++){
        int counter = 0;
        for(j = 0; j < num; j++){
            if (arr[i] == arr[j]){
                counter++;
            }
            freq[i] = counter;
        }}
    maxi = freq[0];
    for (i = 0; i < num; i++){
            flag = 0;
            processed[i] = arr[i];
            for (j = 0; j < i; j++){
                if(arr[i] == processed[j])
                    flag = 1;
            }
      if (freq[i] >= maxi && flag == 0){
            maxi = freq[i];
            element[c] = arr[i];
            c++;
    }}
    cout << endl << "The element(s) with maximum frequency is/are: ";
    for (i = 0; i < c; i++){
        cout  << element[i] << " ";
    }

    cout << endl;

    return 0;
}

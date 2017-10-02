#include <iostream>

using namespace std;

int main(){
    int i, j, num, seq[100], diff1, diff2, diff3, diff, d, missing, missing1, flag = 0;
    // FOR AP
    cout << "Enter the number of elements in the sequence: " << endl;
    cin >> num;
    cout <<"Enter the "<< num <<" elements of the sequence " << endl;
    for (i = 0; i < num; i++){
        cin >> seq[i];
    }

    diff1 = seq[1] - seq[0];
    diff2 = seq[2] - seq[1];
    diff3 = seq[3] - seq[2];

    if (diff1 == diff2 == diff3)
        diff = diff1;
    else if (diff1 != diff2 && diff2 == diff3)
        diff = diff2;
    else if (diff2 != diff1 && diff1 == diff3)
        diff = diff3;
    else if (diff3 != diff1 && diff1 == diff2)
        diff = diff1;

    for (i = 0; i < num - 1; i ++){
            d = seq[i+1] - seq[i];
            if(d != diff){
                missing = seq[i] + diff;
                cout << endl << "The missing element is : " << missing << endl;
                flag = 1;
                break;
            }}
    if(flag == 0){
        missing = seq[0] - diff;
        missing1 = seq[num - 1] + diff;
        cout << "The missing term is one of the following: " << missing << " or " << missing1;
    }
    return 0;
}

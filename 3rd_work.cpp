#include <iostream>
#include <math.h>
//третья лабораторная работа
using namespace std;
int fib(int n){
    if(n<3){
        return 1;
    }
    return fib(n-2) + fib(n-1);

}

//5
void is_fib(){
    int a;
    int b;
    int i = 1;
    cout << "введите числа" << endl;
    cin >> a;
    cin >> b;
    while(fib(i) != a){
        if(fib(i) > a){
            cout << "одно из чисел не входит в последовательность" << endl;
            break;
        }
        if(fib(i) == a && (a + fib(i+1)) == b){
            cout << "числа соседи в последовательности" << endl;
            break;
        }
        i++;
    }
}


//9
void the_number_before_the_maximum(){
    int max  = -2147483648;
    int n = -2147483648;
    int  previous, previous1 = 0;
    while(n != 0){
        previous = n;
        cout << "введите число" << endl;
        cin >> n;
        if(n>max){
            max = n;
            previous1 = previous;
        }
    }
    cout << previous1 << endl;
}



//12

void coutn_after_minus(){
    int i = 0;
    int j = 0;
    int n = 1;
    int previous;
    while(n != 0){
        previous = n;
        cout << "введите число" << endl;
        cin >> n;
        if(previous<0){
            i = 0;
            j++;
        }
        if(n%2 == 1){
            i++;
        }
    }
    if(j == 0){
        cout << "таких чисел нет"<< endl;
    }
    else{
        cout << i<< endl;
    }
}

//17
void is_progress(){
    float n = 0;
    float previous;
    float difference = 0;
    float difference_previous = 0;
    int i = -1;
    while(true){
        previous = n;
        difference_previous = difference;
        cout << "введите число" << endl;
        cin >> n;
        if(n==0){
            break;
        }
        difference = previous -n;
        if(difference != difference_previous){
            i++;
        }

    }
    cout << (i == 0) << endl;
}



//24
int is_pal() {
    string s;
    cout << "введите число" << endl;
    cin >>s;
    for (int i = 0; i < s.length()/2; i++) {
        if (s[i] != s[s.length() - i - 1]) {
            cout << "false" << endl;
            return 0;
        }
    }
    cout << "true" << endl;
    return 1;
}

//26
void is_sqare(){
    int n;
    int y = 0;
    cout << "введите число" << endl;
    cin >> n;
    for(int i =0; i<n;i++){
        for (int j = 0; j<i;j++){
            if(i*i+j*j == n){
                cout << "True" << endl;
                y = 1;
                break;
            }

        }
    }
    if(y != 1) {
        cout << "false" << endl;
    }
}


int main() {
    setlocale(LC_ALL, "Russian");
    int a;
    link:
    cout << "введите номер задние(1-6) или 7, что бы выйти" << endl;
    cin >> a;
    //вы так и не сказали, что вэтом куске кода не так, поэтому я оставил его таким же
    switch (a)
    {
        case 1:
            cout << is_fib() << endl;
            goto link;
        case 2:
            cout << the_number_before_the_maximum() << endl;
            goto link;
        case 3:
            cout <<coutn_after_minus() << endl;
            goto link;
        case 4:
            cout << is_progress() << endl;
            goto link;
        case 5:
            cout << is_sqare() << endl;
            goto link;
        case 6:
            cout << is_pal() << endl;
            goto link;
        default:
            break;
    }
}
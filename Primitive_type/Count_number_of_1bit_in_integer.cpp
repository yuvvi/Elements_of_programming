/***************************************************
 * Author : Yuvaram Aligeti
 * Date   : 03042019
 * Problem: Compute the number of bits set to 1 in an
 *          integer valued variable X.
 *
*****************************************************/
#include <iostream>
using namespace std;

void get_1bits_of_integer(unsigned int val){
    unsigned int count_1s =0;
    int iteration_count = 0;
    while (val) {
        count_1s += val & 1;
        val = val >> 1;
        iteration_count++;
    }
    cout<<"get_1bits_of_integer \n\t Iterations :"<<iteration_count<<" # 1s count :"<<count_1s<<endl;
}

unsigned int get_1bits_of_integer_recursively(unsigned int val,int *iteration){
    (*iteration)++;
    if (val == 0){
        return 0;
    }else{
        return (val & 1) + get_1bits_of_integer_recursively(val >> 1,iteration);
    }
}

void get_1bits_of_int_Brian_Algo(unsigned int val){
    unsigned int count_1s =0;
    int iteration_count = 0;
    while (val) {
        val &= (val - 1);
        count_1s ++;
        iteration_count++;
    }
    cout<<"get_1bits_of_int_Brian_Algo \n\t Iterations :"<<iteration_count<<" # 1s count :"<<count_1s<<endl;
}

int main()
{
    cout << "---MAIN---"<<endl;
    unsigned int val = 22;
    int itr_count = 0;
    get_1bits_of_integer(val);
    cout<<"--------------------"<<endl;
    get_1bits_of_int_Brian_Algo(val);
    cout<<"--------------------"<<endl;
    unsigned int res = get_1bits_of_integer_recursively(val,&itr_count);
    cout <<"recursive Computation \n\t Iterations :"<<itr_count<<" # 1s count :"<<res<<endl;
    cout<<"--------------------END"<<endl;
    return 0;
}


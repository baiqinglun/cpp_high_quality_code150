/**
 * @brief: 02 区分0的4种面孔
 * @birth: created by Dablelv on bql at 
 */
#include<iostream>

using namespace std;

int main(){

    char str[12] = {"Hello C/C++"};
    if(str[11] == '\0')
    {
        cout << "相同" << endl; // 输出：相同
    }
    return 0;
}
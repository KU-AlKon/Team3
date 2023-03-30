#include <iostream>
using namespace std;

int main (void)
{


    int num[9];
    int sum = 0;
    int a, b;

    for (int i =0 ; i<9 ; i++) // 값 입력부분
    {
        //cout <<"입력하세요";

        cin >> num[i];
        
        sum += num[i];

    }

    for (int j=0;j<9;j++) // 합이 100인 수를 찾는 코드
    {
        


        for(int k =j+1; k<9 ;k++)
        {
            
            if(sum - (num[j]+num[k]) == 100)
            {
                a = j;
                b = k;

            }
        }
        
        
    }
    
    for (int i=0; i<9;i++){  // 나머지 2개의 수를 찾아서 출력하는 코드
        
        if(i==a || i==b)
        {
            continue;
        }
        else
            cout << num[i] << '\n';
    }
    
    
    
    return 0;
            
               





}

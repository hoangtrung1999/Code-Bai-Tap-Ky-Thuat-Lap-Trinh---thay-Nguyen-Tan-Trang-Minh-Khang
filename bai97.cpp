#include <iostream> 
using namespace std;

int Calculate (float canh_A , float canh_B , float canh_C)
{
     if ((canh_A + canh_B <= canh_C) || (canh_B + canh_C) <= canh_A || (canh_C + canh_A) <= canh_B)// điều kiện ko thoả của 1 tam giác
    {
        printf("Day khong phai la 1 tam giac");
        return 0;
    }
    else 
    {
        if (canh_A == canh_B&&canh_B == canh_C) //đk tam giác đều
        {
            printf("Day la tam giac deu");
            return 0;
        }
        else if (canh_A == canh_B || canh_B == canh_C || canh_C == canh_A) // đk tam giác cân ! *notice : trong tam giác cân có vuông cân, cân
        {
            if (canh_A*canh_A + canh_B*canh_B == canh_C*canh_C || canh_B*canh_B + canh_C*canh_C == canh_A*canh_A || canh_C*canh_C + canh_A*canh_A == canh_B*canh_B)//tam giác vuông cân
            {
                printf("Day la tam giac vuong can");
                return 0;
            }
            else{
                printf("Day la tam giac can");
                return 0;
            }
        }
        else if (canh_A*canh_A + canh_B*canh_B == canh_C*canh_C || canh_B*canh_B + canh_C*canh_C == canh_A*canh_A || canh_C*canh_C + canh_A*canh_A == canh_B*canh_B)// điều kiên tam giác vuông
        {
            printf("Day la tam giac vuong");
            return 0;
        }
        else{
            printf("Day la tam giac thuong");
            return 0;
        }
    }
}

int main(){
    float canh_A, canh_B, canh_C;
    cin >> canh_A;
    cin >> canh_B;
    cin >> canh_C;
    Calculate(canh_A,canh_B,canh_C);
    return 0;
}
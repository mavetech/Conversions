#include <iostream>
#include <cmath>

using namespace std;

float decimalToBinary(long decimal);
float binaryToDecimal(long binary);

int main()
{
    
    float binaryValue = 1011;
    float decimalValue = 8;
    
    float decimalResult = binaryToDecimal(binaryValue);
    cout<<"The decimal value of binary "<<binaryValue<<" is "<<decimalResult<<endl;
    
    float binaryResult = decimalToBinary(decimalValue);
    cout<<"The binary value of decimal "<<decimalValue<<" is "<<binaryResult<<endl;
    
    return 0;
}

float decimalToBinary(long decimal){
    int lengthOfArray=0;
    long temp = decimal;
    
    while(temp>0){
        temp/=2;
        lengthOfArray++;
    }
    
    long int_array[lengthOfArray] = {0};
    
    int i=0;
    while(decimal>0){
        i++;
        int_array[lengthOfArray-i] = decimal%2;
        decimal/=2;
    }
    
    float ans=0;
    int j=0;
    for(int i=lengthOfArray-1;i>=0;i--){
        ans+=int_array[i]*pow(10,j);
        j++;
    }
    return ans;
    
}

float binaryToDecimal(long binary){
    float decimal;
    int i=0;
    while(binary!=0){
        int remainder = binary%10;
        binary/=10;
        decimal += remainder * pow(2,i);
        i++;
    }
    return decimal;
}


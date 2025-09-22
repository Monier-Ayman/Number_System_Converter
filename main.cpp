/*
  Number System Converter in C++
  Author: Monier Ayman
  Description: 
    A console-based program that converts numbers between 
    Decimal, Binary, Octal, and Hexadecimal systems. 
    Includes input validation for binary, octal, and hexadecimal numbers.
    Features a menu system and continuous execution until the user exits.

    Time Complexity Analysis:
    - Decimal → Binary / Octal / Hexadecimal: O(log n)
      (repeated division by 2, 8, or 16 + string reversal)
    - Binary → Decimal: O(k) where k = length of binary string ≈ O(log n)
    - Octal → Decimal: O(k) where k = length of octal string ≈ O(log n)
    - Hexadecimal → Decimal: O(k) where k = length of hex string ≈ O(log n)
*/
#include <bits/stdc++.h>
using namespace std;

// Convert Decimal to Binary
string decimalToBinary(int n){
    string result="";
    while(n>0){
        if(n%2==0){
            result+="0";
        }
        else{
            result+="1";
        }
        n/=2;
    }
    reverse(result.begin(), result.end());

    if(result==""){
        return "0";
    } 
    else{
        return result;
    }
}

// Convert Decimal to Octal
string decimalToOctal(int n){
    string result="";
    while(n>0){
        result+=to_string(n%8);
        n/=8;
    }
    reverse(result.begin(), result.end());

    if(result==""){
        return "0";
    } 
    else{
        return result;
    }

}

// Convert Decimal to Hexadecimal
string decimalToHex(int n){
    string hexChars="0123456789ABCDEF";
    string result="";
    while(n>0){
        result+=hexChars[n%16];
        n/=16;
    }
    reverse(result.begin(), result.end());

    if(result==""){
        return "0";
    } 
    else{
        return result;
    }

}

// Convert Binary to Decimal
int binaryToDecimal(string bin){
    int result=0;
    for(int i=0 ; i<bin.size() ; i++){
        char c=bin[i];
        if(c!='0' && c!='1'){
            cout<<"Invalid binary number!\n";
            return -1;
        }
        result= result*2 + (c-'0');
    }

    return result;
}

// Convert Octal to Decimal
int octalToDecimal(string oct) {
    int result=0;
    for(int i=0 ; i<oct.size() ; i++){
        char c=oct[i];
        if(c<'0' || c>'7'){
            cout<<"Invalid octal number!\n";
            return -1;
        }
        result= result*8 + (c-'0');
    }
    return result;
}

// Convert Hexadecimal to Decimal
int hexToDecimal(string hex){
    int result=0;
    for (int i=0 ; i<hex.size() ; i++){
        char c=hex[i];
        if(c>='0' && c<='9'){
            result= result*16 + (c-'0');
        }    
        else if(c>='A' && c<='F'){
            result= result*16 + (c-'A'+10);
        }
        else if(c>='a' && c<='f'){
            result= result*16 + (c-'a'+10);
        }    
        else{
            cout<<"Invalid hexadecimal number!\n";
            return -1;
        }
    }
    return result;
}

int main(){
    int choice;
    while(true){
        cout<<"===== Number System Converter =====\n";
        cout<<"1. Decimal to Binary/Octal/Hex\n";
        cout<<"2. Binary to Decimal\n";
        cout<<"3. Octal to Decimal\n";
        cout<<"4. Hexadecimal to Decimal\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice: ";
        cin>> choice;

        if(choice==1){
            int num;
            cout<<"Enter a Decimal number: ";
            cin>> num;
            cout<<"Binary: "<< decimalToBinary(num)<<"\n";
            cout<<"Octal: "<< decimalToOctal(num)<<"\n";
            cout<<"Hexadecimal: "<< decimalToHex(num)<<"\n";
        }
        else if(choice==2){
            string bin;
            cout<<"Enter a Binary number: ";
            cin>> bin;
            cout<<"Decimal: "<< binaryToDecimal(bin)<<"\n";
        }
        else if(choice==3){
            string oct;
            cout<<"Enter an Octal number: ";
            cin>> oct;
            cout<<"Decimal: "<< octalToDecimal(oct)<<"\n";
        }
        else if(choice==4){
            string hex;
            cout<<"Enter a Hexadecimal number: ";
            cin>> hex;
            cout<< "Decimal: " << hexToDecimal(hex)<<"\n";
        }
        else if(choice==5){
            cout<<"Exiting...\n";
            break;
        }
        else{
            cout<< "Invalid choice!\n";
        }

    }


    return 0;
}


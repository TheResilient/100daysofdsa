#include<iostream>
using namespace std;

string convertToWords(long value) {
          
    string first[20] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
  
    string second[10] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    string final = "";
    if(value<0)
    {
        final+=" ";
        convertToWords(-value);
    }
    //
    else if(value>=10000000 and value<1000000000){
        convertToWords(value/10000000);
                final+=" Crore";
                if(value%10000000){
                    if(value%10000000<100000){
                        final+=" and";
                        convertToWords(value%10000000);
                    }
                    final+=" ";
                    convertToWords(value%10000000);
                    
                }
    }

    else if(value>=100000 and value<10000000){
        convertToWords(value/100000);
        final+=" Lakh";
        if(value%100000){
            if(value%100000<10000){
                final+=" and";
                convertToWords(value%100000);
            }
            final+=" ";
            convertToWords(value%100000);
            
        }
    }
    else if(value>=1000 and value<100000)
    {
        // long x =
        convertToWords(value/1000);
        final+=" Thousand";
        if(value % 1000)
        {
            if(value % 1000 < 100)
            {
                final+=" and";
            }
            final+=" " ;
            convertToWords(value % 1000);
        }
    }
    else if(value >= 100)
    {
        convertToWords(value / 100);
        final+=" Hundred";
        if(value % 100)
        {
            final+=" and ";
            convertToWords (value % 100);
        }
    }
    else if(value >= 20)
    {
        final+=second[value / 10];
        if(value % 10)
        {
            final+=" ";
            convertToWords(value % 10);
        }
    }
    else
    {
        final+=first[value];
    }
    return final;

}

int main()
{
    int number;
    
    cin>>number;
    cout<<convertToWords(number);
    return 0;
}
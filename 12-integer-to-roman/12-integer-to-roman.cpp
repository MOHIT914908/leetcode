class Solution {
public:
    string intToRoman(int num) {
     string ans="";
        while(num>=1000)
        {
            ans=ans+"M";
           num=num-1000;
        }
        if(num>=900){
            ans=ans+"CM";
            num=num-900;
        }
          while(num>=500)
        {
            ans=ans+"D";
           num=num-500;
        }
        if(num>=400){
            ans=ans+"CD";
            num=num-400;
        }
          while(num>=100)
        {
            ans=ans+"C";
            num=num-100;
        }
        if(num>=90){
            ans=ans+"XC";
            num=num-90;
        }
         while(num>=50)
        {
            ans=ans+"L";
           num=num-50;
        }
        if(num>=40){
            ans=ans+"XL";
            num=num-40;
        }
      while(num>=10)
        {
            ans=ans+"X";
            num=num-10;
        }
        if(num>=9){
            ans=ans+"IX";
            num=num-90;
        }
        
        while(num>=5)
        {
            ans=ans+"V";
            num=num-5;
        }
        if(num>=4){
            ans=ans+"IV";
            num=num-4;
        }
            
        while(num>=1)
        {
            ans=ans+"I";
            num=num-1;
        }
        return ans;
    }
};
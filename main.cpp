#include"include.h"

int main()
{
    //string entrada = "3+((5+9)*2)+2+1";
    string entrada = "3+((5+9)*2)";
    //string entrada=  "(2+9)*(3)";
    //string entrada = "2+9+3"; 
    //string entrada = "2+4+2+1+2+3+4+5+8"; 
    //string entrada = "2+1+3*(2+1)"; 
    

    ArTree T1;
    
   
    a1(entrada,T1.root, 450, 20);
    cout<<T1.GetHeight(T1.root)<<endl;
    
    //T1.Draw();
   
    
}   

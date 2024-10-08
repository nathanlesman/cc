#include "calculator.ih"

void Calculator::evaluate(double lh, char op, double rh)
{
    if (((rh == 0 ) && ((op == '/') ||(op == '%'))) ||
                ((op == '%') && (lh < 0 || rh < 0 || intlh || intrh)))
        cout << "false" << "\n"; 

    else    
    {  
        switch (op)
        {
            case '+':
                cout << lh + rh << "\n"; 
            break;
            case '-': 
                cout << lh - rh << "\n";  
            break;
            case '*': 
                cout << lh * rh << "\n"; 
            break;
            case '/': 
                cout << lh / rh << "\n"; 
            break;
            case '%': 
                cout << fmod(lh,rh) <<"\n"; 
            break;
        }
    }        
}

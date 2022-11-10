#include <iostream>

using namespace std;

int main()
{
    cout << "This is a Calculator."<< endl;
    cout << "GENERAL RULES : you would be asked to input the symbol of the operation as mentioned here, \naccording to your choice: TYPE the operator when prompted:\n 1.Addition '+' \n ";
    cout << "2.Subtraction '-' \n 3.Multiplication '*'\n 4.Division '/' \n 5.Exponential 'e' \n 6.Trigonometic 't'. \n 7.FINALLY to Terminate and Display Final Result TYPE  '='" << endl;
    double result;
    char op;
    double num1,num2;
    cout << "enter number : \n";
    cin >>num1;
    double finalresult=num1;
    for(int p=0; p>=0;p++)
    {
        cout<<"\nenter operation(+,-,*,/,exponential(TYPE'e'),trigonometric(TYPE't'), OR '='"<<endl;
        cin >> op;
        if(op == '+' || op == '-' || op == '*' || op == '/' )
        {
            cout<<"enter number\n";
            cin >> num2;
            if(op=='+')
            {
                cout << finalresult<<" " <<op<<" "<<num2 <<endl;
                finalresult+=num2;
                cout << "Current Answer :   "<<finalresult <<endl;
            }
            else if(op=='-')
            {
                cout << finalresult<<" " <<op<<" "<<num2 <<endl;
                finalresult-=num2;
                cout << "Current Answer :   "<<finalresult<<endl;
            }
            else if(op=='*')
            {
                cout << finalresult<<" " <<op<<" "<<num2 <<endl;
                finalresult*=num2;
                cout << "Current Answer :   "<<finalresult<<endl;
            }
            else if(op=='/')
            {
                cout << finalresult<<" " <<op<<" "<<num2 <<endl;
                finalresult/=num2;
                cout << "Current Answer :   "<<finalresult<<endl;
            }
        }
        else if( op =='e' || op=='t' || op=='i')
        {
            if(op =='e')
            {
                cout << "Do you want it to +,-,*,/ to the current answer\n";
                cin >> op;
                cout << "Enter Base\n" ;
                double base,pow, ans=1;
                cin>> base;
                cout<< "enter power\n";
                cin >>pow;
                cout << finalresult <<" "<<op<<" "<<base<<"^"<<pow <<endl;
                int i =0;
                for(i=1;i<=pow;i++)
                {
                    ans*=base;
                }

                if(op=='+')
                {
                    finalresult+=ans;
                }
                else if(op=='-')
                {
                    finalresult-=ans;
                }
                else if(op=='*')
                {
                    finalresult*=ans;
                }
                else if(op=='/')
                {
                    finalresult/=ans;
                }
                cout << "Current Answer :   "<<finalresult<<endl;
            }
            else if(op=='t')
            {
                double angle,sin=0,cos=1,fact=1,numtr=1;
                int i,j;
                char op1;
                cout<< "enter angle(in Degree)\n";
                cin>> angle;
                cout<< "enter function to be returned"<<endl;
                cout<< "sin(TYPE 's')   cos(TYPE'c')    tan(TYPE 't') \n";
                cin >> op1;
                cout << "Do you want it to +,-,*,/ to the current answer\n";
                cin >> op;
                //angle=angle%360.0;
                angle/=57.2958;//angle in radian
                for(i=1;i<=100;i++)
                {
                    numtr*=angle;
                    fact=1;
                    for(j=1;j<=i;j++)
                    {
                        fact*=j;
                    }
                    if((i%2)==1)
                    {
                        if((i%4)==1)
                        {
                            sin+=(numtr/fact);
                        }
                        else if((i%4==3))
                        {
                            sin-=(numtr/fact);
                        }
                    }
                    if((i%2==0))
                    {
                         if((i%4)==0)
                        {
                            cos+=(numtr/fact);
                        }
                        else if((i%4==2))
                        {
                            cos-=(numtr/fact);
                        }
                    }
                }
                double ans2;
                if(op1=='s')
                {
                    cout<< "sine of angle = "<<sin<<endl;
                    cout<< finalresult<<" "<<op<<" "<<sin<<endl;
                    ans2 = sin;
                }
                else if(op1=='c')
                {
                    cout<< " cosine of angle = "<< cos<<endl;
                    cout<< finalresult<<" "<<op<<" "<<cos<<endl;
                    ans2 = cos;
                }
                else if(op1=='t')
                {
                    cout << "tan of angle = "<< sin/cos<<endl;;
                    cout<< finalresult<<" "<<op<<" "<<sin/cos<<endl;
                    ans2 = sin/cos;
                }
                if(op=='+')
                {
                    finalresult+=ans2;
                }
                if(op=='-')
                {
                    finalresult-=ans2;
                }
                if(op=='*')
                {
                    finalresult*=ans2;
                }
                if(op=='/')
                {
                    finalresult/=ans2;
                }
                cout <<"Current answer:    "<<finalresult<<endl;
            }

        }
        else if(op== '=')
        {
            cout <<" FINAL RESULT =     "<<finalresult<<endl;
            cout <<" Thanks.\n \1\1\1\1\1";
            break;
        }
        /*else if (op=='i')
        {
            cout << "Enter the value"<<endl;
            double inv;
            cin>> inv;
            double angle = 0;
            double diff;



        } */
        else
        {
            cout << "WRONG INPUT!";
            break;
            return 0;
        }
    }
    return 0;
}

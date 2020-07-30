#include<iostream>
#include<string>
using namespace std;
int main()
{
    string h;
    cin >> h;
    for(int i = 0;i<5;i++)
    {
        for(int j=0;j<h.size();j++)
        {
            if(h[j]=='0')
            {
                if(i==0)
                {
                    cout << "*****" << " ";
                }
                if(i==1)
                {
                    cout << "*   *"<< " ";
                }
                if(i==2)
                {
                    cout << "*   *"<< " ";
                }
                if(i==3)
                {
                    cout << "*   *"<< " ";
                }
                if(i==4)
                {
                    cout << "*****"<< " ";
                }
            }
            if(h[j]=='1')
            {
                if(i==0)
                {
                    cout << "*    "<< " ";
                }
                if(i==1)
                {
                    cout << "*    "<< " ";
                }
                if(i==2)
                {
                    cout << "*    "<< " ";
                }
                if(i==3)
                {
                    cout << "*    "<< " ";
                }
                if(i==4)
                {
                    cout << "*    "<< " ";
                }
            }
            if(h[j]=='2')
            {
                if(i==0)
                {
                    cout << "*****"<< " ";
                }
                if(i==1)
                {
                    cout << "    *"<< " ";
                }
                if(i==2)
                {
                    cout << "*****"<< " ";
                }
                if(i==3)
                {
                    cout << "*    "<< " ";
                }
                if(i==4)
                {
                    cout << "*****"<< " ";
                }
            }
            if(h[j]=='3')
            {
                if(i==0)
                {
                    cout << "*****"<< " ";
                }
                if(i==1)
                {
                    cout << "    *"<< " ";
                }
                if(i==2)
                {
                    cout << "*****"<< " ";
                }
                if(i==3)
                {
                    cout << "    *"<< " ";
                }
                if(i==4)
                {
                    cout << "*****"<< " ";
                }
            }
            if(h[j]=='4')
            {
                if(i==0)
                {
                    cout << "*   *"<< " ";
                }
                if(i==1)
                {
                    cout << "*   *"<< " ";
                }
                if(i==2)
                {
                    cout << "*****"<< " ";
                }
                if(i==3)
                {
                    cout << "    *"<< " ";
                }
                if(i==4)
                {
                    cout << "    *"<< " ";
                }
            }
            if(h[j]=='5')
            {
                if(i==0)
                {
                    cout << "*****"<< " ";
                }
                if(i==1)
                {
                    cout << "*    "<< " ";
                }
                if(i==2)
                {
                    cout << "*****"<< " ";
                }
                if(i==3)
                {
                    cout << "    *"<< " ";
                }
                if(i==4)
                {
                    cout << "*****"<< " ";
                }
            }
            if(h[j]=='6')
            {
                if(i==0)
                {
                    cout << "*    "<< " ";
                }
                if(i==1)
                {
                    cout << "*    "<< " ";
                }
                if(i==2)
                {
                    cout << "*    "<< " ";
                }
                if(i==3)
                {
                    cout << "*****"<< " ";
                }
                if(i==4)
                {
                    cout << "*****"<< " ";
                }
            }
            if(h[j]=='7')
            {
                if(i==0)
                {
                    cout << "*****"<< " ";
                }
                if(i==1)
                {
                    cout << "    *"<< " ";
                }
                if(i==2)
                {
                    cout << "    *"<< " ";
                }
                if(i==3)
                {
                    cout << "    *"<< " ";
                }
                if(i==4)
                {
                    cout << "    *"<< " ";
                }
            }
            if(h[j]=='8')
            {
                if(i==0)
                {
                    cout << "*****"<< " ";
                }
                if(i==1)
                {
                    cout << "*   *"<< " ";
                }
                if(i==2)
                {
                    cout << "*****"<< " ";
                }
                if(i==3)
                {
                    cout << "*   *"<< " ";
                }
                if(i==4)
                {
                    cout << "*****"<< " ";
                }
            }
            if(h[j]=='9')
            {
                if(i==0)
                {
                    cout << "*****"<< " ";
                }
                if(i==1)
                {
                    cout << "*****"<< " ";
                }
                if(i==2)
                {
                    cout << "    *"<< " ";
                }
                if(i==3)
                {
                    cout << "    *"<< " ";
                }
                if(i==4)
                {
                    cout << "    *"<< " ";
                }
            }
        }
        cout << endl;
    }
}

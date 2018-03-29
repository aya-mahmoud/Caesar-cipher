#include <iostream>

using namespace std;

int main()
{
    int sum,number,nshifts;
    string message,arr1="ABCDEFGHIJKLMNOPQRSTUVWXYZ",arr2="abcdefghijklmnopqrstuvwxyz";
    while(true)
    {
        cout<<'\n'<<"what do you like to do today?"<<'\n';
        cout<<"1-cipher a message"<<'\n';
        cout<<"2-decipher a message"<<'\n';
        cout<<"3-end"<<'\n';
        cin>>number;
        if (number==1)
        {
            cout<<"please enter the message to cipher:"<<'\n';
            cin.ignore();
            getline(cin,message);
            cout<<"enter number of shifts:";
            cin>>nshifts;

            for(int i=0; i<message.length(); i++)
            {
                for( int j=0; j<26; j++)
                {
                    sum=nshifts+j;
                    if(sum>25)
                    {
                        sum%=26;
                    }

                    if(message[i]==arr1[j])
                    {
                        message[i]=arr1[sum];
                        break;
                    }
                    else if (message[i]==arr2[j])
                    {
                        message[i]=arr2[sum];
                        break;
                    }

                }

            }
            cout<<message<<'\n';
        }


        else if (number==2)
        {
            cout<<"please enter the message to decipher:"<<'\n';
            cin.ignore();
            getline(cin,message);
            cout<<"enter no of shifts:";
            cin>>nshifts;
            for(int i=0; i<message.length(); i++)
            {
                for( int j=0; j<26; j++)
                {
                    sum=j-nshifts;

                    while(sum<0)
                    {
                        sum=sum+26;

                    }
                    if(message[i]==arr1[j])
                    {
                        message[i]=arr1[sum];
                        break;
                    }
                    else if (message[i]==arr2[j])
                    {
                        message[i]=arr2[sum];
                        break;
                    }

                }
            }
            cout<<message<<'\n';
        }
        else if (number==3)
        {
            return 0;
        }
        else
        {
            cout<<"invalid";
        }
    }

}

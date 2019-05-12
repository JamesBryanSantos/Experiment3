#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	cout<<"=======================LARGEST,SMALLEST,SUM & AVERAGE============================="<<endl;
	cout<<"==========================by: James Bryan D. Santos==============================="<<endl;

    int n, i;
    float arr[100], sum=0.0, ave;

    cout << "Enter the numbers of element: ";
    cin >> n;

    while (n > 100 || n <= 0)
    {
        cout << "Error! it should be within the range of 1 to 100." << endl;
        cout << "Please enter the number again: ";
        cin >> n;
    }
    
    
    for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Enter the number: ";
        cin >> arr[i];
        sum += arr[i];
    }

	cout<<"\n\n\n";
    
    for(i = 1;i < n; ++i)
    {
       
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    cout << "Largest element = " << arr[0];
    cout<<endl;

    
     for(i = 1;i < n; ++i)
    {
       
       if(arr[0] > arr[i])
           arr[0] = arr[i];
    }
    cout << "Smallest Element  = " << arr[0];
    cout<<endl;
    
    cout<<"Sum= "<<sum<<"\n";

    ave = sum / n;
    cout << "Average = " << ave;

	getch();
    return 0;
}

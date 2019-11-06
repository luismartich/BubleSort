//BUBBLE SORT

#include <iostream>
using namespace std;

void sortArray(int[],int);
void showArray(const int[],int);

int main()
{
    int values[6]={5,4,3,2,1,0};

    cout<<"The unsorted values are: \n";
    showArray(values,6);

    sortArray(values,6);

    cout<<"The sorted values are: \n" ;
    showArray(values,6);

    return 0;
}

void sortArray(int array[],int size)
{
    bool swap;
    int temp;

    do
    {
        swap=false;
        for(int count=0;count<(size-1);count++)
        {
            if(array[count]>array[count+1])
            {
                temp=array[count];
                array[count]=array[count+1];
                array[count+1]=temp;
                swap=true;
            }
        }
    } while (swap);
}


void showArray(const int array[],int size)
{
    for(int count=0;count<size;count++)
        cout<<array[count]<<" "<<endl;
}

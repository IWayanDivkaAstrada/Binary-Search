#include <iostream>
using namespace std;

int main() 
{
	int count , i , arr[50], first, middle, last, num;
	cout<<"berapa banyak element yang ingin anda cari? :";
		cin>>count;
	
	for (i=0; i<count; i++)
	{
		cout<<"masukan angka :"<<(i+1)<<": ";
				cin>>arr[i];
	}
	cout<<"masukan angka yang ingin dicari :";
		cin>>num;
	first = 0;
	last = count-1;
	middle = (first+last)/2;
	while (first <= last)
	{
		if(arr[middle] < num)
		{
			first = middle + 1;
			
		}
		else if(arr[middle] == num)
		{
			cout<<num<<" ditemukan dalam array pada lokasi ke :"<<middle+1<<"\n";
				break;
			}
				else{
					last = middle - 1;
			}
			middle = (first + last)/2;	
		}
		if(first > last)
	{
		cout<<num<<"tidak ditemukan didalam array yang sudah dibuat";
	}
	return 0;
}

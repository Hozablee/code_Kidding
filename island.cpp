#include<iostream>

using namespace std;


int main(){
    int  n;
    cin>>n;
    int area[n][n] ;
    for(int i=0;i<n;i++){
        char input[n] ;
        cin>>input;
        for(int j=0;j<n;j++)
        {
            area[i][j] = 48-input[j];
        }
    }
    int histrogram[n][n] ;
    int answer_row = -1;
    int answer_column = -1;
    int answer_area = 0;
    for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
                int k=i;
                int count =0;
                while(area[k][j] !=0 && k>=0 ){ // finding height from ground each row
                    count++;
                    k--;
                }
            histrogram[i][j] = count;  //save height
         }
         for(int k=0;k<n;k++) //run on column  such as [0,0,3,3,3,4,0,0]
         {
             if(histrogram[i][k] != 0)  //ignore element if  0
             {
                int l = histrogram[i][k];  //take element isn't 0 and check next element is the same  such as 3 we will check it's same 3 in 3 times next
                int tempsum = 0;
                for(int m=k ; m<(k+l)  ; m++)  //for checking it's same in 3 times 3+3+3  =9 that equal 3 *3
                {
                    tempsum+=histrogram[i][m];

                }
                if(tempsum == (l*l) ) //check multiply equals sum that is answer
                {
                    if((l*l)>answer_area){  //check answer is more than old answer
                        answer_area = l*l;
                        answer_row = (i+1)-(l-1);
                        answer_column= (k+1);
                        k=k+(l-1);   // jump loop over the same element
                    }
                }
             }
         }
    }
    cout<<(answer_row)<<" "<<answer_column<<endl;
    cout<<answer_area<<endl;

    //-------------Histrogram array ---------------//
   /*for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){

                  cout<<" "<<histrogram[i][j];
         }
         cout<<endl;
    }*/

//-------------Histrogram array ---------------//

}


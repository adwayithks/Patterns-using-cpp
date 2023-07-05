#include <iostream>

int getIntFromUser()
{
    int input;
    std::cin>>input;
//    std::cout<<input;
    return input;
}

int main()
{   
    std::cout<<" Enter rows and colomns seperated by a space : ";
    int row{getIntFromUser()};
//    std::cout<<row;
    int col{getIntFromUser()};
//    std::cout<<row<<" "<<col<<std::endl;
    std::cout<<std::endl;
    for(int i{1}; i<= row; i++)
    {
        //*****old code********

        // if(i==1||i==row)                    /*complete stars are printed only in
        //                                       first and last lines*/
        // {
        //     for(int j{1}; j<col+1; j++)
        //     {
        //         std::cout<<" * ";
        //     }
            
        // }
        // else                                
        // {
        //     for(int j{1}; j<col+1; j++)     /*complete stars are printed only in 
        //                                     first and last colomns*/
        //     {
        //         if(j==1||j==col)
        //         {
        //             std::cout<<" * ";
        //         }
        //         else
        //         {
        //             std::cout<<"   ";
        //         }
        //     }
        // }
        // std::cout<<std::endl;

        //******new code********

        for(int j{1}; j<= col; j++)
        {
            if(i==1 || j==1 || i==row || j==col){
                std::cout<<" * ";
            }
            else{
                std::cout<<"   ";
            }
        }
        std::cout<<std::endl;
    }
    return 0;
}
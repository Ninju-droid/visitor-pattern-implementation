#include <iostream>
#include <string>
#include "header.h"
using namespace std; 

int main(){
    IElement* ele1 = new concrete_element_one(); 
    IElement* ele2 = new concrete_element_two(); 
    IElement* ele3 = new concrete_element_three(); 
    IElement* ele4 = new concrete_element_four();
    concrete_visitor_one visitor1 ; 
    concrete_visitor_two visitor2 ;
    concrete_visitor_three visitor3 ;
    concrete_visitor_four visitor4 ;

    while (true)
    {   int x,y;
        cout<<"Enter the element that you wanna use : "<<endl;
        cin>>x;
        cout<<"Enter the visitor : "<<endl;
        cin>>y;
        if(x==0 || y==0)break;
        switch(x){
            case 1:switch (y)
            {
                case 1:ele1->accept(&visitor1);break;
                case 2:ele1->accept(&visitor2);break;
                case 3:ele1->accept(&visitor3);break;
                case 4:ele1->accept(&visitor4);break;
                default:cout<<"NOT valid visitor"<<endl;break;
            } break;
            case 2: switch (y)
            {
                case 1:ele2->accept(&visitor1);break;
                case 2:ele2->accept(&visitor2);break;
                case 3:ele2->accept(&visitor3);break;
                case 4:ele2->accept(&visitor4);break;
                default:cout<<"NOT valid visitor"<<endl;break;
            } break;
            case 3:switch (y)
            {
                case 1:ele3->accept(&visitor1);break;
                case 2:ele3->accept(&visitor2);break;
                case 3:ele3->accept(&visitor3);break;
                case 4:ele3->accept(&visitor4);break;
                default:cout<<"NOT valid visitor"<<endl;break;
            } break;
            case 4: switch (y)
            {
                case 1:ele4->accept(&visitor1);break;
                case 2:ele4->accept(&visitor2);break;
                case 3:ele4->accept(&visitor3);break;
                case 4:ele4->accept(&visitor4);break;
                default:cout<<"NOT valid visitor"<<endl;break;
            } break;
            default :cout<<"NOT VALID ELELMENT"<<endl;
        }
    }

    return 0 ;
}
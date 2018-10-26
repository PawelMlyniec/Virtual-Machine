#include <iostream>
#include "virtual.h"

void help();

int main(int argc, char **argv)
{
    /*char *option;
    char *name;

    if(argc==1)
    {
        help();
        return 0;
    }

    strcpy(option,argv[0]);
    strcpy(name,argv[1]);

    VirtualMachine myVM("discImage");
    if(strcmp(option,"-c")==0)
        myVM.create();

    else if(strcmp(option,"-2v")==0)
        myVM.writeToMachine(name);
    else if(strcmp(option,"-2s")==0)
        myVM.copyFromMachine(name);
    else if(strcmp(option,"-r")==0)
        myVM.deleteFile(name);
    else if(strcmp(option,"-d")==0)
        myVM.deleteDisk();
    else if(strcmp(option,"-l")==0)
        myVM.viewFiles();
    else if(strcmp(option,"-i")==0)
        myVM.viewMemory();
    else
       help();
*/







    VirtualMachine myVM =  VirtualMachine("vmdisc1");
    myVM.create();
    cout<<"zbyt duży plik testuje"<<endl;
   myVM.writeToMachine("duze");
    myVM.viewFiles();

   myVM.writeToMachine("paprotka.bmp");
    myVM.viewFiles();
    myVM.writeToMachine("sierp.bmp");
    cout<<"paprotka i sierp w machinie powinno byc"<<endl;
   // myVM.deleteFile("paprotka.bmp");
    myVM.viewFiles();
   myVM.deleteFile("sierp.bmp");
    myVM.viewMemory();
    cout<<"last"<<endl;
   myVM.viewFiles();
    getchar();
    myVM.copyFromMachine("paprotka.bmp");
    myVM.viewFiles();
    //myVM.copyFromMachine("sierp.bmp");
    myVM.deleteDisk();


    return  0;
}

void help()
{
cout<<"Use: "<<endl;
cout<< "   -c  [name]: Create virtual disc with name\n";
cout<< "   -2v [name]: Copy file from system to virtual disc\n";
cout<< "   -2s [name]: Copy file from virtual disc to system\n";
cout<< "   -r  [name]: Remove file from virtual disc\n";
cout<< "   -d        : Delete virtual disc\n";
cout<< "   -l        : View all files \n";
cout<< "   -i        : Display virtual memory info\n";

}

#include <string>
#include "FileReaderHelper.h"

using namespace std;

int main(int argc, char* argv[])
{
   FileReaderHelper *fileReaderHelper = new FileReaderHelper(argc,argv);
   fileReaderHelper->readNextLineFromFile("");
}

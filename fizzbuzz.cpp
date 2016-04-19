#include <stdio.h>
#include <string>
using namespace std;

int main() {

  string fbText = "testing";

  for (int i=1;i<101;i++) {

    fbText = "";
    if (i % 3 == 0) {
      fbText = "Fizz";
    }
    if (i % 5 == 0) {
      fbText += "Buzz!";
    }
    printf("%d %s\n", i,fbText.c_str());
  
  }

  return 0;
}

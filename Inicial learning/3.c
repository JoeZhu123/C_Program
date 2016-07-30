#include"stdio.h"
main()
{ int n;
  scanf("%d",&n);
  if(++n<10) printf("%d\n",n);
  else printf("%d\n",--n);
  return 0;
}

/* Eric Bock */
main(s,i,j,k,c){char*p=malloc(s=1),*a=p+(*p=i=j=k=0);while(~(*a=getchar())&&(++a-p<s||(a=(p=realloc(p,s+s))+s)&&(s+=s))||(*a=0));for(a=malloc(s=1),*a=0;(c=p[i])&&(c=='+'&&++a[j]||c=='-'&&--a[j]||c=='>'&&(++j<s||(a=realloc(a,s+s))&&memset(a+s,0,s)&&(s+=s))||c=='<'&&j--||c=='.'&&~putchar(a[j])||c==','&&~(a[j]=getchar()))|!strchr("><.,",c);i++)while((c=='['&&!a[j]||c==']'&&a[j])&&(k+=(p[i]=='[')-(p[i]==']'))&&p[i+=c=='[']&&(i-=c==']'));}
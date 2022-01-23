class Solution {
public:
    int romanToInt(string s) {
int i,j,k;
k = 0;
j = s.length();
for (i=0;i<j;i++)
{
if (s[i]=='I')
{
	if(s[i+1]=='V')
	{
		k=k+4;
		i=i+1;	
		continue;
	}
	if(s[i+1]=='X')
	{
		k=k+9;
		i=i+1;
		continue;
	}
	else
	{
		k=k+1;
		continue;
	}
}
if (s[i]=='V')
{
	k=k+5;
	continue;
}
if (s[i]=='X')
{
		if(s[i+1]=='L')
	{
		k=k+40;
		i=i+1;	
		continue;
	}
	if(s[i+1]=='C')
	{
		k=k+90;
		i=i+1;
		continue;
	}
	else
	{
		k=k+10;
		continue;
	}
}
if (s[i]=='L')
{
	k=k+50;
}
if (s[i]=='C')
{
		if(s[i+1]=='D')
	{
		k=k+400;
		i=i+1;
		continue;	
	}
	if(s[i+1]=='M')
	{
		k=k+900;
		i=i+1;
		continue;
	}
	else
	{
		k=k+100;
		continue;
	}
}
if (s[i]=='D')
{
	k=k+500;
	continue;
}
if (s[i]=='M')
{
	k=k+1000;
	continue;
}
}
  return k;

}	
};
    
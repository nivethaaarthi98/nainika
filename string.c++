system.out.println("enter the first string:");
string s=input.nextline();
system.out.println("enter the second string:");
string s2=input.nextline();
if(s.charat(0)!=s2.charat(0)){
system.out.println(" "+s+"and"+s2+"have no common prefix");
system.exit(0);
}
if(s.charat(0)==s2.charat(0))
system.out.print(" "+s.charat(0));
if(s.charat(0)==s2.charat(0))
system.out.print(" "+s.charat(1));
if(s.charat(0)==s2.charat(0))
system.out.print(" "+s.charat(2));
}
}


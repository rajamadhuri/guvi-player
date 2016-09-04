import java.io.*;
import java.util.*;
public class ReverseString
{
public static void main(String args[])
{
String in="";
System.out.println("enter the input string:");
BufferedReader br=new BufferedReader();
in=br.readLine();
StringBuilder sb=new StringBuilder();
sb.append(in);
sb=sb.reverse();
for (int i=0;i<sb.length();i++)
{
System.out.print(sb.charAt(i));  
 }
 }
 }

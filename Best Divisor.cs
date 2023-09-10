using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.Collections;
using System.ComponentModel;
using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.Serialization;
using System.Text.RegularExpressions;
using System.Text;
using System;



class Solution
{
    public static void Main(string[] args)
    {
        int n = Convert.ToInt32(Console.ReadLine().Trim());
        List<int> divisors = new List<int>();

        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                divisors.Add(i);
            }
        }
        var lenght = divisors.lenght;
        Console.WriteLine(divisors[lenght - 1]);        

        
    }

}

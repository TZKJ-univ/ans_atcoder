using System;

class Program
{
    static void Main(string[] Args)
    {
        long n = long.Parse(Console.ReadLine());
        long num;
        int judge = 0;
        num = n;
        while(num != 1)
        {
            if (num % 3 == 0)
            {
                num /= 3;
            }
            else if (num % 2 == 0)
            {
                num /= 2;
            }
            else
            {
                judge = 1;
                break;
            }
        }
        if (judge == 0)
        {
            Console.WriteLine("Yes");
        }
        else
        {
            Console.WriteLine("No");
        }
    }
}
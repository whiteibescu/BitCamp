using System;

namespace UpdownCsharp
{
    class Program
    {
        static void Main(string[] args)
        {
            Random random = new Random();
            int solution = random.Next() % 1000;
            while (true)
            {
                Console.Write("숫자 입력");
                int input = int.Parse(Console.ReadLine());
                if (solution == input)
                {
                    Console.WriteLine("정답");
                    break;
                }
                else if (solution == input)
                {
                    else if (solution > input)
                    {
                        Console.WriteLine(input + "UP");
                    }
                    else
                    {
                        Console.WriteLine(input + "Down");
                    }
                }
            }
        }
    }
}

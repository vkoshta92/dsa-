using System;
using System.Collections.Generic;

class Parenthesis
{
    static void Main()
    {
        int n = 3;
        List<string> ans = GenerateParenthesis(n);

        foreach (var combination in ans)
        {
            Console.WriteLine(combination);
        }
    }

    static List<string> GenerateParenthesis(int n)
    {
        List<string> ans = new List<string>();
        Generate(n, 0, 0, "", ans);
        return ans;
    }

    static void Generate(int n, int left, int right, string temp, List<string> ans)
    {
        if (left + right == 2 * n)
        {
            ans.Add(temp);
            return;
        }

        // left
        if (left < n)
        {
            Generate(n, left + 1, right, temp + "(", ans);
        }

        // right
        if (right < left)
        {
            Generate(n, left, right + 1, temp + ")", ans);
        }
    }
}

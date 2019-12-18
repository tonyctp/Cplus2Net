using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NetLibrary
{
    public class Test
    {
        /// <summary>
        /// 这个要注意了 必须是返回值int 入参string
        /// </summary>
        /// <param name="msg"></param>
        /// <returns></returns>
        public static int GetInfo(string msg)
        {
            Console.WriteLine(msg);
            return 1;
        }
    }
}

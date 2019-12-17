using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NetLibrary
{
    public class Test
    {
        public string GetInfo()
        {
            return "调用Net 方法GetInfo()成功";
        }

        public string SetInfo(string msg)
        {
            return $"传入参数为{msg}";
        }
    }
}

using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Runtime.InteropServices;

namespace WindowsFormsApplication1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        [DllImport("..\\debug\\MyDll.dll",EntryPoint = "MySum")]
        public static extern int MySum(int a, int b);

        [DllImport("..\\debug\\MyDll.dll", EntryPoint = "MySum2")]
        public static extern void MySum2();

        private void numericUpDown1_ValueChanged(object sender, EventArgs e)
        {
            numericUpDown3.Value = MySum(Int32.Parse(numericUpDown1.Value.ToString()), Int32.Parse(numericUpDown2.Value.ToString()));
        }

        private void numericUpDown2_ValueChanged(object sender, EventArgs e)
        {
            numericUpDown3.Value = MySum(Int32.Parse(numericUpDown1.Value.ToString()), Int32.Parse(numericUpDown2.Value.ToString()));
        }
    }
}

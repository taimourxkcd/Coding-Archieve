using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class _Default : System.Web.UI.Page
{
    int clickCount = 0;

    protected void Page_Load(object sender, EventArgs e)
    {
        if (!IsPostBack)
        {
            TextBox1.Text = "0";
        }

    }

    protected void Button1_Click(object sender, EventArgs e)
    {
        clickCount = clickCount + 1;
        TextBox1.Text = clickCount.ToString();
    }
}   


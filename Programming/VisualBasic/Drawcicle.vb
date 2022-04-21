Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim Ourpen As Pen
        Ourpen = New Pen(Drawing.Color.DarkGray, 8) ' the second one is the width 
        Dim MyGraphics As Graphics = Me.CreateGraphics
        Dim MyRectangle As New Rectangle

        MyRectangle.X = 40
        MyRectangle.Y = 20
        MyRectangle.Width = 300
        MyRectangle.Height = 300

        MyGraphics.DrawEllipse(Ourpen, MyRectangle)

    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        Dim OurPen As Pen
        OurPen = New Pen(Drawing.Color.Yellow, 5)
        Dim MyGraphics As Graphics = Me.CreateGraphics
        MyGraphics.DrawEllipse(OurPen, 350, 20, 300, 300)

    End Sub
End Class

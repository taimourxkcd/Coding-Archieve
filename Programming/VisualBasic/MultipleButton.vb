Public Class Form1
    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        sLoadDynamicButtonList()
    End Sub


    Private Sub sLoadDynamicButtonList()
        'varibles save location of each button 
        Dim intLeft As Integer = 0
        Dim intTop As Integer = 0

        'varibles save width and height of eadch button 
        Dim intWidth As Integer = 100 'px
        Dim intHeight As Integer = 50

        'Loop from 1 to 25 to create a Button 
        For i As Integer = 1 To 25

            If intLeft >= Me.Width - intWidth Then 'out of the right form width
                'new line 
                intLeft = 0
                intTop += 60    

            End If

            Dim btn As New Button
            btn.Text = "Button " & i.ToString

            btn.Left = intLeft
            btn.Top = intTop
            btn.Width = intWidth
            btn.Height = intHeight

            btn.Visible = True

            ' add btn co form 
            Me.Controls.Add(btn)

            ' move next button to the right of current button
            intLeft += intWidth + 5

        Next


    End Sub
End Class


Partial Class _Default
    Inherits System.Web.UI.Page


    Protected Sub FormView1_PageIndexChanging(sender As Object, e As FormViewPageEventArgs) Handles FormView1.PageIndexChanging
        sLoadDynamicButtonList()
    End Sub

    Private Sub sLoadDynamicButtonList()
        'varibles save location of each button 
        Dim intLeft As Integer = 0
        Dim intTop As Integer = 0

        'varibles save width and height of eadch button 
        Dim intWidth As Integer = 100 'px
        Dim intHeight As Integer = 50

        For i As Integer = 1 To 25


            Dim btn As New Button
            btn.Text = "Button " & i.ToString

            'btn.Left = intLeft
            'btn.Top = intTop
            btn.Width = intWidth
            btn.Height = intHeight

            btn.Visible = True

            ' add btn co form 
            Me.Controls.Add(btn)


        Next

    End Sub

End Class

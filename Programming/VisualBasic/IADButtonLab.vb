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

        'Loop from 1 to 2 to create a Button 
        For i As Integer = 1 To 2

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


            'add events for button here
            AddHandler btn.Click, AddressOf onButton_Click
            AddHandler btn.MouseHover, AddressOf OnButton_MouseHover

            ' add btn co form 
            Me.Controls.Add(btn)

            ' move next button to the right of current button
            intLeft += intWidth + 5

        Next

    End Sub

    ' Create event onclick for each button 
    Private Sub onButton_Click(sender As System.Object, e As System.EventArgs)
        Dim btn As New Button
        btn = CType(sender, Button) ' convert object to button

        MessageBox.Show(btn.Text & " Clicked", "Test", MessageBoxButtons.OK, MessageBoxIcon.Information)

    End Sub

    'create event on Mouse Hover for button
    Private Sub OnButton_MouseHover(sender As System.Object, e As System.EventArgs)
        Dim btn As New Button
        btn = CType(sender, Button)

        Me.Text = "Mouse Hover on: " & btn.Text


    End Sub


End Class

telaine1516
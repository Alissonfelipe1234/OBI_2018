Dim message, sapi
message=InputBox("Conversor de texto para �udio")
Set sapi=CreateObject("sapi.spvoice")
sapi.Speak message
Dim message, sapi
message=InputBox("Conversor de texto para áudio")
Set sapi=CreateObject("sapi.spvoice")
sapi.Speak message
Dim message, sapi
message="mensagem escrita pelo programador"
Set sapi=CreateObject("sapi.spvoice")
sapi.Speak message
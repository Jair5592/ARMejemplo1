Start-Process .\ejemploRetorno.exe -Wait

if ($LASTEXITCODE -eq 0)
{
    Write-Host "El proceso se ejecuto correctamente"
}
else 
{
    Write-Host "El proceso no se ejecuto como se esperaba"
    Write-Host $LASTEXITCODE
}
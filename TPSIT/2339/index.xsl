<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" 
                xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
    <xsl:template match="/">
        <html>
            <head>
                <link rel="stylesheet" href="style.css"/>

            </head>
            <body>
                <h2>Lista delle strutture ricettive per città</h2>
                <xsl:for-each select="Interventi/Intervento" >
                    <div>
                        <h1><xsl:value-of select="Comune"/></h1>
                        <p><strong>Provincia:</strong> <xsl:value-of select="Provincia"/></p>
                        <p><strong>Regione:</strong> <xsl:value-of select="Regione"/></p>
                        <p><strong>CodiceIntervento:</strong> <xsl:value-of select="CodiceIntervento"/></p>
                        <p><strong>TipoIntervento:</strong> <xsl:value-of select="TipoIntervento"/></p>
                        <p><strong>Descrizione:</strong> <xsl:value-of select="Descrizione"/></p>
                        <p><strong>ImportoFinanziato:</strong> <xsl:value-of select="ImportoFinanziato"/></p>
                        <p><strong>FaseAttuazione:</strong> <xsl:value-of select="FaseAttuazione"/></p>
                        <hr/>
                    </div>
                </xsl:for-each>
            </body>
        </html>
    </xsl:template>
</xsl:stylesheet>

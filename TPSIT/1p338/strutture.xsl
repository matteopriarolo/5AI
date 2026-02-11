<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" 
                xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
    <xsl:template match="/">
        <html>
            <head>
                <link rel="stylesheet" href="../stile.css"/>

            </head>
            <body>
                <h2>Lista delle strutture ricettive per città</h2>
                <xsl:for-eachselect="struttureRicetive/citta" >
                    <div>
                        <h1><xsl:value-of select="zona"/></h1>
                        <p><strong>Denominazione:</strong> <xsl:value-of select="denominazione"/></p>
                        <p><strong>Indirizzo:</strong> <xsl:value-of select="indirizzo"/></p>
                        <p><strong>Numero Camere:</strong> <xsl:value-of select="numeroTabelleCamere"/></p>
                        <p><strong>Classificazione:</strong> <xsl:value-of select="classificazione"/></p>
                        <p><strong>Tipologia:</strong> <xsl:value-of select="tipologia"/></p>
                        <hr/>
                    </div>
                </xsl:for-eachselect=>
            </body>
        </html>
    </xsl:template>
</xsl:stylesheet>

<?xml version="1.0"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
    <xsl:template match="/">
        <html>
            <body>
                <xsl:for-each select="biblioteca/libro">
                    <xsl:sort select="prezzo" order="ascending" />
                        <p><xsl:value-of select="autore"/></p>
                </xsl:for-each>
            </body>
        </html>
    </xsl:template>
</xsl:stylesheet>
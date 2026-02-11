<?xml version="1.0"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
    <xsl:template match="/">
        <html>
            <head>
                <title>Pagina XML</title>
                <link rel="stylesheet" type="text/css" href="stile.css"/>
            </head>
            <body>
                <table>
                    <tr>
                        <td>Nome</td>
                        <td>autore</td>
                        <td>editore</td>
                    </tr>
                    <xsl:for-each select="biblioteca/libro">
                        <tr>
                            <td><p><xsl:value-of select="titolo"/></p></td>
                            <td><p><xsl:value-of select="autore"/></p></td>
                            <td><p><xsl:value-of select="annoedizione"/></p></td>
                        </tr>
                            
                    </xsl:for-each>
                </table>
            </body>
        </html>
    </xsl:template>
</xsl:stylesheet>
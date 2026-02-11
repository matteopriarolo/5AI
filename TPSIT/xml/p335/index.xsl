<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0"
    xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

    <xsl:template match="/">
        <html>
            <head>
                <title>Sito selezionato</title>
            </head>
            <body>

                <xsl:for-each select="lista/sito/[@IDSito='s002']">
                    <table border="1">
                        <tr>
                            <td align="center">
                                <b>
                                    <xsl:value-of select="nome"/>
                                </b>
                            </td>
                        </tr>
                        <tr>
                            <td>
                                <a href="{URL}" target="_blank">
                                    <xsl:value-of select="URL"/>
                                </a>
                            </td>
                        </tr>
                        <tr>
                            <td>
                                <i>
                                    <xsl:value-of select="descrizione"/>
                                </i>
                            </td>
                        </tr>
                    </table>
                    <br/>
                </xsl:for-each>

            </body>
        </html>
    </xsl:template>

</xsl:stylesheet>

<?xml version="1.0"?>
<xsl:stylesheet version="1.0"
    xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

  <xsl:template match="/">
    <html>
      <body>
        <h1><xsl:value-of select="libro/titolo"/></h1>
        <p>Autore: <xsl:value-of select="libro/autore"/></p>
        <p>Prezzo: €<xsl:value-of select="libro/prezzo"/></p>
      </body>
    </html>
  </xsl:template>

</xsl:stylesheet>

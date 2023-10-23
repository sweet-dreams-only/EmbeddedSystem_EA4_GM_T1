<?xml version="1.0" encoding="ISO-8859-1" standalone="no"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
  <xsl:output method="xml" version="1.0" encoding="ISO-8859-1" standalone="no" doctype-system="..\DTD6.5\DVW.DTD"/>

<!-- Root element rule -->
  <xsl:template match="/">
  <DVW>
    <xsl:apply-templates select="DVW"/>
  </DVW>
  </xsl:template>

<!-- DVW element rule -->
    <!-- DO NOT set DTD version to 6.5; Stylesheet used to trigger the ObjectServer conversion  -->
    <!-- Remove SpecialBuild attribute value which was set by DTD 6.0  -->

    <xsl:template match="DVW">
        <xsl:copy-of select="@CMVersion | @CMState | @GUID | @Version | @DTDVersion | @RO | @InstVers"/>
        <xsl:attribute name="SpecialBuild" />
        <xsl:copy-of select="@AttrDefSetLink"/>
        <xsl:copy-of select ="node()"/>
  </xsl:template>

</xsl:stylesheet>


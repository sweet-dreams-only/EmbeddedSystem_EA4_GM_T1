<?xml version="1.0" encoding="ISO-8859-1" standalone="no" ?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
    <xsl:output method="xml" version="1.0" encoding="ISO-8859-1" standalone="no" doctype-system="..\DTD5.2\DVW.DTD" />
    
    <!-- Retain white space within all elements -->
    <xsl:preserve-space elements="*" />
    
    <!-- Root element rule -->
    <xsl:template match="/">
        <LINBus>
            <xsl:apply-templates select="LINBus" />
        </LINBus>
    </xsl:template>
    
	<!-- LINBus element rule -->
	<xsl:template match="LINBus">
		    <!-- Set DTD version to 5.2, No ItemConvert required -->
		    <xsl:attribute name="DTDVersion">5.2</xsl:attribute>
		    <xsl:copy-of select = "@*[name() != 'DTDVersion']" />
            <xsl:copy-of select="NAME | LONGNAME | DESC | CONTENT" />
            <xsl:apply-templates select="LINUnconditionalFrame" />
            <xsl:apply-templates select="LINEventTriggeredFrame" />
            <xsl:apply-templates select="LINSporadicFrame" />
            <xsl:copy-of select="Channel | GenAttrList | ScheduleTable | NetworkSignal" />
	</xsl:template>
	
    <!-- LINUnconditionalFrame element rule  -->
    <xsl:template match="LINUnconditionalFrame">
        <LINUnconditionalFrame>
			<xsl:copy-of select="@*" />
            <xsl:copy-of select="NAME | LONGNAME | DESC | ATTRLink | GenAttrList | MultiplexorGroup | FrameNodeMap | FrameConstraint | MappedSignal" />
            <xsl:apply-templates select="MappedSignalGroup" />
            <xsl:copy-of select="NetworkNodeLink" />
        </LINUnconditionalFrame>
    </xsl:template>
    
    <!-- LINEventTriggeredFrame element rule -->
    <xsl:template match="LINEventTriggeredFrame">
        <LINEventTriggeredFrame>
			<xsl:copy-of select="@*" />
            <xsl:copy-of select="NAME | LONGNAME | DESC | ATTRLink | GenAttrList | MultiplexorGroup | FrameNodeMap | FrameConstraint | MappedSignal | LINUnconditionalFrameIndex" />
            <xsl:apply-templates select="MappedSignalGroup" />
            <xsl:copy-of select="NetworkNodeLink" />
        </LINEventTriggeredFrame>
    </xsl:template>
    
    <!-- LINSporadicFrame element rule -->
    <xsl:template match="LINSporadicFrame">
        <LINSporadicFrame>
			<xsl:copy-of select="@*" />
            <xsl:copy-of select="NAME | LONGNAME | DESC | ATTRLink | GenAttrList | MultiplexorGroup | FrameNodeMap | FrameConstraint | MappedSignal | LINUnconditionalFrameIndex" />
            <xsl:apply-templates select="MappedSignalGroup" />
            <xsl:copy-of select="NetworkNodeLink" />
        </LINSporadicFrame>
    </xsl:template>

    <!-- MappedSignalGroup element rule: remove StartBit, rename SignalGroupRoot -->
    <xsl:template match="MappedSignalGroup">
        <MappedSignalGroup>
            <xsl:copy-of select="@GUID | @SignalGroupLink" />
            <xsl:attribute name="SignalGroupLink">SignalGroup</xsl:attribute>
            <xsl:copy-of select="@ComSignalName | @UpdateBitPosition" />
            <xsl:apply-templates select="ATTRLink" />
            <xsl:copy-of select="GenAttrList" />
        </MappedSignalGroup>
    </xsl:template>

    <!-- AttrLink element rule -->
    <xsl:template match="ATTRLink">
        <xsl:if test="@LinkName[.='SignalGroupRoot']">
            <ATTRLink>
                <xsl:attribute name="LinkName">SignalGroup</xsl:attribute>
                <xsl:copy-of select="@LinkVersion | @LinkGUID" />
                <xsl:attribute name="LinkType">SignalGroup</xsl:attribute>
            </ATTRLink>
        </xsl:if>
    </xsl:template>

</xsl:stylesheet>

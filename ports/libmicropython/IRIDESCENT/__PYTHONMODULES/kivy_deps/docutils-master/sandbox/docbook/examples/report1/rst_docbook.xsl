<xsl:stylesheet 
    xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
    xmlns:d="http://docbook.org/ns/docbook"
    version="1.1">

    <xsl:import href="http://docutils.svn.sourceforge.net/viewvc/docutils/trunk/sandbox/docbook/xsl/docutils_to_docbook.xsl"/>
    <xsl:param name="docbook-type">article</xsl:param>
    <xsl:param name="draft_image"/> <!--suffix for draft images-->

    <xsl:template match="inline[@classes='my-note']"/>

    <xsl:template name="colspec-align">
        <xsl:param name="classes"/>
        <xsl:param name="position"/>
        <xsl:choose >
            <xsl:when test="$classes='overall-costs' and $position = 2">
                <xsl:text >right</xsl:text>
            </xsl:when>
            <xsl:when test="$classes='hardware-costs' and $position = 2">
                <xsl:text >right</xsl:text>
            </xsl:when>
            <xsl:when test="$classes='problem-solving' and $position > 2">
                <xsl:text >right</xsl:text>
            </xsl:when>
            <xsl:otherwise >
                <xsl:text >left</xsl:text>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <xsl:template name="table.rowsep">
        <xsl:text >0</xsl:text>
    </xsl:template>

    <xsl:template name="table.colsep" >
        <xsl:text >0</xsl:text>
    </xsl:template>


    <xsl:template name="tabstyle">
        <xsl:param name="classes"/>
        <xsl:choose >
            <xsl:when test="$classes = 'problem-solving'">
                <xsl:text >long</xsl:text>
            </xsl:when>
            <xsl:otherwise >
                <xsl:text >default</xsl:text>
            </xsl:otherwise>
        </xsl:choose>
    </xsl:template>

    <xsl:template match="table[@classes = 'overall-costs']/tgroup/tbody/row[last()]" priority="2"/>
    <xsl:template match="table[@classes = 'hardware-costs']/tgroup/tbody/row[last()]" priority="2"/>

    <xsl:template name="make-table-foot">
        <xsl:param name="classes"/>
        <xsl:choose >
            <xsl:when test="$classes = 'overall-costs' or $classes = 'hardware-costs'">
                <xsl:apply-templates select="../tbody/row[last()]"
                    mode="foot"/>
            </xsl:when>
        </xsl:choose>
    </xsl:template>

    <xsl:template match="table[@classes = 'overall-costs']/tgroup/tbody/row[last()]|
        table[@classes = 'hardware-costs']/tgroup/tbody/row[last()]" 
        mode="foot">
        <d:tfoot >
            <d:row rowsep="1">
                <xsl:apply-templates/>
            </d:row>
        </d:tfoot>
    </xsl:template>

    <xsl:template name="make-table-width">
        <xsl:param name="classes"/>
        <xsl:choose >
            <xsl:when test="$classes = 'overall-costs'">
                <xsl:processing-instruction name="dbfo">
                    <xsl:text >table-width="50%"</xsl:text>
                </xsl:processing-instruction> 
            </xsl:when>
        </xsl:choose>
    </xsl:template>

    <xsl:template name="table-keep-together">
        <xsl:param name="classes"/>
        <xsl:choose >
            <xsl:when test="$classes='problem-solving'">
                <xsl:processing-instruction
                    name="dbfo">
                    <xsl:text >keep-together="auto" </xsl:text>
                </xsl:processing-instruction>
            </xsl:when>
        </xsl:choose>
    </xsl:template>

    
</xsl:stylesheet>

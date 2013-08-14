<?xml version="1.0" encoding="iso8859-1"?>
<?altova_samplexml ..\SubsetFromWord\SubSet026_7.xml?>
<!--
Formalization of Subset-026-7 (Chapter 7: ERTMS/ETCS language)

- Name: Subset-026-7 / GenPackHtml.xslt
- Description: UNISIG SUBSET-026-7, ISSUE : 3.3.0, 3.5 ERTMS/ETCS language) 
- Copyright Siemens AG, 2013
- Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl )
- Gist URL: none
- Cryptography: No
- Author(s): SiemensRailAutomation

Disclaimer:

The use of this software is limited to NON-vital applications. 
It has NOT been developed for vital operation purposes and MUST NOT be used for applications 
which may cause harm to people, physical accidents or financial loss. 

THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE. 
-->

<xsl:stylesheet version="2.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform" xmlns:fn="http://www.w3.org/2005/xpath-functions" xmlns:xdt="http://www.w3.org/2005/xpath-datatypes" xmlns:xs="http://www.w3.org/2001/XMLSchema" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance">
	<xsl:output version="1.0" method="html" indent="no" encoding="UTF-8" doctype-public="-//W3C//DTD HTML 4.0 Transitional//EN" doctype-system="http://www.w3.org/TR/html4/loose.dtd"/>
	<xsl:param name="SV_OutputFormat" select="'HTML'"/>
	<xsl:import-schema schema-location="../SubsetFromWord/Subset_Att_26_7.xsd"/>

<!-- Ab /Definitions/Packets werden die Daten benötigt -->
	<xsl:template match="/Definitions/Packets">
		<html>
			<head>
				<!-- Titelzeile des IE -->
				<title>Subset026 Chapter 7 Packets</title>
			</head>
			<body style="font-size:10.0pt;font-family:Arial">
				<h2 style="font-size:14.0pt;font-family:Arial">		
	Subset026 Chapter 7 Packets
	<br/>
				</h2>
				<!-- Start Richtungen -->
				<xsl:for-each select="*">
				<p>
					<br/>
					<h2 style="font-size:14.0pt;font-family:Arial">		
						<xsl:value-of select="name()"/>  <!-- Bezeichnung der Richtung -->
					</h2>
					<br/>
				</p>
				<xsl:for-each select="List"> </xsl:for-each>  <!-- den List-Bereich überspringen -->
				<xsl:for-each select="Packet">
					<table align="center" border="1" style="font-size:12.0pt;font-family:Arial;border-collapse:collapse;border:solid windowtext 1.5pt;padding:0pt 2pt 0pt 2pt">
						<p>
						<br/>
						<tr>
								<td>
								<h2 style="font-size:12.0pt;font-family:Arial; valign=center; width:6.00cm">
								Packet Number = <xsl:value-of select="@Number"/> 		
								</h2>								
								</td>						
								<td>
								<h2 style="font-size:12.0pt;font-family:Arial; valign=center; width:6.00cm">
									<xsl:value-of select="@Name"/> 		
								</h2>								
								</td>
								<td  colspan="3"  > 
									<h3 style="font-size:10.0pt;width:6.00cm">
									<xsl:value-of select="@TransmissionMedia"/>
									</h3>
								</td>
								<td  colspan="1">
									<h3 style="font-size:10.0pt;width:8.00cm">
										<xsl:value-of select="Description"/>
									</h3>							
								</td>
						</tr>
						<xsl:for-each select="Content">
							<xsl:call-template name="TKopfTlg"/>
							<xsl:apply-templates/>
						</xsl:for-each> 		<!-- Ende Content -->	
						<br/>
						</p>
					</table>
					
				</xsl:for-each>   			<!-- Ende Packet -->
				</xsl:for-each>			    <!-- Ende Richtungen TrackToTrain / TrainToTrack / BothWays -->
			</body>
		</html>
	</xsl:template>
<!-- Die folgende template-Notation ist nötig zum Ueberspringen des VarDef Bereichs. 
Anderenfalls würde ein kompletter Textblock folgen, der aber nicht erwünscht ist.
-->
	<xsl:template match="/Definitions/VarDef">
	</xsl:template>		
<!-- ######### Ende Vardef ############  -->

	<xsl:template name="TKopfTlg" >
	<tr>
		<th align="center" style="font-size:10.0pt;border:solid 1.0pt;border-right:solid windowtext 1.0pt;padding:0pt 2pt 0pt 2pt;width:6.00cm; background:#D9D9D9"> Name 
		</th>
		<th align="center" style="font-size:10.0pt;border:solid 1.0pt;border-right:solid windowtext 1.0pt;padding:0pt 2pt 0pt 2pt;width:6.00cm; background:#D9D9D9"> Length 
		</th>
		<th align="center" style="font-size:10.0pt;border:solid 1.0pt;border-right:solid windowtext 1.0pt;padding:0pt 2pt 0pt 2pt;width:10.00cm; background:#D9D9D9"> Comment 
		</th>
	</tr>
	</xsl:template> 

	<xsl:template match="TlgVar" >
	<xsl:choose>
		<xsl:when test="name(..)='LoopDoWhile'">
			<xsl:call-template name="LoopVar"/>
		</xsl:when>   
		<xsl:when test="name(..)='LoopWhile'">
			<xsl:call-template name="LoopVar"/>
		</xsl:when>		
	<!-- Das ist "LoopDoWhile/Conditional/Variables"  -->
				<xsl:when test="name(../../..)='LoopDoWhile'">
			<xsl:call-template name="LoopVar"/>
		</xsl:when>
	<!-- Das ist "LoopWhile/Conditional/Variables"  -->
				<xsl:when test="name(../../..)='LoopWhile'">
			<xsl:call-template name="LoopVar"/>
		</xsl:when>		
		<xsl:otherwise>
	<tr>
		<td align="left" style="font-size:10.0pt;border:solid 1.0pt;border-right:solid windowtext 1.0pt;padding:0pt 2pt 0pt 2pt;width:6.00cm">
			<xsl:apply-templates select="@Name"/> 
		</td>
		<td align="center" style="font-size:10.0pt;border:solid 1.0pt;border-right:solid windowtext 1.0pt;padding:0pt 2pt 0pt 2pt;width:6.00cm">
			<xsl:apply-templates select="@Length"/>
		</td>
		<td align="left" style="font-size:10.0pt;border:solid 1.0pt;border-right:solid windowtext 1.0pt;padding:0pt 2pt 0pt 2pt;width:10.00cm">
			<xsl:apply-templates select="@Comment"/>
		</td>
	</tr>
			</xsl:otherwise>
	</xsl:choose>
	</xsl:template> 

<xsl:template match="LoopDoWhile">
	<tr>
		<td colspan="3" align="left" style="font-size:10.0pt;border:solid 1.0pt;border-right:solid windowtext 1.0pt;padding:0pt 2pt 0pt 2pt;width:6.00cm; background:#CFCFCF">
			<xsl:value-of select="name()"/>
		</td>
	</tr>		
	<xsl:apply-templates/>
</xsl:template>

	<xsl:template match="LoopWhile">
	<tr>
		<td colspan="3" align="left" style="font-size:10.0pt;border:solid 1.0pt;border-right:solid windowtext 1.0pt;padding:0pt 2pt 0pt 2pt;width:6.00cm; background:#CFCFCF">
			<xsl:value-of select="name()"/>
		</td>
	</tr>		
	<xsl:apply-templates/>
	</xsl:template>

<!-- Content/Loop*While/TlgVar -->	
	<xsl:template name="LoopVar" >
	<tr>
		<td align="left" style="font-size:10.0pt;border:solid 1.0pt;border-right:solid windowtext 1.0pt;padding:0pt 2pt 0pt 2pt;width:6.00cm; background:#CFCFCF">
			<xsl:apply-templates select="@Name"/> 
		</td>
		<td align="center" style="font-size:10.0pt;border:solid 1.0pt;border-right:solid windowtext 1.0pt;padding:0pt 2pt 0pt 2pt;width:6.00cm; background:#CFCFCF">
			<xsl:apply-templates select="@Length"/>
		</td>
		<td align="left" style="font-size:10.0pt;border:solid 1.0pt;border-right:solid windowtext 1.0pt;padding:0pt 2pt 0pt 2pt;width:10.00cm; background:#CFCFCF">
			<xsl:apply-templates select="@Comment"/>
		</td>
	</tr>
	</xsl:template> 


<!-- Content//Conditional -->		
	<xsl:template match="Conditional">
		<xsl:apply-templates/>
	</xsl:template> 

<!-- Content//Conditional/Condition -->		
	<xsl:template match="Condition">
		<tr>
			<td colspan="2" style="font-size:10.0pt;border:solid 1.0pt;border-right:solid windowtext 1.0pt;padding:0pt 2pt 0pt 2pt;width:12.00cm"/>
			<td align="left" style="font-size:10.0pt;border:solid 1.0pt;border-right:solid windowtext 1.0pt;padding:0pt 2pt 0pt 2pt;width:6.00cm; background:#AAAAAA">
				<xsl:value-of select="."/> 
			</td>
		</tr>	
	</xsl:template> 

<!-- Content//Conditional/Variables -->		
	<xsl:template match="Variables">
		<xsl:apply-templates/>
	</xsl:template> 
	
	
	</xsl:stylesheet>

<?xml version="1.0" encoding="iso8859-1"?>
<?altova_samplexml ..\SubsetFromWord\SubSet026_7.xml?>
<!--
Formalization of Subset-026-7 (Chapter 7: ERTMS/ETCS language)

- Name: Subset-026-7 / GenVarHtml.xslt
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
<!-- Die folgende template-Notation ist noetig zum Ueberspringen des Package Bereichs. 
Anderenfalls wuerde ein kompletter Textblock vorangestellt, der aber nicht erwuenscht ist.
-->
	<xsl:template match="/Definitions/Packets">
	</xsl:template>
<!-- Ab /Definitions/VarDef werden die Daten benoetigt -->
	<xsl:template match="/Definitions/VarDef">
		<html>
			<head>
				<!-- Titelzeile des IE -->
				<title>Subset026 Chapter 7 Variables</title>
			</head>
			<body style="font-size:10.0pt;font-family:Arial">
				<h2 style="font-size:14.0pt;font-family:Arial">		
	Subset026 Chapter 7 Variables
	<br/>
				</h2>
				<!-- Start Variables -->
				<xsl:for-each select="Variable">
				
					<table align="center" border="1" style="font-size:12.0pt;font-family:Arial;border-collapse:collapse;border:solid windowtext 1.5pt;padding:0pt 2pt 0pt 2pt">
						<p>
						<br/>
						<tr>
								<td>
								<h2 style="font-size:12.0pt;font-family:Arial; valign=center; width:6.00cm;">
									<xsl:value-of select="@Name"/> 		
								</h2>								
								</td>
								<td  colspan="3"  > 
									<h3 style="font-size:10.0pt;width:12.00cm">
										<xsl:value-of select="DetailedName"/>
									</h3>
								</td>
								<td  colspan="1" >
									<h3 style="font-size:10.0pt;width:10.00cm">
										<xsl:value-of select="Description"/>
									</h3>							
								</td>
						</tr>
						<xsl:call-template name="TKopf"/>
						
						<xsl:for-each select="Specs">
							<xsl:call-template name="TSpecs"/>
								<xsl:for-each select="Special" >
									<xsl:if test="position() = 1 "> 
										<xsl:call-template name="TSpecKopf" />
									</xsl:if>
									<xsl:call-template name="TSpecial" />
									
							</xsl:for-each>	<!-- Ende Special -->
						</xsl:for-each> 		<!-- Ende Specs -->	
						<br/>
						</p>
					</table>
					
				</xsl:for-each>   			<!-- Ende Variables -->
			</body>
		</html>
	</xsl:template>
<!-- ######### Ende Vardef ############  -->
	<xsl:template name="TSpecs">
	<tr>
		<td align="center" style="font-size:10.0pt;border:solid 1.0pt;border-right:solid windowtext 1.0pt;padding:0pt 2pt 0pt 2pt;width:6.00cm">
			<xsl:apply-templates select="@Length"/> 
		</td>
		<td align="center" style="font-size:10.0pt;border:solid 1.0pt;border-right:solid windowtext 1.0pt;padding:0pt 2pt 0pt 2pt;width:5.00cm">
			<xsl:apply-templates select="@MinVal"/>
		</td>
		<td align="center" style="font-size:10.0pt;border:solid 1.0pt;border-right:solid windowtext 1.0pt;padding:0pt 2pt 0pt 2pt;width:5.00cm">
			<xsl:apply-templates select="@MaxVal"/>
		</td>
		<td align="center" style="font-size:10.0pt;border:solid 1.0pt;border-right:solid windowtext 1.0pt;padding:0pt 2pt 0pt 2pt;width:8.00cm">
			<xsl:apply-templates select="@Formula"/>
		</td>
	</tr>
	</xsl:template>
<!-- ###### Ende TSpecs ######  -->
	
	<xsl:template name="TSpecial" >
	<tr>
		<td align="center" style="font-size:10.0pt;border:solid 1.0pt;border-right:solid windowtext 1.0pt;padding:0pt 2pt 0pt 2pt;width:6.00cm">
			<xsl:apply-templates select="@Value"/> 
		</td>
		<td colspan="3" align="left" style="font-size:10.0pt;border:solid 1.0pt;border-right:solid windowtext 1.0pt;padding:0pt 2pt 0pt 2pt;width:18.00cm">
			<xsl:apply-templates select="@Description"/>
		</td>
	</tr>
	</xsl:template> 
<!-- ###### Ende TSpecial ######  -->	

	<xsl:template name="TKopf" >
	<tr>
		<th align="center" style="font-size:10.0pt;border:solid 1.0pt;border-right:solid windowtext 1.0pt;padding:0pt 2pt 0pt 2pt;width:6.00cm; background:#D9D9D9;font-weight: bold"> Length 
		</th>
		<th align="center" style="font-size:10.0pt;border:solid 1.0pt;border-right:solid windowtext 1.0pt;padding:0pt 2pt 0pt 2pt;width:5.00cm; background:#D9D9D9;font-weight: bold">  MinVal
		</th>
		<th align="center" style="font-size:10.0pt;border:solid 1.0pt;border-right:solid windowtext 1.0pt;padding:0pt 2pt 0pt 2pt;width:5.00cm; background:#D9D9D9;font-weight: bold"> MaxVal 
		</th>
		<th align="center" style="font-size:10.0pt;border:solid 1.0pt;border-right:solid windowtext 1.0pt;padding:0pt 2pt 0pt 2pt;width:8.00cm; background:#D9D9D9;font-weight: bold"> Formula 
		</th>
	</tr>
	</xsl:template> 
	
	<xsl:template name="TSpecKopf"> 
		<tr>
			<td align="center" style="font-size:10.0pt;border:solid 1.0pt;border-right:solid windowtext 1.0pt;padding:0pt 2pt 0pt 2pt;width:6.00cm; background:#D9D9D9;font-weight: bold"> Value	
			</td>
			<td colspan="3" align="center" style="font-size:10.0pt;border:solid 1.0pt;border-right:solid windowtext 1.0pt;padding:0pt 2pt 0pt 2pt;width:18.00cm; background:#D9D9D9; font-weight: bold"> Description			
			</td>
		</tr>

	</xsl:template>

</xsl:stylesheet>

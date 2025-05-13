# consesionaria-practica4
Este proyecto es una aplicación de consola desarrollada en C++ utilizando Qt Creator. Implementa el patrón de diseño MVC para gestionar el registro y consulta de vehículos y clientes en una concesionaria de autos usados.

Diagrama html: file:///C:/Users/Jordy/POO-GITHUB/concesionaria-practica4/DiagramaClasesConcesionaria.drawio.html
<!-- draw.io diagram -->
<div class="mxgraph" style="max-width:100%;border:1px solid transparent;" data-mxgraph="{&quot;highlight&quot;:&quot;#0000ff&quot;,&quot;nav&quot;:true,&quot;resize&quot;:true,&quot;dark-mode&quot;:&quot;auto&quot;,&quot;toolbar&quot;:&quot;zoom layers tags lightbox&quot;,&quot;edit&quot;:&quot;_blank&quot;,&quot;xml&quot;:&quot;&lt;mxfile host=\&quot;app.diagrams.net\&quot; agent=\&quot;Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/136.0.0.0 Safari/537.36 Edg/136.0.0.0\&quot; version=\&quot;27.0.4\&quot;&gt;\n  &lt;diagram name=\&quot;DiagramaClasesConcesionaria\&quot; id=\&quot;UMLDiagram\&quot;&gt;\n    &lt;mxGraphModel dx=\&quot;1042\&quot; dy=\&quot;1751\&quot; grid=\&quot;1\&quot; gridSize=\&quot;10\&quot; guides=\&quot;1\&quot; tooltips=\&quot;1\&quot; connect=\&quot;1\&quot; arrows=\&quot;1\&quot; fold=\&quot;1\&quot; page=\&quot;1\&quot; pageScale=\&quot;1\&quot; pageWidth=\&quot;827\&quot; pageHeight=\&quot;1169\&quot; math=\&quot;0\&quot; shadow=\&quot;0\&quot;&gt;\n      &lt;root&gt;\n        &lt;mxCell id=\&quot;0\&quot; /&gt;\n        &lt;mxCell id=\&quot;1\&quot; parent=\&quot;0\&quot; /&gt;\n        &lt;mxCell id=\&quot;vehiculo\&quot; value=\&quot;vehiculo\&quot; style=\&quot;shape=swimlane;whiteSpace=wrap;html=1;\&quot; parent=\&quot;1\&quot; vertex=\&quot;1\&quot;&gt;\n          &lt;mxGeometry x=\&quot;80\&quot; y=\&quot;-30\&quot; width=\&quot;120\&quot; height=\&quot;200\&quot; as=\&quot;geometry\&quot; /&gt;\n        &lt;/mxCell&gt;\n        &lt;mxCell id=\&quot;a-e9h6_Dy7DdTQfFu-22-2\&quot; value=\&quot;&amp;lt;span style=&amp;quot;text-wrap-mode: wrap;&amp;quot;&amp;gt;- codigo: string&amp;lt;/span&amp;gt;&amp;lt;br style=&amp;quot;text-wrap-mode: wrap;&amp;quot;&amp;gt;&amp;lt;span style=&amp;quot;text-wrap-mode: wrap;&amp;quot;&amp;gt;- marca: string&amp;lt;/span&amp;gt;&amp;lt;br style=&amp;quot;text-wrap-mode: wrap;&amp;quot;&amp;gt;&amp;lt;span style=&amp;quot;text-wrap-mode: wrap;&amp;quot;&amp;gt;- modelo: string&amp;lt;/span&amp;gt;&amp;lt;br style=&amp;quot;text-wrap-mode: wrap;&amp;quot;&amp;gt;&amp;lt;span style=&amp;quot;text-wrap-mode: wrap;&amp;quot;&amp;gt;- anio: int&amp;lt;/span&amp;gt;&amp;lt;br style=&amp;quot;text-wrap-mode: wrap;&amp;quot;&amp;gt;&amp;lt;span style=&amp;quot;text-wrap-mode: wrap;&amp;quot;&amp;gt;- kilometraje: double&amp;lt;/span&amp;gt;&amp;lt;br style=&amp;quot;text-wrap-mode: wrap;&amp;quot;&amp;gt;&amp;lt;span style=&amp;quot;text-wrap-mode: wrap;&amp;quot;&amp;gt;- precio: double&amp;lt;/span&amp;gt;&amp;lt;br style=&amp;quot;text-wrap-mode: wrap;&amp;quot;&amp;gt;&amp;lt;span style=&amp;quot;text-wrap-mode: wrap;&amp;quot;&amp;gt;+ mostrarDatos(): void&amp;lt;/span&amp;gt;\&quot; style=\&quot;text;html=1;align=center;verticalAlign=middle;resizable=0;points=[];autosize=1;strokeColor=none;fillColor=none;\&quot; parent=\&quot;vehiculo\&quot; vertex=\&quot;1\&quot;&gt;\n          &lt;mxGeometry x=\&quot;-10\&quot; y=\&quot;65\&quot; width=\&quot;140\&quot; height=\&quot;110\&quot; as=\&quot;geometry\&quot; /&gt;\n        &lt;/mxCell&gt;\n        &lt;mxCell id=\&quot;cliente\&quot; value=\&quot;cliente\&quot; style=\&quot;shape=swimlane;whiteSpace=wrap;html=1;\&quot; parent=\&quot;1\&quot; vertex=\&quot;1\&quot;&gt;\n          &lt;mxGeometry x=\&quot;595\&quot; y=\&quot;-40\&quot; width=\&quot;170\&quot; height=\&quot;140\&quot; as=\&quot;geometry\&quot; /&gt;\n        &lt;/mxCell&gt;\n        &lt;mxCell id=\&quot;a-e9h6_Dy7DdTQfFu-22-4\&quot; value=\&quot;- dni: string&amp;lt;div&amp;gt;- nombre: string&amp;lt;br&amp;gt;- telefono: string&amp;lt;br&amp;gt;- direccion: string&amp;lt;br&amp;gt;+ mostrarDatos(): void&amp;lt;/div&amp;gt;\&quot; style=\&quot;text;html=1;align=center;verticalAlign=middle;whiteSpace=wrap;rounded=0;\&quot; parent=\&quot;cliente\&quot; vertex=\&quot;1\&quot;&gt;\n          &lt;mxGeometry x=\&quot;30\&quot; y=\&quot;75\&quot; width=\&quot;140\&quot; height=\&quot;30\&quot; as=\&quot;geometry\&quot; /&gt;\n        &lt;/mxCell&gt;\n        &lt;mxCell id=\&quot;a-e9h6_Dy7DdTQfFu-22-19\&quot; style=\&quot;edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;\&quot; parent=\&quot;1\&quot; source=\&quot;ctrlVehiculo\&quot; edge=\&quot;1\&quot;&gt;\n          &lt;mxGeometry relative=\&quot;1\&quot; as=\&quot;geometry\&quot;&gt;\n            &lt;mxPoint x=\&quot;310\&quot; y=\&quot;180\&quot; as=\&quot;targetPoint\&quot; /&gt;\n          &lt;/mxGeometry&gt;\n        &lt;/mxCell&gt;\n        &lt;mxCell id=\&quot;ctrlVehiculo\&quot; value=\&quot;ControladorVehiculo\&quot; style=\&quot;shape=swimlane;whiteSpace=wrap;html=1;\&quot; parent=\&quot;1\&quot; vertex=\&quot;1\&quot;&gt;\n          &lt;mxGeometry x=\&quot;20\&quot; y=\&quot;230\&quot; width=\&quot;250\&quot; height=\&quot;140\&quot; as=\&quot;geometry\&quot; /&gt;\n        &lt;/mxCell&gt;\n        &lt;mxCell id=\&quot;a-e9h6_Dy7DdTQfFu-22-14\&quot; value=\&quot;&amp;lt;br style=&amp;quot;text-wrap-mode: wrap;&amp;quot;&amp;gt;&amp;lt;span style=&amp;quot;text-wrap-mode: wrap;&amp;quot;&amp;gt;- vehiculos: vector&amp;lt;/span&amp;gt;&amp;lt;br style=&amp;quot;text-wrap-mode: wrap;&amp;quot;&amp;gt;&amp;lt;span style=&amp;quot;text-wrap-mode: wrap;&amp;quot;&amp;gt;+ registrarVehiculo(v: Vehiculo): void&amp;lt;/span&amp;gt;&amp;lt;br style=&amp;quot;text-wrap-mode: wrap;&amp;quot;&amp;gt;&amp;lt;span style=&amp;quot;text-wrap-mode: wrap;&amp;quot;&amp;gt;+ listarVehiculos(): void&amp;lt;/span&amp;gt;\&quot; style=\&quot;text;html=1;align=center;verticalAlign=middle;resizable=0;points=[];autosize=1;strokeColor=none;fillColor=none;\&quot; parent=\&quot;ctrlVehiculo\&quot; vertex=\&quot;1\&quot;&gt;\n          &lt;mxGeometry y=\&quot;40\&quot; width=\&quot;220\&quot; height=\&quot;70\&quot; as=\&quot;geometry\&quot; /&gt;\n        &lt;/mxCell&gt;\n        &lt;mxCell id=\&quot;ctrlCliente\&quot; value=\&quot;ControladorCliente\&quot; style=\&quot;shape=swimlane;whiteSpace=wrap;html=1;\&quot; parent=\&quot;1\&quot; vertex=\&quot;1\&quot;&gt;\n          &lt;mxGeometry x=\&quot;560\&quot; y=\&quot;160\&quot; width=\&quot;240\&quot; height=\&quot;140\&quot; as=\&quot;geometry\&quot; /&gt;\n        &lt;/mxCell&gt;\n        &lt;mxCell id=\&quot;a-e9h6_Dy7DdTQfFu-22-15\&quot; value=\&quot;&amp;lt;br style=&amp;quot;text-wrap-mode: wrap;&amp;quot;&amp;gt;&amp;lt;span style=&amp;quot;text-wrap-mode: wrap;&amp;quot;&amp;gt;- clientes: vector&amp;lt;/span&amp;gt;&amp;lt;br style=&amp;quot;text-wrap-mode: wrap;&amp;quot;&amp;gt;&amp;lt;span style=&amp;quot;text-wrap-mode: wrap;&amp;quot;&amp;gt;+ registrarCliente(c: Cliente): void&amp;lt;/span&amp;gt;&amp;lt;br style=&amp;quot;text-wrap-mode: wrap;&amp;quot;&amp;gt;&amp;lt;span style=&amp;quot;text-wrap-mode: wrap;&amp;quot;&amp;gt;+ listarClientes(): void&amp;lt;/span&amp;gt;\&quot; style=\&quot;text;html=1;align=center;verticalAlign=middle;resizable=0;points=[];autosize=1;strokeColor=none;fillColor=none;\&quot; parent=\&quot;ctrlCliente\&quot; vertex=\&quot;1\&quot;&gt;\n          &lt;mxGeometry x=\&quot;10\&quot; y=\&quot;50\&quot; width=\&quot;200\&quot; height=\&quot;70\&quot; as=\&quot;geometry\&quot; /&gt;\n        &lt;/mxCell&gt;\n        &lt;mxCell id=\&quot;vista\&quot; value=\&quot;Consesionaria\&quot; style=\&quot;shape=swimlane;whiteSpace=wrap;html=1;\&quot; parent=\&quot;1\&quot; vertex=\&quot;1\&quot;&gt;\n          &lt;mxGeometry x=\&quot;290\&quot; y=\&quot;40\&quot; width=\&quot;230\&quot; height=\&quot;140\&quot; as=\&quot;geometry\&quot; /&gt;\n        &lt;/mxCell&gt;\n        &lt;mxCell id=\&quot;a-e9h6_Dy7DdTQfFu-22-12\&quot; value=\&quot;Vehiculo --&amp;amp;gt; ControladorVehiculo&amp;lt;div&amp;gt;&amp;amp;nbsp;Cliente --&amp;amp;gt; ControladorCliente&amp;lt;div&amp;gt;&amp;amp;nbsp;ControladorVehiculo --&amp;amp;gt; InterfazConsola&amp;amp;nbsp;&amp;lt;div&amp;gt;ControladorCliente --&amp;amp;gt; InterfazConsola&amp;lt;/div&amp;gt;&amp;lt;/div&amp;gt;&amp;lt;/div&amp;gt;\&quot; style=\&quot;text;html=1;align=center;verticalAlign=middle;resizable=0;points=[];autosize=1;strokeColor=none;fillColor=none;\&quot; parent=\&quot;vista\&quot; vertex=\&quot;1\&quot;&gt;\n          &lt;mxGeometry x=\&quot;-10\&quot; y=\&quot;50\&quot; width=\&quot;240\&quot; height=\&quot;70\&quot; as=\&quot;geometry\&quot; /&gt;\n        &lt;/mxCell&gt;\n        &lt;mxCell id=\&quot;rel1\&quot; style=\&quot;endArrow=block;html=1;\&quot; parent=\&quot;1\&quot; source=\&quot;vehiculo\&quot; target=\&quot;ctrlVehiculo\&quot; edge=\&quot;1\&quot;&gt;\n          &lt;mxGeometry relative=\&quot;1\&quot; as=\&quot;geometry\&quot; /&gt;\n        &lt;/mxCell&gt;\n        &lt;mxCell id=\&quot;rel2\&quot; style=\&quot;endArrow=block;html=1;\&quot; parent=\&quot;1\&quot; source=\&quot;cliente\&quot; target=\&quot;ctrlCliente\&quot; edge=\&quot;1\&quot;&gt;\n          &lt;mxGeometry relative=\&quot;1\&quot; as=\&quot;geometry\&quot; /&gt;\n        &lt;/mxCell&gt;\n        &lt;mxCell id=\&quot;a-e9h6_Dy7DdTQfFu-22-16\&quot; style=\&quot;edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;entryX=-0.003;entryY=0.154;entryDx=0;entryDy=0;entryPerimeter=0;\&quot; parent=\&quot;1\&quot; target=\&quot;vista\&quot; edge=\&quot;1\&quot;&gt;\n          &lt;mxGeometry relative=\&quot;1\&quot; as=\&quot;geometry\&quot;&gt;\n            &lt;mxPoint x=\&quot;200\&quot; y=\&quot;90\&quot; as=\&quot;sourcePoint\&quot; /&gt;\n          &lt;/mxGeometry&gt;\n        &lt;/mxCell&gt;\n        &lt;mxCell id=\&quot;a-e9h6_Dy7DdTQfFu-22-18\&quot; style=\&quot;edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=0.995;entryY=0.189;entryDx=0;entryDy=0;entryPerimeter=0;\&quot; parent=\&quot;1\&quot; source=\&quot;cliente\&quot; target=\&quot;a-e9h6_Dy7DdTQfFu-22-12\&quot; edge=\&quot;1\&quot;&gt;\n          &lt;mxGeometry relative=\&quot;1\&quot; as=\&quot;geometry\&quot; /&gt;\n        &lt;/mxCell&gt;\n        &lt;mxCell id=\&quot;a-e9h6_Dy7DdTQfFu-22-20\&quot; style=\&quot;edgeStyle=orthogonalEdgeStyle;rounded=0;orthogonalLoop=1;jettySize=auto;html=1;entryX=0.75;entryY=1;entryDx=0;entryDy=0;\&quot; parent=\&quot;1\&quot; source=\&quot;a-e9h6_Dy7DdTQfFu-22-15\&quot; target=\&quot;vista\&quot; edge=\&quot;1\&quot;&gt;\n          &lt;mxGeometry relative=\&quot;1\&quot; as=\&quot;geometry\&quot; /&gt;\n        &lt;/mxCell&gt;\n      &lt;/root&gt;\n    &lt;/mxGraphModel&gt;\n  &lt;/diagram&gt;\n&lt;/mxfile&gt;\n&quot;}"></div>
<script type="text/javascript" src="https://viewer.diagrams.net/js/viewer-static.min.js"></script>




Informe html: file:///C:/Users/Jordy/Desktop/PRACTICA%206%20APLICACION%20MVC%20Jordy%20Roblero%20(3).htm
[Uploadi<html xmlns:v="urn:schemas-microsoft-com:vml"
xmlns:o="urn:schemas-microsoft-com:office:office"
xmlns:w="urn:schemas-microsoft-com:office:word"
xmlns:dt="uuid:C2F41010-65B3-11d1-A29F-00AA00C14882"
xmlns:m="http://schemas.microsoft.com/office/2004/12/omml"
xmlns="http://www.w3.org/TR/REC-html40">

<head>
<meta http-equiv=Content-Type content="text/html; charset=windows-1252">
<meta name=ProgId content=Word.Document>
<meta name=Generator content="Microsoft Word 15">
<meta name=Originator content="Microsoft Word 15">
<link rel=File-List
href="PRACTICA%206%20APLICACION%20MVC%20Jordy%20Roblero%20(3)_archivos/filelist.xml">
<link rel=Edit-Time-Data
href="PRACTICA%206%20APLICACION%20MVC%20Jordy%20Roblero%20(3)_archivos/editdata.mso">
<!--[if !mso]>
<style>
v\:* {behavior:url(#default#VML);}
o\:* {behavior:url(#default#VML);}
w\:* {behavior:url(#default#VML);}
.shape {behavior:url(#default#VML);}
</style>
<![endif]--><!--[if gte mso 9]><xml>
 <o:DocumentProperties>
  <o:Author>Daniel Giovanny Diaz Ortiz</o:Author>
  <o:Template>Normal</o:Template>
  <o:LastAuthor>Jordy Roblero</o:LastAuthor>
  <o:Revision>2</o:Revision>
  <o:TotalTime>3</o:TotalTime>
  <o:Created>2025-05-13T03:40:00Z</o:Created>
  <o:LastSaved>2025-05-13T03:40:00Z</o:LastSaved>
  <o:Pages>7</o:Pages>
  <o:Words>840</o:Words>
  <o:Characters>4622</o:Characters>
  <o:Lines>38</o:Lines>
  <o:Paragraphs>10</o:Paragraphs>
  <o:CharactersWithSpaces>5452</o:CharactersWithSpaces>
  <o:Version>16.00</o:Version>
 </o:DocumentProperties>
 <o:CustomDocumentProperties>
  <o:Created dt:dt="date">2025-05-12</o:Created>
  <o:Creator dt:dt="string">Microsoft� Word LTSC</o:Creator>
  <o:LastSaved dt:dt="date">2025-05-13</o:LastSaved>
  <o:Producer dt:dt="string">Microsoft� Word LTSC</o:Producer>
 </o:CustomDocumentProperties>
</xml><![endif]-->
<link rel=themeData
href="PRACTICA%206%20APLICACION%20MVC%20Jordy%20Roblero%20(3)_archivos/themedata.thmx">
<link rel=colorSchemeMapping
href="PRACTICA%206%20APLICACION%20MVC%20Jordy%20Roblero%20(3)_archivos/colorschememapping.xml">
<!--[if gte mso 9]><xml>
 <w:WordDocument>
  <w:SpellingState>Clean</w:SpellingState>
  <w:GrammarState>Clean</w:GrammarState>
  <w:TrackMoves>false</w:TrackMoves>
  <w:TrackFormatting/>
  <w:HyphenationZone>21</w:HyphenationZone>
  <w:PunctuationKerning/>
  <w:DrawingGridHorizontalSpacing>5,5 pto</w:DrawingGridHorizontalSpacing>
  <w:DisplayHorizontalDrawingGridEvery>2</w:DisplayHorizontalDrawingGridEvery>
  <w:ValidateAgainstSchemas/>
  <w:SaveIfXMLInvalid>false</w:SaveIfXMLInvalid>
  <w:IgnoreMixedContent>false</w:IgnoreMixedContent>
  <w:AlwaysShowPlaceholderText>false</w:AlwaysShowPlaceholderText>
  <w:DoNotPromoteQF/>
  <w:LidThemeOther>ES-EC</w:LidThemeOther>
  <w:LidThemeAsian>X-NONE</w:LidThemeAsian>
  <w:LidThemeComplexScript>X-NONE</w:LidThemeComplexScript>
  <w:Compatibility>
   <w:ULTrailSpace/>
   <w:BreakWrappedTables/>
   <w:SnapToGridInCell/>
   <w:WrapTextWithPunct/>
   <w:UseAsianBreakRules/>
   <w:DontGrowAutofit/>
   <w:SplitPgBreakAndParaMark/>
   <w:EnableOpenTypeKerning/>
   <w:DontFlipMirrorIndents/>
   <w:OverrideTableStyleHps/>
  </w:Compatibility>
  <w:DoNotOptimizeForBrowser/>
  <m:mathPr>
   <m:mathFont m:val="Cambria Math"/>
   <m:brkBin m:val="before"/>
   <m:brkBinSub m:val="&#45;-"/>
   <m:smallFrac m:val="off"/>
   <m:dispDef/>
   <m:lMargin m:val="0"/>
   <m:rMargin m:val="0"/>
   <m:defJc m:val="centerGroup"/>
   <m:wrapIndent m:val="1440"/>
   <m:intLim m:val="subSup"/>
   <m:naryLim m:val="undOvr"/>
  </m:mathPr></w:WordDocument>
</xml><![endif]--><!--[if gte mso 9]><xml>
 <w:LatentStyles DefLockedState="false" DefUnhideWhenUsed="false"
  DefSemiHidden="false" DefQFormat="false" DefPriority="99"
  LatentStyleCount="376">
  <w:LsdException Locked="false" Priority="0" QFormat="true" Name="Normal"/>
  <w:LsdException Locked="false" Priority="9" QFormat="true" Name="heading 1"/>
  <w:LsdException Locked="false" Priority="9" SemiHidden="true"
   UnhideWhenUsed="true" QFormat="true" Name="heading 2"/>
  <w:LsdException Locked="false" Priority="9" SemiHidden="true"
   UnhideWhenUsed="true" QFormat="true" Name="heading 3"/>
  <w:LsdException Locked="false" Priority="9" SemiHidden="true"
   UnhideWhenUsed="true" QFormat="true" Name="heading 4"/>
  <w:LsdException Locked="false" Priority="9" SemiHidden="true"
   UnhideWhenUsed="true" QFormat="true" Name="heading 5"/>
  <w:LsdException Locked="false" Priority="9" SemiHidden="true"
   UnhideWhenUsed="true" QFormat="true" Name="heading 6"/>
  <w:LsdException Locked="false" Priority="9" SemiHidden="true"
   UnhideWhenUsed="true" QFormat="true" Name="heading 7"/>
  <w:LsdException Locked="false" Priority="9" SemiHidden="true"
   UnhideWhenUsed="true" QFormat="true" Name="heading 8"/>
  <w:LsdException Locked="false" Priority="9" SemiHidden="true"
   UnhideWhenUsed="true" QFormat="true" Name="heading 9"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="index 1"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="index 2"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="index 3"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="index 4"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="index 5"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="index 6"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="index 7"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="index 8"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="index 9"/>
  <w:LsdException Locked="false" Priority="39" SemiHidden="true"
   UnhideWhenUsed="true" Name="toc 1"/>
  <w:LsdException Locked="false" Priority="39" SemiHidden="true"
   UnhideWhenUsed="true" Name="toc 2"/>
  <w:LsdException Locked="false" Priority="39" SemiHidden="true"
   UnhideWhenUsed="true" Name="toc 3"/>
  <w:LsdException Locked="false" Priority="39" SemiHidden="true"
   UnhideWhenUsed="true" Name="toc 4"/>
  <w:LsdException Locked="false" Priority="39" SemiHidden="true"
   UnhideWhenUsed="true" Name="toc 5"/>
  <w:LsdException Locked="false" Priority="39" SemiHidden="true"
   UnhideWhenUsed="true" Name="toc 6"/>
  <w:LsdException Locked="false" Priority="39" SemiHidden="true"
   UnhideWhenUsed="true" Name="toc 7"/>
  <w:LsdException Locked="false" Priority="39" SemiHidden="true"
   UnhideWhenUsed="true" Name="toc 8"/>
  <w:LsdException Locked="false" Priority="39" SemiHidden="true"
   UnhideWhenUsed="true" Name="toc 9"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Normal Indent"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="footnote text"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="annotation text"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="header"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="footer"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="index heading"/>
  <w:LsdException Locked="false" Priority="35" SemiHidden="true"
   UnhideWhenUsed="true" QFormat="true" Name="caption"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="table of figures"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="envelope address"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="envelope return"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="footnote reference"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="annotation reference"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="line number"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="page number"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="endnote reference"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="endnote text"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="table of authorities"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="macro"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="toa heading"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="List"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="List Bullet"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="List Number"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="List 2"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="List 3"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="List 4"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="List 5"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="List Bullet 2"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="List Bullet 3"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="List Bullet 4"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="List Bullet 5"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="List Number 2"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="List Number 3"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="List Number 4"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="List Number 5"/>
  <w:LsdException Locked="false" Priority="10" QFormat="true" Name="Title"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Closing"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Signature"/>
  <w:LsdException Locked="false" Priority="1" SemiHidden="true"
   UnhideWhenUsed="true" Name="Default Paragraph Font"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Body Text"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Body Text Indent"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="List Continue"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="List Continue 2"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="List Continue 3"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="List Continue 4"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="List Continue 5"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Message Header"/>
  <w:LsdException Locked="false" Priority="11" QFormat="true" Name="Subtitle"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Salutation"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Date"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Body Text First Indent"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Body Text First Indent 2"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Note Heading"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Body Text 2"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Body Text 3"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Body Text Indent 2"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Body Text Indent 3"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Block Text"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Hyperlink"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="FollowedHyperlink"/>
  <w:LsdException Locked="false" Priority="22" QFormat="true" Name="Strong"/>
  <w:LsdException Locked="false" Priority="20" QFormat="true" Name="Emphasis"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Document Map"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Plain Text"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="E-mail Signature"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="HTML Top of Form"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="HTML Bottom of Form"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Normal (Web)"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="HTML Acronym"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="HTML Address"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="HTML Cite"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="HTML Code"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="HTML Definition"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="HTML Keyboard"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="HTML Preformatted"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="HTML Sample"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="HTML Typewriter"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="HTML Variable"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Normal Table"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="annotation subject"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="No List"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Outline List 1"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Outline List 2"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Outline List 3"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Simple 1"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Simple 2"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Simple 3"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Classic 1"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Classic 2"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Classic 3"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Classic 4"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Colorful 1"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Colorful 2"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Colorful 3"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Columns 1"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Columns 2"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Columns 3"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Columns 4"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Columns 5"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Grid 1"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Grid 2"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Grid 3"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Grid 4"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Grid 5"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Grid 6"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Grid 7"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Grid 8"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table List 1"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table List 2"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table List 3"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table List 4"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table List 5"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table List 6"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table List 7"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table List 8"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table 3D effects 1"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table 3D effects 2"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table 3D effects 3"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Contemporary"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Elegant"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Professional"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Subtle 1"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Subtle 2"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Web 1"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Web 2"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Web 3"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Balloon Text"/>
  <w:LsdException Locked="false" Priority="39" Name="Table Grid"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Table Theme"/>
  <w:LsdException Locked="false" SemiHidden="true" Name="Placeholder Text"/>
  <w:LsdException Locked="false" Priority="1" QFormat="true" Name="No Spacing"/>
  <w:LsdException Locked="false" Priority="60" Name="Light Shading"/>
  <w:LsdException Locked="false" Priority="61" Name="Light List"/>
  <w:LsdException Locked="false" Priority="62" Name="Light Grid"/>
  <w:LsdException Locked="false" Priority="63" Name="Medium Shading 1"/>
  <w:LsdException Locked="false" Priority="64" Name="Medium Shading 2"/>
  <w:LsdException Locked="false" Priority="65" Name="Medium List 1"/>
  <w:LsdException Locked="false" Priority="66" Name="Medium List 2"/>
  <w:LsdException Locked="false" Priority="67" Name="Medium Grid 1"/>
  <w:LsdException Locked="false" Priority="68" Name="Medium Grid 2"/>
  <w:LsdException Locked="false" Priority="69" Name="Medium Grid 3"/>
  <w:LsdException Locked="false" Priority="70" Name="Dark List"/>
  <w:LsdException Locked="false" Priority="71" Name="Colorful Shading"/>
  <w:LsdException Locked="false" Priority="72" Name="Colorful List"/>
  <w:LsdException Locked="false" Priority="73" Name="Colorful Grid"/>
  <w:LsdException Locked="false" Priority="60" Name="Light Shading Accent 1"/>
  <w:LsdException Locked="false" Priority="61" Name="Light List Accent 1"/>
  <w:LsdException Locked="false" Priority="62" Name="Light Grid Accent 1"/>
  <w:LsdException Locked="false" Priority="63" Name="Medium Shading 1 Accent 1"/>
  <w:LsdException Locked="false" Priority="64" Name="Medium Shading 2 Accent 1"/>
  <w:LsdException Locked="false" Priority="65" Name="Medium List 1 Accent 1"/>
  <w:LsdException Locked="false" SemiHidden="true" Name="Revision"/>
  <w:LsdException Locked="false" Priority="34" QFormat="true"
   Name="List Paragraph"/>
  <w:LsdException Locked="false" Priority="29" QFormat="true" Name="Quote"/>
  <w:LsdException Locked="false" Priority="30" QFormat="true"
   Name="Intense Quote"/>
  <w:LsdException Locked="false" Priority="66" Name="Medium List 2 Accent 1"/>
  <w:LsdException Locked="false" Priority="67" Name="Medium Grid 1 Accent 1"/>
  <w:LsdException Locked="false" Priority="68" Name="Medium Grid 2 Accent 1"/>
  <w:LsdException Locked="false" Priority="69" Name="Medium Grid 3 Accent 1"/>
  <w:LsdException Locked="false" Priority="70" Name="Dark List Accent 1"/>
  <w:LsdException Locked="false" Priority="71" Name="Colorful Shading Accent 1"/>
  <w:LsdException Locked="false" Priority="72" Name="Colorful List Accent 1"/>
  <w:LsdException Locked="false" Priority="73" Name="Colorful Grid Accent 1"/>
  <w:LsdException Locked="false" Priority="60" Name="Light Shading Accent 2"/>
  <w:LsdException Locked="false" Priority="61" Name="Light List Accent 2"/>
  <w:LsdException Locked="false" Priority="62" Name="Light Grid Accent 2"/>
  <w:LsdException Locked="false" Priority="63" Name="Medium Shading 1 Accent 2"/>
  <w:LsdException Locked="false" Priority="64" Name="Medium Shading 2 Accent 2"/>
  <w:LsdException Locked="false" Priority="65" Name="Medium List 1 Accent 2"/>
  <w:LsdException Locked="false" Priority="66" Name="Medium List 2 Accent 2"/>
  <w:LsdException Locked="false" Priority="67" Name="Medium Grid 1 Accent 2"/>
  <w:LsdException Locked="false" Priority="68" Name="Medium Grid 2 Accent 2"/>
  <w:LsdException Locked="false" Priority="69" Name="Medium Grid 3 Accent 2"/>
  <w:LsdException Locked="false" Priority="70" Name="Dark List Accent 2"/>
  <w:LsdException Locked="false" Priority="71" Name="Colorful Shading Accent 2"/>
  <w:LsdException Locked="false" Priority="72" Name="Colorful List Accent 2"/>
  <w:LsdException Locked="false" Priority="73" Name="Colorful Grid Accent 2"/>
  <w:LsdException Locked="false" Priority="60" Name="Light Shading Accent 3"/>
  <w:LsdException Locked="false" Priority="61" Name="Light List Accent 3"/>
  <w:LsdException Locked="false" Priority="62" Name="Light Grid Accent 3"/>
  <w:LsdException Locked="false" Priority="63" Name="Medium Shading 1 Accent 3"/>
  <w:LsdException Locked="false" Priority="64" Name="Medium Shading 2 Accent 3"/>
  <w:LsdException Locked="false" Priority="65" Name="Medium List 1 Accent 3"/>
  <w:LsdException Locked="false" Priority="66" Name="Medium List 2 Accent 3"/>
  <w:LsdException Locked="false" Priority="67" Name="Medium Grid 1 Accent 3"/>
  <w:LsdException Locked="false" Priority="68" Name="Medium Grid 2 Accent 3"/>
  <w:LsdException Locked="false" Priority="69" Name="Medium Grid 3 Accent 3"/>
  <w:LsdException Locked="false" Priority="70" Name="Dark List Accent 3"/>
  <w:LsdException Locked="false" Priority="71" Name="Colorful Shading Accent 3"/>
  <w:LsdException Locked="false" Priority="72" Name="Colorful List Accent 3"/>
  <w:LsdException Locked="false" Priority="73" Name="Colorful Grid Accent 3"/>
  <w:LsdException Locked="false" Priority="60" Name="Light Shading Accent 4"/>
  <w:LsdException Locked="false" Priority="61" Name="Light List Accent 4"/>
  <w:LsdException Locked="false" Priority="62" Name="Light Grid Accent 4"/>
  <w:LsdException Locked="false" Priority="63" Name="Medium Shading 1 Accent 4"/>
  <w:LsdException Locked="false" Priority="64" Name="Medium Shading 2 Accent 4"/>
  <w:LsdException Locked="false" Priority="65" Name="Medium List 1 Accent 4"/>
  <w:LsdException Locked="false" Priority="66" Name="Medium List 2 Accent 4"/>
  <w:LsdException Locked="false" Priority="67" Name="Medium Grid 1 Accent 4"/>
  <w:LsdException Locked="false" Priority="68" Name="Medium Grid 2 Accent 4"/>
  <w:LsdException Locked="false" Priority="69" Name="Medium Grid 3 Accent 4"/>
  <w:LsdException Locked="false" Priority="70" Name="Dark List Accent 4"/>
  <w:LsdException Locked="false" Priority="71" Name="Colorful Shading Accent 4"/>
  <w:LsdException Locked="false" Priority="72" Name="Colorful List Accent 4"/>
  <w:LsdException Locked="false" Priority="73" Name="Colorful Grid Accent 4"/>
  <w:LsdException Locked="false" Priority="60" Name="Light Shading Accent 5"/>
  <w:LsdException Locked="false" Priority="61" Name="Light List Accent 5"/>
  <w:LsdException Locked="false" Priority="62" Name="Light Grid Accent 5"/>
  <w:LsdException Locked="false" Priority="63" Name="Medium Shading 1 Accent 5"/>
  <w:LsdException Locked="false" Priority="64" Name="Medium Shading 2 Accent 5"/>
  <w:LsdException Locked="false" Priority="65" Name="Medium List 1 Accent 5"/>
  <w:LsdException Locked="false" Priority="66" Name="Medium List 2 Accent 5"/>
  <w:LsdException Locked="false" Priority="67" Name="Medium Grid 1 Accent 5"/>
  <w:LsdException Locked="false" Priority="68" Name="Medium Grid 2 Accent 5"/>
  <w:LsdException Locked="false" Priority="69" Name="Medium Grid 3 Accent 5"/>
  <w:LsdException Locked="false" Priority="70" Name="Dark List Accent 5"/>
  <w:LsdException Locked="false" Priority="71" Name="Colorful Shading Accent 5"/>
  <w:LsdException Locked="false" Priority="72" Name="Colorful List Accent 5"/>
  <w:LsdException Locked="false" Priority="73" Name="Colorful Grid Accent 5"/>
  <w:LsdException Locked="false" Priority="60" Name="Light Shading Accent 6"/>
  <w:LsdException Locked="false" Priority="61" Name="Light List Accent 6"/>
  <w:LsdException Locked="false" Priority="62" Name="Light Grid Accent 6"/>
  <w:LsdException Locked="false" Priority="63" Name="Medium Shading 1 Accent 6"/>
  <w:LsdException Locked="false" Priority="64" Name="Medium Shading 2 Accent 6"/>
  <w:LsdException Locked="false" Priority="65" Name="Medium List 1 Accent 6"/>
  <w:LsdException Locked="false" Priority="66" Name="Medium List 2 Accent 6"/>
  <w:LsdException Locked="false" Priority="67" Name="Medium Grid 1 Accent 6"/>
  <w:LsdException Locked="false" Priority="68" Name="Medium Grid 2 Accent 6"/>
  <w:LsdException Locked="false" Priority="69" Name="Medium Grid 3 Accent 6"/>
  <w:LsdException Locked="false" Priority="70" Name="Dark List Accent 6"/>
  <w:LsdException Locked="false" Priority="71" Name="Colorful Shading Accent 6"/>
  <w:LsdException Locked="false" Priority="72" Name="Colorful List Accent 6"/>
  <w:LsdException Locked="false" Priority="73" Name="Colorful Grid Accent 6"/>
  <w:LsdException Locked="false" Priority="19" QFormat="true"
   Name="Subtle Emphasis"/>
  <w:LsdException Locked="false" Priority="21" QFormat="true"
   Name="Intense Emphasis"/>
  <w:LsdException Locked="false" Priority="31" QFormat="true"
   Name="Subtle Reference"/>
  <w:LsdException Locked="false" Priority="32" QFormat="true"
   Name="Intense Reference"/>
  <w:LsdException Locked="false" Priority="33" QFormat="true" Name="Book Title"/>
  <w:LsdException Locked="false" Priority="37" SemiHidden="true"
   UnhideWhenUsed="true" Name="Bibliography"/>
  <w:LsdException Locked="false" Priority="39" SemiHidden="true"
   UnhideWhenUsed="true" QFormat="true" Name="TOC Heading"/>
  <w:LsdException Locked="false" Priority="41" Name="Plain Table 1"/>
  <w:LsdException Locked="false" Priority="42" Name="Plain Table 2"/>
  <w:LsdException Locked="false" Priority="43" Name="Plain Table 3"/>
  <w:LsdException Locked="false" Priority="44" Name="Plain Table 4"/>
  <w:LsdException Locked="false" Priority="45" Name="Plain Table 5"/>
  <w:LsdException Locked="false" Priority="40" Name="Grid Table Light"/>
  <w:LsdException Locked="false" Priority="46" Name="Grid Table 1 Light"/>
  <w:LsdException Locked="false" Priority="47" Name="Grid Table 2"/>
  <w:LsdException Locked="false" Priority="48" Name="Grid Table 3"/>
  <w:LsdException Locked="false" Priority="49" Name="Grid Table 4"/>
  <w:LsdException Locked="false" Priority="50" Name="Grid Table 5 Dark"/>
  <w:LsdException Locked="false" Priority="51" Name="Grid Table 6 Colorful"/>
  <w:LsdException Locked="false" Priority="52" Name="Grid Table 7 Colorful"/>
  <w:LsdException Locked="false" Priority="46"
   Name="Grid Table 1 Light Accent 1"/>
  <w:LsdException Locked="false" Priority="47" Name="Grid Table 2 Accent 1"/>
  <w:LsdException Locked="false" Priority="48" Name="Grid Table 3 Accent 1"/>
  <w:LsdException Locked="false" Priority="49" Name="Grid Table 4 Accent 1"/>
  <w:LsdException Locked="false" Priority="50" Name="Grid Table 5 Dark Accent 1"/>
  <w:LsdException Locked="false" Priority="51"
   Name="Grid Table 6 Colorful Accent 1"/>
  <w:LsdException Locked="false" Priority="52"
   Name="Grid Table 7 Colorful Accent 1"/>
  <w:LsdException Locked="false" Priority="46"
   Name="Grid Table 1 Light Accent 2"/>
  <w:LsdException Locked="false" Priority="47" Name="Grid Table 2 Accent 2"/>
  <w:LsdException Locked="false" Priority="48" Name="Grid Table 3 Accent 2"/>
  <w:LsdException Locked="false" Priority="49" Name="Grid Table 4 Accent 2"/>
  <w:LsdException Locked="false" Priority="50" Name="Grid Table 5 Dark Accent 2"/>
  <w:LsdException Locked="false" Priority="51"
   Name="Grid Table 6 Colorful Accent 2"/>
  <w:LsdException Locked="false" Priority="52"
   Name="Grid Table 7 Colorful Accent 2"/>
  <w:LsdException Locked="false" Priority="46"
   Name="Grid Table 1 Light Accent 3"/>
  <w:LsdException Locked="false" Priority="47" Name="Grid Table 2 Accent 3"/>
  <w:LsdException Locked="false" Priority="48" Name="Grid Table 3 Accent 3"/>
  <w:LsdException Locked="false" Priority="49" Name="Grid Table 4 Accent 3"/>
  <w:LsdException Locked="false" Priority="50" Name="Grid Table 5 Dark Accent 3"/>
  <w:LsdException Locked="false" Priority="51"
   Name="Grid Table 6 Colorful Accent 3"/>
  <w:LsdException Locked="false" Priority="52"
   Name="Grid Table 7 Colorful Accent 3"/>
  <w:LsdException Locked="false" Priority="46"
   Name="Grid Table 1 Light Accent 4"/>
  <w:LsdException Locked="false" Priority="47" Name="Grid Table 2 Accent 4"/>
  <w:LsdException Locked="false" Priority="48" Name="Grid Table 3 Accent 4"/>
  <w:LsdException Locked="false" Priority="49" Name="Grid Table 4 Accent 4"/>
  <w:LsdException Locked="false" Priority="50" Name="Grid Table 5 Dark Accent 4"/>
  <w:LsdException Locked="false" Priority="51"
   Name="Grid Table 6 Colorful Accent 4"/>
  <w:LsdException Locked="false" Priority="52"
   Name="Grid Table 7 Colorful Accent 4"/>
  <w:LsdException Locked="false" Priority="46"
   Name="Grid Table 1 Light Accent 5"/>
  <w:LsdException Locked="false" Priority="47" Name="Grid Table 2 Accent 5"/>
  <w:LsdException Locked="false" Priority="48" Name="Grid Table 3 Accent 5"/>
  <w:LsdException Locked="false" Priority="49" Name="Grid Table 4 Accent 5"/>
  <w:LsdException Locked="false" Priority="50" Name="Grid Table 5 Dark Accent 5"/>
  <w:LsdException Locked="false" Priority="51"
   Name="Grid Table 6 Colorful Accent 5"/>
  <w:LsdException Locked="false" Priority="52"
   Name="Grid Table 7 Colorful Accent 5"/>
  <w:LsdException Locked="false" Priority="46"
   Name="Grid Table 1 Light Accent 6"/>
  <w:LsdException Locked="false" Priority="47" Name="Grid Table 2 Accent 6"/>
  <w:LsdException Locked="false" Priority="48" Name="Grid Table 3 Accent 6"/>
  <w:LsdException Locked="false" Priority="49" Name="Grid Table 4 Accent 6"/>
  <w:LsdException Locked="false" Priority="50" Name="Grid Table 5 Dark Accent 6"/>
  <w:LsdException Locked="false" Priority="51"
   Name="Grid Table 6 Colorful Accent 6"/>
  <w:LsdException Locked="false" Priority="52"
   Name="Grid Table 7 Colorful Accent 6"/>
  <w:LsdException Locked="false" Priority="46" Name="List Table 1 Light"/>
  <w:LsdException Locked="false" Priority="47" Name="List Table 2"/>
  <w:LsdException Locked="false" Priority="48" Name="List Table 3"/>
  <w:LsdException Locked="false" Priority="49" Name="List Table 4"/>
  <w:LsdException Locked="false" Priority="50" Name="List Table 5 Dark"/>
  <w:LsdException Locked="false" Priority="51" Name="List Table 6 Colorful"/>
  <w:LsdException Locked="false" Priority="52" Name="List Table 7 Colorful"/>
  <w:LsdException Locked="false" Priority="46"
   Name="List Table 1 Light Accent 1"/>
  <w:LsdException Locked="false" Priority="47" Name="List Table 2 Accent 1"/>
  <w:LsdException Locked="false" Priority="48" Name="List Table 3 Accent 1"/>
  <w:LsdException Locked="false" Priority="49" Name="List Table 4 Accent 1"/>
  <w:LsdException Locked="false" Priority="50" Name="List Table 5 Dark Accent 1"/>
  <w:LsdException Locked="false" Priority="51"
   Name="List Table 6 Colorful Accent 1"/>
  <w:LsdException Locked="false" Priority="52"
   Name="List Table 7 Colorful Accent 1"/>
  <w:LsdException Locked="false" Priority="46"
   Name="List Table 1 Light Accent 2"/>
  <w:LsdException Locked="false" Priority="47" Name="List Table 2 Accent 2"/>
  <w:LsdException Locked="false" Priority="48" Name="List Table 3 Accent 2"/>
  <w:LsdException Locked="false" Priority="49" Name="List Table 4 Accent 2"/>
  <w:LsdException Locked="false" Priority="50" Name="List Table 5 Dark Accent 2"/>
  <w:LsdException Locked="false" Priority="51"
   Name="List Table 6 Colorful Accent 2"/>
  <w:LsdException Locked="false" Priority="52"
   Name="List Table 7 Colorful Accent 2"/>
  <w:LsdException Locked="false" Priority="46"
   Name="List Table 1 Light Accent 3"/>
  <w:LsdException Locked="false" Priority="47" Name="List Table 2 Accent 3"/>
  <w:LsdException Locked="false" Priority="48" Name="List Table 3 Accent 3"/>
  <w:LsdException Locked="false" Priority="49" Name="List Table 4 Accent 3"/>
  <w:LsdException Locked="false" Priority="50" Name="List Table 5 Dark Accent 3"/>
  <w:LsdException Locked="false" Priority="51"
   Name="List Table 6 Colorful Accent 3"/>
  <w:LsdException Locked="false" Priority="52"
   Name="List Table 7 Colorful Accent 3"/>
  <w:LsdException Locked="false" Priority="46"
   Name="List Table 1 Light Accent 4"/>
  <w:LsdException Locked="false" Priority="47" Name="List Table 2 Accent 4"/>
  <w:LsdException Locked="false" Priority="48" Name="List Table 3 Accent 4"/>
  <w:LsdException Locked="false" Priority="49" Name="List Table 4 Accent 4"/>
  <w:LsdException Locked="false" Priority="50" Name="List Table 5 Dark Accent 4"/>
  <w:LsdException Locked="false" Priority="51"
   Name="List Table 6 Colorful Accent 4"/>
  <w:LsdException Locked="false" Priority="52"
   Name="List Table 7 Colorful Accent 4"/>
  <w:LsdException Locked="false" Priority="46"
   Name="List Table 1 Light Accent 5"/>
  <w:LsdException Locked="false" Priority="47" Name="List Table 2 Accent 5"/>
  <w:LsdException Locked="false" Priority="48" Name="List Table 3 Accent 5"/>
  <w:LsdException Locked="false" Priority="49" Name="List Table 4 Accent 5"/>
  <w:LsdException Locked="false" Priority="50" Name="List Table 5 Dark Accent 5"/>
  <w:LsdException Locked="false" Priority="51"
   Name="List Table 6 Colorful Accent 5"/>
  <w:LsdException Locked="false" Priority="52"
   Name="List Table 7 Colorful Accent 5"/>
  <w:LsdException Locked="false" Priority="46"
   Name="List Table 1 Light Accent 6"/>
  <w:LsdException Locked="false" Priority="47" Name="List Table 2 Accent 6"/>
  <w:LsdException Locked="false" Priority="48" Name="List Table 3 Accent 6"/>
  <w:LsdException Locked="false" Priority="49" Name="List Table 4 Accent 6"/>
  <w:LsdException Locked="false" Priority="50" Name="List Table 5 Dark Accent 6"/>
  <w:LsdException Locked="false" Priority="51"
   Name="List Table 6 Colorful Accent 6"/>
  <w:LsdException Locked="false" Priority="52"
   Name="List Table 7 Colorful Accent 6"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Mention"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Smart Hyperlink"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Hashtag"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Unresolved Mention"/>
  <w:LsdException Locked="false" SemiHidden="true" UnhideWhenUsed="true"
   Name="Smart Link"/>
 </w:LatentStyles>
</xml><![endif]-->
<style>
<!--
 /* Font Definitions */
 @font-face
	{font-family:"Cambria Math";
	panose-1:2 4 5 3 5 4 6 3 2 4;
	mso-font-charset:0;
	mso-generic-font-family:roman;
	mso-font-pitch:variable;
	mso-font-signature:3 0 0 0 1 0;}
@font-face
	{font-family:Calibri;
	panose-1:2 15 5 2 2 2 4 3 2 4;
	mso-font-charset:0;
	mso-generic-font-family:swiss;
	mso-font-pitch:variable;
	mso-font-signature:-469750017 -1073732485 9 0 511 0;}
 /* Style Definitions */
 p.MsoNormal, li.MsoNormal, div.MsoNormal
	{mso-style-unhide:no;
	mso-style-qformat:yes;
	mso-style-parent:"";
	margin:0cm;
	mso-pagination:none;
	text-autospace:none;
	font-size:11.0pt;
	font-family:"Calibri",sans-serif;
	mso-fareast-font-family:Calibri;
	mso-ansi-language:ES;
	mso-fareast-language:EN-US;}
p.MsoBodyText, li.MsoBodyText, div.MsoBodyText
	{mso-style-priority:1;
	mso-style-unhide:no;
	mso-style-qformat:yes;
	margin-top:0cm;
	margin-right:0cm;
	margin-bottom:0cm;
	margin-left:49.8pt;
	mso-pagination:none;
	text-autospace:none;
	font-size:11.0pt;
	font-family:"Calibri",sans-serif;
	mso-fareast-font-family:Calibri;
	mso-ansi-language:ES;
	mso-fareast-language:EN-US;}
p.MsoListParagraph, li.MsoListParagraph, div.MsoListParagraph
	{mso-style-priority:1;
	mso-style-unhide:no;
	mso-style-qformat:yes;
	margin:0cm;
	mso-pagination:none;
	text-autospace:none;
	font-size:11.0pt;
	font-family:"Calibri",sans-serif;
	mso-fareast-font-family:Calibri;
	mso-ansi-language:ES;
	mso-fareast-language:EN-US;}
p.TableParagraph, li.TableParagraph, div.TableParagraph
	{mso-style-name:"Table Paragraph";
	mso-style-priority:1;
	mso-style-unhide:no;
	mso-style-qformat:yes;
	margin:0cm;
	mso-pagination:none;
	text-autospace:none;
	font-size:11.0pt;
	font-family:"Calibri",sans-serif;
	mso-fareast-font-family:Calibri;
	mso-ansi-language:ES;
	mso-fareast-language:EN-US;}
span.SpellE
	{mso-style-name:"";
	mso-spl-e:yes;}
span.GramE
	{mso-style-name:"";
	mso-gram-e:yes;}
.MsoChpDefault
	{mso-style-type:export-only;
	mso-default-props:yes;
	font-family:"Calibri",sans-serif;
	mso-ascii-font-family:Calibri;
	mso-ascii-theme-font:minor-latin;
	mso-fareast-font-family:Calibri;
	mso-fareast-theme-font:minor-latin;
	mso-hansi-font-family:Calibri;
	mso-hansi-theme-font:minor-latin;
	mso-bidi-font-family:"Times New Roman";
	mso-bidi-theme-font:minor-bidi;
	mso-ansi-language:EN-US;
	mso-fareast-language:EN-US;}
.MsoPapDefault
	{mso-style-type:export-only;
	mso-pagination:none;
	text-autospace:none;}
@page WordSection1
	{size:612.0pt 792.0pt;
	margin:70.0pt 0cm 65.7pt 54.0pt;
	mso-header-margin:36.0pt;
	mso-footer-margin:36.0pt;
	mso-paper-source:0;}
div.WordSection1
	{page:WordSection1;}
@page WordSection2
	{size:612.0pt 792.0pt;
	margin:70.0pt 0cm 78.45pt 54.0pt;
	mso-header-margin:36.0pt;
	mso-footer-margin:36.0pt;
	mso-paper-source:0;}
div.WordSection2
	{page:WordSection2;}
@page WordSection3
	{size:612.0pt 792.0pt;
	margin:70.0pt 0cm 14.0pt 54.0pt;
	mso-header-margin:36.0pt;
	mso-footer-margin:36.0pt;
	mso-paper-source:0;}
div.WordSection3
	{page:WordSection3;}
@page WordSection4
	{size:612.0pt 792.0pt;
	margin:71.0pt 0cm 14.0pt 54.0pt;
	mso-header-margin:36.0pt;
	mso-footer-margin:36.0pt;
	mso-paper-source:0;}
div.WordSection4
	{page:WordSection4;}
@page WordSection5
	{size:612.0pt 792.0pt;
	margin:70.0pt 0cm 14.0pt 54.0pt;
	mso-header-margin:36.0pt;
	mso-footer-margin:36.0pt;
	mso-paper-source:0;}
div.WordSection5
	{page:WordSection5;}
@page WordSection6
	{size:612.0pt 792.0pt;
	margin:70.0pt 0cm 14.0pt 54.0pt;
	mso-header-margin:36.0pt;
	mso-footer-margin:36.0pt;
	mso-paper-source:0;}
div.WordSection6
	{page:WordSection6;}
-->
</style>
<!--[if gte mso 10]>
<style>
 /* Style Definitions */
 table.MsoNormalTable
	{mso-style-name:"Tabla normal";
	mso-tstyle-rowband-size:0;
	mso-tstyle-colband-size:0;
	mso-style-noshow:yes;
	mso-style-priority:99;
	mso-style-parent:"";
	mso-padding-alt:0cm 5.4pt 0cm 5.4pt;
	mso-para-margin:0cm;
	mso-pagination:none;
	text-autospace:none;
	font-size:11.0pt;
	font-family:"Calibri",sans-serif;
	mso-ascii-font-family:Calibri;
	mso-ascii-theme-font:minor-latin;
	mso-hansi-font-family:Calibri;
	mso-hansi-theme-font:minor-latin;
	mso-bidi-font-family:"Times New Roman";
	mso-bidi-theme-font:minor-bidi;
	mso-ansi-language:EN-US;
	mso-fareast-language:EN-US;}
table.TableNormal
	{mso-style-name:"Table Normal";
	mso-tstyle-rowband-size:0;
	mso-tstyle-colband-size:0;
	mso-style-noshow:yes;
	mso-style-priority:2;
	mso-style-qformat:yes;
	mso-style-parent:"";
	mso-padding-alt:0cm 0cm 0cm 0cm;
	mso-para-margin:0cm;
	mso-pagination:none;
	text-autospace:none;
	font-size:11.0pt;
	font-family:"Calibri",sans-serif;
	mso-ascii-font-family:Calibri;
	mso-ascii-theme-font:minor-latin;
	mso-hansi-font-family:Calibri;
	mso-hansi-theme-font:minor-latin;
	mso-bidi-font-family:"Times New Roman";
	mso-bidi-theme-font:minor-bidi;
	mso-ansi-language:EN-US;
	mso-fareast-language:EN-US;}
</style>
<![endif]--><!--[if gte mso 9]><xml>
 <o:shapedefaults v:ext="edit" spidmax="1035"/>
</xml><![endif]--><!--[if gte mso 9]><xml>
 <o:shapelayout v:ext="edit">
  <o:idmap v:ext="edit" data="1"/>
 </o:shapelayout></xml><![endif]-->
</head>

<body lang=ES-EC style='tab-interval:36.0pt;word-wrap:break-word'>

<div class=WordSection1>

<div align=right>

<table class=TableNormal border=1 cellspacing=0 cellpadding=0 width=0
 style='border-collapse:collapse;mso-table-layout-alt:fixed;border:none;
 mso-border-alt:solid black 1.0pt;mso-yfti-tbllook:480;mso-padding-alt:0cm 0cm 0cm 0cm;
 mso-border-insideh:1.0pt solid black;mso-border-insidev:1.0pt solid black'>
 <tr style='mso-yfti-irow:0;mso-yfti-firstrow:yes;height:34.1pt'>
  <td width=741 colspan=2 valign=top style='width:555.45pt;border:solid black 1.0pt;
  border-right:none;mso-border-top-alt:solid black 1.0pt;mso-border-left-alt:
  solid black 1.0pt;mso-border-bottom-alt:solid black .5pt;padding:0cm 0cm 0cm 0cm;
  height:34.1pt'>
  <p class=TableParagraph align=center style='margin-top:0cm;margin-right:.6pt;
  margin-bottom:0cm;margin-left:39.8pt;margin-bottom:.0001pt;text-align:center;
  line-height:16.95pt;mso-line-height-rule:exactly'><b style='mso-bidi-font-weight:
  normal'><span lang=ES style='font-size:14.0pt;mso-bidi-font-size:11.0pt'>Gu�a<span
  style='letter-spacing:-.2pt'> </span>de<span style='letter-spacing:-.15pt'> </span>Pr�ctica<span
  style='letter-spacing:-.05pt'> </span>de<span style='letter-spacing:-.15pt'> </span>aplicaci�n<span
  style='letter-spacing:-.05pt'> </span>y<span style='letter-spacing:-.1pt'> </span>experimentaci�n
  de<span style='letter-spacing:-.15pt'> </span>los<span style='letter-spacing:
  -.1pt'> </span>aprendizajes<span style='letter-spacing:-.3pt'> </span>de<span
  style='letter-spacing:-.15pt'> </span>la <span style='letter-spacing:-.1pt'>Universidad</span><o:p></o:p></span></b></p>
  <p class=TableParagraph align=center style='margin-top:.1pt;margin-right:
  0cm;margin-bottom:0cm;margin-left:39.8pt;margin-bottom:.0001pt;text-align:
  center;line-height:16.1pt;mso-line-height-rule:exactly'><b style='mso-bidi-font-weight:
  normal'><span lang=ES style='font-size:14.0pt;mso-bidi-font-size:11.0pt'>Polit�cnica<span
  style='letter-spacing:-.4pt'> </span><span style='letter-spacing:-.1pt'>Salesiana</span><o:p></o:p></span></b></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:1;height:17.05pt'>
  <td width=210 valign=top style='width:157.75pt;border:solid black 1.0pt;
  border-top:none;mso-border-top-alt:solid black .5pt;mso-border-alt:solid black .5pt;
  mso-border-left-alt:solid black 1.0pt;padding:0cm 0cm 0cm 0cm;height:17.05pt'>
  <p class=TableParagraph style='margin-left:5.5pt;line-height:16.1pt;
  mso-line-height-rule:exactly'><b style='mso-bidi-font-weight:normal'><span
  lang=ES style='font-size:14.0pt;mso-bidi-font-size:11.0pt;letter-spacing:
  -.1pt'>Carrera:</span></b><b style='mso-bidi-font-weight:normal'><span
  lang=ES style='font-size:14.0pt;mso-bidi-font-size:11.0pt'><o:p></o:p></span></b></p>
  </td>
  <td width=530 valign=top style='width:397.7pt;border:none;border-bottom:solid black 1.0pt;
  mso-border-top-alt:solid black .5pt;mso-border-left-alt:solid black .5pt;
  mso-border-top-alt:solid black .5pt;mso-border-left-alt:solid black .5pt;
  mso-border-bottom-alt:solid black .5pt;padding:0cm 0cm 0cm 0cm;height:17.05pt'>
  <p class=TableParagraph style='margin-left:8.85pt;line-height:16.1pt;
  mso-line-height-rule:exactly'><b style='mso-bidi-font-weight:normal'><span
  lang=ES style='font-size:14.0pt;mso-bidi-font-size:11.0pt'>CIENCIAS<span
  style='letter-spacing:-.05pt'> </span>DE<span style='letter-spacing:-.1pt'> </span>LA<span
  style='letter-spacing:-.05pt'> </span><span style='letter-spacing:-.1pt'>COMPUTACI�N</span><o:p></o:p></span></b></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:2;height:17.05pt'>
  <td width=210 valign=top style='width:157.75pt;border:solid black 1.0pt;
  border-top:none;mso-border-top-alt:solid black .5pt;mso-border-alt:solid black .5pt;
  mso-border-left-alt:solid black 1.0pt;padding:0cm 0cm 0cm 0cm;height:17.05pt'>
  <p class=TableParagraph style='margin-left:5.5pt;line-height:16.1pt;
  mso-line-height-rule:exactly'><b style='mso-bidi-font-weight:normal'><span
  lang=ES style='font-size:14.0pt;mso-bidi-font-size:11.0pt;letter-spacing:
  -.1pt'>Nivel:</span></b><b style='mso-bidi-font-weight:normal'><span lang=ES
  style='font-size:14.0pt;mso-bidi-font-size:11.0pt'><o:p></o:p></span></b></p>
  </td>
  <td width=530 valign=top style='width:397.7pt;border:none;border-bottom:solid black 1.0pt;
  mso-border-top-alt:solid black .5pt;mso-border-left-alt:solid black .5pt;
  mso-border-top-alt:solid black .5pt;mso-border-left-alt:solid black .5pt;
  mso-border-bottom-alt:solid black .5pt;padding:0cm 0cm 0cm 0cm;height:17.05pt'>
  <p class=TableParagraph style='margin-left:5.6pt;line-height:16.1pt;
  mso-line-height-rule:exactly'><b style='mso-bidi-font-weight:normal'><span
  lang=ES style='font-size:14.0pt;mso-bidi-font-size:11.0pt;letter-spacing:
  -.25pt'>2er</span></b><b style='mso-bidi-font-weight:normal'><span lang=ES
  style='font-size:14.0pt;mso-bidi-font-size:11.0pt'><o:p></o:p></span></b></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:3;height:17.1pt'>
  <td width=210 valign=top style='width:157.75pt;border:solid black 1.0pt;
  border-top:none;mso-border-top-alt:solid black .5pt;mso-border-alt:solid black .5pt;
  mso-border-left-alt:solid black 1.0pt;padding:0cm 0cm 0cm 0cm;height:17.1pt'>
  <p class=TableParagraph style='margin-top:.05pt;margin-right:0cm;margin-bottom:
  0cm;margin-left:5.5pt;margin-bottom:.0001pt;line-height:16.1pt;mso-line-height-rule:
  exactly'><b style='mso-bidi-font-weight:normal'><span lang=ES
  style='font-size:14.0pt;mso-bidi-font-size:11.0pt;letter-spacing:-.1pt'>Asignatura:</span></b><b
  style='mso-bidi-font-weight:normal'><span lang=ES style='font-size:14.0pt;
  mso-bidi-font-size:11.0pt'><o:p></o:p></span></b></p>
  </td>
  <td width=530 valign=top style='width:397.7pt;border:none;border-bottom:solid black 1.0pt;
  mso-border-top-alt:solid black .5pt;mso-border-left-alt:solid black .5pt;
  mso-border-top-alt:solid black .5pt;mso-border-left-alt:solid black .5pt;
  mso-border-bottom-alt:solid black .5pt;padding:0cm 0cm 0cm 0cm;height:17.1pt'>
  <p class=TableParagraph style='margin-top:.05pt;margin-right:0cm;margin-bottom:
  0cm;margin-left:5.6pt;margin-bottom:.0001pt;line-height:16.1pt;mso-line-height-rule:
  exactly'><b style='mso-bidi-font-weight:normal'><span lang=ES
  style='font-size:14.0pt;mso-bidi-font-size:11.0pt'>PROGRAMACI�N<span
  style='letter-spacing:-.2pt'> </span>ORIENTADA<span style='letter-spacing:
  -.1pt'> </span>A<span style='letter-spacing:-.3pt'> </span><span
  style='letter-spacing:-.1pt'>OBJETOS</span><o:p></o:p></span></b></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:4;height:17.05pt'>
  <td width=210 valign=top style='width:157.75pt;border:solid black 1.0pt;
  border-top:none;mso-border-top-alt:solid black .5pt;mso-border-alt:solid black .5pt;
  mso-border-left-alt:solid black 1.0pt;padding:0cm 0cm 0cm 0cm;height:17.05pt'>
  <p class=TableParagraph style='margin-left:5.5pt;line-height:16.1pt;
  mso-line-height-rule:exactly'><b style='mso-bidi-font-weight:normal'><span
  lang=ES style='font-size:14.0pt;mso-bidi-font-size:11.0pt'>Desarrollado<span
  style='letter-spacing:-.35pt'> </span><span style='letter-spacing:-.2pt'>por:</span><o:p></o:p></span></b></p>
  </td>
  <td width=530 valign=top style='width:397.7pt;border:none;border-bottom:solid black 1.0pt;
  mso-border-top-alt:solid black .5pt;mso-border-left-alt:solid black .5pt;
  mso-border-top-alt:solid black .5pt;mso-border-left-alt:solid black .5pt;
  mso-border-bottom-alt:solid black .5pt;padding:0cm 0cm 0cm 0cm;height:17.05pt'>
  <p class=TableParagraph style='margin-left:5.6pt;line-height:16.1pt;
  mso-line-height-rule:exactly'><b style='mso-bidi-font-weight:normal'><span
  lang=ES style='font-size:14.0pt;mso-bidi-font-size:11.0pt'>JORDY<span
  style='letter-spacing:-.2pt'> </span><span style='letter-spacing:-.1pt'>ROBLERO</span><o:p></o:p></span></b></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:5;height:17.1pt'>
  <td width=210 valign=top style='width:157.75pt;border:solid black 1.0pt;
  border-top:none;mso-border-top-alt:solid black .5pt;mso-border-alt:solid black .5pt;
  mso-border-left-alt:solid black 1.0pt;padding:0cm 0cm 0cm 0cm;height:17.1pt'>
  <p class=TableParagraph style='margin-left:5.5pt;line-height:16.1pt;
  mso-line-height-rule:exactly'><b style='mso-bidi-font-weight:normal'><span
  lang=ES style='font-size:14.0pt;mso-bidi-font-size:11.0pt;letter-spacing:
  -.1pt'>Grupo:</span></b><b style='mso-bidi-font-weight:normal'><span lang=ES
  style='font-size:14.0pt;mso-bidi-font-size:11.0pt'><o:p></o:p></span></b></p>
  </td>
  <td width=530 valign=top style='width:397.7pt;border:none;border-bottom:solid black 1.0pt;
  mso-border-top-alt:solid black .5pt;mso-border-left-alt:solid black .5pt;
  mso-border-top-alt:solid black .5pt;mso-border-left-alt:solid black .5pt;
  mso-border-bottom-alt:solid black .5pt;padding:0cm 0cm 0cm 0cm;height:17.1pt'>
  <p class=TableParagraph style='margin-left:8.85pt;line-height:16.1pt;
  mso-line-height-rule:exactly'><b style='mso-bidi-font-weight:normal'><span
  lang=ES style='font-size:14.0pt;mso-bidi-font-size:11.0pt;letter-spacing:
  -.5pt'>1</span></b><b style='mso-bidi-font-weight:normal'><span lang=ES
  style='font-size:14.0pt;mso-bidi-font-size:11.0pt'><o:p></o:p></span></b></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:6;height:34.05pt'>
  <td width=210 valign=top style='width:157.75pt;border:solid black 1.0pt;
  border-top:none;mso-border-top-alt:solid black .5pt;mso-border-alt:solid black .5pt;
  mso-border-left-alt:solid black 1.0pt;padding:0cm 0cm 0cm 0cm;height:34.05pt'>
  <p class=TableParagraph style='margin-left:5.5pt;line-height:16.9pt;
  mso-line-height-rule:exactly'><b style='mso-bidi-font-weight:normal'><span
  lang=ES style='font-size:14.0pt;mso-bidi-font-size:11.0pt'>Resultados<span
  style='letter-spacing:-.1pt'> </span><span style='letter-spacing:-.25pt'>de</span><o:p></o:p></span></b></p>
  <p class=TableParagraph style='margin-top:.1pt;margin-right:0cm;margin-bottom:
  0cm;margin-left:5.5pt;margin-bottom:.0001pt;line-height:16.1pt;mso-line-height-rule:
  exactly'><b style='mso-bidi-font-weight:normal'><span lang=ES
  style='font-size:14.0pt;mso-bidi-font-size:11.0pt;letter-spacing:-.1pt'>Aprendizaje:</span></b><b
  style='mso-bidi-font-weight:normal'><span lang=ES style='font-size:14.0pt;
  mso-bidi-font-size:11.0pt'><o:p></o:p></span></b></p>
  </td>
  <td width=530 valign=top style='width:397.7pt;border:none;border-bottom:solid black 1.0pt;
  mso-border-top-alt:solid black .5pt;mso-border-left-alt:solid black .5pt;
  mso-border-top-alt:solid black .5pt;mso-border-left-alt:solid black .5pt;
  mso-border-bottom-alt:solid black .5pt;padding:0cm 0cm 0cm 0cm;height:34.05pt'>
  <p class=TableParagraph><span lang=ES style='font-size:12.0pt;mso-bidi-font-size:
  11.0pt;font-family:"Times New Roman",serif;mso-hansi-font-family:Calibri;
  mso-bidi-font-family:Calibri'><o:p>&nbsp;</o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:7;height:17.05pt'>
  <td width=210 valign=top style='width:157.75pt;border:solid black 1.0pt;
  border-top:none;mso-border-top-alt:solid black .5pt;mso-border-alt:solid black .5pt;
  mso-border-left-alt:solid black 1.0pt;padding:0cm 0cm 0cm 0cm;height:17.05pt'>
  <p class=TableParagraph style='margin-left:5.5pt;line-height:16.1pt;
  mso-line-height-rule:exactly'><b style='mso-bidi-font-weight:normal'><span
  lang=ES style='font-size:14.0pt;mso-bidi-font-size:11.0pt'>Indicador<span
  style='letter-spacing:-.2pt'> </span>de<span style='letter-spacing:-.05pt'> </span><span
  style='letter-spacing:-.1pt'>logro:</span><o:p></o:p></span></b></p>
  </td>
  <td width=530 valign=top style='width:397.7pt;border:none;border-bottom:solid black 1.0pt;
  mso-border-top-alt:solid black .5pt;mso-border-left-alt:solid black .5pt;
  mso-border-top-alt:solid black .5pt;mso-border-left-alt:solid black .5pt;
  mso-border-bottom-alt:solid black .5pt;padding:0cm 0cm 0cm 0cm;height:17.05pt'>
  <p class=TableParagraph><span lang=ES style='font-size:12.0pt;mso-bidi-font-size:
  11.0pt;font-family:"Times New Roman",serif;mso-hansi-font-family:Calibri;
  mso-bidi-font-family:Calibri'><o:p>&nbsp;</o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:8;height:17.1pt'>
  <td width=210 valign=top style='width:157.75pt;border:solid black 1.0pt;
  border-top:none;mso-border-top-alt:solid black .5pt;mso-border-alt:solid black .5pt;
  mso-border-left-alt:solid black 1.0pt;padding:0cm 0cm 0cm 0cm;height:17.1pt'>
  <p class=TableParagraph style='margin-top:.05pt;margin-right:0cm;margin-bottom:
  0cm;margin-left:5.5pt;margin-bottom:.0001pt;line-height:16.1pt;mso-line-height-rule:
  exactly'><b style='mso-bidi-font-weight:normal'><span lang=ES
  style='font-size:14.0pt;mso-bidi-font-size:11.0pt'>Pr�ctica/Deber<span
  style='letter-spacing:-.35pt'> </span><span style='letter-spacing:-.1pt'>N�mero:</span><o:p></o:p></span></b></p>
  </td>
  <td width=530 valign=top style='width:397.7pt;border:none;border-bottom:solid black 1.0pt;
  mso-border-top-alt:solid black .5pt;mso-border-left-alt:solid black .5pt;
  mso-border-top-alt:solid black .5pt;mso-border-left-alt:solid black .5pt;
  mso-border-bottom-alt:solid black .5pt;padding:0cm 0cm 0cm 0cm;height:17.1pt'>
  <p class=TableParagraph><span lang=ES style='font-size:12.0pt;mso-bidi-font-size:
  11.0pt;font-family:"Times New Roman",serif;mso-hansi-font-family:Calibri;
  mso-bidi-font-family:Calibri'><o:p>&nbsp;</o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:9;height:17.05pt'>
  <td width=210 valign=top style='width:157.75pt;border:solid black 1.0pt;
  border-top:none;mso-border-top-alt:solid black .5pt;mso-border-alt:solid black .5pt;
  mso-border-left-alt:solid black 1.0pt;padding:0cm 0cm 0cm 0cm;height:17.05pt'>
  <p class=TableParagraph style='margin-left:5.5pt;line-height:16.1pt;
  mso-line-height-rule:exactly'><b style='mso-bidi-font-weight:normal'><span
  lang=ES style='font-size:14.0pt;mso-bidi-font-size:11.0pt'>Horas <span
  style='letter-spacing:-.1pt'>Dedicadas:</span><o:p></o:p></span></b></p>
  </td>
  <td width=530 valign=top style='width:397.7pt;border:none;border-bottom:solid black 1.0pt;
  mso-border-top-alt:solid black .5pt;mso-border-left-alt:solid black .5pt;
  mso-border-top-alt:solid black .5pt;mso-border-left-alt:solid black .5pt;
  mso-border-bottom-alt:solid black .5pt;padding:0cm 0cm 0cm 0cm;height:17.05pt'>
  <p class=TableParagraph><span lang=ES style='font-size:12.0pt;mso-bidi-font-size:
  11.0pt;font-family:"Times New Roman",serif;mso-hansi-font-family:Calibri;
  mso-bidi-font-family:Calibri'><o:p>&nbsp;</o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:10;mso-yfti-lastrow:yes;height:437.8pt'>
  <td width=741 colspan=2 valign=top style='width:555.45pt;border-top:none;
  border-left:solid black 1.0pt;border-bottom:solid black 1.0pt;border-right:
  none;mso-border-top-alt:solid black .5pt;mso-border-top-alt:solid black .5pt;
  mso-border-left-alt:solid black 1.0pt;mso-border-bottom-alt:solid black .5pt;
  padding:0cm 0cm 0cm 0cm;height:437.8pt'>
  <p class=TableParagraph style='margin-left:5.5pt;line-height:17.05pt;
  mso-line-height-rule:exactly'><b style='mso-bidi-font-weight:normal'><span
  lang=ES style='font-size:14.0pt;mso-bidi-font-size:11.0pt'>DESCRIPCI�N<span
  style='letter-spacing:-.15pt'> </span>DE<span style='letter-spacing:-.15pt'> </span>LA<span
  style='letter-spacing:-.15pt'> </span><span style='letter-spacing:-.1pt'>PR�CTICA:</span><o:p></o:p></span></b></p>
  <p class=TableParagraph style='margin-top:0cm;margin-right:-.35pt;margin-bottom:
  0cm;margin-left:59.45pt;margin-bottom:.0001pt;line-height:108%'><span
  lang=ES>Analice<span style='letter-spacing:-.25pt'> </span>las<span
  style='letter-spacing:-.1pt'> </span>clases<span style='letter-spacing:-.1pt'>
  </span>creadas<span style='letter-spacing:-.1pt'> </span>en<span
  style='letter-spacing:-.15pt'> </span>la<span style='letter-spacing:-.05pt'> </span>pr�ctica<span
  style='letter-spacing:-.05pt'> </span>e<span style='letter-spacing:-.25pt'> </span>identifique<span
  style='letter-spacing:-.25pt'> </span>cuales<span style='letter-spacing:-.1pt'>
  </span>son<span style='letter-spacing:-.15pt'> </span>los<span
  style='letter-spacing:-.1pt'> </span>atributos<span style='letter-spacing:
  -.1pt'> </span>y<span style='letter-spacing:-.15pt'> </span>m�todos,<span
  style='letter-spacing:-.1pt'> </span>y<span style='letter-spacing:-.15pt'> </span>construya<span
  style='letter-spacing:-.25pt'> </span>el<span style='letter-spacing:-.1pt'> </span><span
  class=SpellE>diagram</span> clases con sus correspondientes clases, si es un
  algoritmo coloque su flujograma correspondiente.</span></p>
  <p class=TableParagraph style='margin-top:.1pt;margin-right:0cm;margin-bottom:
  0cm;margin-left:65.3pt;margin-bottom:.0001pt'><!--[if gte vml 1]><v:group
   id="Group_x0020_1" o:spid="_x0000_s1032" style='position:absolute;left:0;
   text-align:left;margin-left:59.5pt;margin-top:-.2pt;width:468.2pt;height:376.9pt;
   z-index:-15902720;mso-wrap-distance-left:0;mso-wrap-distance-right:0'
   coordsize="59461,47866" o:gfxdata="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
BAUGBwgJCgv/xAC1EAACAQMDAgQDBQUEBAAAAX0BAgMABBEFEiExQQYTUWEHInEUMoGRoQgjQrHB
FVLR8CQzYnKCCQoWFxgZGiUmJygpKjQ1Njc4OTpDREVGR0hJSlNUVVZXWFlaY2RlZmdoaWpzdHV2
d3h5eoOEhYaHiImKkpOUlZaXmJmaoqOkpaanqKmqsrO0tba3uLm6wsPExcbHyMnK0tPU1dbX2Nna
4eLj5OXm5+jp6vHy8/T19vf4+fr/xAAfAQADAQEBAQEBAQEBAAAAAAAAAQIDBAUGBwgJCgv/xAC1
EQACAQIEBAMEBwUEBAABAncAAQIDEQQFITEGEkFRB2FxEyIygQgUQpGhscEJIzNS8BVictEKFiQ0
4SXxFxgZGiYnKCkqNTY3ODk6Q0RFRkdISUpTVFVWV1hZWmNkZWZnaGlqc3R1dnd4eXqCg4SFhoeI
iYqSk5SVlpeYmZqio6Slpqeoqaqys7S1tre4ubrCw8TFxsfIycrS09TV1tfY2dri4+Tl5ufo6ery
8/T19vf4+fr/2gAMAwEAAhEDEQA/AP1TooooAKKKKACiiigAorzn9oTUb7TPhLq8unX9zpd3JPZ2
4u7OTy5o1lu4Y32N1UlXYZHIzkc1z+q/DbQdGvzZXHjX4htciNZiltrF/PtRiwUkxhgMlW6+lO1w
PZqK8h0T4T6N4hiuJLLxt4+YW8vkyrNr15CyPtVsFXwfuup6d60f+FEWf/Q5+Ov/AApbn/4qkB6b
RXmX/CiLP/oc/HX/AIUtz/8AFUf8KIs/+hz8df8AhS3P/wAVQB6bRXmX/CiLP/oc/HX/AIUtz/8A
FUf8KIs/+hz8df8AhS3P/wAVQB6bRXmX/CiLP/oc/HX/AIUtz/8AFUf8KIs/+hz8df8AhS3P/wAV
QB6bRXmX/CiLP/oc/HX/AIUtz/8AFUf8KIs/+hz8df8AhS3P/wAVQB6bRXmX/CiLP/oc/HX/AIUt
z/8AFUf8KIs/+hz8df8AhS3P/wAVQB6bRXlHwctrvRPGvxH0CTWtW1mw02+s/sjaxePdSxCSzid1
DvzjcSce5r1egAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiii
gAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigDyn9pTTrbWPAOk6feRCezu/FGg2
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
p5ZuJvs9wY5iqsYlP3fWdHk1rxf8U7HxbYaFPYWtj4ehsXh1mOawZ5LqeKaZRuiJJgihHAGC8mws
mGI9gooAKKKKACiiigAooooAKKKKACiiigDzL4Ef8g3xn/2N2r/+lLV6bXmXwI/5BvjP/sbtX/8A
Slq9NoAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKA
CiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAK
KKKACiiigDzL9mj/AJIR4M/68R/6G1em15l+zR/yQjwZ/wBeI/8AQ2r02gAooooAKKKKACiiigAo
oooAK5zVvh54c13xloniu/0qG58Q6LFPBp98xYNAkwAlUAHByFH3gcc4xk56OigDy3T/ANmP4baX
LcvB4ekxNLDKkc2pXcsdqIrkXUcdsjylbaITKrmKEJGSq5UgAVf8JfADwL4G8YN4n0XR57TV9lzH
Ez6ldSwW6XEiyzpBA8rRQq8iKxWNFGRnHJr0OigAooooAKKKKACiiigAooooAKKKKACiiigAoooo
A8y+BH/IN8Z/9jdq/wD6UtXpteZfAj/kG+M/+xu1f/0pavTaACiiigAooooAKKKKACiiigAooooA
KKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAo
oooAKKKKACiiigAooooAKKKKACiiigAooooAKKKKACiiigAooooA+K2sJvC00+k6RrXiDTtMtJpI
re1t9dvVjiQOcKo83gUf2hq//QzeJf8AwoL3/wCO0UUAH9oav/0M3iX/AMKC9/8AjtH9oav/ANDN
4l/8KC9/+O0UUAH9oav/ANDN4l/8KC9/+O0f2hq//QzeJf8AwoL3/wCO0UUAH9oav/0M3iX/AMKC
9/8AjtH9oav/ANDN4l/8KC9/+O0UUAH9oav/ANDN4l/8KC9/+O0f2hq//QzeJf8AwoL3/wCO0UUA
H9oav/0M3iX/AMKC9/8AjtH9oav/ANDN4l/8KC9/+O0UUAH9oav/ANDN4l/8KC9/+O0f2hq//Qze
Jf8AwoL3/wCO0UUAH9oav/0M3iX/AMKC9/8AjtH9oav/ANDN4l/8KC9/+O0UUAH9oav/ANDN4l/8
KC9/+O0f2hq//QzeJf8AwoL3/wCO0UUAH9oav/0M3iX/AMKC9/8AjtH9oav/ANDN4l/8KC9/+O0U
UAH9oav/ANDN4l/8KC9/+O0f2hq//QzeJf8AwoL3/wCO0UUAH9oav/0M3iX/AMKC9/8AjtH9oav/
ANDN4l/8KC9/+O0UUAH9oav/ANDN4l/8KC9/+O0f2hq//QzeJf8AwoL3/wCO0UUAH9oav/0M3iX/
AMKC9/8AjtH9oav/ANDN4l/8KC9/+O0UUAfR/wAAtFtdF+Glmbbz2kvLm6vLiW5uJJ5JZnncu7PI
zMSfrXotFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFAB
RRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFFFFABRRRQAUUUUAFF
FFABRRRQAUUUUAf/2VBLAwQUAAYACAAAACEAvRkpX+EAAAAKAQAADwAAAGRycy9kb3ducmV2Lnht
bEyPQU/CQBCF7yb+h82YeINthSrWbgkh6omQCCbE29Id2obubNNd2vLvHU56m5f38uZ72XK0jeix
87UjBfE0AoFUOFNTqeB7/zFZgPBBk9GNI1RwRQ/L/P4u06lxA31hvwul4BLyqVZQhdCmUvqiQqv9
1LVI7J1cZ3Vg2ZXSdHrgctvIpyh6llbXxB8q3eK6wuK8u1gFn4MeVrP4vd+cT+vrzz7ZHjYxKvX4
MK7eQAQcw18YbviMDjkzHd2FjBcN6/iVtwQFkzmImx8lCV9HBS/JbA4yz+T/CfkvAAAA//8DAFBL
AwQUAAYACAAAACEAWGCzG7oAAAAiAQAAGQAAAGRycy9fcmVscy9lMm9Eb2MueG1sLnJlbHOEj8sK
wjAQRfeC/xBmb9O6EJGmbkRwK/UDhmSaRpsHSRT79wbcKAgu517uOUy7f9qJPSgm452ApqqBkZNe
GacFXPrjagssZXQKJ+9IwEwJ9t1y0Z5pwlxGaTQhsUJxScCYc9hxnuRIFlPlA7nSDD5azOWMmgeU
N9TE13W94fGTAd0Xk52UgHhSDbB+DsX8n+2HwUg6eHm35PIPBTe2uAsQo6YswJIy+A6b6hpIA+9a
/vVZ9wIAAP//AwBQSwECLQAUAAYACAAAACEAihU/mAwBAAAVAgAAEwAAAAAAAAAAAAAAAAAAAAAA
W0NvbnRlbnRfVHlwZXNdLnhtbFBLAQItABQABgAIAAAAIQA4/SH/1gAAAJQBAAALAAAAAAAAAAAA
AAAAAD0BAABfcmVscy8ucmVsc1BLAQItABQABgAIAAAAIQBFeXGluwMAABULAAAOAAAAAAAAAAAA
AAAAADwCAABkcnMvZTJvRG9jLnhtbFBLAQItAAoAAAAAAAAAIQCxuCUjLa0AAC2tAAAVAAAAAAAA
AAAAAAAAACMGAABkcnMvbWVkaWEvaW1hZ2UxLmpwZWdQSwECLQAUAAYACAAAACEAvRkpX+EAAAAK
AQAADwAAAAAAAAAAAAAAAACDswAAZHJzL2Rvd25yZXYueG1sUEsBAi0AFAAGAAgAAAAhAFhgsxu6
AAAAIgEAABkAAAAAAAAAAAAAAAAAkbQAAGRycy9fcmVscy9lMm9Eb2MueG1sLnJlbHNQSwUGAAAA
AAYABgB9AQAAgrUAAAAA
">
   <v:shape id="Graphic_x0020_2" o:spid="_x0000_s1033" style='position:absolute;
    width:59461;height:47866;visibility:visible;mso-wrap-style:square;
    v-text-anchor:top' coordsize="5946140,4786630" o:gfxdata="UEsDBBQABgAIAAAAIQDb4fbL7gAAAIUBAAATAAAAW0NvbnRlbnRfVHlwZXNdLnhtbHyQz07DMAyH
70i8Q+QralM4IITa7kDhCAiNB7ASt43WOlEcyvb2pNu4IODoPz9/n1xv9vOkForiPDdwXVagiI23
jocG3rdPxR0oScgWJ8/UwIEENu3lRb09BBKV0ywNjCmFe63FjDSjlD4Q50nv44wpl3HQAc0OB9I3
VXWrjedEnIq03oC27qjHjympx31un0wiTQLq4bS4shrAECZnMGVTvbD9QSnOhDInjzsyuiBXWQP0
r4R18jfgnHvJr4nOknrFmJ5xzhraRtHWf3Kkpfz/yGo5S+H73hkquyhdjr3R8m2lj09svwAAAP//
AwBQSwMEFAAGAAgAAAAhAFr0LFu/AAAAFQEAAAsAAABfcmVscy8ucmVsc2zPwWrDMAwG4Ptg72B0
X5TuUMaI01uh19I+gLGVxCy2jGSy9e1nemrHjpL4P0nD4SetZiPRyNnCruvBUPYcYp4tXC/Htw8w
Wl0ObuVMFm6kcBhfX4Yzra62kC6xqGlKVgtLreUTUf1CyWnHhXKbTCzJ1VbKjMX5LzcTvvf9HuXR
gPHJNKdgQU5hB+ZyK23zHztFL6w81c5zQp6m6P9TMfB3PtPWFCczVQtB9N4U2rp2HOA44NMz4y8A
AAD//wMAUEsDBBQABgAIAAAAIQBtq2PiwQAAANoAAAAPAAAAZHJzL2Rvd25yZXYueG1sRI9Bi8Iw
FITvC/6H8ARva2oPUqpRRBAV3YVV8fxsnm2weSlN1PrvzcLCHoeZ+YaZzjtbiwe13jhWMBomIIgL
pw2XCk7H1WcGwgdkjbVjUvAiD/NZ72OKuXZP/qHHIZQiQtjnqKAKocml9EVFFv3QNcTRu7rWYoiy
LaVu8RnhtpZpkoylRcNxocKGlhUVt8PdKtiPt5fiYrP1LtNfifnO0ru5npUa9LvFBESgLvyH/9ob
rSCF3yvxBsjZGwAA//8DAFBLAQItABQABgAIAAAAIQDb4fbL7gAAAIUBAAATAAAAAAAAAAAAAAAA
AAAAAABbQ29udGVudF9UeXBlc10ueG1sUEsBAi0AFAAGAAgAAAAhAFr0LFu/AAAAFQEAAAsAAAAA
AAAAAAAAAAAAHwEAAF9yZWxzLy5yZWxzUEsBAi0AFAAGAAgAAAAhAG2rY+LBAAAA2gAAAA8AAAAA
AAAAAAAAAAAABwIAAGRycy9kb3ducmV2LnhtbFBLBQYAAAAAAwADALcAAAD1AgAAAAA=
" path="m5080,l,,,5080,,7556,,4781486r,5080l5080,4786566,5080,12r,-12xem5945619,r-5067,l5207,12r,5068l5940552,5080r,2476l5940552,4781486r-5935345,l5207,4786566r5935345,l5945619,4786566r,-4786554l5945619,xe"
    fillcolor="black" stroked="f">
    <v:path arrowok="t"/>
   </v:shape><v:shapetype id="_x0000_t75" coordsize="21600,21600" o:spt="75"
    o:preferrelative="t" path="m@4@5l@4@11@9@11@9@5xe" filled="f" stroked="f">
    <v:stroke joinstyle="miter"/>
    <v:formulas>
     <v:f eqn="if lineDrawn pixelLineWidth 0"/>
     <v:f eqn="sum @0 1 0"/>
     <v:f eqn="sum 0 0 @1"/>
     <v:f eqn="prod @2 1 2"/>
     <v:f eqn="prod @3 21600 pixelWidth"/>
     <v:f eqn="prod @3 21600 pixelHeight"/>
     <v:f eqn="sum @0 0 1"/>
     <v:f eqn="prod @6 1 2"/>
     <v:f eqn="prod @7 21600 pixelWidth"/>
     <v:f eqn="sum @8 21600 0"/>
     <v:f eqn="prod @7 21600 pixelHeight"/>
     <v:f eqn="sum @10 21600 0"/>
    </v:formulas>
    <v:path o:extrusionok="f" gradientshapeok="t" o:connecttype="rect"/>
    <o:lock v:ext="edit" aspectratio="t"/>
   </v:shapetype><v:shape id="Image_x0020_3" o:spid="_x0000_s1034" type="#_x0000_t75"
    style='position:absolute;left:5287;top:8984;width:49387;height:26027;
    visibility:visible;mso-wrap-style:square' o:gfxdata="UEsDBBQABgAIAAAAIQDb4fbL7gAAAIUBAAATAAAAW0NvbnRlbnRfVHlwZXNdLnhtbHyQz07DMAyH
70i8Q+QralM4IITa7kDhCAiNB7ASt43WOlEcyvb2pNu4IODoPz9/n1xv9vOkForiPDdwXVagiI23
jocG3rdPxR0oScgWJ8/UwIEENu3lRb09BBKV0ywNjCmFe63FjDSjlD4Q50nv44wpl3HQAc0OB9I3
VXWrjedEnIq03oC27qjHjympx31un0wiTQLq4bS4shrAECZnMGVTvbD9QSnOhDInjzsyuiBXWQP0
r4R18jfgnHvJr4nOknrFmJ5xzhraRtHWf3Kkpfz/yGo5S+H73hkquyhdjr3R8m2lj09svwAAAP//
AwBQSwMEFAAGAAgAAAAhAFr0LFu/AAAAFQEAAAsAAABfcmVscy8ucmVsc2zPwWrDMAwG4Ptg72B0
X5TuUMaI01uh19I+gLGVxCy2jGSy9e1nemrHjpL4P0nD4SetZiPRyNnCruvBUPYcYp4tXC/Htw8w
Wl0ObuVMFm6kcBhfX4Yzra62kC6xqGlKVgtLreUTUf1CyWnHhXKbTCzJ1VbKjMX5LzcTvvf9HuXR
gPHJNKdgQU5hB+ZyK23zHztFL6w81c5zQp6m6P9TMfB3PtPWFCczVQtB9N4U2rp2HOA44NMz4y8A
AAD//wMAUEsDBBQABgAIAAAAIQBdfLa6wwAAANoAAAAPAAAAZHJzL2Rvd25yZXYueG1sRI/NasMw
EITvhbyD2EBvjZwWTHGiBBPj4ksD+XmAxdrYTqyVa6m226evAoEeh5n5hllvJ9OKgXrXWFawXEQg
iEurG64UnE/5yzsI55E1tpZJwQ852G5mT2tMtB35QMPRVyJA2CWooPa+S6R0ZU0G3cJ2xMG72N6g
D7KvpO5xDHDTytcoiqXBhsNCjR3taipvx2+jIB1wcNk++80/b+lHfC28/Bq1Us/zKV2B8DT5//Cj
XWgFb3C/Em6A3PwBAAD//wMAUEsBAi0AFAAGAAgAAAAhANvh9svuAAAAhQEAABMAAAAAAAAAAAAA
AAAAAAAAAFtDb250ZW50X1R5cGVzXS54bWxQSwECLQAUAAYACAAAACEAWvQsW78AAAAVAQAACwAA
AAAAAAAAAAAAAAAfAQAAX3JlbHMvLnJlbHNQSwECLQAUAAYACAAAACEAXXy2usMAAADaAAAADwAA
AAAAAAAAAAAAAAAHAgAAZHJzL2Rvd25yZXYueG1sUEsFBgAAAAADAAMAtwAAAPcCAAAAAA==
">
    <v:imagedata src="PRACTICA%206%20APLICACION%20MVC%20Jordy%20Roblero%20(3)_archivos/image001.jpg"
     o:title=""/>
   </v:shape></v:group><![endif]--><![if !vml]><span style='mso-ignore:vglayout;
  position:absolute;z-index:-1660069888;left:0px;margin-left:107px;margin-top:
  105px;width:781px;height:629px'><img width=625 height=503
  src="PRACTICA%206%20APLICACION%20MVC%20Jordy%20Roblero%20(3)_archivos/image002.gif"
  v:shapes="Group_x0020_1 Graphic_x0020_2 Image_x0020_3"></span><![endif]><span
  lang=ES>//Insertar<span style='letter-spacing:-.1pt'> </span>el<span
  style='letter-spacing:-.15pt'> </span>diagrama<span style='letter-spacing:
  -.25pt'> </span>de<span style='letter-spacing:-.1pt'> </span>clases /<span
  style='letter-spacing:-.1pt'> </span>o<span style='letter-spacing:-.15pt'> </span><span
  style='letter-spacing:-.1pt'>flujograma</span></span></p>
  </td>
 </tr>
</table>

</div>

</div>

<span lang=ES style='font-size:11.0pt;font-family:"Calibri",sans-serif;
mso-fareast-font-family:Calibri;mso-ansi-language:ES;mso-fareast-language:EN-US;
mso-bidi-language:AR-SA'><br clear=all style='page-break-before:auto;
mso-break-type:section-break'>
</span>

<div class=WordSection2>

<div align=right>

<table class=TableNormal border=1 cellspacing=0 cellpadding=0 width=0
 style='border-collapse:collapse;mso-table-layout-alt:fixed;border:none;
 mso-border-alt:solid black .5pt;mso-yfti-tbllook:480;mso-padding-alt:0cm 0cm 0cm 0cm;
 mso-border-insideh:.5pt solid black;mso-border-insidev:.5pt solid black'>
 <tr style='mso-yfti-irow:0;mso-yfti-firstrow:yes;height:14.5pt'>
  <td width=741 colspan=5 valign=top style='width:555.4pt;border-top:solid black 1.0pt;
  border-left:solid black 1.0pt;border-bottom:none;border-right:none;
  mso-border-top-alt:solid black .5pt;mso-border-left-alt:solid black 1.0pt;
  padding:0cm 0cm 0cm 0cm;height:14.5pt'>
  <p class=TableParagraph style='margin-top:.05pt;margin-right:0cm;margin-bottom:
  0cm;margin-left:41.5pt;margin-bottom:.0001pt;line-height:13.4pt;mso-line-height-rule:
  exactly'><span lang=ES>1.1<span style='letter-spacing:1.25pt'> </span>En<span
  style='letter-spacing:-.1pt'> </span>base<span style='letter-spacing:-.25pt'>
  </span>al<span style='letter-spacing:-.05pt'> </span>diagrama<span
  style='letter-spacing:-.25pt'> </span>de<span style='letter-spacing:-.05pt'> </span>clases<span
  style='letter-spacing:-.1pt'> </span>generado/algoritmo,<span
  style='letter-spacing:-.1pt'> </span>construir<span style='letter-spacing:
  -.2pt'> </span>la<span style='letter-spacing:-.2pt'> </span><span
  style='letter-spacing:-.1pt'>aplicaci�n</span></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:1;height:13.5pt'>
  <td width=56 rowspan=6 valign=top style='width:41.7pt;border:solid black 1.0pt;
  border-top:none;mso-border-left-alt:solid black 1.0pt;mso-border-bottom-alt:
  solid black .5pt;mso-border-right-alt:solid black .5pt;padding:0cm 0cm 0cm 0cm;
  height:13.5pt'>
  <p class=TableParagraph><span lang=ES style='font-size:10.0pt;mso-bidi-font-size:
  11.0pt;font-family:"Times New Roman",serif;mso-hansi-font-family:Calibri;
  mso-bidi-font-family:Calibri'><o:p>&nbsp;</o:p></span></p>
  </td>
  <td width=48 valign=top style='width:35.8pt;border-top:solid black 1.0pt;
  border-left:none;border-bottom:solid black 1.0pt;border-right:none;
  mso-border-left-alt:solid black .5pt;mso-border-top-alt:solid black .5pt;
  mso-border-left-alt:solid black .5pt;mso-border-bottom-alt:solid black .5pt;
  padding:0cm 0cm 0cm 0cm;height:13.5pt'>
  <p class=TableParagraph style='margin-top:.05pt;margin-right:.75pt;
  margin-bottom:0cm;margin-left:5.8pt;margin-bottom:.0001pt;line-height:12.4pt;
  mso-line-height-rule:exactly'><span lang=ES style='letter-spacing:-.1pt'>CLASE:</span></p>
  </td>
  <td width=96 valign=top style='width:72.0pt;border-top:solid black 1.0pt;
  border-left:none;border-bottom:solid black 1.0pt;border-right:none;
  mso-border-top-alt:solid black .5pt;mso-border-bottom-alt:solid black .5pt;
  background:lightgrey;padding:0cm 0cm 0cm 0cm;height:13.5pt'>
  <p class=TableParagraph style='margin-top:2.2pt;margin-right:.75pt;
  margin-bottom:0cm;margin-left:6.5pt;margin-bottom:.0001pt;line-height:10.25pt;
  mso-line-height-rule:exactly'><span lang=ES style='font-size:10.0pt;
  mso-bidi-font-size:11.0pt;font-family:"Courier New";mso-hansi-font-family:
  Calibri;mso-bidi-font-family:Calibri;color:black;mso-color-alt:windowtext;
  letter-spacing:-.1pt'>cliente.cpp</span><span lang=ES style='font-size:10.0pt;
  mso-bidi-font-size:11.0pt;font-family:"Courier New";mso-hansi-font-family:
  Calibri;mso-bidi-font-family:Calibri'><o:p></o:p></span></p>
  </td>
  <td width=432 valign=top style='width:323.9pt;border:solid black 1.0pt;
  border-left:none;mso-border-top-alt:solid black .5pt;mso-border-bottom-alt:
  solid black .5pt;mso-border-right-alt:solid black .5pt;padding:0cm 0cm 0cm 0cm;
  height:13.5pt'>
  <p class=TableParagraph><span lang=ES style='font-size:10.0pt;mso-bidi-font-size:
  11.0pt;font-family:"Times New Roman",serif;mso-hansi-font-family:Calibri;
  mso-bidi-font-family:Calibri'><o:p>&nbsp;</o:p></span></p>
  </td>
  <td width=109 rowspan=6 valign=top style='width:82.0pt;border:none;
  border-bottom:solid black 1.0pt;mso-border-left-alt:solid black .5pt;
  mso-border-left-alt:solid black .5pt;mso-border-bottom-alt:solid black .5pt;
  padding:0cm 0cm 0cm 0cm;height:13.5pt'>
  <p class=TableParagraph><span lang=ES style='font-size:10.0pt;mso-bidi-font-size:
  11.0pt;font-family:"Times New Roman",serif;mso-hansi-font-family:Calibri;
  mso-bidi-font-family:Calibri'><o:p>&nbsp;</o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:2;height:188.1pt'>
  <td width=576 colspan=3 valign=top style='width:431.7pt;border-top:none;
  border-left:none;border-bottom:solid black 1.0pt;border-right:solid black 1.0pt;
  mso-border-top-alt:solid black .5pt;mso-border-left-alt:solid black .5pt;
  mso-border-alt:solid black .5pt;padding:0cm 0cm 0cm 0cm;height:188.1pt'>
  <p class=TableParagraph style='margin-top:.05pt;margin-right:297.85pt;
  margin-bottom:0cm;margin-left:41.85pt;margin-bottom:.0001pt'><span lang=ES>#include<span
  style='letter-spacing:-.05pt'> </span>&quot;<span class=SpellE>Cliente.h</span>&quot;
  #include<span style='letter-spacing:-.65pt'> </span>&lt;iostream&gt;</span></p>
  <p class=TableParagraph style='margin-top:.7pt'><span lang=ES
  style='font-family:"Times New Roman",serif;mso-hansi-font-family:Calibri;
  mso-bidi-font-family:Calibri'><o:p>&nbsp;</o:p></span></p>
  <p class=TableParagraph align=center style='margin-right:118.1pt;text-align:
  center'><span class=GramE><span lang=ES>Cliente::</span></span><span lang=ES>Cliente(<span
  class=SpellE>string</span><span style='letter-spacing:-.2pt'> </span>d,<span
  style='letter-spacing:-.15pt'> </span><span class=SpellE>string</span><span
  style='letter-spacing:-.2pt'> </span>n,<span style='letter-spacing:-.15pt'> </span><span
  class=SpellE>string</span><span style='letter-spacing:-.2pt'> </span>t,<span
  style='letter-spacing:-.15pt'> </span><span class=SpellE>string</span><span
  style='letter-spacing:-.15pt'> </span><span class=SpellE><span
  style='letter-spacing:-.2pt'>dir</span></span><span style='letter-spacing:
  -.2pt'>)</span></span></p>
  <p class=TableParagraph align=center style='margin-top:0cm;margin-right:118.1pt;
  margin-bottom:0cm;margin-left:3.25pt;margin-bottom:.0001pt;text-align:center'><span
  lang=ES>:<span style='letter-spacing:-.25pt'> </span><span class=SpellE>dni</span>(d),<span
  style='letter-spacing:-.25pt'> </span>nombre(n),<span style='letter-spacing:
  -.2pt'> </span><span class=SpellE>telefono</span>(t),<span style='letter-spacing:
  -.25pt'> </span><span class=SpellE>direccion</span>(<span class=SpellE>dir</span>)<span
  style='letter-spacing:-.2pt'> </span><span style='letter-spacing:-.25pt'>{}</span></span></p>
  <p class=TableParagraph style='margin-top:.7pt'><span lang=ES
  style='font-family:"Times New Roman",serif;mso-hansi-font-family:Calibri;
  mso-bidi-font-family:Calibri'><o:p>&nbsp;</o:p></span></p>
  <p class=TableParagraph style='margin-top:.05pt;margin-right:228.55pt;
  margin-bottom:0cm;margin-left:51.65pt;margin-bottom:.0001pt;text-indent:-9.8pt;
  line-height:100%'><span class=SpellE><span lang=ES>string</span></span><span
  lang=ES style='letter-spacing:-.65pt'> </span><span class=GramE><span
  lang=ES>Cliente::</span></span><span class=SpellE><span lang=ES>getDNI</span></span><span
  lang=ES>()<span style='letter-spacing:-.6pt'> </span><span class=SpellE>const</span><span
  style='letter-spacing:-.65pt'> </span>{ <span class=SpellE>return</span> <span
  class=SpellE>dni</span>;</span></p>
  <p class=TableParagraph style='margin-left:41.85pt;line-height:13.3pt;
  mso-line-height-rule:exactly'><span lang=ES style='letter-spacing:-.5pt'>}</span></p>
  <p class=TableParagraph style='margin-top:.7pt'><span lang=ES
  style='font-family:"Times New Roman",serif;mso-hansi-font-family:Calibri;
  mso-bidi-font-family:Calibri'><o:p>&nbsp;</o:p></span></p>
  <p class=TableParagraph style='margin-left:41.85pt;line-height:13.4pt;
  mso-line-height-rule:exactly'><span class=SpellE><span lang=ES>void</span></span><span
  lang=ES style='letter-spacing:-.4pt'> </span><span class=GramE><span lang=ES>Cliente::</span></span><span
  class=SpellE><span lang=ES>mostrarDatos</span></span><span lang=ES>()<span
  style='letter-spacing:-.35pt'> </span><span class=SpellE>const</span><span
  style='letter-spacing:-.45pt'> </span><span style='letter-spacing:-.5pt'>{</span></span></p>
  <p class=TableParagraph style='margin-left:51.65pt;line-height:13.4pt;
  mso-line-height-rule:exactly'><span class=SpellE><span lang=ES>cout</span></span><span
  lang=ES style='letter-spacing:-.1pt'> </span><span lang=ES>&lt;&lt;<span
  style='letter-spacing:-.2pt'> </span>&quot;DNI: &quot;<span style='letter-spacing:
  -.1pt'> </span>&lt;&lt;<span style='letter-spacing:-.2pt'> </span><span
  class=SpellE>dni</span> &lt;&lt;<span style='letter-spacing:-.2pt'> </span>&quot;,<span
  style='letter-spacing:-.05pt'> </span>Nombre: &quot;<span style='letter-spacing:
  .05pt'> </span>&lt;&lt;<span style='letter-spacing:-.2pt'> </span>nombre<span
  style='letter-spacing:-.15pt'> </span>&lt;&lt;<span style='letter-spacing:
  -.2pt'> </span>&quot;,<span style='letter-spacing:-.05pt'> </span>Tel�fono:
  &quot;<span style='letter-spacing:.05pt'> </span>&lt;&lt;<span
  style='letter-spacing:.05pt'> </span><span class=SpellE><span
  style='letter-spacing:-.1pt'>telefono</span></span></span></p>
  <p class=TableParagraph style='margin-left:76.45pt;line-height:13.4pt;
  mso-line-height-rule:exactly'><span lang=ES>&lt;&lt;<span style='letter-spacing:
  -.25pt'> </span>&quot;,<span style='letter-spacing:.05pt'> </span>Direcci�n:<span
  style='letter-spacing:-.1pt'> </span>&quot;<span style='letter-spacing:.05pt'>
  </span>&lt;&lt;<span style='letter-spacing:-.25pt'> </span><span
  class=SpellE>direccion</span><span style='letter-spacing:-.15pt'> </span>&lt;&lt;
  <span class=SpellE><span style='letter-spacing:-.2pt'>endl</span></span><span
  style='letter-spacing:-.2pt'>;</span></span></p>
  <p class=TableParagraph style='margin-left:5.8pt;line-height:12.6pt;
  mso-line-height-rule:exactly'><span lang=ES style='letter-spacing:-.5pt'>}</span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:3;height:13.3pt'>
  <td width=576 colspan=3 valign=top style='width:431.7pt;border-top:none;
  border-left:none;border-bottom:solid black 1.0pt;border-right:solid black 1.0pt;
  mso-border-top-alt:solid black .5pt;mso-border-left-alt:solid black .5pt;
  mso-border-alt:solid black .5pt;padding:0cm 0cm 0cm 0cm;height:13.3pt'>
  <p class=TableParagraph style='margin-left:5.8pt;line-height:12.3pt;
  mso-line-height-rule:exactly'><span lang=ES>CLASE:<span style='letter-spacing:
  -.25pt'> </span><span class=SpellE><span style='letter-spacing:-.1pt'>cliente.h</span></span></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:4;height:228.3pt'>
  <td width=576 colspan=3 valign=top style='width:431.7pt;border-top:none;
  border-left:none;border-bottom:solid black 1.0pt;border-right:solid black 1.0pt;
  mso-border-top-alt:solid black .5pt;mso-border-left-alt:solid black .5pt;
  mso-border-alt:solid black .5pt;padding:0cm 0cm 0cm 0cm;height:228.3pt'>
  <p class=TableParagraph style='margin-top:.05pt;margin-right:273.45pt;
  margin-bottom:0cm;margin-left:41.85pt;margin-bottom:.0001pt;text-indent:-36.05pt'><span
  lang=ES>//Insertar<span style='letter-spacing:-.35pt'> </span>el<span
  style='letter-spacing:-.45pt'> </span>c�digo<span style='letter-spacing:-.5pt'>
  </span>de<span style='letter-spacing:-.4pt'> </span>la<span style='letter-spacing:
  -.4pt'> </span>clase #ifndef CLIENTE_H #define CLIENTE_H</span></p>
  <p class=TableParagraph style='margin-top:.7pt'><span lang=ES
  style='font-family:"Times New Roman",serif;mso-hansi-font-family:Calibri;
  mso-bidi-font-family:Calibri'><o:p>&nbsp;</o:p></span></p>
  <p class=TableParagraph style='margin-top:0cm;margin-right:293.55pt;
  margin-bottom:0cm;margin-left:41.85pt;margin-bottom:.0001pt'><span lang=ES>#include
  &lt;<span class=SpellE>string</span>&gt; <span class=SpellE>using</span><span
  style='letter-spacing:-.65pt'> </span><span class=SpellE>namespace</span><span
  style='letter-spacing:-.6pt'> </span><span class=SpellE>std</span>; <span
  class=SpellE>class</span> Cliente <span class=GramE>{<span style='letter-spacing:
  2.0pt'> </span><span class=SpellE><span style='letter-spacing:-.1pt'>private</span></span></span><span
  style='letter-spacing:-.1pt'>:</span></span></p>
  <p class=TableParagraph style='margin-top:.1pt;margin-right:0cm;margin-bottom:
  0cm;margin-left:49.05pt;margin-bottom:.0001pt'><span class=SpellE><span
  lang=ES>string</span></span><span lang=ES style='letter-spacing:-.3pt'> </span><span
  class=SpellE><span lang=ES>dni</span></span><span lang=ES>,<span
  style='letter-spacing:-.15pt'> </span>nombre,<span style='letter-spacing:
  -.05pt'> </span><span class=SpellE>telefono</span>,<span style='letter-spacing:
  -.1pt'> <span class=SpellE>direccion</span>;</span></span></p>
  <p class=TableParagraph style='margin-top:.7pt'><span lang=ES
  style='font-family:"Times New Roman",serif;mso-hansi-font-family:Calibri;
  mso-bidi-font-family:Calibri'><o:p>&nbsp;</o:p></span></p>
  <p class=TableParagraph style='margin-left:41.85pt;line-height:13.4pt;
  mso-line-height-rule:exactly'><span class=SpellE><span lang=ES
  style='letter-spacing:-.1pt'>public</span></span><span lang=ES
  style='letter-spacing:-.1pt'>:</span></p>
  <p class=TableParagraph style='margin-top:0cm;margin-right:169.4pt;
  margin-bottom:0cm;margin-left:51.65pt;margin-bottom:.0001pt'><span
  class=GramE><span lang=ES>Cliente(</span></span><span class=SpellE><span
  lang=ES>string</span></span><span lang=ES style='letter-spacing:-.35pt'> </span><span
  lang=ES>d,<span style='letter-spacing:-.3pt'> </span><span class=SpellE>string</span><span
  style='letter-spacing:-.35pt'> </span>n,<span style='letter-spacing:-.3pt'> </span><span
  class=SpellE>string</span><span style='letter-spacing:-.35pt'> </span>t,<span
  style='letter-spacing:-.1pt'> </span><span class=SpellE>string</span><span
  style='letter-spacing:-.35pt'> </span><span class=SpellE>dir</span>); <span
  class=SpellE>string</span> <span class=SpellE>getDNI</span>() <span
  class=SpellE>const</span>;</span></p>
  <p class=TableParagraph style='margin-left:51.65pt;line-height:13.4pt;
  mso-line-height-rule:exactly'><span class=SpellE><span lang=ES>void</span></span><span
  lang=ES style='letter-spacing:-.25pt'> </span><span class=SpellE><span
  class=GramE><span lang=ES>mostrarDatos</span></span></span><span class=GramE><span
  lang=ES>(</span></span><span lang=ES>)<span style='letter-spacing:-.15pt'> </span><span
  class=SpellE><span style='letter-spacing:-.1pt'>const</span></span><span
  style='letter-spacing:-.1pt'>;</span></span></p>
  <p class=TableParagraph style='margin-top:.2pt;margin-right:0cm;margin-bottom:
  0cm;margin-left:41.85pt;margin-bottom:.0001pt'><span lang=ES
  style='letter-spacing:-.25pt'>};</span></p>
  <p class=TableParagraph style='margin-top:.7pt'><span lang=ES
  style='font-family:"Times New Roman",serif;mso-hansi-font-family:Calibri;
  mso-bidi-font-family:Calibri'><o:p>&nbsp;</o:p></span></p>
  <p class=TableParagraph style='margin-left:5.8pt;line-height:12.45pt;
  mso-line-height-rule:exactly'><span lang=ES style='letter-spacing:-.1pt'>#endif</span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:5;height:13.5pt'>
  <td width=576 colspan=3 valign=top style='width:431.7pt;border-top:none;
  border-left:none;border-bottom:solid black 1.0pt;border-right:solid black 1.0pt;
  mso-border-top-alt:solid black .5pt;mso-border-left-alt:solid black .5pt;
  mso-border-alt:solid black .5pt;padding:0cm 0cm 0cm 0cm;height:13.5pt'>
  <p class=TableParagraph style='margin-top:.05pt;margin-right:0cm;margin-bottom:
  0cm;margin-left:5.8pt;margin-bottom:.0001pt;line-height:12.45pt;mso-line-height-rule:
  exactly'><span lang=ES>CLASE:<span style='letter-spacing:-.25pt'> </span><span
  style='letter-spacing:-.1pt'>controladorCliente.cpp</span></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:6;mso-yfti-lastrow:yes;height:160.8pt'>
  <td width=576 colspan=3 valign=top style='width:431.7pt;border-top:none;
  border-left:none;border-bottom:double black 1.5pt;border-right:solid black 1.0pt;
  mso-border-top-alt:solid black .5pt;mso-border-left-alt:solid black .5pt;
  mso-border-alt:solid black .5pt;mso-border-bottom-alt:double black 1.5pt;
  padding:0cm 0cm 0cm 0cm;height:160.8pt'>
  <p class=TableParagraph style='margin-left:5.8pt;line-height:13.3pt;
  mso-line-height-rule:exactly'><span lang=ES>//Insertar<span style='letter-spacing:
  -.1pt'> </span>el<span style='letter-spacing:-.15pt'> </span>c�digo<span
  style='letter-spacing:-.25pt'> </span>de<span style='letter-spacing:-.1pt'> </span>la<span
  style='letter-spacing:-.1pt'> clase</span></span></p>
  <p class=TableParagraph style='margin-left:41.85pt'><span lang=ES>#include<span
  style='letter-spacing:-.3pt'> </span><span style='letter-spacing:-.1pt'>&quot;<span
  class=SpellE>ControladorCliente.h</span>&quot;</span></span></p>
  <p class=TableParagraph style='margin-top:.9pt'><span lang=ES
  style='font-family:"Times New Roman",serif;mso-hansi-font-family:Calibri;
  mso-bidi-font-family:Calibri'><o:p>&nbsp;</o:p></span></p>
  <p class=TableParagraph style='margin-top:0cm;margin-right:122.15pt;
  margin-bottom:0cm;margin-left:51.65pt;margin-bottom:.0001pt;text-indent:-9.8pt'><span
  class=SpellE><span lang=ES>void</span></span><span lang=ES style='letter-spacing:
  -.6pt'> </span><span class=SpellE><span class=GramE><span lang=ES>ControladorCliente</span></span></span><span
  class=GramE><span lang=ES>::</span></span><span class=SpellE><span lang=ES>registrarCliente</span></span><span
  lang=ES>(<span class=SpellE>const</span><span style='letter-spacing:-.65pt'> </span>Cliente&amp;<span
  style='letter-spacing:-.5pt'> </span>c)<span style='letter-spacing:-.4pt'> </span>{
  <span class=SpellE><span style='letter-spacing:-.1pt'>clientes.push_back</span></span><span
  style='letter-spacing:-.1pt'>(c);</span></span></p>
  <p class=TableParagraph style='margin-left:41.85pt;line-height:13.35pt;
  mso-line-height-rule:exactly'><span lang=ES style='letter-spacing:-.5pt'>}</span></p>
  <p class=TableParagraph style='margin-top:.75pt'><span lang=ES
  style='font-family:"Times New Roman",serif;mso-hansi-font-family:Calibri;
  mso-bidi-font-family:Calibri'><o:p>&nbsp;</o:p></span></p>
  <p class=TableParagraph style='margin-top:0cm;margin-right:169.4pt;
  margin-bottom:0cm;margin-left:51.65pt;margin-bottom:.0001pt;text-indent:-9.8pt'><span
  class=SpellE><span lang=ES>void</span></span><span lang=ES style='letter-spacing:
  -.65pt'> </span><span class=SpellE><span class=GramE><span lang=ES>ControladorCliente</span></span></span><span
  class=GramE><span lang=ES>::</span></span><span class=SpellE><span lang=ES>listarClientes</span></span><span
  lang=ES>()<span style='letter-spacing:-.6pt'> </span><span class=SpellE>const</span><span
  style='letter-spacing:-.65pt'> </span>{ <span class=SpellE>for</span> (<span
  class=SpellE>const</span> auto&amp; c : clientes) {</span></p>
  <p class=TableParagraph style='margin-left:61.65pt;line-height:13.35pt;
  mso-line-height-rule:exactly'><span class=SpellE><span lang=ES
  style='letter-spacing:-.1pt'>c.<span class=GramE>mostrarDatos</span></span></span><span
  class=GramE><span lang=ES style='letter-spacing:-.1pt'>(</span></span><span
  lang=ES style='letter-spacing:-.1pt'>);</span></p>
  <p class=TableParagraph style='margin-top:.2pt;margin-right:0cm;margin-bottom:
  0cm;margin-left:51.65pt;margin-bottom:.0001pt;line-height:13.4pt;mso-line-height-rule:
  exactly'><span lang=ES style='letter-spacing:-.5pt'>}</span></p>
  <p class=TableParagraph style='margin-left:5.8pt;line-height:12.1pt;
  mso-line-height-rule:exactly'><span lang=ES style='letter-spacing:-.5pt'>}</span></p>
  </td>
 </tr>
</table>

</div>

</div>

<span lang=ES style='font-size:1.0pt;font-family:"Calibri",sans-serif;
mso-fareast-font-family:Calibri;mso-ansi-language:ES;mso-fareast-language:EN-US;
mso-bidi-language:AR-SA'><br clear=all style='page-break-before:auto;
mso-break-type:section-break'>
</span>

<div class=WordSection3>

<div align=right>

<table class=TableNormal border=1 cellspacing=0 cellpadding=0 width=0
 style='border-collapse:collapse;mso-table-layout-alt:fixed;border:none;
 mso-border-alt:solid black .5pt;mso-yfti-tbllook:480;mso-padding-alt:0cm 0cm 0cm 0cm;
 mso-border-insideh:.5pt solid black;mso-border-insidev:.5pt solid black'>
 <tr style='mso-yfti-irow:0;mso-yfti-firstrow:yes;height:13.05pt'>
  <td width=56 rowspan=8 valign=top style='width:41.9pt;border:solid black 1.0pt;
  mso-border-alt:solid black .5pt;mso-border-left-alt:solid black 1.0pt;
  padding:0cm 0cm 0cm 0cm;height:13.05pt'>
  <p class=TableParagraph><span lang=ES style='font-family:"Times New Roman",serif;
  mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri'><o:p>&nbsp;</o:p></span></p>
  </td>
  <td width=575 valign=top style='width:431.55pt;border-top:double black 1.5pt;
  border-left:none;border-bottom:solid black 1.0pt;border-right:solid black 1.0pt;
  mso-border-left-alt:solid black .5pt;mso-border-alt:solid black .5pt;
  mso-border-top-alt:double black 1.5pt;padding:0cm 0cm 0cm 0cm;height:13.05pt'>
  <p class=TableParagraph style='margin-left:5.6pt;line-height:12.1pt;
  mso-line-height-rule:exactly'><span lang=ES>CLASE:<span style='letter-spacing:
  -.25pt'> </span><span class=SpellE><span style='letter-spacing:-.1pt'>controladorCliente.h</span></span></span></p>
  </td>
  <td width=109 rowspan=8 valign=top style='width:82.0pt;border-top:solid black 1.0pt;
  border-left:none;border-bottom:solid black 1.0pt;border-right:none;
  mso-border-left-alt:solid black .5pt;mso-border-top-alt:solid black .5pt;
  mso-border-left-alt:solid black .5pt;mso-border-bottom-alt:solid black .5pt;
  padding:0cm 0cm 0cm 0cm;height:13.05pt'>
  <p class=TableParagraph><span lang=ES style='font-family:"Times New Roman",serif;
  mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri'><o:p>&nbsp;</o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:1;height:228.35pt'>
  <td width=575 valign=top style='width:431.55pt;border-top:none;border-left:
  none;border-bottom:solid black 1.0pt;border-right:solid black 1.0pt;
  mso-border-top-alt:solid black .5pt;mso-border-left-alt:solid black .5pt;
  mso-border-alt:solid black .5pt;padding:0cm 0cm 0cm 0cm;height:228.35pt'>
  <p class=TableParagraph style='margin-top:.05pt;margin-right:0cm;margin-bottom:
  0cm;margin-left:5.6pt;margin-bottom:.0001pt;line-height:13.4pt;mso-line-height-rule:
  exactly'><span lang=ES>//Insertar<span style='letter-spacing:-.1pt'> </span>el<span
  style='letter-spacing:-.15pt'> </span>c�digo<span style='letter-spacing:-.25pt'>
  </span>de<span style='letter-spacing:-.1pt'> </span>la<span style='letter-spacing:
  -.1pt'> clase</span></span></p>
  <p class=TableParagraph style='margin-top:0cm;margin-right:228.5pt;
  margin-bottom:0cm;margin-left:41.65pt;margin-bottom:.0001pt'><span lang=ES>#ifndef
  CONTROLADOR_CLIENTE_H #define<span style='letter-spacing:-.65pt'> </span>CONTROLADOR_CLIENTE_H</span></p>
  <p class=TableParagraph style='margin-top:.7pt'><span lang=ES
  style='font-family:"Times New Roman",serif;mso-hansi-font-family:Calibri;
  mso-bidi-font-family:Calibri'><o:p>&nbsp;</o:p></span></p>
  <p class=TableParagraph style='margin-top:0cm;margin-right:299.85pt;
  margin-bottom:0cm;margin-left:41.65pt;margin-bottom:.0001pt;line-height:100%'><span
  lang=ES>#include<span style='letter-spacing:-.65pt'> </span>&quot;<span
  class=SpellE>Cliente.h</span>&quot; #include &lt;vector&gt;</span></p>
  <p class=TableParagraph style='margin-top:.65pt'><span lang=ES
  style='font-family:"Times New Roman",serif;mso-hansi-font-family:Calibri;
  mso-bidi-font-family:Calibri'><o:p>&nbsp;</o:p></span></p>
  <p class=TableParagraph style='margin-top:0cm;margin-right:255.65pt;
  margin-bottom:0cm;margin-left:41.65pt;margin-bottom:.0001pt'><span
  class=SpellE><span lang=ES>class</span></span><span lang=ES style='letter-spacing:
  -.65pt'> </span><span class=SpellE><span lang=ES>ControladorCliente</span></span><span
  lang=ES style='letter-spacing:-.6pt'> </span><span class=GramE><span lang=ES>{
  <span class=SpellE><span style='letter-spacing:-.1pt'>private</span></span></span></span><span
  lang=ES style='letter-spacing:-.1pt'>:</span></p>
  <p class=TableParagraph style='margin-left:51.45pt;line-height:13.35pt;
  mso-line-height-rule:exactly'><span class=SpellE><span class=GramE><span
  lang=ES>std</span></span></span><span class=GramE><span lang=ES>::</span></span><span
  lang=ES>vector&lt;Cliente&gt;<span style='letter-spacing:-.5pt'> </span><span
  style='letter-spacing:-.1pt'>clientes;</span></span></p>
  <p class=TableParagraph style='margin-top:.7pt'><span lang=ES
  style='font-family:"Times New Roman",serif;mso-hansi-font-family:Calibri;
  mso-bidi-font-family:Calibri'><o:p>&nbsp;</o:p></span></p>
  <p class=TableParagraph style='margin-left:41.65pt'><span class=SpellE><span
  lang=ES style='letter-spacing:-.1pt'>public</span></span><span lang=ES
  style='letter-spacing:-.1pt'>:</span></p>
  <p class=TableParagraph style='margin-top:.2pt;margin-right:190.3pt;
  margin-bottom:0cm;margin-left:51.45pt;margin-bottom:.0001pt'><span
  class=SpellE><span lang=ES>void</span></span><span lang=ES style='letter-spacing:
  -.65pt'> </span><span class=SpellE><span class=GramE><span lang=ES>registrarCliente</span></span></span><span
  class=GramE><span lang=ES>(</span></span><span class=SpellE><span lang=ES>const</span></span><span
  lang=ES style='letter-spacing:-.6pt'> </span><span lang=ES>Cliente&amp;<span
  style='letter-spacing:-.65pt'> </span>c); <span class=SpellE>void</span> <span
  class=SpellE>listarClientes</span>() <span class=SpellE>const</span>;</span></p>
  <p class=TableParagraph style='margin-left:41.65pt;line-height:13.4pt;
  mso-line-height-rule:exactly'><span lang=ES style='letter-spacing:-.25pt'>};</span></p>
  <p class=TableParagraph style='margin-top:.7pt'><span lang=ES
  style='font-family:"Times New Roman",serif;mso-hansi-font-family:Calibri;
  mso-bidi-font-family:Calibri'><o:p>&nbsp;</o:p></span></p>
  <p class=TableParagraph style='margin-top:.05pt;margin-right:0cm;margin-bottom:
  0cm;margin-left:5.6pt;margin-bottom:.0001pt;line-height:12.4pt;mso-line-height-rule:
  exactly'><span lang=ES style='letter-spacing:-.1pt'>#endif</span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:2;height:13.5pt'>
  <td width=575 valign=top style='width:431.55pt;border-top:none;border-left:
  none;border-bottom:solid black 1.0pt;border-right:solid black 1.0pt;
  mso-border-top-alt:solid black .5pt;mso-border-left-alt:solid black .5pt;
  mso-border-alt:solid black .5pt;padding:0cm 0cm 0cm 0cm;height:13.5pt'>
  <p class=TableParagraph style='margin-top:.05pt;margin-right:0cm;margin-bottom:
  0cm;margin-left:5.6pt;margin-bottom:.0001pt;line-height:12.4pt;mso-line-height-rule:
  exactly'><span lang=ES>CLASE:<span style='letter-spacing:-.25pt'> </span><span
  style='letter-spacing:-.1pt'>controladorVehiculo.cpp</span></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:3;height:134.3pt'>
  <td width=575 valign=top style='width:431.55pt;border-top:none;border-left:
  none;border-bottom:solid black 1.0pt;border-right:solid black 1.0pt;
  mso-border-top-alt:solid black .5pt;mso-border-left-alt:solid black .5pt;
  mso-border-alt:solid black .5pt;padding:0cm 0cm 0cm 0cm;height:134.3pt'>
  <p class=TableParagraph style='margin-left:5.6pt;line-height:13.3pt;
  mso-line-height-rule:exactly'><span lang=ES>//Insertar<span style='letter-spacing:
  -.1pt'> </span>el<span style='letter-spacing:-.15pt'> </span>c�digo<span
  style='letter-spacing:-.25pt'> </span>de<span style='letter-spacing:-.1pt'> </span>la<span
  style='letter-spacing:-.1pt'> clase</span></span></p>
  <p class=TableParagraph style='margin-top:.15pt;margin-right:0cm;margin-bottom:
  0cm;margin-left:41.65pt;margin-bottom:.0001pt'><span lang=ES>#include<span
  style='letter-spacing:-.3pt'> </span><span style='letter-spacing:-.1pt'>&quot;<span
  class=SpellE>ControladorVehiculo.h</span>&quot;</span></span></p>
  <p class=TableParagraph style='margin-left:51.45pt;text-indent:-9.8pt'><span
  class=SpellE><span lang=ES>void</span></span><span lang=ES style='letter-spacing:
  -.55pt'> </span><span class=SpellE><span class=GramE><span lang=ES>ControladorVehiculo</span></span></span><span
  class=GramE><span lang=ES>::</span></span><span class=SpellE><span lang=ES>registrarVehiculo</span></span><span
  lang=ES>(<span class=SpellE>const</span><span style='letter-spacing:-.6pt'> </span><span
  class=SpellE>Vehiculo</span>&amp;<span style='letter-spacing:-.5pt'> </span>v)<span
  style='letter-spacing:-.5pt'> </span>{ <span class=SpellE><span
  style='letter-spacing:-.1pt'>vehiculos.push_back</span></span><span
  style='letter-spacing:-.1pt'>(v);</span></span></p>
  <p class=TableParagraph style='margin-left:41.65pt;line-height:13.35pt;
  mso-line-height-rule:exactly'><span lang=ES style='letter-spacing:-.5pt'>}</span></p>
  <p class=TableParagraph style='margin-top:0cm;margin-right:154.55pt;
  margin-bottom:0cm;margin-left:51.45pt;margin-bottom:.0001pt;text-indent:-9.8pt'><span
  class=SpellE><span lang=ES>void</span></span><span lang=ES style='letter-spacing:
  -.65pt'> </span><span class=SpellE><span class=GramE><span lang=ES>ControladorVehiculo</span></span></span><span
  class=GramE><span lang=ES>::</span></span><span class=SpellE><span lang=ES>listarVehiculos</span></span><span
  lang=ES>()<span style='letter-spacing:-.6pt'> </span><span class=SpellE>const</span><span
  style='letter-spacing:-.65pt'> </span>{ <span class=SpellE>for</span> (<span
  class=SpellE>const</span> auto&amp; v : <span class=SpellE>vehiculos</span>)
  {</span></p>
  <p class=TableParagraph style='margin-left:61.25pt;line-height:13.35pt;
  mso-line-height-rule:exactly'><span class=SpellE><span lang=ES
  style='letter-spacing:-.1pt'>v.<span class=GramE>mostrarDatos</span></span></span><span
  class=GramE><span lang=ES style='letter-spacing:-.1pt'>(</span></span><span
  lang=ES style='letter-spacing:-.1pt'>);</span></p>
  <p class=TableParagraph style='margin-left:51.45pt;line-height:13.4pt;
  mso-line-height-rule:exactly'><span lang=ES style='letter-spacing:-.5pt'>}</span></p>
  <p class=TableParagraph style='margin-top:.15pt;margin-right:0cm;margin-bottom:
  0cm;margin-left:5.6pt;margin-bottom:.0001pt;line-height:12.4pt;mso-line-height-rule:
  exactly'><span lang=ES style='letter-spacing:-.5pt'>}</span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:4;height:13.3pt'>
  <td width=575 valign=top style='width:431.55pt;border-top:none;border-left:
  none;border-bottom:solid black 1.0pt;border-right:solid black 1.0pt;
  mso-border-top-alt:solid black .5pt;mso-border-left-alt:solid black .5pt;
  mso-border-alt:solid black .5pt;padding:0cm 0cm 0cm 0cm;height:13.3pt'>
  <p class=TableParagraph style='margin-left:5.6pt;line-height:12.3pt;
  mso-line-height-rule:exactly'><span class=SpellE><span class=GramE><span
  lang=ES style='letter-spacing:-.1pt'>CLASE:controladorVehiculo.h</span></span></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:5;height:188.1pt'>
  <td width=575 valign=top style='width:431.55pt;border-top:none;border-left:
  none;border-bottom:solid black 1.0pt;border-right:solid black 1.0pt;
  mso-border-top-alt:solid black .5pt;mso-border-left-alt:solid black .5pt;
  mso-border-alt:solid black .5pt;padding:0cm 0cm 0cm 0cm;height:188.1pt'>
  <p class=TableParagraph style='margin-top:.05pt;margin-right:0cm;margin-bottom:
  0cm;margin-left:5.6pt;margin-bottom:.0001pt;line-height:13.4pt;mso-line-height-rule:
  exactly'><span lang=ES>//Insertar<span style='letter-spacing:-.1pt'> </span>el<span
  style='letter-spacing:-.15pt'> </span>c�digo<span style='letter-spacing:-.25pt'>
  </span>de<span style='letter-spacing:-.1pt'> </span>la<span style='letter-spacing:
  -.1pt'> clase</span></span></p>
  <p class=TableParagraph style='margin-top:0cm;margin-right:218.9pt;
  margin-bottom:0cm;margin-left:41.65pt;margin-bottom:.0001pt'><span lang=ES>#ifndef
  CONTROLADOR_VEHICULO_H #define<span style='letter-spacing:-.65pt'> </span>CONTROLADOR_VEHICULO_H</span></p>
  <p class=TableParagraph style='margin-top:0cm;margin-right:292.4pt;
  margin-bottom:0cm;margin-left:41.65pt;margin-bottom:.0001pt'><span lang=ES>#include<span
  style='letter-spacing:-.65pt'> </span>&quot;<span class=SpellE>Vehiculo.h</span>&quot;
  #include &lt;vector&gt;</span></p>
  <p class=TableParagraph style='margin-top:.1pt;margin-right:255.65pt;
  margin-bottom:0cm;margin-left:41.65pt;margin-bottom:.0001pt'><span
  class=SpellE><span lang=ES>class</span></span><span lang=ES style='letter-spacing:
  -.65pt'> </span><span class=SpellE><span lang=ES>ControladorVehiculo</span></span><span
  lang=ES style='letter-spacing:-.6pt'> </span><span class=GramE><span lang=ES>{
  <span class=SpellE><span style='letter-spacing:-.1pt'>private</span></span></span></span><span
  lang=ES style='letter-spacing:-.1pt'>:</span></p>
  <p class=TableParagraph style='margin-top:0cm;margin-right:234.2pt;
  margin-bottom:0cm;margin-left:41.65pt;margin-bottom:.0001pt;text-indent:9.8pt'><span
  class=SpellE><span class=GramE><span lang=ES>std</span></span></span><span
  class=GramE><span lang=ES>::</span></span><span lang=ES>vector&lt;<span
  class=SpellE>Vehiculo</span>&gt;<span style='letter-spacing:-.65pt'> </span><span
  class=SpellE>vehiculos</span>; <span class=SpellE><span style='letter-spacing:
  -.1pt'>public</span></span><span style='letter-spacing:-.1pt'>:</span></span></p>
  <p class=TableParagraph style='margin-top:0cm;margin-right:190.3pt;
  margin-bottom:0cm;margin-left:51.45pt;margin-bottom:.0001pt'><span
  class=SpellE><span lang=ES>void</span></span><span lang=ES style='letter-spacing:
  -.6pt'> </span><span class=SpellE><span class=GramE><span lang=ES>registrarVehiculo</span></span></span><span
  class=GramE><span lang=ES>(</span></span><span class=SpellE><span lang=ES>const</span></span><span
  lang=ES style='letter-spacing:-.65pt'> </span><span class=SpellE><span
  lang=ES>Vehiculo</span></span><span lang=ES>&amp;<span style='letter-spacing:
  -.5pt'> </span>v); <span class=SpellE>void</span> <span class=SpellE>listarVehiculos</span>()
  <span class=SpellE>const</span>;</span></p>
  <p class=TableParagraph style='margin-left:41.65pt;line-height:13.35pt;
  mso-line-height-rule:exactly'><span lang=ES style='letter-spacing:-.25pt'>};</span></p>
  <p class=TableParagraph style='margin-top:.8pt'><span lang=ES
  style='font-family:"Times New Roman",serif;mso-hansi-font-family:Calibri;
  mso-bidi-font-family:Calibri'><o:p>&nbsp;</o:p></span></p>
  <p class=TableParagraph style='margin-top:.05pt;margin-right:0cm;margin-bottom:
  0cm;margin-left:5.6pt;margin-bottom:.0001pt;line-height:12.4pt;mso-line-height-rule:
  exactly'><span lang=ES style='letter-spacing:-.1pt'>#endif</span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:6;height:13.3pt'>
  <td width=575 valign=top style='width:431.55pt;border-top:none;border-left:
  none;border-bottom:solid black 1.0pt;border-right:solid black 1.0pt;
  mso-border-top-alt:solid black .5pt;mso-border-left-alt:solid black .5pt;
  mso-border-alt:solid black .5pt;padding:0cm 0cm 0cm 0cm;height:13.3pt'>
  <p class=TableParagraph style='margin-left:5.6pt;line-height:12.35pt;
  mso-line-height-rule:exactly'><span lang=ES>CLASE:<span style='letter-spacing:
  -.35pt'> </span><span style='letter-spacing:-.1pt'>vehiculo.cpp</span></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:7;mso-yfti-lastrow:yes;height:40.05pt'>
  <td width=575 valign=top style='width:431.55pt;border-top:none;border-left:
  none;border-bottom:double black 1.5pt;border-right:solid black 1.0pt;
  mso-border-top-alt:solid black .5pt;mso-border-left-alt:solid black .5pt;
  mso-border-alt:solid black .5pt;mso-border-bottom-alt:double black 1.5pt;
  padding:0cm 0cm 0cm 0cm;height:40.05pt'>
  <p class=TableParagraph style='margin-top:.05pt;margin-right:255.65pt;
  margin-bottom:0cm;margin-left:41.65pt;margin-bottom:.0001pt;text-indent:-36.05pt'><span
  lang=ES>//Insertar<span style='letter-spacing:-.35pt'> </span>el<span
  style='letter-spacing:-.45pt'> </span>c�digo<span style='letter-spacing:-.5pt'>
  </span>de<span style='letter-spacing:-.4pt'> </span>la<span style='letter-spacing:
  -.4pt'> </span>clase #include &quot;<span class=SpellE>Vehiculo.h</span>&quot;</span></p>
  <p class=TableParagraph style='margin-left:41.65pt;line-height:12.15pt;
  mso-line-height-rule:exactly'><span lang=ES>#include<span style='letter-spacing:
  -.4pt'> </span><span style='letter-spacing:-.1pt'>&lt;iostream&gt;</span></span></p>
  </td>
 </tr>
</table>

</div>

</div>

<span lang=ES style='font-size:1.0pt;font-family:"Calibri",sans-serif;
mso-fareast-font-family:Calibri;mso-ansi-language:ES;mso-fareast-language:EN-US;
mso-bidi-language:AR-SA'><br clear=all style='page-break-before:always;
mso-break-type:section-break'>
</span>

<div class=WordSection4>

<p class=MsoBodyText style='margin-top:4.65pt;margin-right:0cm;margin-bottom:
0cm;margin-left:0cm;margin-bottom:.0001pt'><span lang=ES style='font-size:10.0pt;
mso-bidi-font-size:11.0pt;font-family:"Times New Roman",serif;mso-hansi-font-family:
Calibri;mso-bidi-font-family:Calibri'><o:p>&nbsp;</o:p></span></p>

<table class=TableNormal border=0 cellspacing=0 cellpadding=0 width=0
 style='margin-left:44.95pt;border-collapse:collapse;mso-table-layout-alt:fixed;
 mso-yfti-tbllook:480;mso-padding-alt:0cm 0cm 0cm 0cm'>
 <tr style='mso-yfti-irow:0;mso-yfti-firstrow:yes;height:159.25pt'>
  <td width=551 valign=top style='width:413.5pt;padding:0cm 0cm 0cm 0cm;
  height:159.25pt'>
  <p class=TableParagraph align=right style='margin-right:2.4pt;text-align:
  right;line-height:11.2pt;mso-line-height-rule:exactly'><span class=SpellE><span
  class=GramE><span lang=ES>Vehiculo</span></span></span><span class=GramE><span
  lang=ES>::</span></span><span class=SpellE><span lang=ES>Vehiculo</span></span><span
  lang=ES>(<span class=SpellE>string</span><span style='letter-spacing:-.25pt'>
  </span><span class=SpellE>cod</span>,<span style='letter-spacing:-.15pt'> </span><span
  class=SpellE>string</span><span style='letter-spacing:-.2pt'> </span>mar,<span
  style='letter-spacing:-.15pt'> </span><span class=SpellE>string</span><span
  style='letter-spacing:-.2pt'> </span>mod,<span style='letter-spacing:-.15pt'>
  </span><span class=SpellE>int</span><span style='letter-spacing:-.25pt'> </span><span
  class=SpellE>an</span>,<span style='letter-spacing:-.15pt'> </span><span
  class=SpellE>double</span><span style='letter-spacing:-.3pt'> </span>km,<span
  style='letter-spacing:-.15pt'> </span><span class=SpellE>double</span><span
  style='letter-spacing:-.3pt'> </span><span class=SpellE><span
  style='letter-spacing:-.25pt'>pr</span></span><span style='letter-spacing:
  -.25pt'>)</span></span></p>
  <p class=TableParagraph align=right style='margin-top:.15pt;margin-right:
  2.4pt;margin-bottom:0cm;margin-left:0cm;margin-bottom:.0001pt;text-align:
  right'><span lang=ES>:<span style='letter-spacing:-.3pt'> </span><span
  class=SpellE>codigo</span>(<span class=SpellE>cod</span>),<span
  style='letter-spacing:-.3pt'> </span>marca(mar),<span style='letter-spacing:
  -.3pt'> </span>modelo(mod),<span style='letter-spacing:-.3pt'> </span><span
  class=SpellE>anio</span>(<span class=SpellE>an</span>),<span
  style='letter-spacing:-.3pt'> </span>kilometraje(km),<span style='letter-spacing:
  -.3pt'> </span>precio(<span class=SpellE>pr</span>)<span style='letter-spacing:
  -.25pt'> {}</span></span></p>
  <p class=TableParagraph style='margin-top:.75pt'><span lang=ES
  style='font-family:"Times New Roman",serif;mso-hansi-font-family:Calibri;
  mso-bidi-font-family:Calibri'><o:p>&nbsp;</o:p></span></p>
  <p class=TableParagraph style='margin-top:0cm;margin-right:215.15pt;
  margin-bottom:0cm;margin-left:51.0pt;margin-bottom:.0001pt;text-indent:-9.8pt'><span
  class=SpellE><span lang=ES>string</span></span><span lang=ES
  style='letter-spacing:-.65pt'> </span><span class=SpellE><span class=GramE><span
  lang=ES>Vehiculo</span></span></span><span class=GramE><span lang=ES>::</span></span><span
  class=SpellE><span lang=ES>getCodigo</span></span><span lang=ES>()<span
  style='letter-spacing:-.6pt'> </span><span class=SpellE>const</span><span
  style='letter-spacing:-.65pt'> </span>{ <span class=SpellE>return</span> <span
  class=SpellE>codigo</span>;</span></p>
  <p class=TableParagraph style='margin-left:41.2pt;line-height:13.4pt;
  mso-line-height-rule:exactly'><span lang=ES style='letter-spacing:-.5pt'>}</span></p>
  <p class=TableParagraph style='margin-top:.7pt'><span lang=ES
  style='font-family:"Times New Roman",serif;mso-hansi-font-family:Calibri;
  mso-bidi-font-family:Calibri'><o:p>&nbsp;</o:p></span></p>
  <p class=TableParagraph style='margin-left:41.2pt;line-height:13.4pt;
  mso-line-height-rule:exactly'><span class=SpellE><span lang=ES>void</span></span><span
  lang=ES style='letter-spacing:-.35pt'> </span><span class=SpellE><span
  class=GramE><span lang=ES>Vehiculo</span></span></span><span class=GramE><span
  lang=ES>::</span></span><span class=SpellE><span lang=ES>mostrarDatos</span></span><span
  lang=ES>()<span style='letter-spacing:-.3pt'> </span><span class=SpellE>const</span><span
  style='letter-spacing:-.4pt'> </span><span style='letter-spacing:-.5pt'>{</span></span></p>
  <p class=TableParagraph align=right style='margin-right:10.3pt;text-align:
  right;line-height:13.4pt;mso-line-height-rule:exactly'><span class=SpellE><span
  lang=ES>cout</span></span><span lang=ES style='letter-spacing:-.05pt'> </span><span
  lang=ES>&lt;&lt;<span style='letter-spacing:-.05pt'> </span>&quot;C�digo:<span
  style='letter-spacing:-.1pt'> </span>&quot;<span style='letter-spacing:-.15pt'>
  </span>&lt;&lt;<span style='letter-spacing:-.2pt'> </span><span class=SpellE>codigo</span><span
  style='letter-spacing:.05pt'> </span>&lt;&lt;<span style='letter-spacing:
  -.05pt'> </span>&quot;,<span style='letter-spacing:-.1pt'> </span>Marca:<span
  style='letter-spacing:-.05pt'> </span>&quot; &lt;&lt;<span style='letter-spacing:
  -.25pt'> </span>marca<span style='letter-spacing:-.05pt'> </span>&lt;&lt;
  &quot;,<span style='letter-spacing:-.1pt'> </span>Modelo:<span
  style='letter-spacing:-.1pt'> </span>&quot; &lt;&lt; <span style='letter-spacing:
  -.1pt'>modelo</span></span></p>
  <p class=TableParagraph align=right style='margin-top:.2pt;margin-right:8.3pt;
  margin-bottom:0cm;margin-left:0cm;margin-bottom:.0001pt;text-align:right;
  line-height:13.4pt;mso-line-height-rule:exactly'><span lang=ES>&lt;&lt;<span
  style='letter-spacing:-.25pt'> </span>&quot;,<span style='letter-spacing:
  .1pt'> </span>A�o:<span style='letter-spacing:-.05pt'> </span>&quot;<span
  style='letter-spacing:-.1pt'> </span>&lt;&lt;<span style='letter-spacing:
  -.2pt'> </span><span class=SpellE>anio</span><span style='letter-spacing:
  .1pt'> </span>&lt;&lt; &quot;,<span style='letter-spacing:-.05pt'> </span>Km:<span
  style='letter-spacing:-.05pt'> </span>&quot;<span style='letter-spacing:-.1pt'>
  </span>&lt;&lt;<span style='letter-spacing:-.2pt'> </span>kilometraje
  &lt;&lt;<span style='letter-spacing:-.2pt'> </span>&quot;,<span
  style='letter-spacing:.1pt'> </span>Precio:<span style='letter-spacing:-.05pt'>
  </span>$&quot;<span style='letter-spacing:-.1pt'> </span>&lt;&lt;<span
  style='letter-spacing:-.2pt'> </span>precio<span style='letter-spacing:-.1pt'>
  </span><span style='letter-spacing:-.25pt'>&lt;&lt;</span></span></p>
  <p class=TableParagraph style='margin-left:41.2pt;line-height:13.4pt;
  mso-line-height-rule:exactly'><span class=SpellE><span lang=ES
  style='letter-spacing:-.1pt'>endl</span></span><span lang=ES
  style='letter-spacing:-.1pt'>;</span></p>
  <p class=TableParagraph style='margin-left:5.15pt;line-height:12.65pt;
  mso-line-height-rule:exactly'><span lang=ES style='letter-spacing:-.5pt'>}</span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:1;height:14.0pt'>
  <td width=551 valign=top style='width:413.5pt;padding:0cm 0cm 0cm 0cm;
  height:14.0pt'>
  <p class=TableParagraph style='margin-top:.3pt;margin-right:0cm;margin-bottom:
  0cm;margin-left:5.15pt;margin-bottom:.0001pt;line-height:12.7pt;mso-line-height-rule:
  exactly'><span lang=ES>CLASE:<span style='letter-spacing:-.3pt'> </span><span
  class=SpellE><span style='letter-spacing:-.1pt'>register.h</span></span></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:2;mso-yfti-lastrow:yes;height:255.2pt'>
  <td width=551 valign=top style='width:413.5pt;border:none;border-bottom:solid black 1.0pt;
  mso-border-bottom-alt:solid black .5pt;padding:0cm 0cm 0cm 0cm;height:255.2pt'>
  <p class=TableParagraph style='margin-top:.1pt;margin-right:273.0pt;
  margin-bottom:0cm;margin-left:41.2pt;margin-bottom:.0001pt;text-indent:-36.05pt'><span
  lang=ES>//Insertar<span style='letter-spacing:-.35pt'> </span>el<span
  style='letter-spacing:-.45pt'> </span>c�digo<span style='letter-spacing:-.5pt'>
  </span>de<span style='letter-spacing:-.4pt'> </span>la<span style='letter-spacing:
  -.4pt'> </span>clase #ifndef VEHICULO_H #define VEHICULO_H</span></p>
  <p class=TableParagraph style='margin-top:.9pt'><span lang=ES
  style='font-family:"Times New Roman",serif;mso-hansi-font-family:Calibri;
  mso-bidi-font-family:Calibri'><o:p>&nbsp;</o:p></span></p>
  <p class=TableParagraph style='margin-top:0cm;margin-right:273.0pt;
  margin-bottom:0cm;margin-left:41.2pt;margin-bottom:.0001pt'><span lang=ES>#include
  &lt;<span class=SpellE>string</span>&gt; <span class=SpellE>using</span><span
  style='letter-spacing:-.65pt'> </span><span class=SpellE>namespace</span><span
  style='letter-spacing:-.6pt'> </span><span class=SpellE>std</span>; <span
  class=SpellE>class</span> <span class=SpellE>Vehiculo</span> <span
  class=GramE>{ <span class=SpellE><span style='letter-spacing:-.1pt'>private</span></span></span><span
  style='letter-spacing:-.1pt'>:</span></span></p>
  <p class=TableParagraph style='margin-top:0cm;margin-right:223.1pt;
  margin-bottom:0cm;margin-left:51.0pt;margin-bottom:.0001pt;text-indent:-2.6pt'><span
  class=SpellE><span lang=ES>string</span></span><span lang=ES
  style='letter-spacing:-.65pt'> </span><span class=SpellE><span lang=ES>codigo</span></span><span
  lang=ES>,<span style='letter-spacing:-.6pt'> </span>marca,<span
  style='letter-spacing:-.65pt'> </span>modelo; <span class=SpellE>int</span> <span
  class=SpellE>anio</span>;</span></p>
  <p class=TableParagraph style='margin-top:.05pt;margin-right:0cm;margin-bottom:
  0cm;margin-left:51.0pt;margin-bottom:.0001pt'><span class=SpellE><span
  lang=ES>double</span></span><span lang=ES style='letter-spacing:-.35pt'> </span><span
  lang=ES>kilometraje,<span style='letter-spacing:-.15pt'> </span><span
  style='letter-spacing:-.1pt'>precio;</span></span></p>
  <p class=TableParagraph style='margin-top:.7pt'><span lang=ES
  style='font-family:"Times New Roman",serif;mso-hansi-font-family:Calibri;
  mso-bidi-font-family:Calibri'><o:p>&nbsp;</o:p></span></p>
  <p class=TableParagraph style='margin-left:41.2pt;line-height:13.4pt;
  mso-line-height-rule:exactly'><span class=SpellE><span lang=ES
  style='letter-spacing:-.1pt'>public</span></span><span lang=ES
  style='letter-spacing:-.1pt'>:</span></p>
  <p class=TableParagraph style='margin-top:0cm;margin-right:11.95pt;
  margin-bottom:0cm;margin-left:51.0pt;margin-bottom:.0001pt'><span
  class=SpellE><span class=GramE><span lang=ES>Vehiculo</span></span></span><span
  class=GramE><span lang=ES>(</span></span><span class=SpellE><span lang=ES>string</span></span><span
  lang=ES style='letter-spacing:-.25pt'> </span><span class=SpellE><span
  lang=ES>cod</span></span><span lang=ES>,<span style='letter-spacing:-.2pt'> </span><span
  class=SpellE>string</span><span style='letter-spacing:-.25pt'> </span>mar,<span
  style='letter-spacing:-.2pt'> </span><span class=SpellE>string</span><span
  style='letter-spacing:-.25pt'> </span>mod, <span class=SpellE>int</span><span
  style='letter-spacing:-.3pt'> </span><span class=SpellE>an</span>,<span
  style='letter-spacing:-.2pt'> </span><span class=SpellE>double</span><span
  style='letter-spacing:-.35pt'> </span>km,<span style='letter-spacing:-.2pt'> </span><span
  class=SpellE>double</span><span style='letter-spacing:-.15pt'> </span><span
  class=SpellE>pr</span>); <span class=SpellE>string</span> <span class=SpellE>getCodigo</span>()
  <span class=SpellE>const</span>;</span></p>
  <p class=TableParagraph style='margin-left:51.0pt;line-height:13.4pt;
  mso-line-height-rule:exactly'><span class=SpellE><span lang=ES>void</span></span><span
  lang=ES style='letter-spacing:-.25pt'> </span><span class=SpellE><span
  class=GramE><span lang=ES>mostrarDatos</span></span></span><span class=GramE><span
  lang=ES>(</span></span><span lang=ES>)<span style='letter-spacing:-.15pt'> </span><span
  class=SpellE><span style='letter-spacing:-.1pt'>const</span></span><span
  style='letter-spacing:-.1pt'>;</span></span></p>
  <p class=TableParagraph style='margin-left:41.2pt;line-height:13.4pt;
  mso-line-height-rule:exactly'><span lang=ES style='letter-spacing:-.25pt'>};</span></p>
  <p class=TableParagraph style='margin-top:.9pt'><span lang=ES
  style='font-family:"Times New Roman",serif;mso-hansi-font-family:Calibri;
  mso-bidi-font-family:Calibri'><o:p>&nbsp;</o:p></span></p>
  <p class=TableParagraph style='margin-top:.05pt;margin-right:0cm;margin-bottom:
  0cm;margin-left:5.15pt;margin-bottom:.0001pt;line-height:12.25pt;mso-line-height-rule:
  exactly'><span lang=ES style='letter-spacing:-.1pt'>#endif</span></p>
  </td>
 </tr>
</table>

<p class=MsoBodyText style='margin-top:2.25pt;margin-right:0cm;margin-bottom:
0cm;margin-left:0cm;margin-bottom:.0001pt'><span lang=ES style='font-family:
"Times New Roman",serif;mso-hansi-font-family:Calibri;mso-bidi-font-family:
Calibri'><o:p>&nbsp;</o:p></span></p>

<p class=MsoBodyText style='margin-top:0cm;margin-right:0cm;margin-bottom:1.05pt;
margin-left:44.0pt'><!--[if gte vml 1]><v:shape id="Graphic_x0020_4" o:spid="_x0000_s1031"
 style='position:absolute;left:0;text-align:left;margin-left:56pt;margin-top:-460.2pt;
 width:556pt;height:489.3pt;z-index:-15902208;visibility:visible;
 mso-wrap-style:square;mso-wrap-distance-left:0;mso-wrap-distance-top:0;
 mso-wrap-distance-right:0;mso-wrap-distance-bottom:0;
 mso-position-horizontal:absolute;mso-position-horizontal-relative:page;
 mso-position-vertical:absolute;mso-position-vertical-relative:text;
 v-text-anchor:top' coordsize="7061200,6214110" o:gfxdata="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
cmV2LnhtbFBLBQYAAAAABAAEAPMAAABRBwAAAAA=
" path="m12700,7620l,7620,,6214097r12700,l12700,7620xem6016625,5652884r-5478145,l533400,5652884r,5080l538480,5657964r5478145,l6016625,5652884xem6016625,2230488r-5478145,l538480,15367r-5080,l533400,5652757r5080,l538480,2416162r,-2540l6016625,2413622r,-5067l538480,2408555r,-170447l538480,2235568r5478145,l6016625,2230488xem6016625,7747r-5478145,l538480,7607r-5080,l533400,7747r,5067l533400,15227r5080,l538480,12814r5478145,l6016625,7747xem6021756,5652884r-5068,l6016688,5657964r5068,l6021756,5652884xem6021756,15367r-5068,l6016688,2230488r,7569l6016688,2408542r,7620l6016688,5652757r5068,l6021756,2230488r,-2215121xem6021756,7607r-5068,l6016688,7747r,5067l6016688,15227r5068,l6021756,12814r,-5067l6021756,7607xem7060882,l12700,,,,,5067,,7607r12700,l12700,5067r7048182,l7060882,xe"
 fillcolor="black" stroked="f">
 <v:path arrowok="t"/>
 <w:wrap anchorx="page"/>
</v:shape><![endif]--><![if !vml]><span style='mso-ignore:vglayout;position:
absolute;z-index:-1660069376;left:0px;margin-left:101px;margin-top:196px;
width:926px;height:815px'><img width=741 height=652
src="PRACTICA%206%20APLICACION%20MVC%20Jordy%20Roblero%20(3)_archivos/image003.gif"
v:shapes="Graphic_x0020_4"></span><![endif]><span lang=ES>1.2<span
style='letter-spacing:1.15pt'> </span>Generar<span style='letter-spacing:-.25pt'>
</span>una<span style='letter-spacing:-.3pt'> </span>clase<span
style='letter-spacing:-.05pt'> </span><span class=SpellE>main</span><span
style='letter-spacing:-.2pt'> </span>que<span style='letter-spacing:-.1pt'> </span>cumpla<span
style='letter-spacing:-.3pt'> </span>con<span style='letter-spacing:-.2pt'> </span>los<span
style='letter-spacing:-.15pt'> </span>siguientes<span style='letter-spacing:
-.2pt'> </span>requisitos<span style='letter-spacing:-.15pt'> </span>planteados<span
style='letter-spacing:-.1pt'> </span>en el<span style='letter-spacing:-.15pt'> </span><span
style='letter-spacing:-.1pt'>problema:</span></span></p>

<div align=right>

<table class=TableNormal border=1 cellspacing=0 cellpadding=0 width=0
 style='border-collapse:collapse;mso-table-layout-alt:fixed;border:none;
 mso-border-alt:solid black .5pt;mso-yfti-tbllook:480;mso-padding-alt:0cm 0cm 0cm 0cm;
 mso-border-insideh:.5pt solid black;mso-border-insidev:.5pt solid black'>
 <tr style='mso-yfti-irow:0;mso-yfti-firstrow:yes;mso-yfti-lastrow:yes;
  height:13.2pt'>
  <td width=8 valign=top style='width:5.7pt;border-top:none;border-left:none;
  border-bottom:solid black 1.0pt;border-right:solid black 1.0pt;mso-border-bottom-alt:
  solid black .5pt;mso-border-right-alt:solid black .5pt;padding:0cm 0cm 0cm 0cm;
  height:13.2pt'>
  <p class=TableParagraph><span lang=ES style='font-size:9.0pt;mso-bidi-font-size:
  11.0pt;font-family:"Times New Roman",serif;mso-hansi-font-family:Calibri;
  mso-bidi-font-family:Calibri'><o:p>&nbsp;</o:p></span></p>
  </td>
  <td width=339 valign=top style='width:254.25pt;border-top:solid black 1.0pt;
  border-left:none;border-bottom:double black 1.5pt;border-right:solid black 1.0pt;
  mso-border-left-alt:solid black .5pt;mso-border-alt:solid black .5pt;
  mso-border-bottom-alt:double black 1.5pt;padding:0cm 0cm 0cm 0cm;height:13.2pt'>
  <p class=TableParagraph style='margin-top:.05pt;margin-right:0cm;margin-bottom:
  0cm;margin-left:5.35pt;margin-bottom:.0001pt;line-height:12.1pt;mso-line-height-rule:
  exactly'><span lang=ES>M�todo:<span style='letter-spacing:-.45pt'> </span><span
  class=SpellE><span style='letter-spacing:-.2pt'>main</span></span></span></p>
  </td>
  <td width=394 valign=top style='width:295.45pt;border-top:solid black 1.0pt;
  border-left:none;border-bottom:double black 1.5pt;border-right:none;
  mso-border-left-alt:solid black .5pt;mso-border-top-alt:solid black .5pt;
  mso-border-left-alt:solid black .5pt;mso-border-bottom-alt:double black 1.5pt;
  padding:0cm 0cm 0cm 0cm;height:13.2pt'>
  <p class=TableParagraph style='margin-top:.05pt;margin-right:0cm;margin-bottom:
  0cm;margin-left:5.35pt;margin-bottom:.0001pt;line-height:12.1pt;mso-line-height-rule:
  exactly'><span lang=ES>Capturas<span style='letter-spacing:-.15pt'> </span>de<span
  style='letter-spacing:-.25pt'> </span>Pantalla<span style='letter-spacing:
  -.1pt'> </span>con<span style='letter-spacing:-.15pt'> </span>cada<span
  style='letter-spacing:-.2pt'> </span>opci�n<span style='letter-spacing:-.15pt'>
  </span><span style='letter-spacing:-.1pt'>ejecutada</span></span></p>
  </td>
 </tr>
</table>

</div>

</div>

<span lang=ES style='font-size:11.0pt;font-family:"Calibri",sans-serif;
mso-fareast-font-family:Calibri;mso-ansi-language:ES;mso-fareast-language:EN-US;
mso-bidi-language:AR-SA'><br clear=all style='page-break-before:always;
mso-break-type:section-break'>
</span>

<div class=WordSection5>

<p class=MsoBodyText style='margin-top:1.75pt;margin-right:357.25pt;margin-bottom:
0cm;margin-left:49.8pt;margin-bottom:.0001pt;text-indent:-36.0pt'><!--[if gte vml 1]><v:group
 id="Group_x0020_5" o:spid="_x0000_s1026" style='position:absolute;left:0;
 text-align:left;margin-left:56pt;margin-top:70.8pt;width:556pt;height:649pt;
 z-index:-15901696;mso-wrap-distance-left:0;mso-wrap-distance-right:0;
 mso-position-horizontal-relative:page;mso-position-vertical-relative:page'
 coordsize="70612,82423" o:gfxdata="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
AAgACAAAAgAAhRYBAAAA
">
 <v:shape id="Graphic_x0020_6" o:spid="_x0000_s1027" style='position:absolute;
  width:70612;height:82423;visibility:visible;mso-wrap-style:square;
  v-text-anchor:top' coordsize="7061200,8242300" o:gfxdata="UEsDBBQABgAIAAAAIQDb4fbL7gAAAIUBAAATAAAAW0NvbnRlbnRfVHlwZXNdLnhtbHyQz07DMAyH
70i8Q+QralM4IITa7kDhCAiNB7ASt43WOlEcyvb2pNu4IODoPz9/n1xv9vOkForiPDdwXVagiI23
jocG3rdPxR0oScgWJ8/UwIEENu3lRb09BBKV0ywNjCmFe63FjDSjlD4Q50nv44wpl3HQAc0OB9I3
VXWrjedEnIq03oC27qjHjympx31un0wiTQLq4bS4shrAECZnMGVTvbD9QSnOhDInjzsyuiBXWQP0
r4R18jfgnHvJr4nOknrFmJ5xzhraRtHWf3Kkpfz/yGo5S+H73hkquyhdjr3R8m2lj09svwAAAP//
AwBQSwMEFAAGAAgAAAAhAFr0LFu/AAAAFQEAAAsAAABfcmVscy8ucmVsc2zPwWrDMAwG4Ptg72B0
X5TuUMaI01uh19I+gLGVxCy2jGSy9e1nemrHjpL4P0nD4SetZiPRyNnCruvBUPYcYp4tXC/Htw8w
Wl0ObuVMFm6kcBhfX4Yzra62kC6xqGlKVgtLreUTUf1CyWnHhXKbTCzJ1VbKjMX5LzcTvvf9HuXR
gPHJNKdgQU5hB+ZyK23zHztFL6w81c5zQp6m6P9TMfB3PtPWFCczVQtB9N4U2rp2HOA44NMz4y8A
AAD//wMAUEsDBBQABgAIAAAAIQB/3F3yxQAAANoAAAAPAAAAZHJzL2Rvd25yZXYueG1sRI9Ba8JA
FITvhf6H5RW81U0rVYmuUipqETwY9eDtkX0maXffxuwa03/fFQo9DjPzDTOdd9aIlhpfOVbw0k9A
EOdOV1woOOyXz2MQPiBrNI5JwQ95mM8eH6aYanfjHbVZKESEsE9RQRlCnUrp85Is+r6riaN3do3F
EGVTSN3gLcKtka9JMpQWK44LJdb0UVL+nV2tgrfua9MeK1ydBtvVZb0wSzs6GKV6T937BESgLvyH
/9qfWsEQ7lfiDZCzXwAAAP//AwBQSwECLQAUAAYACAAAACEA2+H2y+4AAACFAQAAEwAAAAAAAAAA
AAAAAAAAAAAAW0NvbnRlbnRfVHlwZXNdLnhtbFBLAQItABQABgAIAAAAIQBa9CxbvwAAABUBAAAL
AAAAAAAAAAAAAAAAAB8BAABfcmVscy8ucmVsc1BLAQItABQABgAIAAAAIQB/3F3yxQAAANoAAAAP
AAAAAAAAAAAAAAAAAAcCAABkcnMvZG93bnJldi54bWxQSwUGAAAAAAMAAwC3AAAA+QIAAAAA
" path="m81280,15290r-5080,l76200,8229016r5080,l81280,15290xem3310559,8229028r-5003,l81280,8229028r-5080,l76200,8234096r5080,l3305492,8234096r5067,l3310559,8229028xem3310559,7747r-5003,l81280,7747r,-140l76200,7607r,140l76200,12814r,2413l81280,15227r,-2413l3305492,12814r,2476l3305492,8229016r5067,l3310559,15354r,-2540l3310559,7747xem7060882,8236636r-7048182,l12700,7670,,7670,,8236636r,5080l7060882,8241716r,-5080xem7060882,8229028r-3750310,l3310572,8234096r3750310,l7060882,8229028xem7060882,7747r-3750310,l3310572,12814r3750310,l7060882,7747xem7060882,l12700,,,,,5067,,7607r12700,l12700,5067r7048182,l7060882,xe"
  fillcolor="black" stroked="f">
  <v:path arrowok="t"/>
 </v:shape><v:shape id="Image_x0020_7" o:spid="_x0000_s1028" type="#_x0000_t75"
  style='position:absolute;left:33772;top:1578;width:23317;height:19431;
  visibility:visible;mso-wrap-style:square' o:gfxdata="UEsDBBQABgAIAAAAIQDb4fbL7gAAAIUBAAATAAAAW0NvbnRlbnRfVHlwZXNdLnhtbHyQz07DMAyH
70i8Q+QralM4IITa7kDhCAiNB7ASt43WOlEcyvb2pNu4IODoPz9/n1xv9vOkForiPDdwXVagiI23
jocG3rdPxR0oScgWJ8/UwIEENu3lRb09BBKV0ywNjCmFe63FjDSjlD4Q50nv44wpl3HQAc0OB9I3
VXWrjedEnIq03oC27qjHjympx31un0wiTQLq4bS4shrAECZnMGVTvbD9QSnOhDInjzsyuiBXWQP0
r4R18jfgnHvJr4nOknrFmJ5xzhraRtHWf3Kkpfz/yGo5S+H73hkquyhdjr3R8m2lj09svwAAAP//
AwBQSwMEFAAGAAgAAAAhAFr0LFu/AAAAFQEAAAsAAABfcmVscy8ucmVsc2zPwWrDMAwG4Ptg72B0
X5TuUMaI01uh19I+gLGVxCy2jGSy9e1nemrHjpL4P0nD4SetZiPRyNnCruvBUPYcYp4tXC/Htw8w
Wl0ObuVMFm6kcBhfX4Yzra62kC6xqGlKVgtLreUTUf1CyWnHhXKbTCzJ1VbKjMX5LzcTvvf9HuXR
gPHJNKdgQU5hB+ZyK23zHztFL6w81c5zQp6m6P9TMfB3PtPWFCczVQtB9N4U2rp2HOA44NMz4y8A
AAD//wMAUEsDBBQABgAIAAAAIQCyXqJewQAAANoAAAAPAAAAZHJzL2Rvd25yZXYueG1sRI/BTsMw
EETvlfgHa5G4UQcOhIa6FaqIxJW0H7C1t3FEvA620wS+Hleq1ONoZt5o1tvZ9eJMIXaeFTwtCxDE
2puOWwWHff34CiImZIO9Z1LwSxG2m7vFGivjJ/6ic5NakSEcK1RgUxoqKaO25DAu/UCcvZMPDlOW
oZUm4JThrpfPRfEiHXacFywOtLOkv5vRKYi2+Qm6HvW0+/uglT4d63IslXq4n9/fQCSa0y18bX8a
BSVcruQbIDf/AAAA//8DAFBLAQItABQABgAIAAAAIQDb4fbL7gAAAIUBAAATAAAAAAAAAAAAAAAA
AAAAAABbQ29udGVudF9UeXBlc10ueG1sUEsBAi0AFAAGAAgAAAAhAFr0LFu/AAAAFQEAAAsAAAAA
AAAAAAAAAAAAHwEAAF9yZWxzLy5yZWxzUEsBAi0AFAAGAAgAAAAhALJeol7BAAAA2gAAAA8AAAAA
AAAAAAAAAAAABwIAAGRycy9kb3ducmV2LnhtbFBLBQYAAAAAAwADALcAAAD1AgAAAAA=
">
  <v:imagedata src="PRACTICA%206%20APLICACION%20MVC%20Jordy%20Roblero%20(3)_archivos/image004.png"
   o:title=""/>
 </v:shape><v:shape id="Image_x0020_8" o:spid="_x0000_s1029" type="#_x0000_t75"
  style='position:absolute;left:33772;top:21276;width:22860;height:17373;
  visibility:visible;mso-wrap-style:square' o:gfxdata="UEsDBBQABgAIAAAAIQDb4fbL7gAAAIUBAAATAAAAW0NvbnRlbnRfVHlwZXNdLnhtbHyQz07DMAyH
70i8Q+QralM4IITa7kDhCAiNB7ASt43WOlEcyvb2pNu4IODoPz9/n1xv9vOkForiPDdwXVagiI23
jocG3rdPxR0oScgWJ8/UwIEENu3lRb09BBKV0ywNjCmFe63FjDSjlD4Q50nv44wpl3HQAc0OB9I3
VXWrjedEnIq03oC27qjHjympx31un0wiTQLq4bS4shrAECZnMGVTvbD9QSnOhDInjzsyuiBXWQP0
r4R18jfgnHvJr4nOknrFmJ5xzhraRtHWf3Kkpfz/yGo5S+H73hkquyhdjr3R8m2lj09svwAAAP//
AwBQSwMEFAAGAAgAAAAhAFr0LFu/AAAAFQEAAAsAAABfcmVscy8ucmVsc2zPwWrDMAwG4Ptg72B0
X5TuUMaI01uh19I+gLGVxCy2jGSy9e1nemrHjpL4P0nD4SetZiPRyNnCruvBUPYcYp4tXC/Htw8w
Wl0ObuVMFm6kcBhfX4Yzra62kC6xqGlKVgtLreUTUf1CyWnHhXKbTCzJ1VbKjMX5LzcTvvf9HuXR
gPHJNKdgQU5hB+ZyK23zHztFL6w81c5zQp6m6P9TMfB3PtPWFCczVQtB9N4U2rp2HOA44NMz4y8A
AAD//wMAUEsDBBQABgAIAAAAIQCvjNPAwQAAANoAAAAPAAAAZHJzL2Rvd25yZXYueG1sRI/BisJA
DIbvC77DEMHbdqoHWbpOiwiKFwXdvewtdmJb7GRKZ7T17c1B2GP483/JtypG16oH9aHxbGCepKCI
S28brgz8/mw/v0CFiGyx9UwGnhSgyCcfK8ysH/hEj3OslEA4ZGigjrHLtA5lTQ5D4jtiya6+dxhl
7CttexwE7lq9SNOldtiwXKixo01N5e18dwbiEavNbukv88V90JeD4NZ/pTGz6bj+BhVpjP/L7/be
GpBfRUU0QOcvAAAA//8DAFBLAQItABQABgAIAAAAIQDb4fbL7gAAAIUBAAATAAAAAAAAAAAAAAAA
AAAAAABbQ29udGVudF9UeXBlc10ueG1sUEsBAi0AFAAGAAgAAAAhAFr0LFu/AAAAFQEAAAsAAAAA
AAAAAAAAAAAAHwEAAF9yZWxzLy5yZWxzUEsBAi0AFAAGAAgAAAAhAK+M08DBAAAA2gAAAA8AAAAA
AAAAAAAAAAAABwIAAGRycy9kb3ducmV2LnhtbFBLBQYAAAAAAwADALcAAAD1AgAAAAA=
">
  <v:imagedata src="PRACTICA%206%20APLICACION%20MVC%20Jordy%20Roblero%20(3)_archivos/image005.png"
   o:title=""/>
 </v:shape><v:shape id="Image_x0020_9" o:spid="_x0000_s1030" type="#_x0000_t75"
  style='position:absolute;left:33772;top:38649;width:36836;height:29985;
  visibility:visible;mso-wrap-style:square' o:gfxdata="UEsDBBQABgAIAAAAIQDb4fbL7gAAAIUBAAATAAAAW0NvbnRlbnRfVHlwZXNdLnhtbHyQz07DMAyH
70i8Q+QralM4IITa7kDhCAiNB7ASt43WOlEcyvb2pNu4IODoPz9/n1xv9vOkForiPDdwXVagiI23
jocG3rdPxR0oScgWJ8/UwIEENu3lRb09BBKV0ywNjCmFe63FjDSjlD4Q50nv44wpl3HQAc0OB9I3
VXWrjedEnIq03oC27qjHjympx31un0wiTQLq4bS4shrAECZnMGVTvbD9QSnOhDInjzsyuiBXWQP0
r4R18jfgnHvJr4nOknrFmJ5xzhraRtHWf3Kkpfz/yGo5S+H73hkquyhdjr3R8m2lj09svwAAAP//
AwBQSwMEFAAGAAgAAAAhAFr0LFu/AAAAFQEAAAsAAABfcmVscy8ucmVsc2zPwWrDMAwG4Ptg72B0
X5TuUMaI01uh19I+gLGVxCy2jGSy9e1nemrHjpL4P0nD4SetZiPRyNnCruvBUPYcYp4tXC/Htw8w
Wl0ObuVMFm6kcBhfX4Yzra62kC6xqGlKVgtLreUTUf1CyWnHhXKbTCzJ1VbKjMX5LzcTvvf9HuXR
gPHJNKdgQU5hB+ZyK23zHztFL6w81c5zQp6m6P9TMfB3PtPWFCczVQtB9N4U2rp2HOA44NMz4y8A
AAD//wMAUEsDBBQABgAIAAAAIQCvK5szwwAAANoAAAAPAAAAZHJzL2Rvd25yZXYueG1sRI9Ba8JA
FITvQv/D8gpegtlosdjUTSiiIASEpu39kX0modm3IbvVxF/fLRQ8DjPzDbPNR9OJCw2utaxgGScg
iCurW64VfH4cFhsQziNr7CyTgokc5NnDbIuptld+p0vpaxEg7FJU0Hjfp1K6qiGDLrY9cfDOdjDo
gxxqqQe8Brjp5CpJnqXBlsNCgz3tGqq+yx8TKLenL14W+/PuRF1Ur30R9VOh1PxxfHsF4Wn09/B/
+6gVvMDflXADZPYLAAD//wMAUEsBAi0AFAAGAAgAAAAhANvh9svuAAAAhQEAABMAAAAAAAAAAAAA
AAAAAAAAAFtDb250ZW50X1R5cGVzXS54bWxQSwECLQAUAAYACAAAACEAWvQsW78AAAAVAQAACwAA
AAAAAAAAAAAAAAAfAQAAX3JlbHMvLnJlbHNQSwECLQAUAAYACAAAACEAryubM8MAAADaAAAADwAA
AAAAAAAAAAAAAAAHAgAAZHJzL2Rvd25yZXYueG1sUEsFBgAAAAADAAMAtwAAAPcCAAAAAA==
">
  <v:imagedata src="PRACTICA%206%20APLICACION%20MVC%20Jordy%20Roblero%20(3)_archivos/image006.png"
   o:title=""/>
 </v:shape><w:wrap anchorx="page" anchory="page"/>
</v:group><![endif]--><![if !vml]><span style='mso-ignore:vglayout;position:
absolute;z-index:-1660068864;left:0px;margin-left:101px;margin-top:1100px;
width:926px;height:1082px'><img width=741 height=866
src="PRACTICA%206%20APLICACION%20MVC%20Jordy%20Roblero%20(3)_archivos/image007.gif"
v:shapes="Group_x0020_5 Graphic_x0020_6 Image_x0020_7 Image_x0020_8 Image_x0020_9"></span><![endif]><span
lang=ES>//Inserte<span style='letter-spacing:-.35pt'> </span>el<span
style='letter-spacing:-.4pt'> </span>c�digo<span style='letter-spacing:-.4pt'> </span>de<span
style='letter-spacing:-.35pt'> </span>la<span style='letter-spacing:-.5pt'> </span>clase<span
style='letter-spacing:-.35pt'> </span>ejecutable #include &lt;iostream&gt;</span></p>

<p class=MsoBodyText style='margin-top:.15pt;margin-right:411.2pt;margin-bottom:
0cm;margin-left:49.8pt;margin-bottom:.0001pt'><span lang=ES>#include &lt;<span
class=SpellE>limits</span>&gt; #include<span style='letter-spacing:-.65pt'> </span>&quot;<span
class=SpellE>Vehiculo.h</span>&quot; #include &quot;<span class=SpellE>Cliente.h</span>&quot;</span></p>

<p class=MsoBodyText style='margin-right:357.25pt'><span lang=ES>#include<span
style='letter-spacing:-.65pt'> </span>&quot;<span class=SpellE>ControladorVehiculo.h</span>&quot;
#include &quot;<span class=SpellE>ControladorCliente.h</span>&quot; <span
class=SpellE>using</span> <span class=SpellE>namespace</span> <span
class=SpellE>std</span>;</span></p>

<p class=MsoBodyText style='line-height:13.35pt;mso-line-height-rule:exactly'><span
class=SpellE><span lang=ES>void</span></span><span lang=ES style='letter-spacing:
-.3pt'> </span><span class=SpellE><span class=GramE><span lang=ES>mostrarMenu</span></span></span><span
class=GramE><span lang=ES>(</span></span><span lang=ES>)<span style='letter-spacing:
-.25pt'> </span><span style='letter-spacing:-.5pt'>{</span></span></p>

<p class=MsoBodyText style='margin-left:59.6pt;line-height:13.4pt;mso-line-height-rule:
exactly'><span class=SpellE><span lang=ES>cout</span></span><span lang=ES
style='letter-spacing:-.1pt'> </span><span lang=ES>&lt;&lt;<span
style='letter-spacing:-.25pt'> </span>&quot;\n---<span style='letter-spacing:
-.2pt'> </span><span class=SpellE>Menu</span><span style='letter-spacing:.05pt'>
</span>Principal<span style='letter-spacing:-.05pt'> </span>---<span
style='letter-spacing:-.25pt'>\n&quot;</span></span></p>

<p class=MsoBodyText style='margin-top:.05pt;margin-right:0cm;margin-bottom:
0cm;margin-left:72.05pt;margin-bottom:.0001pt;line-height:13.4pt;mso-line-height-rule:
exactly'><span lang=ES>&lt;&lt;<span style='letter-spacing:-.25pt'> </span>&quot;1.<span
style='letter-spacing:-.1pt'> </span>Registrar<span style='letter-spacing:-.15pt'>
</span><span class=SpellE><span style='letter-spacing:-.1pt'>Vehiculo</span></span><span
style='letter-spacing:-.1pt'>\n&quot;</span></span></p>

<p class=MsoBodyText style='margin-left:72.05pt;line-height:13.4pt;mso-line-height-rule:
exactly'><span lang=ES>&lt;&lt;<span style='letter-spacing:-.25pt'> </span>&quot;2.<span
style='letter-spacing:-.1pt'> </span>Registrar<span style='letter-spacing:-.15pt'>
</span><span style='letter-spacing:-.1pt'>Cliente\n&quot;</span></span></p>

<p class=MsoBodyText style='margin-left:72.05pt;line-height:13.4pt;mso-line-height-rule:
exactly'><span lang=ES>&lt;&lt;<span style='letter-spacing:-.3pt'> </span>&quot;3.
Consultar<span style='letter-spacing:-.2pt'> </span><span style='letter-spacing:
-.1pt'>Datos\n&quot;</span></span></p>

<p class=MsoBodyText style='margin-left:72.05pt;line-height:13.4pt;mso-line-height-rule:
exactly'><span lang=ES>&lt;&lt;<span style='letter-spacing:-.3pt'> </span>&quot;4.<span
style='letter-spacing:.1pt'> </span><span style='letter-spacing:-.1pt'>Salir\n&quot;</span></span></p>

<p class=MsoBodyText style='margin-left:72.05pt'><span lang=ES>&lt;&lt;<span
style='letter-spacing:-.35pt'> </span>&quot;Seleccione<span style='letter-spacing:
-.05pt'> </span>una<span style='letter-spacing:-.2pt'> </span><span
class=SpellE>opcion</span>:<span style='letter-spacing:-.1pt'> </span><span
style='letter-spacing:-.25pt'>&quot;;</span></span></p>

<p class=MsoNormal style='margin-left:49.8pt;line-height:13.4pt;mso-line-height-rule:
exactly'><span lang=ES style='letter-spacing:-.5pt'>}</span></p>

<p class=MsoBodyText style='margin-top:0cm;margin-right:390.25pt;margin-bottom:
0cm;margin-left:59.6pt;margin-bottom:.0001pt;text-indent:-9.8pt;line-height:
100%'><span class=SpellE><span lang=ES>void</span></span><span lang=ES
style='letter-spacing:-.65pt'> </span><span class=SpellE><span class=GramE><span
lang=ES>limpiarEntrada</span></span></span><span class=GramE><span lang=ES>(</span></span><span
lang=ES>)<span style='letter-spacing:-.6pt'> </span>{ <span class=SpellE><span
style='letter-spacing:-.1pt'>cin.clear</span></span><span style='letter-spacing:
-.1pt'>();</span></span></p>

<p class=MsoBodyText style='margin-top:13.25pt;margin-right:289.45pt;
margin-bottom:0cm;margin-left:49.8pt;margin-bottom:.0001pt'><span class=SpellE><span
class=GramE><span lang=ES style='letter-spacing:-.1pt'>cin.ignore</span></span></span><span
lang=ES style='letter-spacing:-.1pt'>(<span class=SpellE>numeric_limits</span>&lt;<span
class=SpellE>streamsize</span>&gt;::<span class=SpellE>max</span>(), '\n');</span></p>

<p class=MsoNormal style='margin-left:49.8pt;line-height:13.4pt;mso-line-height-rule:
exactly'><span lang=ES style='letter-spacing:-.5pt'>}</span></p>

<p class=MsoBodyText style='margin-top:0cm;margin-right:390.25pt;margin-bottom:
0cm;margin-left:59.6pt;margin-bottom:.0001pt;text-indent:-9.8pt'><span
class=SpellE><span lang=ES>int</span></span><span lang=ES> <span class=SpellE><span
class=GramE>main</span></span><span class=GramE>(</span>) { <span class=SpellE>ControladorVehiculo</span><span
style='letter-spacing:-.65pt'> </span><span class=SpellE>cv</span>; <span
class=SpellE>ControladorCliente</span> <span class=SpellE>cc</span>; <span
class=SpellE>int</span> <span class=SpellE>opcion</span>;</span></p>

<p class=MsoBodyText style='margin-top:.1pt;margin-right:0cm;margin-bottom:
0cm;margin-left:59.6pt;margin-bottom:.0001pt;line-height:13.4pt;mso-line-height-rule:
exactly'><span lang=ES>do<span style='letter-spacing:-.15pt'> </span><span
style='letter-spacing:-.5pt'>{</span></span></p>

<p class=MsoBodyText style='margin-top:0cm;margin-right:411.2pt;margin-bottom:
0cm;margin-left:69.45pt;margin-bottom:.0001pt'><span class=SpellE><span
class=GramE><span lang=ES style='letter-spacing:-.1pt'>mostrarMenu</span></span></span><span
class=GramE><span lang=ES style='letter-spacing:-.1pt'>(</span></span><span
lang=ES style='letter-spacing:-.1pt'>); </span><span class=SpellE><span
lang=ES>cin</span></span><span lang=ES> &gt;&gt; <span class=SpellE>opcion</span>;
<span class=SpellE><span style='letter-spacing:-.1pt'>limpiarEntrada</span></span><span
style='letter-spacing:-.1pt'>(); </span><span class=SpellE>if</span> (<span
class=SpellE>opcion</span> == 1) {</span></p>

<p class=MsoBodyText style='margin-top:.05pt;margin-right:336.6pt;margin-bottom:
0cm;margin-left:79.4pt;margin-bottom:.0001pt'><span class=SpellE><span lang=ES>string</span></span><span
lang=ES style='letter-spacing:-.65pt'> </span><span class=SpellE><span lang=ES>codigo</span></span><span
lang=ES>,<span style='letter-spacing:-.6pt'> </span>marca,<span
style='letter-spacing:-.65pt'> </span>modelo; <span class=SpellE>int</span> <span
class=SpellE>anio</span>;</span></p>

<p class=MsoBodyText style='margin-left:79.4pt;line-height:13.35pt;mso-line-height-rule:
exactly'><span class=SpellE><span lang=ES>double</span></span><span lang=ES
style='letter-spacing:-.25pt'> </span><span lang=ES>km,<span style='letter-spacing:
-.05pt'> </span><span style='letter-spacing:-.1pt'>precio;</span></span></p>

<p class=MsoBodyText style='margin-top:0cm;margin-right:289.45pt;margin-bottom:
0cm;margin-left:79.4pt;margin-bottom:.0001pt'><span class=SpellE><span lang=ES>cout</span></span><span
lang=ES style='letter-spacing:-.3pt'> </span><span lang=ES>&lt;&lt;<span
style='letter-spacing:-.45pt'> </span>&quot;<span class=SpellE>Codigo</span>:<span
style='letter-spacing:-.35pt'> </span>&quot;;<span style='letter-spacing:-.35pt'>
</span><span class=SpellE><span class=GramE>getline</span></span><span
class=GramE>(</span><span class=SpellE>cin</span>,<span style='letter-spacing:
-.35pt'> </span><span class=SpellE>codigo</span>); <span class=SpellE>cout</span>
&lt;&lt; &quot;Marca: &quot;; <span class=SpellE>getline</span>(<span
class=SpellE>cin</span>, marca); <span class=SpellE>cout</span> &lt;&lt;
&quot;Modelo: &quot;; <span class=SpellE>getline</span>(<span class=SpellE>cin</span>,</span></p>

<p class=MsoBodyText style='line-height:13.35pt;mso-line-height-rule:exactly'><span
lang=ES style='letter-spacing:-.1pt'>modelo);</span></p>

<p class=MsoBodyText style='margin-top:.2pt;margin-right:0cm;margin-bottom:
0cm;margin-left:79.4pt;margin-bottom:.0001pt;line-height:13.4pt;mso-line-height-rule:
exactly'><span class=SpellE><span lang=ES>cout</span></span><span lang=ES
style='letter-spacing:-.15pt'> </span><span lang=ES>&lt;&lt;<span
style='letter-spacing:-.2pt'> </span>&quot;Ano:<span style='letter-spacing:
-.05pt'> </span>&quot;;<span style='letter-spacing:.05pt'> </span><span
class=SpellE>cin</span><span style='letter-spacing:-.1pt'> </span>&gt;&gt;<span
style='letter-spacing:-.2pt'> <span class=SpellE>anio</span>;</span></span></p>

<p class=MsoBodyText style='margin-top:0cm;margin-right:308.85pt;margin-bottom:
0cm;margin-left:79.4pt;margin-bottom:.0001pt'><span class=SpellE><span lang=ES>cout</span></span><span
lang=ES style='letter-spacing:-.3pt'> </span><span lang=ES>&lt;&lt;<span
style='letter-spacing:-.5pt'> </span>&quot;Kilometraje:<span style='letter-spacing:
-.35pt'> </span>&quot;;<span style='letter-spacing:-.2pt'> </span><span
class=SpellE>cin</span><span style='letter-spacing:-.4pt'> </span>&gt;&gt;<span
style='letter-spacing:-.3pt'> </span>km; <span class=SpellE>cout</span>
&lt;&lt; &quot;Precio: &quot;; <span class=SpellE>cin</span> &gt;&gt; precio; <span
class=SpellE><span class=GramE><span style='letter-spacing:-.1pt'>limpiarEntrada</span></span></span><span
class=GramE><span style='letter-spacing:-.1pt'>(</span></span><span
style='letter-spacing:-.1pt'>);</span></span></p>

<p class=MsoBodyText style='margin-right:308.85pt;text-indent:29.6pt'><span
class=SpellE><span lang=ES>Vehiculo</span></span><span lang=ES
style='letter-spacing:-.65pt'> </span><span class=GramE><span lang=ES>v(</span></span><span
class=SpellE><span lang=ES>codigo</span></span><span lang=ES>,<span
style='letter-spacing:-.55pt'> </span>marca,<span style='letter-spacing:-.6pt'>
</span>modelo, <span class=SpellE>anio</span>, km, precio);</span></p>

<p class=MsoBodyText style='margin-left:79.4pt;line-height:13.35pt;mso-line-height-rule:
exactly'><span class=SpellE><span lang=ES style='letter-spacing:-.1pt'>cv.registrarVehiculo</span></span><span
lang=ES style='letter-spacing:-.1pt'>(v);</span></p>

<p class=MsoBodyText style='margin-right:289.45pt;text-indent:29.6pt;
line-height:100%'><span class=SpellE><span lang=ES>cout</span></span><span
lang=ES style='letter-spacing:-.65pt'> </span><span lang=ES>&lt;&lt;<span
style='letter-spacing:-.6pt'> </span>&quot;<span class=SpellE>Vehiculo</span><span
style='letter-spacing:-.65pt'> </span>registrado <span style='letter-spacing:
-.1pt'>exitosamente.\n&quot;;</span></span></p>

<p class=MsoBodyText style='margin-left:69.65pt;line-height:13.3pt;mso-line-height-rule:
exactly'><span lang=ES>}<span style='letter-spacing:-.05pt'> </span><span
class=SpellE>else</span><span style='letter-spacing:-.2pt'> </span><span
class=SpellE>if</span><span style='letter-spacing:-.1pt'> </span>(<span
class=SpellE>opcion</span><span style='letter-spacing:-.15pt'> </span>==<span
style='letter-spacing:-.2pt'> </span>2)<span style='letter-spacing:.15pt'> </span><span
style='letter-spacing:-.5pt'>{</span></span></p>

</div>

<span lang=ES style='font-size:11.0pt;font-family:"Calibri",sans-serif;
mso-fareast-font-family:Calibri;mso-ansi-language:ES;mso-fareast-language:EN-US;
mso-bidi-language:AR-SA'><br clear=all style='page-break-before:always;
mso-break-type:section-break'>
</span>

<div class=WordSection6>

<div align=right>

<table class=TableNormal border=1 cellspacing=0 cellpadding=0 width=0
 style='border-collapse:collapse;mso-table-layout-alt:fixed;border:none;
 mso-border-alt:solid black .5pt;mso-yfti-tbllook:480;mso-padding-alt:0cm 0cm 0cm 0cm;
 mso-border-insideh:.5pt solid black;mso-border-insidev:.5pt solid black'>
 <tr style='mso-yfti-irow:0;mso-yfti-firstrow:yes;height:335.35pt'>
  <td width=8 valign=top style='width:5.7pt;border:solid black 1.0pt;
  border-bottom:none;mso-border-top-alt:solid black .5pt;mso-border-left-alt:
  solid black 1.0pt;mso-border-right-alt:solid black .5pt;padding:0cm 0cm 0cm 0cm;
  height:335.35pt'>
  <p class=TableParagraph><span lang=ES style='font-family:"Times New Roman",serif;
  mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri'><o:p>&nbsp;</o:p></span></p>
  </td>
  <td width=339 valign=top style='width:254.25pt;border-top:double black 1.5pt;
  border-left:none;border-bottom:solid black 1.0pt;border-right:solid black 1.0pt;
  mso-border-left-alt:solid black .5pt;mso-border-alt:solid black .5pt;
  mso-border-top-alt:double black 1.5pt;padding:0cm 0cm 0cm 0cm;height:335.35pt'>
  <p class=TableParagraph style='margin-top:0cm;margin-right:7.1pt;margin-bottom:
  0cm;margin-left:71.45pt;margin-bottom:.0001pt'><span class=SpellE><span
  lang=ES>string</span></span><span lang=ES style='letter-spacing:-.5pt'> </span><span
  class=SpellE><span lang=ES>dni</span></span><span lang=ES>,<span
  style='letter-spacing:-.45pt'> </span>nombre,<span style='letter-spacing:
  -.35pt'> </span><span class=SpellE>telefono</span>,<span style='letter-spacing:
  -.45pt'> </span><span class=SpellE>direccion</span>; <span class=SpellE>cout</span>
  &lt;&lt; &quot;DNI: &quot;; <span class=SpellE><span class=GramE>getline</span></span><span
  class=GramE>(</span><span class=SpellE>cin</span>, <span class=SpellE>dni</span>);</span></p>
  <p class=TableParagraph style='margin-top:0cm;margin-right:19.2pt;margin-bottom:
  0cm;margin-left:41.8pt;margin-bottom:.0001pt;text-indent:29.6pt'><span
  class=SpellE><span lang=ES>cout</span></span><span lang=ES style='letter-spacing:
  -.45pt'> </span><span lang=ES>&lt;&lt;<span style='letter-spacing:-.6pt'> </span>&quot;Nombre:<span
  style='letter-spacing:-.3pt'> </span>&quot;;<span style='letter-spacing:-.5pt'>
  </span><span class=SpellE><span class=GramE>getline</span></span><span
  class=GramE>(</span><span class=SpellE>cin</span>, <span style='letter-spacing:
  -.1pt'>nombre);</span></span></p>
  <p class=TableParagraph style='margin-left:41.8pt;text-indent:29.6pt'><span
  class=SpellE><span lang=ES>cout</span></span><span lang=ES style='letter-spacing:
  -.4pt'> </span><span lang=ES>&lt;&lt;<span style='letter-spacing:-.55pt'> </span>&quot;<span
  class=SpellE>Telefono</span>:<span style='letter-spacing:-.4pt'> </span>&quot;;<span
  style='letter-spacing:-.45pt'> </span><span class=SpellE><span class=GramE>getline</span></span><span
  class=GramE>(</span><span class=SpellE>cin</span>, <span class=SpellE><span
  style='letter-spacing:-.1pt'>telefono</span></span><span style='letter-spacing:
  -.1pt'>);</span></span></p>
  <p class=TableParagraph style='margin-left:41.8pt;text-indent:29.6pt'><span
  class=SpellE><span lang=ES>cout</span></span><span lang=ES style='letter-spacing:
  -.35pt'> </span><span lang=ES>&lt;&lt;<span style='letter-spacing:-.55pt'> </span>&quot;<span
  class=SpellE>Direccion</span>:<span style='letter-spacing:-.4pt'> </span>&quot;;<span
  style='letter-spacing:-.45pt'> </span><span class=SpellE><span class=GramE>getline</span></span><span
  class=GramE>(</span><span class=SpellE>cin</span>, <span class=SpellE><span
  style='letter-spacing:-.1pt'>direccion</span></span><span style='letter-spacing:
  -.1pt'>);</span></span></p>
  <p class=TableParagraph style='margin-left:41.8pt;text-indent:29.8pt'><span
  lang=ES>Cliente<span style='letter-spacing:-.65pt'> </span><span class=GramE>c(</span><span
  class=SpellE>dni</span>,<span style='letter-spacing:-.6pt'> </span>nombre,<span
  style='letter-spacing:-.65pt'> </span><span class=SpellE>telefono</span>, <span
  class=SpellE><span style='letter-spacing:-.1pt'>direccion</span></span><span
  style='letter-spacing:-.1pt'>);</span></span></p>
  <p class=TableParagraph style='margin-left:71.45pt;line-height:13.4pt;
  mso-line-height-rule:exactly'><span class=SpellE><span lang=ES
  style='letter-spacing:-.1pt'>cc.registrarCliente</span></span><span lang=ES
  style='letter-spacing:-.1pt'>(c);</span></p>
  <p class=TableParagraph style='margin-left:41.8pt;text-indent:29.6pt'><span
  class=SpellE><span lang=ES>cout</span></span><span lang=ES style='letter-spacing:
  -.65pt'> </span><span lang=ES>&lt;&lt;<span style='letter-spacing:-.6pt'> </span>&quot;Cliente<span
  style='letter-spacing:-.65pt'> </span>registrado <span style='letter-spacing:
  -.1pt'>exitosamente.\n&quot;;</span></span></p>
  <p class=TableParagraph style='margin-left:61.65pt;line-height:13.35pt;
  mso-line-height-rule:exactly'><span lang=ES>}<span style='letter-spacing:
  -.05pt'> </span><span class=SpellE>else</span><span style='letter-spacing:
  -.2pt'> </span><span class=SpellE>if</span><span style='letter-spacing:-.1pt'>
  </span>(<span class=SpellE>opcion</span><span style='letter-spacing:-.15pt'> </span>==<span
  style='letter-spacing:-.2pt'> </span>3)<span style='letter-spacing:.15pt'> </span><span
  style='letter-spacing:-.5pt'>{</span></span></p>
  <p class=TableParagraph style='margin-left:71.45pt;line-height:13.4pt;
  mso-line-height-rule:exactly'><span class=SpellE><span lang=ES>cout</span></span><span
  lang=ES style='letter-spacing:-.1pt'> </span><span lang=ES>&lt;&lt;<span
  style='letter-spacing:-.3pt'> </span>&quot;\n---<span style='letter-spacing:
  -.15pt'> </span><span class=SpellE>Vehiculos</span><span style='letter-spacing:
  -.15pt'> </span>Registrados<span style='letter-spacing:.05pt'> </span>--<span
  style='letter-spacing:-.5pt'>-</span></span></p>
  <p class=TableParagraph style='margin-left:41.8pt;line-height:13.4pt;
  mso-line-height-rule:exactly'><span lang=ES style='letter-spacing:-.2pt'>\n&quot;;</span></p>
  <p class=TableParagraph style='margin-left:71.45pt'><span class=SpellE><span
  lang=ES style='letter-spacing:-.1pt'>cv.<span class=GramE>listarVehiculos</span></span></span><span
  class=GramE><span lang=ES style='letter-spacing:-.1pt'>(</span></span><span
  lang=ES style='letter-spacing:-.1pt'>);</span></p>
  <p class=TableParagraph style='margin-left:71.45pt;line-height:13.4pt;
  mso-line-height-rule:exactly'><span class=SpellE><span lang=ES>cout</span></span><span
  lang=ES style='letter-spacing:-.15pt'> </span><span lang=ES>&lt;&lt;<span
  style='letter-spacing:-.25pt'> </span>&quot;\n---<span style='letter-spacing:
  -.2pt'> </span>Clientes<span style='letter-spacing:-.15pt'> </span>Registrados
  --<span style='letter-spacing:-.5pt'>-</span></span></p>
  <p class=TableParagraph style='margin-left:41.8pt;line-height:13.4pt;
  mso-line-height-rule:exactly'><span lang=ES style='letter-spacing:-.2pt'>\n&quot;;</span></p>
  <p class=TableParagraph style='margin-left:71.45pt;line-height:13.4pt;
  mso-line-height-rule:exactly'><span class=SpellE><span lang=ES
  style='letter-spacing:-.1pt'>cc.<span class=GramE>listarClientes</span></span></span><span
  class=GramE><span lang=ES style='letter-spacing:-.1pt'>(</span></span><span
  lang=ES style='letter-spacing:-.1pt'>);</span></p>
  <p class=TableParagraph style='margin-left:61.65pt;line-height:13.4pt;
  mso-line-height-rule:exactly'><span lang=ES style='letter-spacing:-.5pt'>}</span></p>
  <p class=TableParagraph style='margin-left:51.6pt;line-height:13.4pt;
  mso-line-height-rule:exactly'><span lang=ES>}<span style='letter-spacing:
  -.05pt'> </span><span class=SpellE>while</span><span style='letter-spacing:
  -.2pt'> </span>(<span class=SpellE><span class=GramE>opcion</span></span><span
  class=GramE><span style='letter-spacing:-.1pt'> </span>!</span>=<span
  style='letter-spacing:-.2pt'> </span><span style='letter-spacing:-.25pt'>4);</span></span></p>
  <p class=TableParagraph style='margin-top:0cm;margin-right:19.2pt;margin-bottom:
  0cm;margin-left:51.6pt;margin-bottom:.0001pt'><span class=SpellE><span
  lang=ES>cout</span></span><span lang=ES style='letter-spacing:-.35pt'> </span><span
  lang=ES>&lt;&lt;<span style='letter-spacing:-.55pt'> </span>&quot;Saliendo<span
  style='letter-spacing:-.45pt'> </span>del<span style='letter-spacing:-.4pt'> </span>sistema...\n&quot;;
  <span class=SpellE>return</span> 0;</span></p>
  <p class=TableParagraph style='margin-top:.1pt;margin-right:0cm;margin-bottom:
  0cm;margin-left:5.85pt;margin-bottom:.0001pt;line-height:12.2pt;mso-line-height-rule:
  exactly'><span lang=ES style='letter-spacing:-.5pt'>}</span></p>
  </td>
  <td width=394 valign=top style='width:295.5pt;border-top:double black 1.5pt;
  border-left:none;border-bottom:solid black 1.0pt;border-right:none;
  mso-border-left-alt:solid black .5pt;mso-border-top-alt:double black 1.5pt;
  mso-border-left-alt:solid black .5pt;mso-border-bottom-alt:solid black .5pt;
  padding:0cm 0cm 0cm 0cm;height:335.35pt'>
  <p class=TableParagraph><span lang=ES style='font-family:"Times New Roman",serif;
  mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri'><o:p>&nbsp;</o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:1;height:39.7pt'>
  <td width=741 colspan=3 valign=top style='width:555.45pt;border:solid black 1.0pt;
  border-right:none;mso-border-top-alt:solid black .5pt;mso-border-left-alt:
  solid black 1.0pt;mso-border-bottom-alt:solid black .5pt;padding:0cm 0cm 0cm 0cm;
  height:39.7pt'>
  <p class=TableParagraph><span lang=ES style='font-family:"Times New Roman",serif;
  mso-hansi-font-family:Calibri;mso-bidi-font-family:Calibri'><o:p>&nbsp;</o:p></span></p>
  </td>
 </tr>
 <tr style='mso-yfti-irow:2;mso-yfti-lastrow:yes;height:34.75pt'>
  <td width=741 colspan=3 valign=top style='width:555.45pt;border-top:none;
  border-left:solid black 1.0pt;border-bottom:solid black 1.0pt;border-right:
  none;mso-border-top-alt:solid black .5pt;padding:0cm 0cm 0cm 0cm;height:34.75pt'>
  <p class=TableParagraph style='margin-top:0cm;margin-right:.75pt;margin-bottom:
  0cm;margin-left:.5pt;margin-bottom:.0001pt;tab-stops:555.45pt'><u><span
  lang=ES style='font-size:14.0pt;mso-bidi-font-size:11.0pt;letter-spacing:
  1.55pt'><span style='mso-spacerun:yes'>�</span></span></u><u><span lang=ES
  style='font-size:14.0pt;mso-bidi-font-size:11.0pt'>Problemas<span
  style='letter-spacing:-.2pt'> </span>detectados<span style='letter-spacing:
  -.2pt'> </span>durante<span style='letter-spacing:-.05pt'> </span>el<span
  style='letter-spacing:-.1pt'> </span>desarrollo<span style='letter-spacing:
  -.15pt'> </span>de<span style='letter-spacing:-.05pt'> </span>la <span
  style='letter-spacing:-.1pt'>pr�ctica/deber</span><span style='mso-tab-count:
  1'>����������������������������������������������������������������������������������������������������������������������������������������� </span></span></u><span
  lang=ES style='font-size:14.0pt;mso-bidi-font-size:11.0pt'><o:p></o:p></span></p>
  </td>
 </tr>
</table>

</div>

<p class=MsoNormal><span lang=ES><o:p>&nbsp;</o:p></span></p>

</div>

</body>

</html>
ng PRACTICA 6 APLICACION MVC Jordy Roblero (3).htm…]()

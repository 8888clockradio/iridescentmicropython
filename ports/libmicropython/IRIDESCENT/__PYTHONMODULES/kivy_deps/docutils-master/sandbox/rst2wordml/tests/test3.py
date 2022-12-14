#!C:/dev/python25/python.exe
# coding: utf-8

"""
>>> test_wordml('''
... *****
... Title
... *****
... 
... --------
... Subtitle
... --------
... 
... :Author:    Alan G. Isaac
... :Contact:   aisaac@american.edu
... :Organization: Department of Economics, American University
... 
... 
... Introduction
... ************
... 
... Some text, up to a 'note'. [#note1]_
... More text.
... 
... Just unindent to see problem. Comment it out again by indenting.
... 
... First Term
...   Some definitional text without a note.
...   No problem.
... 
... Second Term
...   Some definitional text with a note.
...   This is a problem.
...   [#problem]_
... 
... Another Section
... ***************
... 
... A paragraph with a note containing a reference.
... No problem. [#notewithref]_
... 
... .. figure :: test3.png
... 
...    Two waves doing *something*.
... 
... Conclusion
... **********
... 
... That's all folks.
... 
... . Links 
... 
... .. _Python: http://www.python.org
... 
... .. [#notewithref]
...    Use Python_.
... 
... .. [#note1]
...    A detailed discussion of the note.
... 
... .. [#problem]
...    Details can be found in,
...    which contains a much cited algorithm for the Mersenne Twister.
... ''')
<w:wordDocument xmlns:wsp="http://schemas.microsoft.com/office/word/2003/wordml/sp2" xmlns:sl="http://schemas.microsoft.com/schemaLibrary/2003/core" w:embeddedObjPresent="no" xmlns:w="http://schemas.microsoft.com/office/word/2003/wordml" xmlns:v="urn:schemas-microsoft-com:vml" xml:space="preserve" w:ocxPresent="no" xmlns:w10="urn:schemas-microsoft-com:office:word" w:macrosPresent="no" xmlns:o="urn:schemas-microsoft-com:office:office" xmlns:dt="uuid:C2F41010-65B3-11d1-A29F-00AA00C14882" xmlns:aml="http://schemas.microsoft.com/aml/2001/core" xmlns:wx="http://schemas.microsoft.com/office/word/2003/auxHint" >
  <w:ignoreElements w:val="http://schemas.microsoft.com/office/word/2003/wordml/sp2" ></w:ignoreElements>
  <w:fonts >
    <w:defaultFonts w:h-ansi="Times New Roman" w:fareast="Times New Roman" w:cs="Times New Roman" w:ascii="Times New Roman" ></w:defaultFonts>
    <w:font w:name="Wingdings" >
      <w:panose-1 w:val="05000000000000000000" ></w:panose-1>
      <w:charset w:val="02" ></w:charset>
      <w:family w:val="Auto" ></w:family>
      <w:pitch w:val="variable" ></w:pitch>
      <w:sig w:csb-1="00000000" w:csb-0="80000000" w:usb-3="00000000" w:usb-2="00000000" w:usb-1="10000000" w:usb-0="00000000" ></w:sig>
    </w:font>
  </w:fonts>
  <w:lists >
    <w:listDef w:listDefId="0" >
      <w:plt w:val="HybridMultilevel" ></w:plt>
      <w:tmpl w:val="9C26005E" ></w:tmpl>
      <w:lvl w:ilvl="0" w:tplc="0409000F" >
        <w:start w:val="1" ></w:start>
        <w:lvlText w:val="%1." ></w:lvlText>
        <w:lvlJc w:val="left" ></w:lvlJc>
        <w:pPr >
          <w:tabs >
            <w:tab w:val="list" w:pos="720" ></w:tab>
          </w:tabs>
          <w:ind w:hanging="360" w:left="720" ></w:ind>
        </w:pPr>
      </w:lvl>
      <w:lvl w:ilvl="1" w:tplc="04090019" >
        <w:start w:val="1" ></w:start>
        <w:nfc w:val="4" ></w:nfc>
        <w:lvlText w:val="%2." ></w:lvlText>
        <w:lvlJc w:val="left" ></w:lvlJc>
        <w:pPr >
          <w:tabs >
            <w:tab w:val="list" w:pos="1440" ></w:tab>
          </w:tabs>
          <w:ind w:hanging="360" w:left="1440" ></w:ind>
        </w:pPr>
      </w:lvl>
      <w:lvl w:ilvl="2" w:tplc="0409001B" >
        <w:start w:val="1" ></w:start>
        <w:nfc w:val="2" ></w:nfc>
        <w:lvlText w:val="%3." ></w:lvlText>
        <w:lvlJc w:val="right" ></w:lvlJc>
        <w:pPr >
          <w:tabs >
            <w:tab w:val="list" w:pos="2160" ></w:tab>
          </w:tabs>
          <w:ind w:hanging="180" w:left="2160" ></w:ind>
        </w:pPr>
      </w:lvl>
      <w:lvl w:ilvl="3" w:tplc="0409000F" >
        <w:start w:val="1" ></w:start>
        <w:lvlText w:val="%4." ></w:lvlText>
        <w:lvlJc w:val="left" ></w:lvlJc>
        <w:pPr >
          <w:tabs >
            <w:tab w:val="list" w:pos="2880" ></w:tab>
          </w:tabs>
          <w:ind w:hanging="360" w:left="2880" ></w:ind>
        </w:pPr>
      </w:lvl>
      <w:lvl w:ilvl="4" w:tplc="04090019" >
        <w:start w:val="1" ></w:start>
        <w:nfc w:val="4" ></w:nfc>
        <w:lvlText w:val="%5." ></w:lvlText>
        <w:lvlJc w:val="left" ></w:lvlJc>
        <w:pPr >
          <w:tabs >
            <w:tab w:val="list" w:pos="3600" ></w:tab>
          </w:tabs>
          <w:ind w:hanging="360" w:left="3600" ></w:ind>
        </w:pPr>
      </w:lvl>
      <w:lvl w:ilvl="5" w:tplc="0409001B" >
        <w:start w:val="1" ></w:start>
        <w:nfc w:val="2" ></w:nfc>
        <w:lvlText w:val="%6." ></w:lvlText>
        <w:lvlJc w:val="right" ></w:lvlJc>
        <w:pPr >
          <w:tabs >
            <w:tab w:val="list" w:pos="4320" ></w:tab>
          </w:tabs>
          <w:ind w:hanging="180" w:left="4320" ></w:ind>
        </w:pPr>
      </w:lvl>
      <w:lvl w:ilvl="6" w:tplc="0409000F" >
        <w:start w:val="1" ></w:start>
        <w:lvlText w:val="%7." ></w:lvlText>
        <w:lvlJc w:val="left" ></w:lvlJc>
        <w:pPr >
          <w:tabs >
            <w:tab w:val="list" w:pos="5040" ></w:tab>
          </w:tabs>
          <w:ind w:hanging="360" w:left="5040" ></w:ind>
        </w:pPr>
      </w:lvl>
      <w:lvl w:ilvl="7" w:tplc="04090019" >
        <w:start w:val="1" ></w:start>
        <w:nfc w:val="4" ></w:nfc>
        <w:lvlText w:val="%8." ></w:lvlText>
        <w:lvlJc w:val="left" ></w:lvlJc>
        <w:pPr >
          <w:tabs >
            <w:tab w:val="list" w:pos="5760" ></w:tab>
          </w:tabs>
          <w:ind w:hanging="360" w:left="5760" ></w:ind>
        </w:pPr>
      </w:lvl>
      <w:lvl w:ilvl="8" w:tentative="on" w:tplc="0409001B" >
        <w:start w:val="1" ></w:start>
        <w:nfc w:val="2" ></w:nfc>
        <w:lvlText w:val="%9." ></w:lvlText>
        <w:lvlJc w:val="right" ></w:lvlJc>
        <w:pPr >
          <w:tabs >
            <w:tab w:val="list" w:pos="6480" ></w:tab>
          </w:tabs>
          <w:ind w:hanging="180" w:left="6480" ></w:ind>
        </w:pPr>
      </w:lvl>
    </w:listDef>
    <w:listDef w:listDefId="1" >
      <w:plt w:val="HybridMultilevel" ></w:plt>
      <w:tmpl w:val="6DBC60EA" ></w:tmpl>
      <w:lvl w:ilvl="0" w:tplc="04090001" >
        <w:start w:val="1" ></w:start>
        <w:nfc w:val="23" ></w:nfc>
        <w:lvlText w:val="???" ></w:lvlText>
        <w:lvlJc w:val="left" ></w:lvlJc>
        <w:pPr >
          <w:tabs >
            <w:tab w:val="list" w:pos="720" ></w:tab>
          </w:tabs>
          <w:ind w:hanging="360" w:left="720" ></w:ind>
        </w:pPr>
        <w:rPr >
          <w:rFonts w:h-ansi="Symbol" w:hint="default" w:ascii="Symbol" ></w:rFonts>
        </w:rPr>
      </w:lvl>
      <w:lvl w:ilvl="1" w:tplc="04090003" >
        <w:start w:val="1" ></w:start>
        <w:nfc w:val="23" ></w:nfc>
        <w:lvlText w:val="o" ></w:lvlText>
        <w:lvlJc w:val="left" ></w:lvlJc>
        <w:pPr >
          <w:tabs >
            <w:tab w:val="list" w:pos="1440" ></w:tab>
          </w:tabs>
          <w:ind w:hanging="360" w:left="1440" ></w:ind>
        </w:pPr>
        <w:rPr >
          <w:rFonts w:h-ansi="Courier New" w:cs="Courier New" w:hint="default" w:ascii="Courier New" ></w:rFonts>
        </w:rPr>
      </w:lvl>
      <w:lvl w:ilvl="2" w:tplc="04090005" >
        <w:start w:val="1" ></w:start>
        <w:nfc w:val="23" ></w:nfc>
        <w:lvlText w:val="???" ></w:lvlText>
        <w:lvlJc w:val="left" ></w:lvlJc>
        <w:pPr >
          <w:tabs >
            <w:tab w:val="list" w:pos="2160" ></w:tab>
          </w:tabs>
          <w:ind w:hanging="360" w:left="2160" ></w:ind>
        </w:pPr>
        <w:rPr >
          <w:rFonts w:h-ansi="Wingdings" w:hint="default" w:ascii="Wingdings" ></w:rFonts>
        </w:rPr>
      </w:lvl>
      <w:lvl w:ilvl="3" w:tplc="04090001" >
        <w:start w:val="1" ></w:start>
        <w:nfc w:val="23" ></w:nfc>
        <w:lvlText w:val="???" ></w:lvlText>
        <w:lvlJc w:val="left" ></w:lvlJc>
        <w:pPr >
          <w:tabs >
            <w:tab w:val="list" w:pos="2880" ></w:tab>
          </w:tabs>
          <w:ind w:hanging="360" w:left="2880" ></w:ind>
        </w:pPr>
        <w:rPr >
          <w:rFonts w:h-ansi="Symbol" w:hint="default" w:ascii="Symbol" ></w:rFonts>
        </w:rPr>
      </w:lvl>
      <w:lvl w:ilvl="4" w:tplc="04090003" >
        <w:start w:val="1" ></w:start>
        <w:nfc w:val="23" ></w:nfc>
        <w:lvlText w:val="o" ></w:lvlText>
        <w:lvlJc w:val="left" ></w:lvlJc>
        <w:pPr >
          <w:tabs >
            <w:tab w:val="list" w:pos="3600" ></w:tab>
          </w:tabs>
          <w:ind w:hanging="360" w:left="3600" ></w:ind>
        </w:pPr>
        <w:rPr >
          <w:rFonts w:h-ansi="Courier New" w:cs="Courier New" w:hint="default" w:ascii="Courier New" ></w:rFonts>
        </w:rPr>
      </w:lvl>
      <w:lvl w:ilvl="5" w:tplc="04090005" >
        <w:start w:val="1" ></w:start>
        <w:nfc w:val="23" ></w:nfc>
        <w:lvlText w:val="???" ></w:lvlText>
        <w:lvlJc w:val="left" ></w:lvlJc>
        <w:pPr >
          <w:tabs >
            <w:tab w:val="list" w:pos="4320" ></w:tab>
          </w:tabs>
          <w:ind w:hanging="360" w:left="4320" ></w:ind>
        </w:pPr>
        <w:rPr >
          <w:rFonts w:h-ansi="Wingdings" w:hint="default" w:ascii="Wingdings" ></w:rFonts>
        </w:rPr>
      </w:lvl>
      <w:lvl w:ilvl="6" w:tplc="04090001" >
        <w:start w:val="1" ></w:start>
        <w:nfc w:val="23" ></w:nfc>
        <w:lvlText w:val="???" ></w:lvlText>
        <w:lvlJc w:val="left" ></w:lvlJc>
        <w:pPr >
          <w:tabs >
            <w:tab w:val="list" w:pos="5040" ></w:tab>
          </w:tabs>
          <w:ind w:hanging="360" w:left="5040" ></w:ind>
        </w:pPr>
        <w:rPr >
          <w:rFonts w:h-ansi="Symbol" w:hint="default" w:ascii="Symbol" ></w:rFonts>
        </w:rPr>
      </w:lvl>
      <w:lvl w:ilvl="7" w:tplc="04090003" >
        <w:start w:val="1" ></w:start>
        <w:nfc w:val="23" ></w:nfc>
        <w:lvlText w:val="o" ></w:lvlText>
        <w:lvlJc w:val="left" ></w:lvlJc>
        <w:pPr >
          <w:tabs >
            <w:tab w:val="list" w:pos="5760" ></w:tab>
          </w:tabs>
          <w:ind w:hanging="360" w:left="5760" ></w:ind>
        </w:pPr>
        <w:rPr >
          <w:rFonts w:h-ansi="Courier New" w:cs="Courier New" w:hint="default" w:ascii="Courier New" ></w:rFonts>
        </w:rPr>
      </w:lvl>
      <w:lvl w:ilvl="8" w:tplc="04090005" >
        <w:start w:val="1" ></w:start>
        <w:nfc w:val="23" ></w:nfc>
        <w:lvlText w:val="???" ></w:lvlText>
        <w:lvlJc w:val="left" ></w:lvlJc>
        <w:pPr >
          <w:tabs >
            <w:tab w:val="list" w:pos="6480" ></w:tab>
          </w:tabs>
          <w:ind w:hanging="360" w:left="6480" ></w:ind>
        </w:pPr>
        <w:rPr >
          <w:rFonts w:h-ansi="Wingdings" w:hint="default" w:ascii="Wingdings" ></w:rFonts>
        </w:rPr>
      </w:lvl>
    </w:listDef>
<BLANKLINE>
<BLANKLINE>
  </w:lists>
  <w:styles >
    <w:versionOfBuiltInStylenames w:val="4" ></w:versionOfBuiltInStylenames>
    <w:latentStyles w:latentStyleCount="156" w:defLockedState="off" ></w:latentStyles>
    <w:style w:styleId="Normal" w:type="paragraph" w:default="on" >
      <w:name w:val="Normal" ></w:name>
      <w:pPr >
        <w:spacing w:after="120" ></w:spacing>
      </w:pPr>
      <w:rPr >
        <wx:font wx:val="Times New Roman" ></wx:font>
        <w:sz-cs w:val="24" ></w:sz-cs>
        <w:lang w:val="EN-US" w:fareast="EN-US" w:bidi="AR-SA" ></w:lang>
      </w:rPr>
    </w:style>
    <w:style w:styleId="Hyperlink" w:type="character" >
      <w:name w:val="Hyperlink" ></w:name>
      <w:basedOn w:val="DefaultParagraphFont" ></w:basedOn>
      <w:rPr >
        <w:color w:val="0000FF" ></w:color>
        <w:u w:val="single" ></w:u>
      </w:rPr>
    </w:style>
    <w:style w:styleId="LiteralBlock" w:type="paragraph" >
      <w:name w:val="LiteralBlock" ></w:name>
      <w:basedOn w:val="Normal" ></w:basedOn>
      <w:next w:val="Normal" ></w:next>
      <w:pPr >
        <w:pStyle w:val="LiteralBlock" ></w:pStyle>
        <w:ind w:right="720" w:left="720" ></w:ind>
      </w:pPr>
      <w:rPr >
        <w:rFonts w:h-ansi="Courier New" w:ascii="Courier New" ></w:rFonts>
        <wx:font wx:val="Courier New" ></wx:font><w:sz w:val="20" ></w:sz>
      </w:rPr>
    </w:style>
    <w:style w:styleId="Heading1" w:type="paragraph" >
      <w:name w:val="heading 1" ></w:name>
      <wx:uiName wx:val="Heading 1" ></wx:uiName>
      <w:basedOn w:val="Normal" ></w:basedOn>
      <w:next w:val="Normal" ></w:next>
      <w:pPr >
        <w:pStyle w:val="Heading1" ></w:pStyle>
        <w:keepNext ></w:keepNext>
        <w:spacing w:before="240" w:after="60" ></w:spacing>
        <w:outlineLvl w:val="0" ></w:outlineLvl>
      </w:pPr>
      <w:rPr >
        <w:rFonts w:h-ansi="Arial" w:cs="Arial" w:ascii="Arial" ></w:rFonts>
        <wx:font wx:val="Arial" ></wx:font>
        <w:b ></w:b>
        <w:b-cs ></w:b-cs>
        <w:kern w:val="32" ></w:kern>
        <w:sz w:val="32" ></w:sz>
        <w:sz-cs w:val="32" ></w:sz-cs>
      </w:rPr>
    </w:style>
    <w:style w:styleId="Heading2" w:type="paragraph" >
      <w:name w:val="heading 2" ></w:name>
      <wx:uiName wx:val="Heading 2" ></wx:uiName>
      <w:basedOn w:val="Normal" ></w:basedOn>
      <w:next w:val="Normal" ></w:next>
      <w:pPr >
        <w:pStyle w:val="Heading2" ></w:pStyle>
        <w:keepNext ></w:keepNext>
        <w:spacing w:before="240" w:after="60" ></w:spacing>
        <w:outlineLvl w:val="1" ></w:outlineLvl>
      </w:pPr>
      <w:rPr >
        <w:rFonts w:h-ansi="Arial" w:cs="Arial" w:ascii="Arial" ></w:rFonts>
        <wx:font wx:val="Arial" ></wx:font>
        <w:b ></w:b>
        <w:b-cs ></w:b-cs>
        <w:i ></w:i>
        <w:i-cs ></w:i-cs>
        <w:sz w:val="28" ></w:sz>
        <w:sz-cs w:val="28" ></w:sz-cs>
      </w:rPr>
    </w:style>
    <w:style w:styleId="Heading3" w:type="paragraph" >
      <w:name w:val="heading 3" ></w:name>
      <wx:uiName wx:val="Heading 3" ></wx:uiName>
      <w:basedOn w:val="Normal" ></w:basedOn>
      <w:next w:val="Normal" ></w:next>
      <w:pPr >
        <w:pStyle w:val="Heading3" ></w:pStyle>
        <w:keepNext ></w:keepNext>
        <w:spacing w:before="240" w:after="60" ></w:spacing>
        <w:outlineLvl w:val="2" ></w:outlineLvl>
      </w:pPr>
      <w:rPr >
        <w:rFonts w:h-ansi="Arial" w:cs="Arial" w:ascii="Arial" ></w:rFonts>
        <wx:font wx:val="Arial" ></wx:font>
        <w:b ></w:b>
        <w:b-cs ></w:b-cs>
        <w:sz w:val="26" ></w:sz>
        <w:sz-cs w:val="26" ></w:sz-cs>
      </w:rPr>
    </w:style>
    <w:style w:styleId="DefaultParagraphFont" w:type="character" w:default="on" >
      <w:name w:val="Default Paragraph Font" ></w:name>
      <w:semiHidden ></w:semiHidden>
    </w:style>
    <w:style w:styleId="TableNormal" w:type="table" w:default="on" >
      <w:name w:val="Normal Table" ></w:name>
      <wx:uiName wx:val="Table Normal" ></wx:uiName>
      <w:semiHidden ></w:semiHidden>
      <w:rPr >
        <wx:font wx:val="Times New Roman" ></wx:font>
      </w:rPr>
      <w:tblPr >
        <w:tblInd w:w="0" w:type="dxa" ></w:tblInd>
        <w:tblCellMar >
          <w:top w:w="0" w:type="dxa" ></w:top>
          <w:left w:w="108" w:type="dxa" ></w:left>
          <w:bottom w:w="0" w:type="dxa" ></w:bottom>
          <w:right w:w="108" w:type="dxa" ></w:right>
        </w:tblCellMar>
      </w:tblPr>
    </w:style>
    <w:style w:styleId="NoList" w:type="list" w:default="on" >
      <w:name w:val="No List" ></w:name>
      <w:semiHidden ></w:semiHidden>
    </w:style>
    <w:style w:styleId="Literal" w:type="character" >
      <w:name w:val="Literal" ></w:name>
      <w:basedOn w:val="DefaultParagraphFont" ></w:basedOn>
      <w:rPr >
        <w:rFonts w:h-ansi="Courier New" w:ascii="Courier New" ></w:rFonts>
      </w:rPr>
    </w:style>
    <w:style w:styleId="EndnoteText" w:type="paragraph" >
      <w:name w:val="endnote text" ></w:name>
      <wx:uiName wx:val="Endnote Text" ></wx:uiName>
      <w:basedOn w:val="Normal" ></w:basedOn>
      <w:semiHidden ></w:semiHidden>
      <w:pPr >
        <w:pStyle w:val="EndnoteText" ></w:pStyle>
      </w:pPr>
      <w:rPr >
        <wx:font wx:val="Times New Roman" ></wx:font>
        <w:sz w:val="20" ></w:sz>
        <w:sz-cs w:val="20" ></w:sz-cs>
      </w:rPr>
    </w:style>
    <w:style w:styleId="EndnoteReference" w:type="character" >
      <w:name w:val="endnote reference" ></w:name>
      <wx:uiName wx:val="Endnote Reference" ></wx:uiName>
      <w:basedOn w:val="DefaultParagraphFont" ></w:basedOn>
      <w:semiHidden ></w:semiHidden>
      <w:rPr >
        <w:vertAlign w:val="superscript" ></w:vertAlign>
      </w:rPr>
    </w:style>
    <w:style w:styleId="AuthorName" w:type="paragraph" >
      <w:name w:val="AuthorName" ></w:name>
      <w:basedOn w:val="Normal" ></w:basedOn>
      <w:next w:val="Normal" ></w:next>
      <w:pPr >
        <w:pStyle w:val="AuthorName" ></w:pStyle>
        <w:spacing w:before="240" w:after="240" ></w:spacing>
        <w:jc w:val="center" ></w:jc>
      </w:pPr>
      <w:rPr >
        <w:b ></w:b>
      </w:rPr>
    </w:style>
    <w:style w:styleId="AuthorContact" w:type="paragraph" >
      <w:name w:val="AuthorContact" ></w:name>
      <w:basedOn w:val="Normal" ></w:basedOn>
      <w:next w:val="Normal" ></w:next>
      <w:pPr >
        <w:pStyle w:val="AuthorContact" ></w:pStyle>
        <w:spacing w:before="240" w:after="240" ></w:spacing>
        <w:jc w:val="center" ></w:jc>
      </w:pPr>
      <w:rPr >
        <wx:font wx:val="Times New Roman" ></wx:font>
        <w:b ></w:b>
      </w:rPr>
    </w:style>
    <w:style w:styleId="BibliographMatter" w:type="paragraph" >
      <w:name w:val="BibliographMatter" ></w:name>
      <w:basedOn w:val="Normal" ></w:basedOn>
      <w:next w:val="Normal" ></w:next>
      <w:pPr >
        <w:pStyle w:val="BibliographMatter" ></w:pStyle>
        <w:spacing w:before="240" w:after="240" ></w:spacing>
        <w:jc w:val="center" ></w:jc>
      </w:pPr>
      <w:rPr >
        <w:b ></w:b>
      </w:rPr>
    </w:style>
    <w:style w:styleId="DefinitionTerm" w:type="paragraph" >
      <w:name w:val="DefinitionTerm" ></w:name>
      <w:basedOn w:val="Normal" ></w:basedOn>
      <w:next w:val="Normal" ></w:next>
      <w:pPr >
        <w:pStyle w:val="DefinitionTerm" ></w:pStyle>
      </w:pPr>
      <w:rPr >
        <w:b ></w:b>
      </w:rPr>
    </w:style>
    <w:style w:styleId="Definition" w:type="paragraph" >
      <w:name w:val="Definition" ></w:name>
      <w:basedOn w:val="Normal" ></w:basedOn>
      <w:next w:val="Normal" ></w:next>
      <w:pPr >
        <w:pStyle w:val="Definition" ></w:pStyle>
      </w:pPr>
    </w:style>
    <w:style w:styleId="CitationReference" w:type="character" >
      <w:name w:val="CitationReference" ></w:name>
      <w:basedOn w:val="DefaultParagraphFont" ></w:basedOn>
    </w:style>
    <w:style w:styleId="Topic" w:type="paragraph" >
        <w:name w:val="Topic" ></w:name>
        <w:basedOn w:val="Normal" ></w:basedOn>
        <w:next w:val="Normal" ></w:next>
        <w:pPr >
            <w:pStyle w:val="Topic" ></w:pStyle>
            <w:ind w:right="1440" w:left="1440" ></w:ind>
            <w:jc w:val="both" ></w:jc>
        </w:pPr>
    </w:style>
  </w:styles>
  <w:docPr >
    <w:view w:val="print" ></w:view>
    <w:zoom w:percent="100" ></w:zoom>
    <w:doNotEmbedSystemFonts ></w:doNotEmbedSystemFonts>
    <w:proofState w:grammar="clean" w:spelling="clean" ></w:proofState>
    <w:attachedTemplate w:val="" ></w:attachedTemplate>
    <w:defaultTabStop w:val="720" ></w:defaultTabStop>
    <w:punctuationKerning ></w:punctuationKerning>
    <w:characterSpacingControl w:val="DontCompress" ></w:characterSpacingControl>
    <w:optimizeForBrowser ></w:optimizeForBrowser>
    <w:validateAgainstSchema ></w:validateAgainstSchema>
    <w:saveInvalidXML w:val="off" ></w:saveInvalidXML>
    <w:ignoreMixedContent w:val="off" ></w:ignoreMixedContent>
    <w:alwaysShowPlaceholderText w:val="off" ></w:alwaysShowPlaceholderText>
    <w:compat >
      <w:breakWrappedTables ></w:breakWrappedTables>
      <w:snapToGridInCell ></w:snapToGridInCell>
      <w:wrapTextWithPunct ></w:wrapTextWithPunct>
      <w:useAsianBreakRules ></w:useAsianBreakRules>
      <w:useWord2002TableStyleRules ></w:useWord2002TableStyleRules>
    </w:compat>
    <w:footnotePr >
      <w:footnote w:type="separator" >
        <w:p >
          <w:r >
            <w:separator ></w:separator>
          </w:r>
        </w:p>
      </w:footnote>
      <w:footnote w:type="continuation-separator" >
        <w:p >
          <w:r >
            <w:continuationSeparator ></w:continuationSeparator>
          </w:r>
        </w:p>
      </w:footnote>
    </w:footnotePr>
    <w:endnotePr >
      <w:numFmt w:val="decimal" ></w:numFmt>
      <w:endnote w:type="separator" >
        <w:p >
          <w:r >
            <w:separator ></w:separator>
          </w:r>
        </w:p>
      </w:endnote>
      <w:endnote w:type="continuation-separator" >
        <w:p >
          <w:r >
            <w:continuationSeparator ></w:continuationSeparator>
          </w:r>
        </w:p>
      </w:endnote>
    </w:endnotePr>
  </w:docPr>
<w:body >
<wx:sect >
<w:p>
  <w:pPr>
    <w:pStyle w:val="Heading1">
    </w:pStyle>
  </w:pPr>
  <w:r>
    <w:t>Title</w:t>
  </w:r>
</w:p>
<w:p>
  <w:pPr>
    <w:pStyle w:val="Heading2">
    </w:pStyle>
  </w:pPr>
  <w:r>
    <w:t>Subtitle</w:t>
  </w:r>
</w:p>
<w:p>
  <w:pPr>
    <w:pStyle w:val="AuthorName">
    </w:pStyle>
  </w:pPr>
  <w:r>
    <w:t>Alan G. Isaac</w:t>
  </w:r>
</w:p>
<w:p>
  <w:pPr>
    <w:pStyle w:val="AuthorContact">
    </w:pStyle>
  </w:pPr>
  <w:hlink w:dest="mailto:aisaac@american.edu">
    <w:r>
      <w:rPr>
        <w:rStyle w:val="Hyperlink">
        </w:rStyle>
      </w:rPr>
      <w:t>aisaac@american.edu</w:t>
    </w:r>
  </w:hlink>
</w:p>
<w:p>
  <w:pPr>
    <w:pStyle w:val="BibliographMatter">
    </w:pStyle>
  </w:pPr>
  <w:r>
    <w:t>Department of Economics, American University</w:t>
  </w:r>
</w:p>
<aml:annotation aml:id="1001" w:name="introduction" w:type="Word.Bookmark.Start">
</aml:annotation>
<aml:annotation aml:id="1001" w:name="introduction" w:type="Word.Bookmark.End">
</aml:annotation>
<w:p>
  <w:pPr>
    <w:pStyle w:val="Heading2">
    </w:pStyle>
  </w:pPr>
  <w:r>
    <w:t>Introduction</w:t>
  </w:r>
</w:p>
<w:p>
  <w:r>
    <w:t>Some text, up to a 'note'. </w:t>
  </w:r>
  <w:r>
    <w:rPr>
      <w:rStyle w:val="EndnoteReference">
      </w:rStyle>
    </w:rPr>
    <w:endnote>
      <w:p>
        <w:pPr>
          <w:pStyle w:val="EndnoteText">
          </w:pStyle>
        </w:pPr>
        <w:r>
          <w:rPr>
            <w:rStyle w:val="EndnoteReference">
            </w:rStyle>
          </w:rPr>
          <w:endnoteRef>
          </w:endnoteRef>
        </w:r>
        <w:r>
          <w:t>A detailed discussion of the note.</w:t>
        </w:r>
      </w:p>
    </w:endnote>
  </w:r>
  <w:r>
    <w:t> More text.</w:t>
  </w:r>
</w:p>
<w:p>
  <w:r>
    <w:t>Just unindent to see problem. Comment it out again by indenting.</w:t>
  </w:r>
</w:p>
<w:p>
  <w:pPr>
    <w:pStyle w:val="DefinitionTerm">
    </w:pStyle>
  </w:pPr>
  <w:r>
    <w:t>First Term</w:t>
  </w:r>
</w:p>
<w:p>
  <w:pPr>
    <w:ind w:right="720" w:left="720">
    </w:ind>
    <w:pStyle w:val="Definition">
    </w:pStyle>
  </w:pPr>
  <w:r>
    <w:t>Some definitional text without a note. No problem.</w:t>
  </w:r>
</w:p>
<w:p>
  <w:pPr>
    <w:pStyle w:val="DefinitionTerm">
    </w:pStyle>
  </w:pPr>
  <w:r>
    <w:t>Second Term</w:t>
  </w:r>
</w:p>
<w:p>
  <w:pPr>
    <w:ind w:right="720" w:left="720">
    </w:ind>
    <w:pStyle w:val="Definition">
    </w:pStyle>
  </w:pPr>
  <w:r>
    <w:t>Some definitional text with a note. This is a problem. </w:t>
  </w:r>
  <w:r>
    <w:rPr>
      <w:rStyle w:val="EndnoteReference">
      </w:rStyle>
    </w:rPr>
    <w:endnote>
      <w:p>
        <w:pPr>
          <w:pStyle w:val="EndnoteText">
          </w:pStyle>
        </w:pPr>
        <w:r>
          <w:rPr>
            <w:rStyle w:val="EndnoteReference">
            </w:rStyle>
          </w:rPr>
          <w:endnoteRef>
          </w:endnoteRef>
        </w:r>
        <w:r>
          <w:t>Details can be found in, which contains a much cited algorithm for the Mersenne Twister.</w:t>
        </w:r>
      </w:p>
    </w:endnote>
  </w:r>
</w:p>
<aml:annotation aml:id="1002" w:name="another-section" w:type="Word.Bookmark.Start">
</aml:annotation>
<aml:annotation aml:id="1002" w:name="another-section" w:type="Word.Bookmark.End">
</aml:annotation>
<w:p>
  <w:pPr>
    <w:pStyle w:val="Heading2">
    </w:pStyle>
  </w:pPr>
  <w:r>
    <w:t>Another Section</w:t>
  </w:r>
</w:p>
<w:p>
  <w:r>
    <w:t>A paragraph with a note containing a reference. No problem. </w:t>
  </w:r>
  <w:r>
    <w:rPr>
      <w:rStyle w:val="EndnoteReference">
      </w:rStyle>
    </w:rPr>
    <w:endnote>
      <w:p>
        <w:pPr>
          <w:pStyle w:val="EndnoteText">
          </w:pStyle>
        </w:pPr>
        <w:r>
          <w:rPr>
            <w:rStyle w:val="EndnoteReference">
            </w:rStyle>
          </w:rPr>
          <w:endnoteRef>
          </w:endnoteRef>
        </w:r>
        <w:r>
          <w:t>Use </w:t>
        </w:r>
        <w:hlink w:dest="http://www.python.org">
          <w:r>
            <w:rPr>
              <w:rStyle w:val="Hyperlink">
              </w:rStyle>
            </w:rPr>
            <w:t>Python</w:t>
          </w:r>
        </w:hlink>
        <w:r>
          <w:t>.</w:t>
        </w:r>
      </w:p>
    </w:endnote>
  </w:r>
</w:p>
<w:p>
  <w:pPr>
    <w:jc w:val="center">
    </w:jc>
  </w:pPr>
  <w:pict>
    <v:shape style="position:absolute;left:0;text-align:left;margin-left:0;margin-top:0;width:800px;height:600px;z-index:1;mso-position-horizontal:center" o:spt="100" path="" coordsize="" adj="0,,0" id="1003" stroked="f">
      <v:imagedata src="test3.png">
      </v:imagedata>
      <w10:wrap type="square">
      </w10:wrap>
    </v:shape>
  </w:pict>
  <w:r>
    <w:rPr>
      <w:rStyle w:val="Caption">
      </w:rStyle>
    </w:rPr>
    <w:t>Figure 1 </w:t>
  </w:r>
  <w:r>
    <w:rPr>
      <w:rStyle w:val="Caption">
      </w:rStyle>
    </w:rPr>
    <w:t>Two waves doing </w:t>
  </w:r>
  <w:r>
    <w:rPr>
      <w:rStyle w:val="Caption">
      </w:rStyle>
      <w:i>
      </w:i>
    </w:rPr>
    <w:t>something</w:t>
  </w:r>
  <w:r>
    <w:rPr>
      <w:rStyle w:val="Caption">
      </w:rStyle>
    </w:rPr>
    <w:t>.</w:t>
  </w:r>
</w:p>
<aml:annotation aml:id="1005" w:name="conclusion" w:type="Word.Bookmark.Start">
</aml:annotation>
<aml:annotation aml:id="1005" w:name="conclusion" w:type="Word.Bookmark.End">
</aml:annotation>
<w:p>
  <w:pPr>
    <w:pStyle w:val="Heading2">
    </w:pStyle>
  </w:pPr>
  <w:r>
    <w:t>Conclusion</w:t>
  </w:r>
</w:p>
<w:p>
  <w:r>
    <w:t>That's all folks.</w:t>
  </w:r>
</w:p>
<w:p>
  <w:r>
    <w:t>. Links</w:t>
  </w:r>
</w:p>
<w:p>
  <w:hlink w:dest="http://www.python.org">
  </w:hlink>
</w:p>
<w:p>
</w:p>
<w:p>
</w:p>
<BLANKLINE>
<w:sectPr >
  <w:endnotePr >
    <w:numFmt w:val="decimal" ></w:numFmt>
  </w:endnotePr>
  <w:pgSz w:w="12240" w:h="15840" ></w:pgSz>
  <w:pgMar w:header="720" w:gutter="0" w:right="1800" w:top="1440" w:bottom="1440" w:footer="720" w:left="1800" ></w:pgMar>
  <w:cols w:space="720" ></w:cols>
  <w:docGrid w:line-pitch="360" ></w:docGrid>
</w:sectPr>
</wx:sect>
</w:body>
</w:wordDocument>
"""

from docutils import core, io

def test_wordml( input_string ):
    overrides = { 'template' : '../template.xml' }
    parts = core.publish_string( input_string, writer_name='docutils_wordml', settings_overrides=overrides )
    print parts

def _test():
    import doctest
    doctest.testmod()

if __name__ == "__main__":
    _test()

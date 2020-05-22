object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 470
  ClientWidth = 737
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Segoe UI Semibold'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 264
    Width = 121
    Height = 13
    Caption = #1050#1086#1083#1080#1095#1077#1089#1090#1074#1086' '#1101#1083#1077#1084#1077#1085#1090#1086#1074
  end
  object Label2: TLabel
    Left = 151
    Top = 265
    Width = 111
    Height = 13
    Caption = #1056#1072#1079#1084#1077#1088' '#1093#1101#1096'-'#1090#1072#1073#1083#1080#1094#1099
  end
  object Label3: TLabel
    Left = 295
    Top = 265
    Width = 45
    Height = 13
    Caption = #1069#1083#1077#1084#1077#1085#1090
  end
  object Label4: TLabel
    Left = 432
    Top = 265
    Width = 45
    Height = 13
    Caption = #1069#1083#1077#1084#1077#1085#1090
  end
  object Label5: TLabel
    Left = 576
    Top = 265
    Width = 45
    Height = 13
    Caption = #1069#1083#1077#1084#1077#1085#1090
  end
  object Edit1: TEdit
    Left = 8
    Top = 284
    Width = 121
    Height = 21
    TabOrder = 0
    Text = 'Edit1'
    OnKeyPress = Edit1KeyPress
  end
  object Edit2: TEdit
    Left = 151
    Top = 284
    Width = 121
    Height = 21
    TabOrder = 1
    Text = 'Edit2'
    OnKeyPress = Edit2KeyPress
  end
  object Button1: TButton
    Left = 96
    Top = 320
    Width = 89
    Height = 25
    Caption = #1057#1075#1077#1085#1077#1088#1080#1088#1086#1074#1072#1090#1100
    TabOrder = 2
    OnClick = Button1Click
  end
  object Memo1: TMemo
    Left = 8
    Top = 8
    Width = 209
    Height = 249
    Lines.Strings = (
      'Memo1')
    TabOrder = 3
  end
  object RichEdit1: TRichEdit
    Left = 265
    Top = 8
    Width = 185
    Height = 249
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Segoe UI Semibold'
    Font.Style = []
    HideScrollBars = False
    Lines.Strings = (
      'RichEdit1')
    ParentFont = False
    ScrollBars = ssBoth
    TabOrder = 4
    Zoom = 100
  end
  object Button2: TButton
    Left = 8
    Top = 368
    Width = 75
    Height = 25
    Caption = #1055#1077#1095#1072#1090#1100
    TabOrder = 5
    OnClick = Button2Click
  end
  object Edit3: TEdit
    Left = 295
    Top = 284
    Width = 121
    Height = 21
    TabOrder = 6
    Text = 'Edit3'
    OnKeyPress = Edit3KeyPress
  end
  object Button3: TButton
    Left = 96
    Top = 368
    Width = 125
    Height = 25
    Caption = #1059#1076#1072#1083#1080#1090#1100' '#1074#1089#1077' '#1101#1083#1077#1084#1077#1085#1090#1099
    TabOrder = 7
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 312
    Top = 311
    Width = 75
    Height = 25
    Caption = #1055#1086#1080#1089#1082
    TabOrder = 8
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 472
    Top = 368
    Width = 75
    Height = 25
    Caption = #1042#1099#1093#1086#1076
    TabOrder = 9
    OnClick = Button5Click
  end
  object Edit4: TEdit
    Left = 432
    Top = 284
    Width = 121
    Height = 21
    TabOrder = 10
    Text = 'Edit4'
    OnKeyPress = Edit4KeyPress
  end
  object Button6: TButton
    Left = 456
    Top = 311
    Width = 75
    Height = 25
    Caption = #1059#1076#1072#1083#1080#1090#1100
    TabOrder = 11
    OnClick = Button6Click
  end
  object Edit5: TEdit
    Left = 576
    Top = 284
    Width = 121
    Height = 21
    TabOrder = 12
    Text = 'Edit5'
    OnKeyPress = Edit5KeyPress
  end
  object Button7: TButton
    Left = 600
    Top = 311
    Width = 75
    Height = 25
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100
    TabOrder = 13
    OnClick = Button7Click
  end
  object Memo2: TMemo
    Left = 504
    Top = 8
    Width = 171
    Height = 249
    Lines.Strings = (
      'Memo2')
    TabOrder = 14
  end
  object Button8: TButton
    Left = 231
    Top = 368
    Width = 219
    Height = 25
    Caption = #1050#1086#1083#1080#1095#1077#1089#1090#1074#1086' '#1101#1083#1077#1084#1077#1085#1090#1086#1074' '#1074' '#1082#1072#1078#1076#1086#1084' '#1089#1090#1077#1082#1077
    TabOrder = 15
    OnClick = Button8Click
  end
end

%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 10-May-2016 10:12:24       %
%                                  Created with tool release: 2.38.0     %
%                                  Synergy file: %version: 6 %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: %derived_by: nzg49t %          %
%%-----------------------------------------------------------------------%

ES259A = DataDict.FDD;
ES259A.Version = '2.0.X';
ES259A.LongName = 'Battery or Switched Battery Voltage Correlation';
ES259A.ShoName  = 'BattVltgCorrln';
ES259A.DesignASIL = 'B';
ES259A.Description = [...
  'This function does the correlation between the 3 input sensor signals ' ...
  'to determine if they are valid. Depending on the result of this correl' ...
  'ation, the function produces an output status that is used by the Batt' ...
  'Vltg FDD to determine the arbitration'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
BattVltgCorrlnPer1 = DataDict.Runnable;
BattVltgCorrlnPer1.Context = 'Rte';
BattVltgCorrlnPer1.TimeStep = 0.002;
BattVltgCorrlnPer1.Description = 'Periodic 1';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetNtcQlfrSts = DataDict.Client;
GetNtcQlfrSts.CallLocation = {'BattVltgCorrlnPer1'};
GetNtcQlfrSts.Description = 'Get NTC Qualifier Status';
GetNtcQlfrSts.Return = DataDict.CSReturn;
GetNtcQlfrSts.Return.Type = 'Standard';
GetNtcQlfrSts.Return.Min = 0;
GetNtcQlfrSts.Return.Max = 1;
GetNtcQlfrSts.Return.TestTolerance = [];
GetNtcQlfrSts.Return.Description = 'None';
GetNtcQlfrSts.Arguments(1) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(1).Name = 'NtcNr';
GetNtcQlfrSts.Arguments(1).EngDT = enum.NtcNr1;
GetNtcQlfrSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
GetNtcQlfrSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
GetNtcQlfrSts.Arguments(1).Units = 'Cnt';
GetNtcQlfrSts.Arguments(1).Direction = 'In';
GetNtcQlfrSts.Arguments(1).InitRowCol = [1  1];
GetNtcQlfrSts.Arguments(1).Description = 'NTC Number';
GetNtcQlfrSts.Arguments(2) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(2).Name = 'NtcQlfr';
GetNtcQlfrSts.Arguments(2).EngDT = enum.SigQlfr1;
GetNtcQlfrSts.Arguments(2).EngMin = SigQlfr1.SIGQLFR_NORES;
GetNtcQlfrSts.Arguments(2).EngMax = SigQlfr1.SIGQLFR_FAILD;
GetNtcQlfrSts.Arguments(2).Units = 'Cnt';
GetNtcQlfrSts.Arguments(2).Direction = 'Out';
GetNtcQlfrSts.Arguments(2).InitRowCol = [1  1];
GetNtcQlfrSts.Arguments(2).Description = 'NTC Qualifier';


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'BattVltgCorrlnPer1'};
SetNtcSts.Description = 'Set NTC Status';
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = [];
SetNtcSts.Return.Description = 'None';
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(1).Description = 'NTC Number';
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(2).Description = 'NTC State Info';
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcSts.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(3).Description = 'NTC Status';
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65535;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];
SetNtcSts.Arguments(4).Description = 'Debounce Step';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
BattVltg = DataDict.IpSignal;
BattVltg.LongName = 'Battery Voltage';
BattVltg.Description = 'Battery Voltage';
BattVltg.DocUnits = 'Volt';
BattVltg.EngDT = dt.float32;
BattVltg.EngInit = 0;
BattVltg.EngMin = 0;
BattVltg.EngMax = 40;
BattVltg.ReadIn = {'BattVltgCorrlnPer1'};
BattVltg.ReadType = 'Rte';


BattVltgAdcFaild = DataDict.IpSignal;
BattVltgAdcFaild.LongName = 'Battery Voltage ADC Failed';
BattVltgAdcFaild.Description = 'Battery Voltage ADC Failed';
BattVltgAdcFaild.DocUnits = 'Cnt';
BattVltgAdcFaild.EngDT = dt.lgc;
BattVltgAdcFaild.EngInit = 0;
BattVltgAdcFaild.EngMin = 0;
BattVltgAdcFaild.EngMax = 1;
BattVltgAdcFaild.ReadIn = {'BattVltgCorrlnPer1'};
BattVltgAdcFaild.ReadType = 'Rte';


BattVltgSwd1 = DataDict.IpSignal;
BattVltgSwd1.LongName = 'Switched Battery Voltage 1';
BattVltgSwd1.Description = 'Battery Voltage Switched 1';
BattVltgSwd1.DocUnits = 'Volt';
BattVltgSwd1.EngDT = dt.float32;
BattVltgSwd1.EngInit = 0;
BattVltgSwd1.EngMin = 0;
BattVltgSwd1.EngMax = 40;
BattVltgSwd1.ReadIn = {'BattVltgCorrlnPer1'};
BattVltgSwd1.ReadType = 'Rte';


BattVltgSwd1AdcFaild = DataDict.IpSignal;
BattVltgSwd1AdcFaild.LongName = 'Battery Voltage Switched 1 ADC Failed';
BattVltgSwd1AdcFaild.Description = ...
  'Battery Voltage Switched 1 ADC Failed';
BattVltgSwd1AdcFaild.DocUnits = 'Cnt';
BattVltgSwd1AdcFaild.EngDT = dt.lgc;
BattVltgSwd1AdcFaild.EngInit = 0;
BattVltgSwd1AdcFaild.EngMin = 0;
BattVltgSwd1AdcFaild.EngMax = 1;
BattVltgSwd1AdcFaild.ReadIn = {'BattVltgCorrlnPer1'};
BattVltgSwd1AdcFaild.ReadType = 'Rte';


BattVltgSwd2 = DataDict.IpSignal;
BattVltgSwd2.LongName = 'Switched Battery Voltage 2';
BattVltgSwd2.Description = 'Battery Voltage Switched 2';
BattVltgSwd2.DocUnits = 'Volt';
BattVltgSwd2.EngDT = dt.float32;
BattVltgSwd2.EngInit = 0;
BattVltgSwd2.EngMin = 0;
BattVltgSwd2.EngMax = 40;
BattVltgSwd2.ReadIn = {'BattVltgCorrlnPer1'};
BattVltgSwd2.ReadType = 'Rte';


BattVltgSwd2AdcFaild = DataDict.IpSignal;
BattVltgSwd2AdcFaild.LongName = 'Battery Voltage Switched 2 ADC Failed';
BattVltgSwd2AdcFaild.Description = ...
  'Battery Voltage Switched 2 ADC Failed';
BattVltgSwd2AdcFaild.DocUnits = 'Cnt';
BattVltgSwd2AdcFaild.EngDT = dt.lgc;
BattVltgSwd2AdcFaild.EngInit = 0;
BattVltgSwd2AdcFaild.EngMin = 0;
BattVltgSwd2AdcFaild.EngMax = 1;
BattVltgSwd2AdcFaild.ReadIn = {'BattVltgCorrlnPer1'};
BattVltgSwd2AdcFaild.ReadType = 'Rte';


DiagcStsIvtr1Inactv = DataDict.IpSignal;
DiagcStsIvtr1Inactv.LongName = 'Diagnostic Status Inverter 1 Inactive';
DiagcStsIvtr1Inactv.Description = ...
  'Diagnostic Status Inverter 1 Inactive';
DiagcStsIvtr1Inactv.DocUnits = 'Cnt';
DiagcStsIvtr1Inactv.EngDT = dt.lgc;
DiagcStsIvtr1Inactv.EngInit = 0;
DiagcStsIvtr1Inactv.EngMin = 0;
DiagcStsIvtr1Inactv.EngMax = 1;
DiagcStsIvtr1Inactv.ReadIn = {'BattVltgCorrlnPer1'};
DiagcStsIvtr1Inactv.ReadType = 'Rte';


DiagcStsIvtr2Inactv = DataDict.IpSignal;
DiagcStsIvtr2Inactv.LongName = 'Diagnostic Status Inverter 2 Inactive';
DiagcStsIvtr2Inactv.Description = ...
  'Diagnostic Status Inverter 2 Inactive';
DiagcStsIvtr2Inactv.DocUnits = 'Cnt';
DiagcStsIvtr2Inactv.EngDT = dt.lgc;
DiagcStsIvtr2Inactv.EngInit = 0;
DiagcStsIvtr2Inactv.EngMin = 0;
DiagcStsIvtr2Inactv.EngMax = 1;
DiagcStsIvtr2Inactv.ReadIn = {'BattVltgCorrlnPer1'};
DiagcStsIvtr2Inactv.ReadType = 'Rte';


InhbBattVltgDiagc = DataDict.IpSignal;
InhbBattVltgDiagc.LongName = 'Inhibit Battery Voltage Diagnostic';
InhbBattVltgDiagc.Description = 'Inhibit Battery Voltage Diagnostic';
InhbBattVltgDiagc.DocUnits = 'Cnt';
InhbBattVltgDiagc.EngDT = dt.lgc;
InhbBattVltgDiagc.EngInit = 0;
InhbBattVltgDiagc.EngMin = 0;
InhbBattVltgDiagc.EngMax = 1;
InhbBattVltgDiagc.ReadIn = {'BattVltgCorrlnPer1'};
InhbBattVltgDiagc.ReadType = 'Rte';


StrtUpSt = DataDict.IpSignal;
StrtUpSt.LongName = 'Start Up State';
StrtUpSt.Description = 'Start Up State';
StrtUpSt.DocUnits = 'Cnt';
StrtUpSt.EngDT = dt.u08;
StrtUpSt.EngInit = 0;
StrtUpSt.EngMin = 0;
StrtUpSt.EngMax = 255;
StrtUpSt.ReadIn = {'BattVltgCorrlnPer1'};
StrtUpSt.ReadType = 'Rte';


SysSt = DataDict.IpSignal;
SysSt.LongName = 'System State';
SysSt.Description = 'System State';
SysSt.DocUnits = 'Cnt';
SysSt.EngDT = enum.SysSt1;
SysSt.EngInit = SysSt1.SYSST_WRMININ;
SysSt.EngMin = SysSt1.SYSST_DI;
SysSt.EngMax = SysSt1.SYSST_WRMININ;
SysSt.ReadIn = {'BattVltgCorrlnPer1'};
SysSt.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
BattSwdVltgCorrlnSts = DataDict.OpSignal;
BattSwdVltgCorrlnSts.LongName = 'Battery Switched Voltage Correlation Status';
BattSwdVltgCorrlnSts.Description = ...
  'Status Enumeration that defines the status of all the input signals';
BattSwdVltgCorrlnSts.DocUnits = 'Cnt';
BattSwdVltgCorrlnSts.SwcShoName = 'BattVltgCorrln';
BattSwdVltgCorrlnSts.EngDT = dt.u08;
BattSwdVltgCorrlnSts.EngInit = 7;
BattSwdVltgCorrlnSts.EngMin = 0;
BattSwdVltgCorrlnSts.EngMax = 7;
BattSwdVltgCorrlnSts.TestTolerance = 0;
BattSwdVltgCorrlnSts.WrittenIn = {'BattVltgCorrlnPer1'};
BattSwdVltgCorrlnSts.WriteType = 'Rte';


BattVltgCorrlnIdptSig = DataDict.OpSignal;
BattVltgCorrlnIdptSig.LongName = 'Battery Voltage Correlation Independent Signal';
BattVltgCorrlnIdptSig.Description = 'Number of valid signals';
BattVltgCorrlnIdptSig.DocUnits = 'Cnt';
BattVltgCorrlnIdptSig.SwcShoName = 'BattVltgCorrln';
BattVltgCorrlnIdptSig.EngDT = dt.u08;
BattVltgCorrlnIdptSig.EngInit = 3;
BattVltgCorrlnIdptSig.EngMin = 0;
BattVltgCorrlnIdptSig.EngMax = 3;
BattVltgCorrlnIdptSig.TestTolerance = 0;
BattVltgCorrlnIdptSig.WrittenIn = {'BattVltgCorrlnPer1'};
BattVltgCorrlnIdptSig.WriteType = 'Rte';


DftBrdgVltgActv = DataDict.OpSignal;
DftBrdgVltgActv.LongName = 'Default Bridge Voltage Active';
DftBrdgVltgActv.Description = ...
  'Default Bridge Voltage is being used as the Bridge Voltage';
DftBrdgVltgActv.DocUnits = 'Cnt';
DftBrdgVltgActv.SwcShoName = 'BattVltgCorrln';
DftBrdgVltgActv.EngDT = dt.lgc;
DftBrdgVltgActv.EngInit = 0;
DftBrdgVltgActv.EngMin = 0;
DftBrdgVltgActv.EngMax = 1;
DftBrdgVltgActv.TestTolerance = 0;
DftBrdgVltgActv.WrittenIn = {'BattVltgCorrlnPer1'};
DftBrdgVltgActv.WriteType = 'Rte';


SwdVltgLimd = DataDict.OpSignal;
SwdVltgLimd.LongName = 'Switched Voltage Saturated';
SwdVltgLimd.Description = [...
  'Boolean to indicate if the swithced votlages have reached the saturati' ...
  'on voltage or not'];
SwdVltgLimd.DocUnits = 'Cnt';
SwdVltgLimd.SwcShoName = 'BattVltgCorrln';
SwdVltgLimd.EngDT = dt.lgc;
SwdVltgLimd.EngInit = 0;
SwdVltgLimd.EngMin = 0;
SwdVltgLimd.EngMax = 1;
SwdVltgLimd.TestTolerance = 0;
SwdVltgLimd.WrittenIn = {'BattVltgCorrlnPer1'};
SwdVltgLimd.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
BattVltgCorrlnAllwdVltgDif = DataDict.Calibration;
BattVltgCorrlnAllwdVltgDif.LongName = 'Battery Voltage Correlation Allowed Voltage Difference';
BattVltgCorrlnAllwdVltgDif.Description = ...
  'Allowed Voltage Difference between the input signals';
BattVltgCorrlnAllwdVltgDif.DocUnits = 'Volt';
BattVltgCorrlnAllwdVltgDif.EngDT = dt.float32;
BattVltgCorrlnAllwdVltgDif.EngVal = 0.73;
BattVltgCorrlnAllwdVltgDif.EngMin = 0;
BattVltgCorrlnAllwdVltgDif.EngMax = 1;
BattVltgCorrlnAllwdVltgDif.Cardinality = 'Cmn';
BattVltgCorrlnAllwdVltgDif.CustomerVisible = false;
BattVltgCorrlnAllwdVltgDif.Online = false;
BattVltgCorrlnAllwdVltgDif.Impact = 'M';
BattVltgCorrlnAllwdVltgDif.TuningOwner = 'EPDT';
BattVltgCorrlnAllwdVltgDif.GraphLink = {''};
BattVltgCorrlnAllwdVltgDif.Monotony = 'None';
BattVltgCorrlnAllwdVltgDif.MaxGrad = 1;
BattVltgCorrlnAllwdVltgDif.PortName = 'BattVltgCorrlnAllwdVltgDif';


BattVltgCorrlnBattLoVltg = DataDict.Calibration;
BattVltgCorrlnBattLoVltg.LongName = 'Battery Voltage Correlation Battery Low Voltage';
BattVltgCorrlnBattLoVltg.Description = [...
  'Voltage below which Battery Voltage is considered to be in the low vol' ...
  'tage condition.'];
BattVltgCorrlnBattLoVltg.DocUnits = 'Volt';
BattVltgCorrlnBattLoVltg.EngDT = dt.float32;
BattVltgCorrlnBattLoVltg.EngVal = 10;
BattVltgCorrlnBattLoVltg.EngMin = 6;
BattVltgCorrlnBattLoVltg.EngMax = 26;
BattVltgCorrlnBattLoVltg.Cardinality = 'Cmn';
BattVltgCorrlnBattLoVltg.CustomerVisible = false;
BattVltgCorrlnBattLoVltg.Online = false;
BattVltgCorrlnBattLoVltg.Impact = 'L';
BattVltgCorrlnBattLoVltg.TuningOwner = 'EPDT';
BattVltgCorrlnBattLoVltg.GraphLink = {''};
BattVltgCorrlnBattLoVltg.Monotony = 'None';
BattVltgCorrlnBattLoVltg.MaxGrad = 999;
BattVltgCorrlnBattLoVltg.PortName = 'BattVltgCorrlnBattLoVltg';


BattVltgCorrlnSysMinVltg = DataDict.Calibration;
BattVltgCorrlnSysMinVltg.LongName = 'Battery Voltage  Correlation System Minimum Voltage ';
BattVltgCorrlnSysMinVltg.Description = [...
  'Minimum voltage for Batter Voltage, Switched Voltage 1 and Switched Vo' ...
  'ltage 2'];
BattVltgCorrlnSysMinVltg.DocUnits = 'Volt';
BattVltgCorrlnSysMinVltg.EngDT = dt.float32;
BattVltgCorrlnSysMinVltg.EngVal = 6;
BattVltgCorrlnSysMinVltg.EngMin = 2;
BattVltgCorrlnSysMinVltg.EngMax = 12;
BattVltgCorrlnSysMinVltg.Cardinality = 'Cmn';
BattVltgCorrlnSysMinVltg.CustomerVisible = false;
BattVltgCorrlnSysMinVltg.Online = false;
BattVltgCorrlnSysMinVltg.Impact = 'M';
BattVltgCorrlnSysMinVltg.TuningOwner = 'EPDT';
BattVltgCorrlnSysMinVltg.GraphLink = {''};
BattVltgCorrlnSysMinVltg.Monotony = 'None';
BattVltgCorrlnSysMinVltg.MaxGrad = Inf;
BattVltgCorrlnSysMinVltg.PortName = 'BattVltgCorrlnSysMinVltg';


BattVltgCorrlnBattOverVltg = DataDict.Calibration;
BattVltgCorrlnBattOverVltg.LongName = 'Battery Voltage Correlation Battery Over Voltage';
BattVltgCorrlnBattOverVltg.Description = [...
  'Voltage above which Battery Voltage is considered to be in the over-vo' ...
  'ltage condition.'];
BattVltgCorrlnBattOverVltg.DocUnits = 'Volt';
BattVltgCorrlnBattOverVltg.EngDT = dt.float32;
BattVltgCorrlnBattOverVltg.EngVal = 16;
BattVltgCorrlnBattOverVltg.EngMin = 6;
BattVltgCorrlnBattOverVltg.EngMax = 26;
BattVltgCorrlnBattOverVltg.Cardinality = 'Cmn';
BattVltgCorrlnBattOverVltg.CustomerVisible = false;
BattVltgCorrlnBattOverVltg.Online = false;
BattVltgCorrlnBattOverVltg.Impact = 'L';
BattVltgCorrlnBattOverVltg.TuningOwner = 'EPDT';
BattVltgCorrlnBattOverVltg.GraphLink = {''};
BattVltgCorrlnBattOverVltg.Monotony = 'None';
BattVltgCorrlnBattOverVltg.MaxGrad = 999;
BattVltgCorrlnBattOverVltg.PortName = 'BattVltgCorrlnBattOverVltg';


BattVltgCorrlnBattUnderVltg = DataDict.Calibration;
BattVltgCorrlnBattUnderVltg.LongName = 'Battery Voltage Correlation Battery Under Voltage';
BattVltgCorrlnBattUnderVltg.Description = [...
  'Voltage under which Battery Voltage is considered to be in the under-v' ...
  'oltage condition'];
BattVltgCorrlnBattUnderVltg.DocUnits = 'Volt';
BattVltgCorrlnBattUnderVltg.EngDT = dt.float32;
BattVltgCorrlnBattUnderVltg.EngVal = 9;
BattVltgCorrlnBattUnderVltg.EngMin = 6;
BattVltgCorrlnBattUnderVltg.EngMax = 26;
BattVltgCorrlnBattUnderVltg.Cardinality = 'Cmn';
BattVltgCorrlnBattUnderVltg.CustomerVisible = false;
BattVltgCorrlnBattUnderVltg.Online = false;
BattVltgCorrlnBattUnderVltg.Impact = 'L';
BattVltgCorrlnBattUnderVltg.TuningOwner = 'EPDT';
BattVltgCorrlnBattUnderVltg.GraphLink = {''};
BattVltgCorrlnBattUnderVltg.Monotony = 'None';
BattVltgCorrlnBattUnderVltg.MaxGrad = 999;
BattVltgCorrlnBattUnderVltg.PortName = 'BattVltgCorrlnBattUnderVltg';


BattVltgCorrlnNtc0x03C0x0440x04CFailStep = DataDict.Calibration;
BattVltgCorrlnNtc0x03C0x0440x04CFailStep.LongName = 'Battery Voltage Correlation NTC 0X03C NTC 0X044 NTC 0X04C Fail Step';
BattVltgCorrlnNtc0x03C0x0440x04CFailStep.Description = ...
  'Debounce value for Fail Step for NTCs 0X03C, 0X044 and 0X04C';
BattVltgCorrlnNtc0x03C0x0440x04CFailStep.DocUnits = 'Cnt';
BattVltgCorrlnNtc0x03C0x0440x04CFailStep.EngDT = dt.u16;
BattVltgCorrlnNtc0x03C0x0440x04CFailStep.EngVal = 410;
BattVltgCorrlnNtc0x03C0x0440x04CFailStep.EngMin = 0;
BattVltgCorrlnNtc0x03C0x0440x04CFailStep.EngMax = 65535;
BattVltgCorrlnNtc0x03C0x0440x04CFailStep.Cardinality = 'Cmn';
BattVltgCorrlnNtc0x03C0x0440x04CFailStep.CustomerVisible = false;
BattVltgCorrlnNtc0x03C0x0440x04CFailStep.Online = false;
BattVltgCorrlnNtc0x03C0x0440x04CFailStep.Impact = 'L';
BattVltgCorrlnNtc0x03C0x0440x04CFailStep.TuningOwner = 'EPDT';
BattVltgCorrlnNtc0x03C0x0440x04CFailStep.GraphLink = {''};
BattVltgCorrlnNtc0x03C0x0440x04CFailStep.Monotony = 'None';
BattVltgCorrlnNtc0x03C0x0440x04CFailStep.MaxGrad = 65535;
BattVltgCorrlnNtc0x03C0x0440x04CFailStep.PortName = 'BattVltgCorrlnNtc0x03C0x0440x04CFailStep';


BattVltgCorrlnNtc0x03C0x0440x04CPassStep = DataDict.Calibration;
BattVltgCorrlnNtc0x03C0x0440x04CPassStep.LongName = 'Battery Voltage Correlation NTC 0X03C NTC 0X044 NTC 0X04C Fail Step';
BattVltgCorrlnNtc0x03C0x0440x04CPassStep.Description = ...
  'Debounce value for Pass Step for NTC 0X03C, 0X044 and 0X04C';
BattVltgCorrlnNtc0x03C0x0440x04CPassStep.DocUnits = 'Cnt';
BattVltgCorrlnNtc0x03C0x0440x04CPassStep.EngDT = dt.u16;
BattVltgCorrlnNtc0x03C0x0440x04CPassStep.EngVal = 272;
BattVltgCorrlnNtc0x03C0x0440x04CPassStep.EngMin = 0;
BattVltgCorrlnNtc0x03C0x0440x04CPassStep.EngMax = 65535;
BattVltgCorrlnNtc0x03C0x0440x04CPassStep.Cardinality = 'Cmn';
BattVltgCorrlnNtc0x03C0x0440x04CPassStep.CustomerVisible = false;
BattVltgCorrlnNtc0x03C0x0440x04CPassStep.Online = false;
BattVltgCorrlnNtc0x03C0x0440x04CPassStep.Impact = 'L';
BattVltgCorrlnNtc0x03C0x0440x04CPassStep.TuningOwner = 'EPDT';
BattVltgCorrlnNtc0x03C0x0440x04CPassStep.GraphLink = {''};
BattVltgCorrlnNtc0x03C0x0440x04CPassStep.Monotony = 'None';
BattVltgCorrlnNtc0x03C0x0440x04CPassStep.MaxGrad = 65535;
BattVltgCorrlnNtc0x03C0x0440x04CPassStep.PortName = 'BattVltgCorrlnNtc0x03C0x0440x04CPassStep';


BattVltgCorrlnNtc0x03DFailStep = DataDict.Calibration;
BattVltgCorrlnNtc0x03DFailStep.LongName = 'Battery Voltage Correlation NTC 0x03D Fail Step';
BattVltgCorrlnNtc0x03DFailStep.Description = ...
  'Debounce value for Fail Step for NTC 0x03D';
BattVltgCorrlnNtc0x03DFailStep.DocUnits = 'Cnt';
BattVltgCorrlnNtc0x03DFailStep.EngDT = dt.u16;
BattVltgCorrlnNtc0x03DFailStep.EngVal = 410;
BattVltgCorrlnNtc0x03DFailStep.EngMin = 0;
BattVltgCorrlnNtc0x03DFailStep.EngMax = 65535;
BattVltgCorrlnNtc0x03DFailStep.Cardinality = 'Cmn';
BattVltgCorrlnNtc0x03DFailStep.CustomerVisible = false;
BattVltgCorrlnNtc0x03DFailStep.Online = false;
BattVltgCorrlnNtc0x03DFailStep.Impact = 'L';
BattVltgCorrlnNtc0x03DFailStep.TuningOwner = 'EPDT';
BattVltgCorrlnNtc0x03DFailStep.GraphLink = {''};
BattVltgCorrlnNtc0x03DFailStep.Monotony = 'None';
BattVltgCorrlnNtc0x03DFailStep.MaxGrad = 65535;
BattVltgCorrlnNtc0x03DFailStep.PortName = 'BattVltgCorrlnNtc0x03DFailStep';


BattVltgCorrlnNtc0x03DPassStep = DataDict.Calibration;
BattVltgCorrlnNtc0x03DPassStep.LongName = 'Battery Voltage Correlation NTC 0x03D Pass Step';
BattVltgCorrlnNtc0x03DPassStep.Description = ...
  'Debounce value for Pass Step for NTC 0x03D';
BattVltgCorrlnNtc0x03DPassStep.DocUnits = 'Cnt';
BattVltgCorrlnNtc0x03DPassStep.EngDT = dt.u16;
BattVltgCorrlnNtc0x03DPassStep.EngVal = 272;
BattVltgCorrlnNtc0x03DPassStep.EngMin = 0;
BattVltgCorrlnNtc0x03DPassStep.EngMax = 65535;
BattVltgCorrlnNtc0x03DPassStep.Cardinality = 'Cmn';
BattVltgCorrlnNtc0x03DPassStep.CustomerVisible = false;
BattVltgCorrlnNtc0x03DPassStep.Online = false;
BattVltgCorrlnNtc0x03DPassStep.Impact = 'L';
BattVltgCorrlnNtc0x03DPassStep.TuningOwner = 'EPDT';
BattVltgCorrlnNtc0x03DPassStep.GraphLink = {''};
BattVltgCorrlnNtc0x03DPassStep.Monotony = 'None';
BattVltgCorrlnNtc0x03DPassStep.MaxGrad = 65535;
BattVltgCorrlnNtc0x03DPassStep.PortName = 'BattVltgCorrlnNtc0x03DPassStep';


BattVltgCorrlnNtc0x0B0FailStep = DataDict.Calibration;
BattVltgCorrlnNtc0x0B0FailStep.LongName = 'Battery Voltage Correlation NTC 0x0B0 Fail Step';
BattVltgCorrlnNtc0x0B0FailStep.Description = ...
  'Debounce value for Fail Step for NTC 0X0B0';
BattVltgCorrlnNtc0x0B0FailStep.DocUnits = 'Cnt';
BattVltgCorrlnNtc0x0B0FailStep.EngDT = dt.u16;
BattVltgCorrlnNtc0x0B0FailStep.EngVal = 327;
BattVltgCorrlnNtc0x0B0FailStep.EngMin = 0;
BattVltgCorrlnNtc0x0B0FailStep.EngMax = 65535;
BattVltgCorrlnNtc0x0B0FailStep.Cardinality = 'Cmn';
BattVltgCorrlnNtc0x0B0FailStep.CustomerVisible = false;
BattVltgCorrlnNtc0x0B0FailStep.Online = false;
BattVltgCorrlnNtc0x0B0FailStep.Impact = 'L';
BattVltgCorrlnNtc0x0B0FailStep.TuningOwner = 'EPDT';
BattVltgCorrlnNtc0x0B0FailStep.GraphLink = {''};
BattVltgCorrlnNtc0x0B0FailStep.Monotony = 'None';
BattVltgCorrlnNtc0x0B0FailStep.MaxGrad = 65535;
BattVltgCorrlnNtc0x0B0FailStep.PortName = 'BattVltgCorrlnNtc0x0B0FailStep';


BattVltgCorrlnNtc0x0B0PassStep = DataDict.Calibration;
BattVltgCorrlnNtc0x0B0PassStep.LongName = 'Battery Voltage Correlation NTC 0x0B0 Pass Step';
BattVltgCorrlnNtc0x0B0PassStep.Description = ...
  'Debounce value for Pass Step for NTC 0X0B0';
BattVltgCorrlnNtc0x0B0PassStep.DocUnits = 'Cnt';
BattVltgCorrlnNtc0x0B0PassStep.EngDT = dt.u16;
BattVltgCorrlnNtc0x0B0PassStep.EngVal = 327;
BattVltgCorrlnNtc0x0B0PassStep.EngMin = 0;
BattVltgCorrlnNtc0x0B0PassStep.EngMax = 65535;
BattVltgCorrlnNtc0x0B0PassStep.Cardinality = 'Cmn';
BattVltgCorrlnNtc0x0B0PassStep.CustomerVisible = false;
BattVltgCorrlnNtc0x0B0PassStep.Online = false;
BattVltgCorrlnNtc0x0B0PassStep.Impact = 'L';
BattVltgCorrlnNtc0x0B0PassStep.TuningOwner = 'EPDT';
BattVltgCorrlnNtc0x0B0PassStep.GraphLink = {''};
BattVltgCorrlnNtc0x0B0PassStep.Monotony = 'None';
BattVltgCorrlnNtc0x0B0PassStep.MaxGrad = 65535;
BattVltgCorrlnNtc0x0B0PassStep.PortName = 'BattVltgCorrlnNtc0x0B0PassStep';


BattVltgCorrlnNtc0x0B1FailStep = DataDict.Calibration;
BattVltgCorrlnNtc0x0B1FailStep.LongName = 'Battery Voltage Correlation NTC 0x0B1 Fail Step';
BattVltgCorrlnNtc0x0B1FailStep.Description = ...
  'Debounce value for Fail Step for NTC 0X0B1';
BattVltgCorrlnNtc0x0B1FailStep.DocUnits = 'Cnt';
BattVltgCorrlnNtc0x0B1FailStep.EngDT = dt.u16;
BattVltgCorrlnNtc0x0B1FailStep.EngVal = 327;
BattVltgCorrlnNtc0x0B1FailStep.EngMin = 0;
BattVltgCorrlnNtc0x0B1FailStep.EngMax = 65535;
BattVltgCorrlnNtc0x0B1FailStep.Cardinality = 'Cmn';
BattVltgCorrlnNtc0x0B1FailStep.CustomerVisible = false;
BattVltgCorrlnNtc0x0B1FailStep.Online = false;
BattVltgCorrlnNtc0x0B1FailStep.Impact = 'L';
BattVltgCorrlnNtc0x0B1FailStep.TuningOwner = 'EPDT';
BattVltgCorrlnNtc0x0B1FailStep.GraphLink = {''};
BattVltgCorrlnNtc0x0B1FailStep.Monotony = 'None';
BattVltgCorrlnNtc0x0B1FailStep.MaxGrad = 65535;
BattVltgCorrlnNtc0x0B1FailStep.PortName = 'BattVltgCorrlnNtc0x0B1FailStep';


BattVltgCorrlnNtc0x0B1PassStep = DataDict.Calibration;
BattVltgCorrlnNtc0x0B1PassStep.LongName = 'Battery Voltage Correlation NTC 0x0B1 Pass Step';
BattVltgCorrlnNtc0x0B1PassStep.Description = ...
  'Debounce value for Pass Step for NTC 0X0B1';
BattVltgCorrlnNtc0x0B1PassStep.DocUnits = 'Cnt';
BattVltgCorrlnNtc0x0B1PassStep.EngDT = dt.u16;
BattVltgCorrlnNtc0x0B1PassStep.EngVal = 327;
BattVltgCorrlnNtc0x0B1PassStep.EngMin = 0;
BattVltgCorrlnNtc0x0B1PassStep.EngMax = 65535;
BattVltgCorrlnNtc0x0B1PassStep.Cardinality = 'Cmn';
BattVltgCorrlnNtc0x0B1PassStep.CustomerVisible = false;
BattVltgCorrlnNtc0x0B1PassStep.Online = false;
BattVltgCorrlnNtc0x0B1PassStep.Impact = 'L';
BattVltgCorrlnNtc0x0B1PassStep.TuningOwner = 'EPDT';
BattVltgCorrlnNtc0x0B1PassStep.GraphLink = {''};
BattVltgCorrlnNtc0x0B1PassStep.Monotony = 'None';
BattVltgCorrlnNtc0x0B1PassStep.MaxGrad = 65535;
BattVltgCorrlnNtc0x0B1PassStep.PortName = 'BattVltgCorrlnNtc0x0B1PassStep';


BattVltgCorrlnNtc0x0B5FailStep = DataDict.Calibration;
BattVltgCorrlnNtc0x0B5FailStep.LongName = 'Battery Voltage Correlation NTC 0x0B5 Fail Step';
BattVltgCorrlnNtc0x0B5FailStep.Description = ...
  'Debounce value for Fail Step for NTC 0X0B5';
BattVltgCorrlnNtc0x0B5FailStep.DocUnits = 'Cnt';
BattVltgCorrlnNtc0x0B5FailStep.EngDT = dt.u16;
BattVltgCorrlnNtc0x0B5FailStep.EngVal = 327;
BattVltgCorrlnNtc0x0B5FailStep.EngMin = 0;
BattVltgCorrlnNtc0x0B5FailStep.EngMax = 65535;
BattVltgCorrlnNtc0x0B5FailStep.Cardinality = 'Cmn';
BattVltgCorrlnNtc0x0B5FailStep.CustomerVisible = false;
BattVltgCorrlnNtc0x0B5FailStep.Online = false;
BattVltgCorrlnNtc0x0B5FailStep.Impact = 'L';
BattVltgCorrlnNtc0x0B5FailStep.TuningOwner = 'EPDT';
BattVltgCorrlnNtc0x0B5FailStep.GraphLink = {''};
BattVltgCorrlnNtc0x0B5FailStep.Monotony = 'None';
BattVltgCorrlnNtc0x0B5FailStep.MaxGrad = 65535;
BattVltgCorrlnNtc0x0B5FailStep.PortName = 'BattVltgCorrlnNtc0x0B5FailStep';


BattVltgCorrlnNtc0x0B5PassStep = DataDict.Calibration;
BattVltgCorrlnNtc0x0B5PassStep.LongName = 'Battery Voltage Correlation NTC 0x0B5 Pass Step';
BattVltgCorrlnNtc0x0B5PassStep.Description = ...
  'Debounce value for Pass Step for NTC 0X0B5';
BattVltgCorrlnNtc0x0B5PassStep.DocUnits = 'Cnt';
BattVltgCorrlnNtc0x0B5PassStep.EngDT = dt.u16;
BattVltgCorrlnNtc0x0B5PassStep.EngVal = 327;
BattVltgCorrlnNtc0x0B5PassStep.EngMin = 0;
BattVltgCorrlnNtc0x0B5PassStep.EngMax = 65535;
BattVltgCorrlnNtc0x0B5PassStep.Cardinality = 'Cmn';
BattVltgCorrlnNtc0x0B5PassStep.CustomerVisible = false;
BattVltgCorrlnNtc0x0B5PassStep.Online = false;
BattVltgCorrlnNtc0x0B5PassStep.Impact = 'L';
BattVltgCorrlnNtc0x0B5PassStep.TuningOwner = 'EPDT';
BattVltgCorrlnNtc0x0B5PassStep.GraphLink = {''};
BattVltgCorrlnNtc0x0B5PassStep.Monotony = 'None';
BattVltgCorrlnNtc0x0B5PassStep.MaxGrad = 65535;
BattVltgCorrlnNtc0x0B5PassStep.PortName = 'BattVltgCorrlnNtc0x0B5PassStep';


BattVltgCorrlnRcvrlBattLoVltg = DataDict.Calibration;
BattVltgCorrlnRcvrlBattLoVltg.LongName = 'Battery Voltage Correlation Recoverable Battery Low Voltage';
BattVltgCorrlnRcvrlBattLoVltg.Description = [...
  'Voltage above which Battery Voltage is NOT considered to be in the low' ...
  '-voltage condition once it hits the low-voltage condition.'];
BattVltgCorrlnRcvrlBattLoVltg.DocUnits = 'Volt';
BattVltgCorrlnRcvrlBattLoVltg.EngDT = dt.float32;
BattVltgCorrlnRcvrlBattLoVltg.EngVal = 10.5;
BattVltgCorrlnRcvrlBattLoVltg.EngMin = 6;
BattVltgCorrlnRcvrlBattLoVltg.EngMax = 26;
BattVltgCorrlnRcvrlBattLoVltg.Cardinality = 'Cmn';
BattVltgCorrlnRcvrlBattLoVltg.CustomerVisible = false;
BattVltgCorrlnRcvrlBattLoVltg.Online = false;
BattVltgCorrlnRcvrlBattLoVltg.Impact = 'L';
BattVltgCorrlnRcvrlBattLoVltg.TuningOwner = 'EPDT';
BattVltgCorrlnRcvrlBattLoVltg.GraphLink = {''};
BattVltgCorrlnRcvrlBattLoVltg.Monotony = 'None';
BattVltgCorrlnRcvrlBattLoVltg.MaxGrad = 9;
BattVltgCorrlnRcvrlBattLoVltg.PortName = 'BattVltgCorrlnRcvrlBattLoVltg';


BattVltgCorrlnRcvrlBattOverVltg = DataDict.Calibration;
BattVltgCorrlnRcvrlBattOverVltg.LongName = 'Battery Voltage Correlation Recoverable Battery Over Voltage';
BattVltgCorrlnRcvrlBattOverVltg.Description = [...
  'Voltage below which Battery Voltage is NOT considered to be in the ove' ...
  'r-voltage condition once it hits the over-voltage condition.'];
BattVltgCorrlnRcvrlBattOverVltg.DocUnits = 'Volt';
BattVltgCorrlnRcvrlBattOverVltg.EngDT = dt.float32;
BattVltgCorrlnRcvrlBattOverVltg.EngVal = 15.5;
BattVltgCorrlnRcvrlBattOverVltg.EngMin = 6;
BattVltgCorrlnRcvrlBattOverVltg.EngMax = 26;
BattVltgCorrlnRcvrlBattOverVltg.Cardinality = 'Cmn';
BattVltgCorrlnRcvrlBattOverVltg.CustomerVisible = false;
BattVltgCorrlnRcvrlBattOverVltg.Online = false;
BattVltgCorrlnRcvrlBattOverVltg.Impact = 'L';
BattVltgCorrlnRcvrlBattOverVltg.TuningOwner = 'EPDT';
BattVltgCorrlnRcvrlBattOverVltg.GraphLink = {''};
BattVltgCorrlnRcvrlBattOverVltg.Monotony = 'None';
BattVltgCorrlnRcvrlBattOverVltg.MaxGrad = 20;
BattVltgCorrlnRcvrlBattOverVltg.PortName = 'BattVltgCorrlnRcvrlBattOverVltg';


BattVltgCorrlnRcvrlBattUnderVltg = DataDict.Calibration;
BattVltgCorrlnRcvrlBattUnderVltg.LongName = 'Battery Voltage Correlation Recoverable Battery Under Voltage';
BattVltgCorrlnRcvrlBattUnderVltg.Description = [...
  'Voltage above which Battery Voltage is NOT considered to be in the und' ...
  'er-voltage condition once it hits the under-voltage condition'];
BattVltgCorrlnRcvrlBattUnderVltg.DocUnits = 'Volt';
BattVltgCorrlnRcvrlBattUnderVltg.EngDT = dt.float32;
BattVltgCorrlnRcvrlBattUnderVltg.EngVal = 9.5;
BattVltgCorrlnRcvrlBattUnderVltg.EngMin = 6;
BattVltgCorrlnRcvrlBattUnderVltg.EngMax = 26;
BattVltgCorrlnRcvrlBattUnderVltg.Cardinality = 'Cmn';
BattVltgCorrlnRcvrlBattUnderVltg.CustomerVisible = false;
BattVltgCorrlnRcvrlBattUnderVltg.Online = false;
BattVltgCorrlnRcvrlBattUnderVltg.Impact = 'L';
BattVltgCorrlnRcvrlBattUnderVltg.TuningOwner = 'EPDT';
BattVltgCorrlnRcvrlBattUnderVltg.GraphLink = {''};
BattVltgCorrlnRcvrlBattUnderVltg.Monotony = 'None';
BattVltgCorrlnRcvrlBattUnderVltg.MaxGrad = 9;
BattVltgCorrlnRcvrlBattUnderVltg.PortName = 'BattVltgCorrlnRcvrlBattUnderVltg';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dBattVltgCorrlnBattVltgOk = DataDict.Display;
dBattVltgCorrlnBattVltgOk.LongName = 'Display Battery Voltage Correlation Battery Voltage Ok';
dBattVltgCorrlnBattVltgOk.Description = ...
  'Immediate Correlation State of Battery Voltage';
dBattVltgCorrlnBattVltgOk.DocUnits = 'Cnt';
dBattVltgCorrlnBattVltgOk.EngDT = dt.u08;
dBattVltgCorrlnBattVltgOk.EngMin = 0;
dBattVltgCorrlnBattVltgOk.EngMax = 1;
dBattVltgCorrlnBattVltgOk.InitRowCol = [1  1];


dBattVltgCorrlnBattVltgRngOk = DataDict.Display;
dBattVltgCorrlnBattVltgRngOk.LongName = 'Battery Voltage  Correlation Battery Voltage  Range OK';
dBattVltgCorrlnBattVltgRngOk.Description = 'Battery Voltage Range Ok';
dBattVltgCorrlnBattVltgRngOk.DocUnits = 'Cnt';
dBattVltgCorrlnBattVltgRngOk.EngDT = dt.u08;
dBattVltgCorrlnBattVltgRngOk.EngMin = 0;
dBattVltgCorrlnBattVltgRngOk.EngMax = 1;
dBattVltgCorrlnBattVltgRngOk.InitRowCol = [1  1];


dBattVltgCorrlnBattVltgSwd1Ok = DataDict.Display;
dBattVltgCorrlnBattVltgSwd1Ok.LongName = 'Display Battery Voltage Correlation Battery Voltage Switched 1 Ok';
dBattVltgCorrlnBattVltgSwd1Ok.Description = ...
  'Immediate Correlation State of Battery Voltage Switched 1';
dBattVltgCorrlnBattVltgSwd1Ok.DocUnits = 'Cnt';
dBattVltgCorrlnBattVltgSwd1Ok.EngDT = dt.u08;
dBattVltgCorrlnBattVltgSwd1Ok.EngMin = 0;
dBattVltgCorrlnBattVltgSwd1Ok.EngMax = 1;
dBattVltgCorrlnBattVltgSwd1Ok.InitRowCol = [1  1];


dBattVltgCorrlnBattVltgSwd1RngOk = DataDict.Display;
dBattVltgCorrlnBattVltgSwd1RngOk.LongName = 'Battery Voltage Correlation Battery Voltage Switched 1 Range OK';
dBattVltgCorrlnBattVltgSwd1RngOk.Description = ...
  'Battery Voltage  Switched 1 Range OK';
dBattVltgCorrlnBattVltgSwd1RngOk.DocUnits = 'Cnt';
dBattVltgCorrlnBattVltgSwd1RngOk.EngDT = dt.u08;
dBattVltgCorrlnBattVltgSwd1RngOk.EngMin = 0;
dBattVltgCorrlnBattVltgSwd1RngOk.EngMax = 1;
dBattVltgCorrlnBattVltgSwd1RngOk.InitRowCol = [1  1];


dBattVltgCorrlnBattVltgSwd2Ok = DataDict.Display;
dBattVltgCorrlnBattVltgSwd2Ok.LongName = 'Display Battery Voltage Correlation Battery Voltage Switched 1 Ok';
dBattVltgCorrlnBattVltgSwd2Ok.Description = ...
  'Immediate Correlation State of Battery Voltage Switched 2';
dBattVltgCorrlnBattVltgSwd2Ok.DocUnits = 'Cnt';
dBattVltgCorrlnBattVltgSwd2Ok.EngDT = dt.u08;
dBattVltgCorrlnBattVltgSwd2Ok.EngMin = 0;
dBattVltgCorrlnBattVltgSwd2Ok.EngMax = 1;
dBattVltgCorrlnBattVltgSwd2Ok.InitRowCol = [1  1];


dBattVltgCorrlnBattVltgSwd2RngOk = DataDict.Display;
dBattVltgCorrlnBattVltgSwd2RngOk.LongName = 'Battery Voltage Correlation Battery Voltage  Switched 2 Range OK';
dBattVltgCorrlnBattVltgSwd2RngOk.Description = ...
  'Battery Voltage  Switched 2 Range OK';
dBattVltgCorrlnBattVltgSwd2RngOk.DocUnits = 'Cnt';
dBattVltgCorrlnBattVltgSwd2RngOk.EngDT = dt.u08;
dBattVltgCorrlnBattVltgSwd2RngOk.EngMin = 0;
dBattVltgCorrlnBattVltgSwd2RngOk.EngMax = 1;
dBattVltgCorrlnBattVltgSwd2RngOk.InitRowCol = [1  1];

dBattVltgCorrlnNtc0x03CQlfrSts = DataDict.Display;
dBattVltgCorrlnNtc0x03CQlfrSts.LongName = 'Battery Voltage Correlation Ntc 03C Qualifer Status';
dBattVltgCorrlnNtc0x03CQlfrSts.Description = ...
  'Battery Voltage Correlation Ntc 03C Qualifer Status';
dBattVltgCorrlnNtc0x03CQlfrSts.DocUnits = 'Cnt';
dBattVltgCorrlnNtc0x03CQlfrSts.EngDT = enum.SigQlfr1;
dBattVltgCorrlnNtc0x03CQlfrSts.EngMin = SigQlfr1.SIGQLFR_NORES;
dBattVltgCorrlnNtc0x03CQlfrSts.EngMax = SigQlfr1.SIGQLFR_FAILD;
dBattVltgCorrlnNtc0x03CQlfrSts.InitRowCol = [1  1];

dBattVltgCorrlnNtc0x03DQlfrSts = DataDict.Display;
dBattVltgCorrlnNtc0x03DQlfrSts.LongName = 'Battery Voltage  Correlation Ntc 03D Qualifer Status';
dBattVltgCorrlnNtc0x03DQlfrSts.Description = ...
  'Battery Voltage Correlation Ntc 03D Qualifer Status';
dBattVltgCorrlnNtc0x03DQlfrSts.DocUnits = 'Cnt';
dBattVltgCorrlnNtc0x03DQlfrSts.EngDT = enum.SigQlfr1;
dBattVltgCorrlnNtc0x03DQlfrSts.EngMin = SigQlfr1.SIGQLFR_NORES;
dBattVltgCorrlnNtc0x03DQlfrSts.EngMax = SigQlfr1.SIGQLFR_FAILD;
dBattVltgCorrlnNtc0x03DQlfrSts.InitRowCol = [1  1];

dBattVltgCorrlnNtc0x044QlfrSts = DataDict.Display;
dBattVltgCorrlnNtc0x044QlfrSts.LongName = 'Battery Voltage  Correlation Ntc 044 Qualifer Status';
dBattVltgCorrlnNtc0x044QlfrSts.Description = ...
  'Battery Voltage Correlation Ntc 044 Qualifer Status';
dBattVltgCorrlnNtc0x044QlfrSts.DocUnits = 'Cnt';
dBattVltgCorrlnNtc0x044QlfrSts.EngDT = enum.SigQlfr1;
dBattVltgCorrlnNtc0x044QlfrSts.EngMin = SigQlfr1.SIGQLFR_NORES;
dBattVltgCorrlnNtc0x044QlfrSts.EngMax = SigQlfr1.SIGQLFR_FAILD;
dBattVltgCorrlnNtc0x044QlfrSts.InitRowCol = [1  1];

dBattVltgCorrlnNtc0x04CQlfrSts = DataDict.Display;
dBattVltgCorrlnNtc0x04CQlfrSts.LongName = 'Battery Voltage  Correlation Ntc 04C Qualifer Status';
dBattVltgCorrlnNtc0x04CQlfrSts.Description = ...
  'Battery Voltage  Correlation Ntc 04C Qualifer Status';
dBattVltgCorrlnNtc0x04CQlfrSts.DocUnits = 'Cnt';
dBattVltgCorrlnNtc0x04CQlfrSts.EngDT = enum.SigQlfr1;
dBattVltgCorrlnNtc0x04CQlfrSts.EngMin = SigQlfr1.SIGQLFR_NORES;
dBattVltgCorrlnNtc0x04CQlfrSts.EngMax = SigQlfr1.SIGQLFR_FAILD;
dBattVltgCorrlnNtc0x04CQlfrSts.InitRowCol = [1  1];

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
SYSVLTGFLTDUALIVTR_CNT_U08 = DataDict.Constant;
SYSVLTGFLTDUALIVTR_CNT_U08.LongName = 'System Voltage Fault Dual Inverter';
SYSVLTGFLTDUALIVTR_CNT_U08.Description = 'Parameter Bit 1 of NTC 0x03D';
SYSVLTGFLTDUALIVTR_CNT_U08.DocUnits = 'Cnt';
SYSVLTGFLTDUALIVTR_CNT_U08.EngDT = dt.u08;
SYSVLTGFLTDUALIVTR_CNT_U08.EngVal = 2;
SYSVLTGFLTDUALIVTR_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
BattVltgMeasdCorrlnFlt = DataDict.NTC;
BattVltgMeasdCorrlnFlt.NtcNr = NtcNr1.NTCNR_0X03C;
BattVltgMeasdCorrlnFlt.NtcTyp = 'Deb';
BattVltgMeasdCorrlnFlt.LongName = 'Battery Voltage Measured Correlation Fault';
BattVltgMeasdCorrlnFlt.Description = 'Incorrect Battery Voltage Measurement or Battery Votlage Correlation Fault';
BattVltgMeasdCorrlnFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
BattVltgMeasdCorrlnFlt.NtcStInfo.Bit0Descr = 'Battery Voltage Not In Correlation with Switched Voltages';
BattVltgMeasdCorrlnFlt.NtcStInfo.Bit1Descr = 'Unused';
BattVltgMeasdCorrlnFlt.NtcStInfo.Bit2Descr = 'Unused';
BattVltgMeasdCorrlnFlt.NtcStInfo.Bit3Descr = 'Unused';
BattVltgMeasdCorrlnFlt.NtcStInfo.Bit4Descr = 'Unused';
BattVltgMeasdCorrlnFlt.NtcStInfo.Bit5Descr = 'Unused';
BattVltgMeasdCorrlnFlt.NtcStInfo.Bit6Descr = 'Unused';
BattVltgMeasdCorrlnFlt.NtcStInfo.Bit7Descr = 'Unused';


ExtdVltgRngLoVltg = DataDict.NTC;
ExtdVltgRngLoVltg.NtcNr = NtcNr1.NTCNR_0X0B1;
ExtdVltgRngLoVltg.NtcTyp = 'Deb';
ExtdVltgRngLoVltg.LongName = 'Extended Voltage Range Low Voltage ';
ExtdVltgRngLoVltg.Description = 'Battery Voltage in Low Voltage Range';
ExtdVltgRngLoVltg.NtcStInfo = DataDict.NtcStInfoBitPacked;
ExtdVltgRngLoVltg.NtcStInfo.Bit0Descr = 'Low Battery Voltage';
ExtdVltgRngLoVltg.NtcStInfo.Bit1Descr = 'Unused';
ExtdVltgRngLoVltg.NtcStInfo.Bit2Descr = 'Unused';
ExtdVltgRngLoVltg.NtcStInfo.Bit3Descr = 'Unused';
ExtdVltgRngLoVltg.NtcStInfo.Bit4Descr = 'Unused';
ExtdVltgRngLoVltg.NtcStInfo.Bit5Descr = 'Unused';
ExtdVltgRngLoVltg.NtcStInfo.Bit6Descr = 'Unused';
ExtdVltgRngLoVltg.NtcStInfo.Bit7Descr = 'Unused';


Ivtr1PwrDiscnctFailrDurgRun = DataDict.NTC;
Ivtr1PwrDiscnctFailrDurgRun.NtcNr = NtcNr1.NTCNR_0X044;
Ivtr1PwrDiscnctFailrDurgRun.NtcTyp = 'Deb';
Ivtr1PwrDiscnctFailrDurgRun.LongName = 'Inverter 1 Power Disconnect Failure During Run';
Ivtr1PwrDiscnctFailrDurgRun.Description = 'Incorrect Switched Voltage 1 or Switched Voltage 1 Correlation Fault';
Ivtr1PwrDiscnctFailrDurgRun.NtcStInfo = DataDict.NtcStInfoBitPacked;
Ivtr1PwrDiscnctFailrDurgRun.NtcStInfo.Bit0Descr = 'Unexpected Open During Operation';
Ivtr1PwrDiscnctFailrDurgRun.NtcStInfo.Bit1Descr = 'Unused';
Ivtr1PwrDiscnctFailrDurgRun.NtcStInfo.Bit2Descr = 'Unused';
Ivtr1PwrDiscnctFailrDurgRun.NtcStInfo.Bit3Descr = 'Unused';
Ivtr1PwrDiscnctFailrDurgRun.NtcStInfo.Bit4Descr = 'Unused';
Ivtr1PwrDiscnctFailrDurgRun.NtcStInfo.Bit5Descr = 'Unused';
Ivtr1PwrDiscnctFailrDurgRun.NtcStInfo.Bit6Descr = 'Unused';
Ivtr1PwrDiscnctFailrDurgRun.NtcStInfo.Bit7Descr = 'Unused';


Ivtr2PwrDiscnctFailrDurgRun = DataDict.NTC;
Ivtr2PwrDiscnctFailrDurgRun.NtcNr = NtcNr1.NTCNR_0X04C;
Ivtr2PwrDiscnctFailrDurgRun.NtcTyp = 'Deb';
Ivtr2PwrDiscnctFailrDurgRun.LongName = 'Inverter 2 Power Disconnect Failure During Run';
Ivtr2PwrDiscnctFailrDurgRun.Description = 'Incorrect Switched Voltage 2 or Switched Voltage 2 Correlation Fault';
Ivtr2PwrDiscnctFailrDurgRun.NtcStInfo = DataDict.NtcStInfoBitPacked;
Ivtr2PwrDiscnctFailrDurgRun.NtcStInfo.Bit0Descr = 'Unexpected Open During Operation';
Ivtr2PwrDiscnctFailrDurgRun.NtcStInfo.Bit1Descr = 'Unused';
Ivtr2PwrDiscnctFailrDurgRun.NtcStInfo.Bit2Descr = 'Unused';
Ivtr2PwrDiscnctFailrDurgRun.NtcStInfo.Bit3Descr = 'Unused';
Ivtr2PwrDiscnctFailrDurgRun.NtcStInfo.Bit4Descr = 'Unused';
Ivtr2PwrDiscnctFailrDurgRun.NtcStInfo.Bit5Descr = 'Unused';
Ivtr2PwrDiscnctFailrDurgRun.NtcStInfo.Bit6Descr = 'Unused';
Ivtr2PwrDiscnctFailrDurgRun.NtcStInfo.Bit7Descr = 'Unused';


OutdOperVltgRngOverVltg = DataDict.NTC;
OutdOperVltgRngOverVltg.NtcNr = NtcNr1.NTCNR_0X0B5;
OutdOperVltgRngOverVltg.NtcTyp = 'Deb';
OutdOperVltgRngOverVltg.LongName = 'Outside Operation Voltage  Range Over Voltage ';
OutdOperVltgRngOverVltg.Description = 'Battery Voltage in Over Voltage Range';
OutdOperVltgRngOverVltg.NtcStInfo = DataDict.NtcStInfoBitPacked;
OutdOperVltgRngOverVltg.NtcStInfo.Bit0Descr = 'Battery Over Voltage';
OutdOperVltgRngOverVltg.NtcStInfo.Bit1Descr = 'Unused';
OutdOperVltgRngOverVltg.NtcStInfo.Bit2Descr = 'Unused';
OutdOperVltgRngOverVltg.NtcStInfo.Bit3Descr = 'Unused';
OutdOperVltgRngOverVltg.NtcStInfo.Bit4Descr = 'Unused';
OutdOperVltgRngOverVltg.NtcStInfo.Bit5Descr = 'Unused';
OutdOperVltgRngOverVltg.NtcStInfo.Bit6Descr = 'Unused';
OutdOperVltgRngOverVltg.NtcStInfo.Bit7Descr = 'Unused';


OutdOperVltgRngUnderVltg = DataDict.NTC;
OutdOperVltgRngUnderVltg.NtcNr = NtcNr1.NTCNR_0X0B0;
OutdOperVltgRngUnderVltg.NtcTyp = 'Deb';
OutdOperVltgRngUnderVltg.LongName = 'Outside Operation Voltage Range Under Voltage ';
OutdOperVltgRngUnderVltg.Description = 'Battery Voltage in Under Voltage Range';
OutdOperVltgRngUnderVltg.NtcStInfo = DataDict.NtcStInfoBitPacked;
OutdOperVltgRngUnderVltg.NtcStInfo.Bit0Descr = 'Battery Under Voltage';
OutdOperVltgRngUnderVltg.NtcStInfo.Bit1Descr = 'Unused';
OutdOperVltgRngUnderVltg.NtcStInfo.Bit2Descr = 'Unused';
OutdOperVltgRngUnderVltg.NtcStInfo.Bit3Descr = 'Unused';
OutdOperVltgRngUnderVltg.NtcStInfo.Bit4Descr = 'Unused';
OutdOperVltgRngUnderVltg.NtcStInfo.Bit5Descr = 'Unused';
OutdOperVltgRngUnderVltg.NtcStInfo.Bit6Descr = 'Unused';
OutdOperVltgRngUnderVltg.NtcStInfo.Bit7Descr = 'Unused';


SysVltgCorrlnFlt = DataDict.NTC;
SysVltgCorrlnFlt.NtcNr = NtcNr1.NTCNR_0X03D;
SysVltgCorrlnFlt.NtcTyp = 'Deb';
SysVltgCorrlnFlt.LongName = 'System Voltage Correlation Fault';
SysVltgCorrlnFlt.Description = 'Incorrect Battery Voltage Measurement and Switched Battery Votlage Measurement Fault';
SysVltgCorrlnFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
SysVltgCorrlnFlt.NtcStInfo.Bit0Descr = 'Battery Voltage ~= Switched Voltage 1, Single Inverter Configuration';
SysVltgCorrlnFlt.NtcStInfo.Bit1Descr = 'Battery Voltage ~= Switched Voltage 1 ~= Switched Voltage 2, Dual Inverter Configuration';
SysVltgCorrlnFlt.NtcStInfo.Bit2Descr = 'Unused';
SysVltgCorrlnFlt.NtcStInfo.Bit3Descr = 'Unused';
SysVltgCorrlnFlt.NtcStInfo.Bit4Descr = 'Unused';
SysVltgCorrlnFlt.NtcStInfo.Bit5Descr = 'Unused';
SysVltgCorrlnFlt.NtcStInfo.Bit6Descr = 'Unused';
SysVltgCorrlnFlt.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary

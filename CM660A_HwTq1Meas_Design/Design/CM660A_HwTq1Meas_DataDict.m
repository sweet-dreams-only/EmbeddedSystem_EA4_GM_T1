%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 17-Dec-2015 13:23:10       %
%                                  Created with tool release: 2.26.0     %
%                                  Synergy file: 1.6.0                   %
%                                  Date Modified:12/17/2105              %
%                                  Derived by: Keyur Patel        %
%%-----------------------------------------------------------------------%

CM660A = DataDict.FDD;
CM660A.Version = '1.10.x';
CM660A.LongName = 'Handwheel Torque 1 Measurement';
CM660A.ShoName  = 'HwTq1Meas';
CM660A.DesignASIL = 'D';
CM660A.Description = [...
  'HandWheel Torque Sensor 1 Measurement'];
CM660A.Dependencies = ...
	{'ElecGlbPrm'};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
HwTq1MeasInit1 = DataDict.Runnable;
HwTq1MeasInit1.Context = 'Rte';
HwTq1MeasInit1.TimeStep = 0;

HwTq1MeasPer1 = DataDict.Runnable;
HwTq1MeasPer1.Context = 'Rte';
HwTq1MeasPer1.TimeStep = 0.002;

HwTq1MeasPer2 = DataDict.Runnable;
HwTq1MeasPer2.Context = 'Rte';
HwTq1MeasPer2.TimeStep = 0.1;

HwTq1MeasHwTq1AutTrim = DataDict.SrvRunnable;
HwTq1MeasHwTq1AutTrim.Context = 'Rte';
HwTq1MeasHwTq1AutTrim.Return = DataDict.CSReturn;
HwTq1MeasHwTq1AutTrim.Return.Type = 'None';
HwTq1MeasHwTq1AutTrim.Return.Min = [];
HwTq1MeasHwTq1AutTrim.Return.Max = [];
HwTq1MeasHwTq1AutTrim.Return.TestTolerance = [];

HwTq1MeasHwTq1ClrTrim = DataDict.SrvRunnable;
HwTq1MeasHwTq1ClrTrim.Context = 'Rte';
HwTq1MeasHwTq1ClrTrim.Return = DataDict.CSReturn;
HwTq1MeasHwTq1ClrTrim.Return.Type = 'None';
HwTq1MeasHwTq1ClrTrim.Return.Min = [];
HwTq1MeasHwTq1ClrTrim.Return.Max = [];
HwTq1MeasHwTq1ClrTrim.Return.TestTolerance = [];

HwTq1MeasHwTq1ReadTrim = DataDict.SrvRunnable;
HwTq1MeasHwTq1ReadTrim.Context = 'Rte';
HwTq1MeasHwTq1ReadTrim.Return = DataDict.CSReturn;
HwTq1MeasHwTq1ReadTrim.Return.Type = 'None';
HwTq1MeasHwTq1ReadTrim.Return.Min = [];
HwTq1MeasHwTq1ReadTrim.Return.Max = [];
HwTq1MeasHwTq1ReadTrim.Return.TestTolerance = [];
HwTq1MeasHwTq1ReadTrim.Arguments(1) = DataDict.CSArguments;
HwTq1MeasHwTq1ReadTrim.Arguments(1).Name = 'HwTqReadTrimData';
HwTq1MeasHwTq1ReadTrim.Arguments(1).EngMin = -10;
HwTq1MeasHwTq1ReadTrim.Arguments(1).EngMax = 10;
HwTq1MeasHwTq1ReadTrim.Arguments(1).EngDT = dt.float32;
HwTq1MeasHwTq1ReadTrim.Arguments(1).Units = 'HwNm';
HwTq1MeasHwTq1ReadTrim.Arguments(1).Direction = 'Out';
HwTq1MeasHwTq1ReadTrim.Arguments(1).InitRowCol = [1  1];

HwTq1MeasHwTq1TrimPrfmdSts = DataDict.SrvRunnable;
HwTq1MeasHwTq1TrimPrfmdSts.Context = 'Rte';
HwTq1MeasHwTq1TrimPrfmdSts.Return = DataDict.CSReturn;
HwTq1MeasHwTq1TrimPrfmdSts.Return.Type = 'None';
HwTq1MeasHwTq1TrimPrfmdSts.Return.Min = [];
HwTq1MeasHwTq1TrimPrfmdSts.Return.Max = [];
HwTq1MeasHwTq1TrimPrfmdSts.Return.TestTolerance = [];
HwTq1MeasHwTq1TrimPrfmdSts.Arguments(1) = DataDict.CSArguments;
HwTq1MeasHwTq1TrimPrfmdSts.Arguments(1).Name = 'HwTqOffsTrimPrfmdStsData';
HwTq1MeasHwTq1TrimPrfmdSts.Arguments(1).EngMin = 0;
HwTq1MeasHwTq1TrimPrfmdSts.Arguments(1).EngMax = 1;
HwTq1MeasHwTq1TrimPrfmdSts.Arguments(1).EngDT = dt.lgc;
HwTq1MeasHwTq1TrimPrfmdSts.Arguments(1).Units = 'Lgc';
HwTq1MeasHwTq1TrimPrfmdSts.Arguments(1).Direction = 'Out';
HwTq1MeasHwTq1TrimPrfmdSts.Arguments(1).InitRowCol = [1  1];

HwTq1MeasHwTq1WrTrim = DataDict.SrvRunnable;
HwTq1MeasHwTq1WrTrim.Context = 'Rte';
HwTq1MeasHwTq1WrTrim.Return = DataDict.CSReturn;
HwTq1MeasHwTq1WrTrim.Return.Type = 'None';
HwTq1MeasHwTq1WrTrim.Return.Min = [];
HwTq1MeasHwTq1WrTrim.Return.Max = [];
HwTq1MeasHwTq1WrTrim.Return.TestTolerance = [];
HwTq1MeasHwTq1WrTrim.Arguments(1) = DataDict.CSArguments;
HwTq1MeasHwTq1WrTrim.Arguments(1).Name = 'HwTqWrOffsTrimData';
HwTq1MeasHwTq1WrTrim.Arguments(1).EngMin = -10;
HwTq1MeasHwTq1WrTrim.Arguments(1).EngMax = 10;
HwTq1MeasHwTq1WrTrim.Arguments(1).EngDT = dt.float32;
HwTq1MeasHwTq1WrTrim.Arguments(1).Units = 'HwNm';
HwTq1MeasHwTq1WrTrim.Arguments(1).Direction = 'In';
HwTq1MeasHwTq1WrTrim.Arguments(1).InitRowCol = [1  1];

HwTq1MeasTrigStrt = DataDict.SrvRunnable;
HwTq1MeasTrigStrt.Context = 'Both';
HwTq1MeasTrigStrt.Return = DataDict.CSReturn;
HwTq1MeasTrigStrt.Return.Type = 'None';
HwTq1MeasTrigStrt.Return.Min = [];
HwTq1MeasTrigStrt.Return.Max = [];
HwTq1MeasTrigStrt.Return.TestTolerance = [];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetNtcQlfrSts = DataDict.Client;
GetNtcQlfrSts.CallLocation = {'HwTq1MeasPer1'};
GetNtcQlfrSts.Return = DataDict.CSReturn;
GetNtcQlfrSts.Return.Type = 'Standard';
GetNtcQlfrSts.Return.Min = 0;
GetNtcQlfrSts.Return.Max = 1;
GetNtcQlfrSts.Return.TestTolerance = [];
GetNtcQlfrSts.Arguments(1) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(1).Name = 'NtcNr';
GetNtcQlfrSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
GetNtcQlfrSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
GetNtcQlfrSts.Arguments(1).EngDT = enum.NtcNr1;
GetNtcQlfrSts.Arguments(1).Units = 'Cnt';
GetNtcQlfrSts.Arguments(1).Direction = 'In';
GetNtcQlfrSts.Arguments(1).InitRowCol = [1  1];
GetNtcQlfrSts.Arguments(2) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(2).Name = 'NtcQlfr';
GetNtcQlfrSts.Arguments(2).EngMin = SigQlfr1.SIGQLFR_NORES;
GetNtcQlfrSts.Arguments(2).EngMax = SigQlfr1.SIGQLFR_FAILD;
GetNtcQlfrSts.Arguments(2).EngDT = enum.SigQlfr1;
GetNtcQlfrSts.Arguments(2).Units = 'Cnt';
GetNtcQlfrSts.Arguments(2).Direction = 'Out';
GetNtcQlfrSts.Arguments(2).InitRowCol = [1  1];


GetRefTmr1MicroSec32bit = DataDict.Client;
GetRefTmr1MicroSec32bit.CallLocation = {'HwTq1MeasInit1','HwTq1MeasTrigStrt'};
GetRefTmr1MicroSec32bit.Return = DataDict.CSReturn;
GetRefTmr1MicroSec32bit.Return.Type = 'None';
GetRefTmr1MicroSec32bit.Return.Min = [];
GetRefTmr1MicroSec32bit.Return.Max = [];
GetRefTmr1MicroSec32bit.Return.TestTolerance = [];
GetRefTmr1MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetRefTmr1MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetRefTmr1MicroSec32bit.Arguments(1).EngMin = 0;
GetRefTmr1MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetRefTmr1MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetRefTmr1MicroSec32bit.Arguments(1).Units = 'Cnt';
GetRefTmr1MicroSec32bit.Arguments(1).Direction = 'Out';
GetRefTmr1MicroSec32bit.Arguments(1).InitRowCol = [1  1];


GetTiSpan1MicroSec32bit = DataDict.Client;
GetTiSpan1MicroSec32bit.CallLocation = {'HwTq1MeasInit1','HwTq1MeasTrigStrt'};
GetTiSpan1MicroSec32bit.Return = DataDict.CSReturn;
GetTiSpan1MicroSec32bit.Return.Type = 'None';
GetTiSpan1MicroSec32bit.Return.Min = [];
GetTiSpan1MicroSec32bit.Return.Max = [];
GetTiSpan1MicroSec32bit.Return.TestTolerance = [];
GetTiSpan1MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetTiSpan1MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetTiSpan1MicroSec32bit.Arguments(1).EngMin = 0;
GetTiSpan1MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetTiSpan1MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetTiSpan1MicroSec32bit.Arguments(1).Units = 'Cnt';
GetTiSpan1MicroSec32bit.Arguments(1).Direction = 'In';
GetTiSpan1MicroSec32bit.Arguments(1).InitRowCol = [1  1];
GetTiSpan1MicroSec32bit.Arguments(2) = DataDict.CSArguments;
GetTiSpan1MicroSec32bit.Arguments(2).Name = 'TiSpan';
GetTiSpan1MicroSec32bit.Arguments(2).EngMin = 0;
GetTiSpan1MicroSec32bit.Arguments(2).EngMax = 4294967295;
GetTiSpan1MicroSec32bit.Arguments(2).EngDT = dt.u32;
GetTiSpan1MicroSec32bit.Arguments(2).Units = 'Cnt';
GetTiSpan1MicroSec32bit.Arguments(2).Direction = 'Out';
GetTiSpan1MicroSec32bit.Arguments(2).InitRowCol = [1  1];


HwTq1Offs_SetRamBlockStatus = DataDict.Client;
HwTq1Offs_SetRamBlockStatus.CallLocation = {'HwTq1MeasHwTq1AutTrim','HwTq1MeasHwTq1ClrTrim','HwTq1MeasHwTq1WrTrim'};
HwTq1Offs_SetRamBlockStatus.Return = DataDict.CSReturn;
HwTq1Offs_SetRamBlockStatus.Return.Type = 'Standard';
HwTq1Offs_SetRamBlockStatus.Return.Min = 0;
HwTq1Offs_SetRamBlockStatus.Return.Max = 1;
HwTq1Offs_SetRamBlockStatus.Return.TestTolerance = 0;
HwTq1Offs_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
HwTq1Offs_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
HwTq1Offs_SetRamBlockStatus.Arguments(1).EngMin = 0;
HwTq1Offs_SetRamBlockStatus.Arguments(1).EngMax = 1;
HwTq1Offs_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
HwTq1Offs_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
HwTq1Offs_SetRamBlockStatus.Arguments(1).Direction = 'In';
HwTq1Offs_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];


IoHwAb_SetFctPrphlHwTq1 = DataDict.Client;
IoHwAb_SetFctPrphlHwTq1.CallLocation = {'HwTq1MeasInit1'};
IoHwAb_SetFctPrphlHwTq1.Return = DataDict.CSReturn;
IoHwAb_SetFctPrphlHwTq1.Return.Type = 'Standard';
IoHwAb_SetFctPrphlHwTq1.Return.Min = 0;
IoHwAb_SetFctPrphlHwTq1.Return.Max = 1;
IoHwAb_SetFctPrphlHwTq1.Return.TestTolerance = [];


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'HwTq1MeasPer1','HwTq1MeasPer2'};
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = [];
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcSts.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65535;
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
HwTq1Polarity = DataDict.IpSignal;
HwTq1Polarity.LongName = 'HandWheel Torque 1 Polarity';
HwTq1Polarity.DocUnits = 'Uls';
HwTq1Polarity.EngDT = dt.s08;
HwTq1Polarity.EngInit = 1;
HwTq1Polarity.EngMin = -1;
HwTq1Polarity.EngMax = 1;
HwTq1Polarity.ReadIn = {'HwTq1MeasPer1'};
HwTq1Polarity.ReadType = 'Rte';


%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
HwTq1 = DataDict.OpSignal;
HwTq1.LongName = 'HandWheel Torque 1';
HwTq1.Description = 'HandWheel Torque 1 Output';
HwTq1.DocUnits = 'HwNwtMtr';
HwTq1.SwcShoName = 'HwTq1Meas';
HwTq1.EngDT = dt.float32;
HwTq1.EngInit = 0;
HwTq1.EngMin = -10;
HwTq1.EngMax = 10;
HwTq1.TestTolerance = 0.0049;
HwTq1.WrittenIn = {'HwTq1MeasPer1'};
HwTq1.WriteType = 'Rte';


HwTq1Qlfr = DataDict.OpSignal;
HwTq1Qlfr.LongName = 'Handwheel Torque 1 Qualifier';
HwTq1Qlfr.Description = [...
  'HandWheel Torque 1 Qualifier - NTC Status return'];
HwTq1Qlfr.DocUnits = 'Cnt';
HwTq1Qlfr.SwcShoName = 'HwTq1Meas';
HwTq1Qlfr.EngDT = enum.SigQlfr1;
HwTq1Qlfr.EngInit = SigQlfr1.SIGQLFR_NORES;
HwTq1Qlfr.EngMin = SigQlfr1.SIGQLFR_NORES;
HwTq1Qlfr.EngMax = SigQlfr1.SIGQLFR_FAILD;
HwTq1Qlfr.TestTolerance = 0;
HwTq1Qlfr.WrittenIn = {'HwTq1MeasPer1'};
HwTq1Qlfr.WriteType = 'Rte';


HwTq1RollgCntr = DataDict.OpSignal;
HwTq1RollgCntr.LongName = 'HandWheel Torque 1 Rolling Counter';
HwTq1RollgCntr.Description = 'HandWheel Torque 1 Heart Bit';
HwTq1RollgCntr.DocUnits = 'Cnt';
HwTq1RollgCntr.SwcShoName = 'HwTq1Meas';
HwTq1RollgCntr.EngDT = dt.u08;
HwTq1RollgCntr.EngInit = 0;
HwTq1RollgCntr.EngMin = 0;
HwTq1RollgCntr.EngMax = 255;
HwTq1RollgCntr.TestTolerance = 0;
HwTq1RollgCntr.WrittenIn = {'HwTq1MeasPer1'};
HwTq1RollgCntr.WriteType = 'Rte';


RackLimrCcwEotSig1 = DataDict.OpSignal;
RackLimrCcwEotSig1.LongName = 'Rack Limiter Counter Clockwise End of Travel Signal1';
RackLimrCcwEotSig1.Description = 'CCW EOT1';
RackLimrCcwEotSig1.DocUnits = 'HwDeg';
RackLimrCcwEotSig1.SwcShoName = 'HwTq1Meas';
RackLimrCcwEotSig1.EngDT = dt.float32;
RackLimrCcwEotSig1.EngInit = 0;
RackLimrCcwEotSig1.EngMin = -800;
RackLimrCcwEotSig1.EngMax = 0;
RackLimrCcwEotSig1.TestTolerance = 0.2;
RackLimrCcwEotSig1.WrittenIn = {'HwTq1MeasPer1'};
RackLimrCcwEotSig1.WriteType = 'Rte';


RackLimrCwEotSig1 = DataDict.OpSignal;
RackLimrCwEotSig1.LongName = 'Rack Limiter Clockwise End of Travel Signal1';
RackLimrCwEotSig1.Description = 'CW EOT1';
RackLimrCwEotSig1.DocUnits = 'HwDeg';
RackLimrCwEotSig1.SwcShoName = 'HwTq1Meas';
RackLimrCwEotSig1.EngDT = dt.float32;
RackLimrCwEotSig1.EngInit = 0;
RackLimrCwEotSig1.EngMin = 0;
RackLimrCwEotSig1.EngMax = 800;
RackLimrCwEotSig1.TestTolerance = 0.2;
RackLimrCwEotSig1.WrittenIn = {'HwTq1MeasPer1'};
RackLimrCwEotSig1.WriteType = 'Rte';


RackLimrEotSig1Avl = DataDict.OpSignal;
RackLimrEotSig1Avl.LongName = 'Rack Limiter End of Travel Signal1 Available';
RackLimrEotSig1Avl.Description = 'Rack Limiter End of Travel';
RackLimrEotSig1Avl.DocUnits = 'Uls';
RackLimrEotSig1Avl.SwcShoName = 'HwTq1Meas';
RackLimrEotSig1Avl.EngDT = dt.lgc;
RackLimrEotSig1Avl.EngInit = 0;
RackLimrEotSig1Avl.EngMin = 0;
RackLimrEotSig1Avl.EngMax = 1;
RackLimrEotSig1Avl.TestTolerance = 0;
RackLimrEotSig1Avl.WrittenIn = {'HwTq1MeasPer1'};
RackLimrEotSig1Avl.WriteType = 'Rte';

%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
HwTq1MeasHwTq1PrtclFltFailStep = DataDict.Calibration;
HwTq1MeasHwTq1PrtclFltFailStep.LongName = 'HandWheel Torque1 Measurement HandWheel Torque1 Protocol Fault Fail Step';
HwTq1MeasHwTq1PrtclFltFailStep.Description = [...
  'Step Value increments Error Count when test fail'];
HwTq1MeasHwTq1PrtclFltFailStep.DocUnits = 'Cnt';
HwTq1MeasHwTq1PrtclFltFailStep.EngDT = dt.u16;
HwTq1MeasHwTq1PrtclFltFailStep.EngVal = 2521;
HwTq1MeasHwTq1PrtclFltFailStep.EngMin = 0;
HwTq1MeasHwTq1PrtclFltFailStep.EngMax = 65535;
HwTq1MeasHwTq1PrtclFltFailStep.Cardinality = 'Inin';
HwTq1MeasHwTq1PrtclFltFailStep.CustomerVisible = false;
HwTq1MeasHwTq1PrtclFltFailStep.Online = false;
HwTq1MeasHwTq1PrtclFltFailStep.Impact = 'H';
HwTq1MeasHwTq1PrtclFltFailStep.TuningOwner = 'EPDT';
HwTq1MeasHwTq1PrtclFltFailStep.GraphLink = {''};
HwTq1MeasHwTq1PrtclFltFailStep.Monotony = 'None';
HwTq1MeasHwTq1PrtclFltFailStep.MaxGrad = 0;
HwTq1MeasHwTq1PrtclFltFailStep.PortName = 'HwTq1MeasHwTq1PrtclFltFailStep';


HwTq1MeasHwTq1PrtclFltPassStep = DataDict.Calibration;
HwTq1MeasHwTq1PrtclFltPassStep.LongName = 'HandWheel Torque1 Measurement HandWheel Torque1 Protocol Fault Pass Step';
HwTq1MeasHwTq1PrtclFltPassStep.Description = [...
  'Step Value Decrement Error Count when test Pass'];
HwTq1MeasHwTq1PrtclFltPassStep.DocUnits = 'Cnt';
HwTq1MeasHwTq1PrtclFltPassStep.EngDT = dt.u16;
HwTq1MeasHwTq1PrtclFltPassStep.EngVal = 1000;
HwTq1MeasHwTq1PrtclFltPassStep.EngMin = 0;
HwTq1MeasHwTq1PrtclFltPassStep.EngMax = 65535;
HwTq1MeasHwTq1PrtclFltPassStep.Cardinality = 'Inin';
HwTq1MeasHwTq1PrtclFltPassStep.CustomerVisible = false;
HwTq1MeasHwTq1PrtclFltPassStep.Online = false;
HwTq1MeasHwTq1PrtclFltPassStep.Impact = 'H';
HwTq1MeasHwTq1PrtclFltPassStep.TuningOwner = 'EPDT';
HwTq1MeasHwTq1PrtclFltPassStep.GraphLink = {''};
HwTq1MeasHwTq1PrtclFltPassStep.Monotony = 'None';
HwTq1MeasHwTq1PrtclFltPassStep.MaxGrad = 0;
HwTq1MeasHwTq1PrtclFltPassStep.PortName = 'HwTq1MeasHwTq1PrtclFltPassStep';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------
HwTq1Offs = DataDict.NVM;
HwTq1Offs.LongName = 'Handwheel Torque 1 Offset';
HwTq1Offs.Description = [...
  'Handwheel Torque 1 Offset NVM store'];
HwTq1Offs.DocUnits = 'Uls';
HwTq1Offs.EngDT = struct.HwTqOffsRec1;
HwTq1Offs.EngInit = [struct('OffsTrim',0,'OffsTrimPrfmdSts',0)];
HwTq1Offs.EngMin = [struct('OffsTrim',-10,'OffsTrimPrfmdSts',0)];
HwTq1Offs.EngMax = [struct('OffsTrim',10,'OffsTrimPrfmdSts',1)];
HwTq1Offs.CustomerVisible = false;
HwTq1Offs.Impact = 'H';
HwTq1Offs.TuningOwner = 'EPDT';
HwTq1Offs.CoderInfo.Alias = '';
HwTq1Offs.InitRowCol = [1  1];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
HwTq1ComStsErrCntr = DataDict.PIM;
HwTq1ComStsErrCntr.LongName = 'Handwheel Torque 1 Communication Status Error Counter';
HwTq1ComStsErrCntr.Description = [...
  'Com Error Increments this counter -Troubleshooting Purpose '];
HwTq1ComStsErrCntr.DocUnits = 'Cnt';
HwTq1ComStsErrCntr.EngDT = dt.u08;
HwTq1ComStsErrCntr.EngMin = 0;
HwTq1ComStsErrCntr.EngMax = 255;
HwTq1ComStsErrCntr.InitRowCol = [1  1];


HwTq1IntSnsrErrCntr = DataDict.PIM;
HwTq1IntSnsrErrCntr.LongName = 'Handwheel Torque 1 Internal Sensor Error Counter';
HwTq1IntSnsrErrCntr.Description = [...
  'Internal Sensor Error Increments this counter -Troubleshooting Purpose' ...
  ' '];
HwTq1IntSnsrErrCntr.DocUnits = 'Cnt';
HwTq1IntSnsrErrCntr.EngDT = dt.u08;
HwTq1IntSnsrErrCntr.EngMin = 0;
HwTq1IntSnsrErrCntr.EngMax = 255;
HwTq1IntSnsrErrCntr.InitRowCol = [1  1];


HwTq1MeasPrevHwTq1 = DataDict.PIM;
HwTq1MeasPrevHwTq1.LongName = 'Handwheel Torque 1 Measurement Previous Handwheel Torque 1';
HwTq1MeasPrevHwTq1.Description = 'Previous Handwheel Torque 1';
HwTq1MeasPrevHwTq1.DocUnits = 'HwNwtMtr';
HwTq1MeasPrevHwTq1.EngDT = dt.float32;
HwTq1MeasPrevHwTq1.EngMin = -10;
HwTq1MeasPrevHwTq1.EngMax = 10;
HwTq1MeasPrevHwTq1.InitRowCol = [1  1];


HwTq1MeasPrevRollgCntr = DataDict.PIM;
HwTq1MeasPrevRollgCntr.LongName = 'Handwheel Torque 1 Measurement Previous Rolling Count';
HwTq1MeasPrevRollgCntr.Description = 'Previous Roll Count';
HwTq1MeasPrevRollgCntr.DocUnits = 'Cnt';
HwTq1MeasPrevRollgCntr.EngDT = dt.u08;
HwTq1MeasPrevRollgCntr.EngMin = 0;
HwTq1MeasPrevRollgCntr.EngMax = 255;
HwTq1MeasPrevRollgCntr.InitRowCol = [1  1];


HwTq1MsgMissRxCnt = DataDict.PIM;
HwTq1MsgMissRxCnt.LongName = 'Handwheel Torque1 Message Missing Receive Count';
HwTq1MsgMissRxCnt.Description = 'Torque1 Missing Counter';
HwTq1MsgMissRxCnt.DocUnits = 'Cnt';
HwTq1MsgMissRxCnt.EngDT = dt.u32;
HwTq1MsgMissRxCnt.EngMin = 0;
HwTq1MsgMissRxCnt.EngMax = 4294967295;
HwTq1MsgMissRxCnt.InitRowCol = [1  1];


RackLimrCcwEot1 = DataDict.PIM;
RackLimrCcwEot1.LongName = 'Rack Limiter Counter Clockwise End of Travel1';
RackLimrCcwEot1.Description = 'CCW EOT';
RackLimrCcwEot1.DocUnits = 'HwDeg';
RackLimrCcwEot1.EngDT = dt.float32;
RackLimrCcwEot1.EngMin = -800;
RackLimrCcwEot1.EngMax = 0;
RackLimrCcwEot1.InitRowCol = [1  1];


RackLimrCwEot1 = DataDict.PIM;
RackLimrCwEot1.LongName = 'Rack Limiter Clockwise End of Travel1';
RackLimrCwEot1.Description = 'CW EOT';
RackLimrCwEot1.DocUnits = 'HwDeg';
RackLimrCwEot1.EngDT = dt.float32;
RackLimrCwEot1.EngMin = 0;
RackLimrCwEot1.EngMax = 800;
RackLimrCwEot1.InitRowCol = [1  1];


RackLimrEot1Avl = DataDict.PIM;
RackLimrEot1Avl.LongName = 'Rack Limiter End of Travel1 Available';
RackLimrEot1Avl.Description = 'EOT Signal Available';
RackLimrEot1Avl.DocUnits = 'Uls';
RackLimrEot1Avl.EngDT = dt.lgc;
RackLimrEot1Avl.EngMin = 0;
RackLimrEot1Avl.EngMax = 1;
RackLimrEot1Avl.InitRowCol = [1  1];


RackLimrEot1Data0 = DataDict.PIM;
RackLimrEot1Data0.LongName = 'Rack Limiter End of Travel1 Data0';
RackLimrEot1Data0.Description = 'Scratchpad Data1 of ID 2';
RackLimrEot1Data0.DocUnits = 'Cnt';
RackLimrEot1Data0.EngDT = dt.u08;
RackLimrEot1Data0.EngMin = 0;
RackLimrEot1Data0.EngMax = 255;
RackLimrEot1Data0.InitRowCol = [1  1];


RackLimrEot1Data1 = DataDict.PIM;
RackLimrEot1Data1.LongName = 'Rack Limiter End of Travel1 Data1';
RackLimrEot1Data1.Description = 'Scratchpad Data1 of ID 3';
RackLimrEot1Data1.DocUnits = 'Cnt';
RackLimrEot1Data1.EngDT = dt.u08;
RackLimrEot1Data1.EngMin = 0;
RackLimrEot1Data1.EngMax = 255;
RackLimrEot1Data1.InitRowCol = [1  1];


RackLimrEot1Data2 = DataDict.PIM;
RackLimrEot1Data2.LongName = 'Rack Limiter End of Travel1 Data2';
RackLimrEot1Data2.Description = 'Scratchpad Data1 of ID 4';
RackLimrEot1Data2.DocUnits = 'Cnt';
RackLimrEot1Data2.EngDT = dt.u08;
RackLimrEot1Data2.EngMin = 0;
RackLimrEot1Data2.EngMax = 255;
RackLimrEot1Data2.InitRowCol = [1  1];


RackLimrEot1Id2DataReadCmpl = DataDict.PIM;
RackLimrEot1Id2DataReadCmpl.LongName = 'Rack Limiter End of Travel1 Id2 Data Read Complete';
RackLimrEot1Id2DataReadCmpl.Description = 'Scratchpad message ID2 data';
RackLimrEot1Id2DataReadCmpl.DocUnits = 'Uls';
RackLimrEot1Id2DataReadCmpl.EngDT = dt.lgc;
RackLimrEot1Id2DataReadCmpl.EngMin = 0;
RackLimrEot1Id2DataReadCmpl.EngMax = 1;
RackLimrEot1Id2DataReadCmpl.InitRowCol = [1  1];


RackLimrEot1Id3DataReadCmpl = DataDict.PIM;
RackLimrEot1Id3DataReadCmpl.LongName = 'Rack Limiter End of Travel1 Id3 Data Read Complete';
RackLimrEot1Id3DataReadCmpl.Description = 'Scratchpad message ID3 data';
RackLimrEot1Id3DataReadCmpl.DocUnits = 'Uls';
RackLimrEot1Id3DataReadCmpl.EngDT = dt.lgc;
RackLimrEot1Id3DataReadCmpl.EngMin = 0;
RackLimrEot1Id3DataReadCmpl.EngMax = 1;
RackLimrEot1Id3DataReadCmpl.InitRowCol = [1  1];


RackLimrEot1Id4DataReadCmpl = DataDict.PIM;
RackLimrEot1Id4DataReadCmpl.LongName = 'Rack Limiter End of Travel1 Id4 Data Read Complete';
RackLimrEot1Id4DataReadCmpl.Description = 'Scratchpad message ID4 data';
RackLimrEot1Id4DataReadCmpl.DocUnits = 'Uls';
RackLimrEot1Id4DataReadCmpl.EngDT = dt.lgc;
RackLimrEot1Id4DataReadCmpl.EngMin = 0;
RackLimrEot1Id4DataReadCmpl.EngMax = 1;
RackLimrEot1Id4DataReadCmpl.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ELECGLBPRM_HWTQOFFS_HWNWTMTR_F32 = DataDict.Constant;
ELECGLBPRM_HWTQOFFS_HWNWTMTR_F32.LongName = 'Handwheel Torque Offset';
ELECGLBPRM_HWTQOFFS_HWNWTMTR_F32.Description = 'Offset';
ELECGLBPRM_HWTQOFFS_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
ELECGLBPRM_HWTQOFFS_HWNWTMTR_F32.EngDT = dt.float32;
ELECGLBPRM_HWTQOFFS_HWNWTMTR_F32.EngVal = 10;
ELECGLBPRM_HWTQOFFS_HWNWTMTR_F32.Header = 'None';
ELECGLBPRM_HWTQOFFS_HWNWTMTR_F32.Define = 'Global';


ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32 = DataDict.Constant;
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.LongName = 'Handwheel Torque Saturation Lower Limit';
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.Description = [...
  'Handwheel Torque value min limit to -10'];
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.EngDT = dt.float32;
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.EngVal = -10;
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.Header = 'None';
ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32.Define = 'Global';


ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32 = DataDict.Constant;
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.LongName = 'Handwheel Torque Saturation Upper Limit';
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.Description = [...
  'Handwheel Torque value max limit to 10'];
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.EngDT = dt.float32;
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.EngVal = 10;
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.Header = 'None';
ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32.Define = 'Global';


ELECGLBPRM_HWTQSCA_ULS_F32 = DataDict.Constant;
ELECGLBPRM_HWTQSCA_ULS_F32.LongName = 'Handwheel Torque Scale';
ELECGLBPRM_HWTQSCA_ULS_F32.Description = 'Scale';
ELECGLBPRM_HWTQSCA_ULS_F32.DocUnits = 'Uls';
ELECGLBPRM_HWTQSCA_ULS_F32.EngDT = dt.float32;
ELECGLBPRM_HWTQSCA_ULS_F32.EngVal = 0.004884005;
ELECGLBPRM_HWTQSCA_ULS_F32.Header = 'None';
ELECGLBPRM_HWTQSCA_ULS_F32.Define = 'Global';


ELECGLBPRM_NOFLT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_NOFLT_CNT_U08.LongName = 'No Fault';
ELECGLBPRM_NOFLT_CNT_U08.Description = 'No Fault';
ELECGLBPRM_NOFLT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_NOFLT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_NOFLT_CNT_U08.EngVal = 0;
ELECGLBPRM_NOFLT_CNT_U08.Header = 'None';
ELECGLBPRM_NOFLT_CNT_U08.Define = 'Global';


ELECGLBPRM_OFFSTRIMNOTPRFM_CNT_U08 = DataDict.Constant;
ELECGLBPRM_OFFSTRIMNOTPRFM_CNT_U08.LongName = 'Offset Trim Not Performed';
ELECGLBPRM_OFFSTRIMNOTPRFM_CNT_U08.Description = 'Offset Trim Not Performed';
ELECGLBPRM_OFFSTRIMNOTPRFM_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_OFFSTRIMNOTPRFM_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_OFFSTRIMNOTPRFM_CNT_U08.EngVal = 1;
ELECGLBPRM_OFFSTRIMNOTPRFM_CNT_U08.Header = 'None';
ELECGLBPRM_OFFSTRIMNOTPRFM_CNT_U08.Define = 'Global';


ELECGLBPRM_PRTCLFLT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_PRTCLFLT_CNT_U08.LongName = 'Protocol Fault';
ELECGLBPRM_PRTCLFLT_CNT_U08.Description = 'Protocol Fault';
ELECGLBPRM_PRTCLFLT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_PRTCLFLT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_PRTCLFLT_CNT_U08.EngVal = 1;
ELECGLBPRM_PRTCLFLT_CNT_U08.Header = 'None';
ELECGLBPRM_PRTCLFLT_CNT_U08.Define = 'Global';


ELECGLBPRM_SNSRINTFLT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_SNSRINTFLT_CNT_U08.LongName = 'Sensor Internal Fault';
ELECGLBPRM_SNSRINTFLT_CNT_U08.Description = 'Sensor Internal Fault';
ELECGLBPRM_SNSRINTFLT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_SNSRINTFLT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_SNSRINTFLT_CNT_U08.EngVal = 2;
ELECGLBPRM_SNSRINTFLT_CNT_U08.Header = 'None';
ELECGLBPRM_SNSRINTFLT_CNT_U08.Define = 'Global';


HWTQ1MEAS_HWTQ1MFGNTCNR_ULS_U16 = DataDict.ConfigParam;
HWTQ1MEAS_HWTQ1MFGNTCNR_ULS_U16.LongName = 'Handwheel Torque 1 Manufacturing Ntc Number';
HWTQ1MEAS_HWTQ1MFGNTCNR_ULS_U16.Description = 'HwTq1 Manufacturing Ntc Number';
HWTQ1MEAS_HWTQ1MFGNTCNR_ULS_U16.IsBuildPrm = true;
HWTQ1MEAS_HWTQ1MFGNTCNR_ULS_U16.DocUnits = 'Uls';
HWTQ1MEAS_HWTQ1MFGNTCNR_ULS_U16.EngDT = enum.NtcNr1;
HWTQ1MEAS_HWTQ1MFGNTCNR_ULS_U16.EngVal = NtcNr1.NTCNR_0X1E1;
HWTQ1MEAS_HWTQ1MFGNTCNR_ULS_U16.EngMin = NtcNr1.NTCNR_0X1E0;
HWTQ1MEAS_HWTQ1MFGNTCNR_ULS_U16.EngMax = NtcNr1.NTCNR_0X1E3;
HWTQ1MEAS_HWTQ1MFGNTCNR_ULS_U16.Header = 'None';
HWTQ1MEAS_HWTQ1MFGNTCNR_ULS_U16.Define = 'Global';


HWTQ1MEAS_HWTQ1PRTCLNTCNR_ULS_U16 = DataDict.ConfigParam;
HWTQ1MEAS_HWTQ1PRTCLNTCNR_ULS_U16.LongName = 'Handwheel Torque 1 Ntc Number';
HWTQ1MEAS_HWTQ1PRTCLNTCNR_ULS_U16.Description = 'HwTq1 Ntc Number';
HWTQ1MEAS_HWTQ1PRTCLNTCNR_ULS_U16.IsBuildPrm = true;
HWTQ1MEAS_HWTQ1PRTCLNTCNR_ULS_U16.DocUnits = 'Uls';
HWTQ1MEAS_HWTQ1PRTCLNTCNR_ULS_U16.EngDT = enum.NtcNr1;
HWTQ1MEAS_HWTQ1PRTCLNTCNR_ULS_U16.EngVal = NtcNr1.NTCNR_0X075;
HWTQ1MEAS_HWTQ1PRTCLNTCNR_ULS_U16.EngMin = NtcNr1.NTCNR_0X073;
HWTQ1MEAS_HWTQ1PRTCLNTCNR_ULS_U16.EngMax = NtcNr1.NTCNR_0X07A;
HWTQ1MEAS_HWTQ1PRTCLNTCNR_ULS_U16.Header = 'None';
HWTQ1MEAS_HWTQ1PRTCLNTCNR_ULS_U16.Define = 'Global';


RACKLIMRCCWEOTSCA_ULS_F32 = DataDict.Constant;
RACKLIMRCCWEOTSCA_ULS_F32.LongName = 'Rack Limiter Counter Clockwise End of Travel Scale';
RACKLIMRCCWEOTSCA_ULS_F32.Description = 'Scale';
RACKLIMRCCWEOTSCA_ULS_F32.DocUnits = 'Uls';
RACKLIMRCCWEOTSCA_ULS_F32.EngDT = dt.float32;
RACKLIMRCCWEOTSCA_ULS_F32.EngVal = -0.1953;
RACKLIMRCCWEOTSCA_ULS_F32.Header = 'None';
RACKLIMRCCWEOTSCA_ULS_F32.Define = 'Local';


RACKLIMRCWEOTSCA_ULS_F32 = DataDict.Constant;
RACKLIMRCWEOTSCA_ULS_F32.LongName = 'Rack Limiter Clockwise End of Travel Scale';
RACKLIMRCWEOTSCA_ULS_F32.Description = 'Scale';
RACKLIMRCWEOTSCA_ULS_F32.DocUnits = 'Uls';
RACKLIMRCWEOTSCA_ULS_F32.EngDT = dt.float32;
RACKLIMRCWEOTSCA_ULS_F32.EngVal = 0.1953;
RACKLIMRCWEOTSCA_ULS_F32.Header = 'None';
RACKLIMRCWEOTSCA_ULS_F32.Define = 'Local';


RACKLIMREOTSIGHILIM_HWDEG_F32 = DataDict.Constant;
RACKLIMREOTSIGHILIM_HWDEG_F32.LongName = 'Rack Limiter End of Travel Signal High Limit';
RACKLIMREOTSIGHILIM_HWDEG_F32.Description = 'High Limit For Rack Limiter';
RACKLIMREOTSIGHILIM_HWDEG_F32.DocUnits = 'HwDeg';
RACKLIMREOTSIGHILIM_HWDEG_F32.EngDT = dt.float32;
RACKLIMREOTSIGHILIM_HWDEG_F32.EngVal = 800;
RACKLIMREOTSIGHILIM_HWDEG_F32.Header = 'None';
RACKLIMREOTSIGHILIM_HWDEG_F32.Define = 'Local';


RACKLIMREOTSIGLOLIM_HWDEG_F32 = DataDict.Constant;
RACKLIMREOTSIGLOLIM_HWDEG_F32.LongName = 'Rack Limiter End of Travel Signal Low Limit';
RACKLIMREOTSIGLOLIM_HWDEG_F32.Description = 'Low Limit For Rack Limiter Counter';
RACKLIMREOTSIGLOLIM_HWDEG_F32.DocUnits = 'HwDeg';
RACKLIMREOTSIGLOLIM_HWDEG_F32.EngDT = dt.float32;
RACKLIMREOTSIGLOLIM_HWDEG_F32.EngVal = -800;
RACKLIMREOTSIGLOLIM_HWDEG_F32.Header = 'None';
RACKLIMREOTSIGLOLIM_HWDEG_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
HwTq1MfgFlt = DataDict.NTC;
HwTq1MfgFlt.NtcNr = NtcNr1.NTCNR_0X1E1;
HwTq1MfgFlt.NtcTyp = 'None';
HwTq1MfgFlt.LongName = 'Handwheel Torque 1 Manufacturing Fault';
HwTq1MfgFlt.Description = ' HwTq1MfgFlt.NtcNr = HWTQ1MEAS_HWTQ1MFGNTCNR_ULS_U16';
HwTq1MfgFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
HwTq1MfgFlt.NtcStInfo.Bit0Descr = 'Offset Trim Not Performed';
HwTq1MfgFlt.NtcStInfo.Bit1Descr = 'Unused';
HwTq1MfgFlt.NtcStInfo.Bit2Descr = 'Unused';
HwTq1MfgFlt.NtcStInfo.Bit3Descr = 'Unused';
HwTq1MfgFlt.NtcStInfo.Bit4Descr = 'Unused';
HwTq1MfgFlt.NtcStInfo.Bit5Descr = 'Unused';
HwTq1MfgFlt.NtcStInfo.Bit6Descr = 'Unused';
HwTq1MfgFlt.NtcStInfo.Bit7Descr = 'Unused';


HwTq1PrtclFlt = DataDict.NTC;
HwTq1PrtclFlt.NtcNr = NtcNr1.NTCNR_0X075;
HwTq1PrtclFlt.NtcTyp = 'Deb';
HwTq1PrtclFlt.LongName = 'Handwheel Torque 1 Protocol Fault';
HwTq1PrtclFlt.Description = 'HwTq1PrtclFlt.NtcNr = HWTQ1MEAS_HWTQ1PRTCLNTCNR_ULS_U16';
HwTq1PrtclFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
HwTq1PrtclFlt.NtcStInfo.Bit0Descr = 'Protocol Fault';
HwTq1PrtclFlt.NtcStInfo.Bit1Descr = 'Sensor Internal Fault';
HwTq1PrtclFlt.NtcStInfo.Bit2Descr = 'Unused';
HwTq1PrtclFlt.NtcStInfo.Bit3Descr = 'Unused';
HwTq1PrtclFlt.NtcStInfo.Bit4Descr = 'Unused';
HwTq1PrtclFlt.NtcStInfo.Bit5Descr = 'Unused';
HwTq1PrtclFlt.NtcStInfo.Bit6Descr = 'Unused';
HwTq1PrtclFlt.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary

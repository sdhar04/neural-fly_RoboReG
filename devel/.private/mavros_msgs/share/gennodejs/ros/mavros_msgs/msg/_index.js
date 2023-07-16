
"use strict";

let CompanionProcessStatus = require('./CompanionProcessStatus.js');
let PositionTarget = require('./PositionTarget.js');
let Altitude = require('./Altitude.js');
let HilActuatorControls = require('./HilActuatorControls.js');
let LogEntry = require('./LogEntry.js');
let VFR_HUD = require('./VFR_HUD.js');
let CommandCode = require('./CommandCode.js');
let HilStateQuaternion = require('./HilStateQuaternion.js');
let LogData = require('./LogData.js');
let GlobalPositionTarget = require('./GlobalPositionTarget.js');
let AttitudeTarget = require('./AttitudeTarget.js');
let MountControl = require('./MountControl.js');
let WaypointReached = require('./WaypointReached.js');
let HilSensor = require('./HilSensor.js');
let HomePosition = require('./HomePosition.js');
let ManualControl = require('./ManualControl.js');
let WaypointList = require('./WaypointList.js');
let Trajectory = require('./Trajectory.js');
let State = require('./State.js');
let Param = require('./Param.js');
let Mavlink = require('./Mavlink.js');
let Waypoint = require('./Waypoint.js');
let HilGPS = require('./HilGPS.js');
let LandingTarget = require('./LandingTarget.js');
let ADSBVehicle = require('./ADSBVehicle.js');
let RTCM = require('./RTCM.js');
let ParamValue = require('./ParamValue.js');
let OnboardComputerStatus = require('./OnboardComputerStatus.js');
let ExtendedState = require('./ExtendedState.js');
let StatusText = require('./StatusText.js');
let RCOut = require('./RCOut.js');
let CamIMUStamp = require('./CamIMUStamp.js');
let OverrideRCIn = require('./OverrideRCIn.js');
let RadioStatus = require('./RadioStatus.js');
let OpticalFlowRad = require('./OpticalFlowRad.js');
let WheelOdomStamped = require('./WheelOdomStamped.js');
let FileEntry = require('./FileEntry.js');
let RCIn = require('./RCIn.js');
let ActuatorControl = require('./ActuatorControl.js');
let VehicleInfo = require('./VehicleInfo.js');
let BatteryStatus = require('./BatteryStatus.js');
let Thrust = require('./Thrust.js');
let TimesyncStatus = require('./TimesyncStatus.js');
let Vibration = require('./Vibration.js');
let DebugValue = require('./DebugValue.js');
let HilControls = require('./HilControls.js');

module.exports = {
  CompanionProcessStatus: CompanionProcessStatus,
  PositionTarget: PositionTarget,
  Altitude: Altitude,
  HilActuatorControls: HilActuatorControls,
  LogEntry: LogEntry,
  VFR_HUD: VFR_HUD,
  CommandCode: CommandCode,
  HilStateQuaternion: HilStateQuaternion,
  LogData: LogData,
  GlobalPositionTarget: GlobalPositionTarget,
  AttitudeTarget: AttitudeTarget,
  MountControl: MountControl,
  WaypointReached: WaypointReached,
  HilSensor: HilSensor,
  HomePosition: HomePosition,
  ManualControl: ManualControl,
  WaypointList: WaypointList,
  Trajectory: Trajectory,
  State: State,
  Param: Param,
  Mavlink: Mavlink,
  Waypoint: Waypoint,
  HilGPS: HilGPS,
  LandingTarget: LandingTarget,
  ADSBVehicle: ADSBVehicle,
  RTCM: RTCM,
  ParamValue: ParamValue,
  OnboardComputerStatus: OnboardComputerStatus,
  ExtendedState: ExtendedState,
  StatusText: StatusText,
  RCOut: RCOut,
  CamIMUStamp: CamIMUStamp,
  OverrideRCIn: OverrideRCIn,
  RadioStatus: RadioStatus,
  OpticalFlowRad: OpticalFlowRad,
  WheelOdomStamped: WheelOdomStamped,
  FileEntry: FileEntry,
  RCIn: RCIn,
  ActuatorControl: ActuatorControl,
  VehicleInfo: VehicleInfo,
  BatteryStatus: BatteryStatus,
  Thrust: Thrust,
  TimesyncStatus: TimesyncStatus,
  Vibration: Vibration,
  DebugValue: DebugValue,
  HilControls: HilControls,
};

class CfgPatches
{
	class rhsusf_c_radio
	{
		units[]={};
		weapons[]={};
	};
};
class CfgVoice
{
	voices[]+=
	{
		"RHS_Female01eng"
	};
	class Base;
	class RHS_BaseENGF: Base
	{
		variants[]={0.94999999,1,1.05};
		voiceType="";
		directories[]=
		{
			"",
			""
		};
	};
	class RHS_ENGF: RHS_BaseENGF
	{
		protocol="RadioProtocolFemaleENG";
		identityTypes[]=
		{
			"Head_Female",
			0
		};
	};
	class rhs_Female01ENG: RHS_ENGF
	{
		icon="\a3\Ui_f\data\Map\Markers\Flags\usa_ca.paa";
		displayname="Female Voice 01";
		directories[]=
		{
			"\rhsusf\addons\rhsusf_s_radio\Female01EN\",
			"\rhsusf\addons\rhsusf_s_radio\Female01EN\"
		};
	};
};
class CfgVoiceTypes
{
	class Female01_F
	{
		name="Female Type 01";
		preview="Male01ENG";
		alternative="";
		voices[]=
		{
			"rhs_Female01ENG"
		};
	};
};
class RadioProtocolBase
{
	class Words;
	class Arguments;
};
class RadioProtocolBaseFemale: RadioProtocolBase
{
	class Default;
	class Report;
	class PriorityReport;
	class Confirmation;
	class Completition;
	class JoinCompleted;
	class Failure;
	class Notify;
	class Detected;
	class NormalCommand;
	class CriticalReport;
	class UrgentCommand;
	class UICommand;
	class Design;
	class CombatShout: Default
	{
		noRadio=1;
	};
	class SentUnitKilled;
	class SentSupportAskHeal;
	class SentSupportAskRepair;
	class SentSupportAskRefuel;
	class SentSupportAskRearm;
	class SentSupportConfirm;
	class SentSupportReady;
	class SentSupportDone;
	class SentSupportNotAvailable;
	class SentHealthCritical;
	class SentHealthNormal;
	class SentHealthUnconscious;
	class SentDammageCritical;
	class SentOutOfFirstAidKits;
	class SentFuelCritical;
	class SentFuelLow;
	class SentAmmoCritical;
	class SentAmmoLow;
	class SentReportPosition;
	class SentIsLeader;
	class SentCommandCompleted;
	class SentJoinCompleted;
	class SentFireReady;
	class SentDetectedMine;
	class SentDetectedBomb;
	class SentDetectedExplosive;
	class SentFireNegative;
	class SentCommandFailed;
	class SentDestinationUnreacheable;
	class SelectEnemyDetectedSentence;
	class SentEnemyDetectedGroupCoreRelative;
	class SentEnemyDetectedOnGridReference;
	class SentEnemyDetectedLocationRelative;
	class SentEnemyDetectedUnitRelative;
	class SentEnemyDetectedSenderRelative;
	class SentObjectDestroyed;
	class SentObjectDestroyedUnknown;
	class SentContact;
	class SentUnderFire;
	class SentCoverMe;
	class SentCovering;
	class SentSuppressing;
	class SentReloading;
	class SentThrowingGrenade;
	class SentThrowingSmoke;
	class SentIncomingGrenade;
	class SentEnemyContact;
	class SentEndangered;
	class SentRouted;
	class SentWitnessDeadBody;
	class SentWitnessKilled;
	class SentCombatGeneric;
	class SentCheering;
	class SentScreaming;
	class SentClear;
	class SentRepeatCommand;
	class SentWhereAreYou;
	class SentReturnToFormation;
	class SentFormColumn;
	class SentFormStaggeredColumn;
	class SentFormWedge;
	class SentFormEcholonLeft;
	class SentFormEcholonRight;
	class SentFormVee;
	class SentFormLine;
	class SentFormFile;
	class SentFormDiamond;
	class SentBehaviourCareless;
	class SentBehaviourSafe;
	class SentBehaviourAware;
	class SentBehaviourCombat;
	class SentBehaviourStealth;
	class SentOpenFire;
	class SentOpenFireInCombat;
	class SentHoldFire;
	class SentHoldFireInCombat;
	class SentCeaseFireInsideGroup;
	class SentCeaseFire;
	class SentLooseFormation;
	class SentKeepFormation;
	class SentUnitPosDown;
	class SentUnitPosMiddle;
	class SentUnitPosUp;
	class SentUnitPosAuto;
	class SentFormPosAdvance;
	class SentFormPosStayBack;
	class SentFormPosFlankLeft;
	class SentFormPosFlankRight;
	class SentReportStatus;
	class SentTeam;
	class SentTeamPlural;
	class SentWatchTgt;
	class SentWatchDir;
	class SentWatchPos;
	class SentWatchAround;
	class SentNoTarget;
	class SentTarget;
	class SentEngage;
	class SentFire;
	class SentEngageNoTarget;
	class SentFireNoTarget;
	class SelectCmdMoveSentence;
	class SentCmdMoveGroupRelative;
	class SentCmdMoveRecipientsRelative;
	class SentCmdMoveToGrid;
	class SentCmdMoveToTarget;
	class SentCmdMoveToObject;
	class SentCmdMoveLocationRelative;
	class SentCmdHealSomeone;
	class SentCmdHealSelf;
	class SentAssemble;
	class SentDisassemble;
	class SentCmdActionTakeBag;
	class SentCmdActionDropBag;
	class SentCmdActionOpenBag;
	class SentLightsOn;
	class SentLightsOff;
	class SentPointersOn;
	class SentPointersOff;
	class SentCmdHeal;
	class SentCmdHealFar;
	class SentCmdHealAt;
	class SentCmdRepair;
	class SentCmdRepairFar;
	class SentCmdRepairAt;
	class SentCmdRefuel;
	class SentCmdRefuelFar;
	class SentCmdRefuelAt;
	class SentCmdRearm;
	class SentCmdRearmFar;
	class SentCmdRearmAt;
	class SentCmdSupport;
	class SentCmdSupportFar;
	class SentCmdSupportAt;
	class SentCmdDropWeapon;
	class SentCmdDropMagazine;
	class SentCmdTakeWeapon;
	class SentCmdTakeWeaponFar;
	class SentCmdTakeWeaponAt;
	class SentCmdTakeMagazine;
	class SentCmdTakeMagazineFar;
	class SentCmdTakeMagazineAt;
	class SentCmdAction;
	class SentCmdActionNear;
	class SentCmdActionFar;
	class SentCmdActionAt;
	class SentCmdTakeFlag;
	class SentCmdTakeFlagFar;
	class SentCmdTakeFlagAt;
	class SentCmdReturnFlag;
	class SentCmdReturnFlagFar;
	class SentCmdReturnFlagAt;
	class SentCmdEject;
	class SentCmdPlaceCharge;
	class SentCmdDetonate;
	class SentCmdActivateTimer;
	class SentCmdDeactivateBomb;
	class SentCmdDeactivateMine;
	class SentCmdTakeMine;
	class SentCmdLightFire;
	class SentCmdLightFireFar;
	class SentCmdLightFireAt;
	class SentCmdPutOutFire;
	class SentCmdPutOutFireFar;
	class SentCmdPutOutFireAt;
	class SentCmdOpenDoor;
	class SentCmdOpenDoorFar;
	class SentCmdOpenDoorAt;
	class SentCmdCloseDoor;
	class SentCmdCloseDoorFar;
	class SentCmdCloseDoorAt;
	class SentCmdFollowMe;
	class SentCmdFollow;
	class SentCmdAttack;
	class SentAttackNoTarget;
	class SentCmdFire;
	class SentCmdGetIn;
	class SentCmdGetInCommander;
	class SentCmdGetInDriver;
	class SentCmdGetInPilot;
	class SentCmdGetInGunner;
	class SentCmdGetInCargo;
	class SentCmdSwitchToDriver;
	class SentCmdSwitchToGunner;
	class SentCmdSwitchToCommander;
	class SentCmdSwitchToCargo;
	class SentCmdGetOut;
	class SentCmdStop;
	class SentCmdExpect;
	class SentCmdHide;
	class SentCmdDismiss;
	class SentNotifyAttack;
	class SentNotifyAttackSubgroup;
	class SentNotifySupport;
	class SentConfirmMove;
	class SentConfirmAttack;
	class SentConfirmOther;
	class SentRepairThat;
	class SentARTYFireAt;
	class SentARTYFireAtWithAmmo;
	class SentARTYRoundsComplete;
	class SentARTYCannotExecuteAdjustCoordinates;
	class SentARTYCannotExecuteThatsOutsideOurFiringEnvelope;
	class SelectVehicleMoveSentence;
	class VehicleMoveGroupRelative;
	class VehicleMoveRecipientsRelative;
	class VehicleMoveToGrid;
	class VehicleMoveToObject;
	class VehicleMoveLocationRelative;
	class VehicleWatchTgt;
	class VehicleWatchPos;
	class VehicleJoin;
	class VehicleFire;
	class VehicleTarget;
	class VehicleNoTarget;
	class VehicleCeaseFire;
	class VehicleForward;
	class VehicleStop;
	class VehicleBackward;
	class VehicleFaster;
	class VehicleSlower;
	class VehicleLeft;
	class VehicleRight;
	class VehicleManualFire;
	class VehicleCancelManualFire;
	class VehicleDirectFire;
	class VehicleLoad;
	class VehicleLoadMagazine;
	class VehicleAzimut;
	class VehicleFireFailed;
	class ClausePosition;
	class ClausePositionNear;
	class SentObjectUnconscious;
	class SentObjectUnconsciousUnknown;
	class SentCmdPatchSomeone;
	class SentCmdCarrySomeone;
	class Words;
	class Arguments: Arguments
	{
		class Direction;
		class Distance1;
		class AggrTargets;
	};
};
class RadioProtocolFemaleENG: RadioProtocolBaseFemale
{
	class Words: Words
	{
		NO_SPEECH[]={};
		micOut1[]=
		{
			"\A3\Dubbing_Radio_F\Data\static\in2a.ogg"
		};
		micOut2[]=
		{
			"\A3\Dubbing_Radio_F\Data\static\in2b.ogg"
		};
		micOut3[]=
		{
			"\A3\Dubbing_Radio_F\Data\static\in2c.ogg"
		};
		micOut4[]=
		{
			"\A3\Dubbing_Radio_F\Data\static\out2a.ogg"
		};
		micOut5[]=
		{
			"\A3\Dubbing_Radio_F\Data\static\out2b.ogg"
		};
		micOut6[]=
		{
			"\A3\Dubbing_Radio_F\Data\static\out2c.ogg"
		};
		loop[]=
		{
			"\A3\Dubbing_Radio_F\Data\static\radionoise1.ogg"
		};
		micOut[]=
		{
			"\A3\Dubbing_Radio_F\Data\static\out2a.ogg"
		};
		beepBeep[]=
		{
			"\A3\Dubbing_Radio_F\Data\static\out2a.ogg"
		};
		pause[]=
		{
			"\A3\Dubbing_Radio_F\Data\static\empty01sec.ogg"
		};
		xmit[]=
		{
			"\A3\Dubbing_Radio_F\Data\static\in2a.ogg"
		};
		sabot[]=
		{
			"DEFAULT\weapons\cannonLow.ogg"
		};
		mgun[]=
		{
			"DEFAULT\weapons\MachineGun.ogg"
		};
		empty[]={};
		Advance[]=
		{
			"DEFAULT\Advance.ogg"
		};
		And[]=
		{
			"DEFAULT\And.ogg"
		};
		Are[]=
		{
			"DEFAULT\Are.ogg"
		};
		AreaClear[]=
		{
			"DEFAULT\AreaClear.ogg"
		};
		At[]=
		{
			"DEFAULT\At.ogg"
		};
		AtEase[]=
		{
			"DEFAULT\AtEase.ogg"
		};
		AttackE[]=
		{
			"DEFAULT\AttackE.ogg"
		};
		AttackingE[]=
		{
			"DEFAULT\AttackingE.ogg"
		};
		AttackThat[]=
		{
			"DEFAULT\AttackThat.ogg"
		};
		BailOutE[]=
		{
			"DEFAULT\BailOutE.ogg"
		};
		BeAdvised[]=
		{
			"DEFAULT\BeAdvised.ogg"
		};
		BingoFuel[]=
		{
			"DEFAULT\BingoFuel.ogg"
		};
		BlueOnBlueE[]=
		{
			"DEFAULT\BlueOnBlueE.ogg"
		};
		BoardThat[]=
		{
			"DEFAULT\BoardThat.ogg"
		};
		CancelManualFire[]=
		{
			"DEFAULT\CancelManualFire.ogg"
		};
		CancelTarget[]=
		{
			"DEFAULT\CancelTarget.ogg"
		};
		CannotFire[]=
		{
			"DEFAULT\CannotFire.ogg"
		};
		CantGetThereE[]=
		{
			"DEFAULT\CantGetThereE.ogg"
		};
		CantMakeItThere[]=
		{
			"DEFAULT\CantMakeItThere.ogg"
		};
		CantShoot[]=
		{
			"DEFAULT\CantShoot.ogg"
		};
		CeaseFireE[]=
		{
			"DEFAULT\CeaseFireE.ogg"
		};
		Clear[]=
		{
			"DEFAULT\Clear.ogg"
		};
		CloseThatDoor[]=
		{
			"DEFAULT\CloseThatDoor.ogg"
		};
		Commander[]=
		{
			"DEFAULT\Commander.ogg"
		};
		ContactE[]=
		{
			"DEFAULT\ContactE.ogg"
		};
		Copy[]=
		{
			"DEFAULT\Copy.ogg"
		};
		CopyMyStance[]=
		{
			"DEFAULT\CopyMyStance.ogg"
		};
		CriticalDamageE[]=
		{
			"DEFAULT\CriticalDamageE.ogg"
		};
		DangerE[]=
		{
			"DEFAULT\DangerE.ogg"
		};
		DeactivateCharge[]=
		{
			"DEFAULT\DeactivateCharge.ogg"
		};
		DetonateCharge[]=
		{
			"DEFAULT\DetonateCharge.ogg"
		};
		DisarmThatMine[]=
		{
			"DEFAULT\DisarmThatMine.ogg"
		};
		Disembark[]=
		{
			"DEFAULT\Disembark.ogg"
		};
		Disengage[]=
		{
			"DEFAULT\Disengage.ogg"
		};
		Dismount[]=
		{
			"DEFAULT\Dismount.ogg"
		};
		DoYouReadQ[]=
		{
			"DEFAULT\DoYouReadQ.ogg"
		};
		Driver[]=
		{
			"DEFAULT\Driver.ogg"
		};
		DropThat[]=
		{
			"DEFAULT\DropThat.ogg"
		};
		EjectE[]=
		{
			"DEFAULT\EjectE.ogg"
		};
		EnemyFireE[]=
		{
			"DEFAULT\EnemyFireE.ogg"
		};
		EngageAtWill[]=
		{
			"DEFAULT\EngageAtWill.ogg"
		};
		EngageE[]=
		{
			"DEFAULT\EngageE.ogg"
		};
		EngageThat[]=
		{
			"DEFAULT\EngageThat.ogg"
		};
		EngagingE[]=
		{
			"DEFAULT\EngagingE.ogg"
		};
		EngagingTargetE[]=
		{
			"DEFAULT\EngagingTargetE.ogg"
		};
		EyesOnTarget[]=
		{
			"DEFAULT\EyesOnTarget.ogg"
		};
		FallBackE[]=
		{
			"DEFAULT\FallBackE.ogg"
		};
		Fast[]=
		{
			"DEFAULT\Fast.ogg"
		};
		Fire[]=
		{
			"DEFAULT\Fire.ogg"
		};
		FireAtThat[]=
		{
			"DEFAULT\FireAtThat.ogg"
		};
		FireAtWill[]=
		{
			"DEFAULT\FireAtWill.ogg"
		};
		FireOnMyLead[]=
		{
			"DEFAULT\FireOnMyLead.ogg"
		};
		FlankLeft[]=
		{
			"DEFAULT\FlankLeft.ogg"
		};
		FlankRight[]=
		{
			"DEFAULT\FlankRight.ogg"
		};
		Follow[]=
		{
			"DEFAULT\Follow.ogg"
		};
		FormColumn[]=
		{
			"DEFAULT\formation\FormColumn.ogg"
		};
		FormDiamond[]=
		{
			"DEFAULT\formation\FormDiamond.ogg"
		};
		FormEcholonLeft[]=
		{
			"DEFAULT\formation\FormEcholonLeft.ogg"
		};
		FormEcholonRight[]=
		{
			"DEFAULT\formation\FormEcholonRight.ogg"
		};
		FormFile[]=
		{
			"DEFAULT\formation\FormFile.ogg"
		};
		FormLine[]=
		{
			"DEFAULT\formation\FormLine.ogg"
		};
		FormStaggeredColumn[]=
		{
			"DEFAULT\formation\FormStaggeredColumn.ogg"
		};
		FormVee[]=
		{
			"DEFAULT\formation\FormVee.ogg"
		};
		FormWedge[]=
		{
			"DEFAULT\formation\FormWedge.ogg"
		};
		FormOnMeE[]=
		{
			"DEFAULT\FormOnMeE.ogg"
		};
		Forward[]=
		{
			"DEFAULT\Forward.ogg"
		};
		FreeToEngage[]=
		{
			"DEFAULT\FreeToEngage.ogg"
		};
		GetBackE[]=
		{
			"DEFAULT\GetBackE.ogg"
		};
		GetDownE[]=
		{
			"DEFAULT\GetDownE.ogg"
		};
		GetInThat[]=
		{
			"DEFAULT\GetInThat.ogg"
		};
		GetSupportAt[]=
		{
			"DEFAULT\GetSupportAt.ogg"
		};
		GiveEmHellE[]=
		{
			"DEFAULT\GiveEmHellE.ogg"
		};
		GoGoGoE[]=
		{
			"DEFAULT\GoGoGoE.ogg"
		};
		GoProne[]=
		{
			"DEFAULT\GoProne.ogg"
		};
		Gunner[]=
		{
			"DEFAULT\Gunner.ogg"
		};
		Halt[]=
		{
			"DEFAULT\Halt.ogg"
		};
		HealThat[]=
		{
			"DEFAULT\HealThat.ogg"
		};
		HealYourself[]=
		{
			"DEFAULT\HealYourself.ogg"
		};
		HesDownE[]=
		{
			"DEFAULT\HesDownE.ogg"
		};
		HitTheDirt[]=
		{
			"DEFAULT\HitTheDirt.ogg"
		};
		HoldFire[]=
		{
			"DEFAULT\HoldFire.ogg"
		};
		HostileDownE[]=
		{
			"DEFAULT\HostileDownE.ogg"
		};
		HostilesE[]=
		{
			"DEFAULT\HostilesE.ogg"
		};
		CheckYourFireE[]=
		{
			"DEFAULT\CheckYourFireE.ogg"
		};
		ImAtGrid[]=
		{
			"DEFAULT\ImAtGrid.ogg"
		};
		Grid[]=
		{
			"DEFAULT\Grid.ogg"
		};
		ImOnHim[]=
		{
			"DEFAULT\ImOnHim.ogg"
		};
		ImTheNewActual[]=
		{
			"DEFAULT\ImTheNewActual.ogg"
		};
		Is[]=
		{
			"DEFAULT\Is.ogg"
		};
		IsDownE[]=
		{
			"DEFAULT\IsDownE.ogg"
		};
		IsDead[]=
		{
			"DEFAULT\IsDead.ogg"
		};
		IsHistory[]=
		{
			"DEFAULT\IsHistory.ogg"
		};
		Injured[]=
		{
			"DEFAULT\Injured.ogg"
		};
		IveGotHimE[]=
		{
			"DEFAULT\IveGotHimE.ogg"
		};
		Left[]=
		{
			"DEFAULT\Left.ogg"
		};
		LightEmUpE[]=
		{
			"DEFAULT\LightEmUpE.ogg"
		};
		LightThatFire[]=
		{
			"DEFAULT\LightThatFire.ogg"
		};
		MaintainFormation[]=
		{
			"DEFAULT\MaintainFormation.ogg"
		};
		ManualFire[]=
		{
			"DEFAULT\ManualFire.ogg"
		};
		MedicE[]=
		{
			"DEFAULT\MedicE.ogg"
		};
		NeedHelpE[]=
		{
			"DEFAULT\NeedHelpE.ogg"
		};
		Negative[]=
		{
			"DEFAULT\Negative.ogg"
		};
		NoCanDo[]=
		{
			"DEFAULT\NoCanDo.ogg"
		};
		NoMoreAmmoE[]=
		{
			"DEFAULT\NoMoreAmmoE.ogg"
		};
		NoTarget[]=
		{
			"DEFAULT\NoTarget.ogg"
		};
		ObserveThat[]=
		{
			"DEFAULT\ObserveThat.ogg"
		};
		ObserveThatPosition[]=
		{
			"DEFAULT\ObserveThatPosition.ogg"
		};
		OnTheWay[]=
		{
			"DEFAULT\OnTheWay.ogg"
		};
		OpenThatDoor[]=
		{
			"DEFAULT\OpenThatDoor.ogg"
		};
		OpenUpE[]=
		{
			"DEFAULT\OpenUpE.ogg"
		};
		OscarMike[]=
		{
			"DEFAULT\OscarMike.ogg"
		};
		OutOfAmmoE[]=
		{
			"DEFAULT\OutOfAmmoE.ogg"
		};
		OutOfFuelE[]=
		{
			"DEFAULT\OutOfFuelE.ogg"
		};
		Over[]=
		{
			"DEFAULT\Over.ogg"
		};
		Pilot[]=
		{
			"DEFAULT\Pilot.ogg"
		};
		PutOutThatFire[]=
		{
			"DEFAULT\PutOutThatFire.ogg"
		};
		PlaceAMine[]=
		{
			"DEFAULT\PlaceAMine.ogg"
		};
		Ready[]=
		{
			"DEFAULT\Ready.ogg"
		};
		ReadyToFire[]=
		{
			"DEFAULT\ReadyToFire.ogg"
		};
		RegroupE[]=
		{
			"DEFAULT\RegroupE.ogg"
		};
		RepeatLast[]=
		{
			"DEFAULT\RepeatLast.ogg"
		};
		ReportPositionE[]=
		{
			"DEFAULT\ReportPositionE.ogg"
		};
		Position[]=
		{
			"DEFAULT\Position.ogg"
		};
		ReportStatus[]=
		{
			"DEFAULT\ReportStatus.ogg"
		};
		RequestingSupportTo[]=
		{
			"DEFAULT\RequestingSupportTo.ogg"
		};
		ReturnTheFlag[]=
		{
			"DEFAULT\ReturnTheFlag.ogg"
		};
		ReturnToFormationE[]=
		{
			"DEFAULT\ReturnToFormationE.ogg"
		};
		Reverse[]=
		{
			"DEFAULT\Reverse.ogg"
		};
		Right[]=
		{
			"DEFAULT\Right.ogg"
		};
		Roger[]=
		{
			"DEFAULT\Roger.ogg"
		};
		RunningOutOfAmmo[]=
		{
			"DEFAULT\RunningOutOfAmmo.ogg"
		};
		RunningOutOfFuel[]=
		{
			"DEFAULT\RunningOutOfFuel.ogg"
		};
		SayAgain[]=
		{
			"DEFAULT\SayAgain.ogg"
		};
		ScanHorizon[]=
		{
			"DEFAULT\ScanHorizon.ogg"
		};
		ScratchOneE[]=
		{
			"DEFAULT\ScratchOneE.ogg"
		};
		SetACharge[]=
		{
			"DEFAULT\SetACharge.ogg"
		};
		SetTheTimer[]=
		{
			"DEFAULT\SetTheTimer.ogg"
		};
		Slow[]=
		{
			"DEFAULT\Slow.ogg"
		};
		SolidCopy[]=
		{
			"DEFAULT\SolidCopy.ogg"
		};
		SomebodyHelpMeE[]=
		{
			"DEFAULT\SomebodyHelpMeE.ogg"
		};
		StandingBy[]=
		{
			"DEFAULT\StandingBy.ogg"
		};
		StandUp[]=
		{
			"DEFAULT\StandUp.ogg"
		};
		StatusRedE[]=
		{
			"DEFAULT\StatusRedE.ogg"
		};
		StayAlert[]=
		{
			"DEFAULT\StayAlert.ogg"
		};
		StayBack[]=
		{
			"DEFAULT\StayBack.ogg"
		};
		StayCrouched[]=
		{
			"DEFAULT\StayCrouched.ogg"
		};
		StayInFormationE[]=
		{
			"DEFAULT\StayInFormationE.ogg"
		};
		Stealth[]=
		{
			"DEFAULT\Stealth.ogg"
		};
		StopE[]=
		{
			"DEFAULT\StopE.ogg"
		};
		Supporting[]=
		{
			"DEFAULT\Supporting.ogg"
		};
		SuppressiveFireE[]=
		{
			"DEFAULT\SuppressiveFireE.ogg"
		};
		TakeCoverE[]=
		{
			"DEFAULT\TakeCoverE.ogg"
		};
		TakeThat[]=
		{
			"DEFAULT\TakeThat.ogg"
		};
		TakeThatMine[]=
		{
			"DEFAULT\TakeThatMine.ogg"
		};
		TakeTheFlag[]=
		{
			"DEFAULT\TakeTheFlag.ogg"
		};
		TakingCommand[]=
		{
			"DEFAULT\TakingCommand.ogg"
		};
		TakingFireE[]=
		{
			"DEFAULT\TakingFireE.ogg"
		};
		TargetAcquired[]=
		{
			"DEFAULT\TargetAcquired.ogg"
		};
		TargetEliminated[]=
		{
			"DEFAULT\TargetEliminated.ogg"
		};
		TargetInSight[]=
		{
			"DEFAULT\TargetInSight.ogg"
		};
		TargetThat[]=
		{
			"DEFAULT\TargetThat.ogg"
		};
		UnderFireE[]=
		{
			"DEFAULT\UnderFireE.ogg"
		};
		Understood[]=
		{
			"DEFAULT\Understood.ogg"
		};
		Waiting[]=
		{
			"DEFAULT\Waiting.ogg"
		};
		WaitForMe[]=
		{
			"DEFAULT\WaitForMe.ogg"
		};
		Watch[]=
		{
			"DEFAULT\Watch.ogg"
		};
		WatchThat[]=
		{
			"DEFAULT\WatchThat.ogg"
		};
		WeaponsFree[]=
		{
			"DEFAULT\WeaponsFree.ogg"
		};
		WeaponsHot[]=
		{
			"DEFAULT\WeaponsHot.ogg"
		};
		WeLost[]=
		{
			"DEFAULT\WeLost.ogg"
		};
		WhereAreYouQ[]=
		{
			"DEFAULT\WhereAreYouQ.ogg"
		};
		WoundedE[]=
		{
			"DEFAULT\WoundedE.ogg"
		};
		AssembleThat[]=
		{
			"DEFAULT\AssembleThat.ogg"
		};
		DisassembleThat[]=
		{
			"DEFAULT\DisassembleThat.ogg"
		};
		FlashlightsOn[]=
		{
			"DEFAULT\FlashlightsOn.ogg"
		};
		FlashlightsOff[]=
		{
			"DEFAULT\FlashlightsOff.ogg"
		};
		LasersOn[]=
		{
			"DEFAULT\LasersOn.ogg"
		};
		LasersOff[]=
		{
			"DEFAULT\LasersOff.ogg"
		};
		FuckE[]=
		{
			"DEFAULT\FuckE.ogg"
		};
		Enemy[]=
		{
			"DEFAULT\side\Enemy.ogg"
		};
		Unknown[]={};
		Friendly[]=
		{
			"DEFAULT\side\Friendly.ogg"
		};
		Neutral[]=
		{
			"DEFAULT\side\Neutral.ogg"
		};
		Of[]=
		{
			"DEFAULT\Of.ogg"
		};
		OfYou[]=
		{
			"DEFAULT\OfYou.ogg"
		};
		OfMe[]=
		{
			"DEFAULT\OfMe.ogg"
		};
		Move[]=
		{
			"DEFAULT\Move.ogg"
		};
		MoveTo[]=
		{
			"DEFAULT\MoveTo.ogg"
		};
		MoveToThat[]=
		{
			"DEFAULT\MoveToThat.ogg"
		};
		GoTo[]=
		{
			"DEFAULT\GoTo.ogg"
		};
		GoToThat[]=
		{
			"DEFAULT\GoToThat.ogg"
		};
		That[]=
		{
			"DEFAULT\That.ogg"
		};
		ToOur[]=
		{
			"DEFAULT\ToOur.ogg"
		};
		ToThe[]=
		{
			"DEFAULT\ToThe.ogg"
		};
		FromMe[]=
		{
			"DEFAULT\FromMe.ogg"
		};
		OfYourPosition[]=
		{
			"DEFAULT\OfYourPosition.ogg"
		};
		In[]=
		{
			"DEFAULT\In.ogg"
		};
		Us[]=
		{
			"DEFAULT\Us.ogg"
		};
		inFrontOf[]=
		{
			"DEFAULT\inFrontOf.ogg"
		};
		rightOf[]=
		{
			"DEFAULT\rightOf.ogg"
		};
		behind[]=
		{
			"DEFAULT\behind.ogg"
		};
		leftOf[]=
		{
			"DEFAULT\leftOf.ogg"
		};
		rightFlank[]=
		{
			"DEFAULT\rightFlank.ogg"
		};
		leftFlank[]=
		{
			"DEFAULT\leftFlank.ogg"
		};
		DangerouslyCloseTo[]=
		{
			"DEFAULT\dangerCloseTo.ogg"
		};
		dangerCloseTo[]=
		{
			"DEFAULT\dangerCloseTo.ogg"
		};
		closeTo[]=
		{
			"DEFAULT\closeTo.ogg"
		};
		notFarFrom[]=
		{
			"DEFAULT\notFarFrom.ogg"
		};
		farFrom[]=
		{
			"DEFAULT\farFrom.ogg"
		};
		Just[]=
		{
			"DEFAULT\Just.ogg"
		};
		Way[]=
		{
			"DEFAULT\Way.ogg"
		};
		damnClose[]=
		{
			"DEFAULT\damnClose.ogg"
		};
		All[]=
		{
			"DEFAULT\numbers\All.ogg"
		};
		Zero[]=
		{
			"DEFAULT\numbers\Zero.ogg"
		};
		One[]=
		{
			"DEFAULT\numbers\One.ogg"
		};
		Two[]=
		{
			"DEFAULT\numbers\Two.ogg"
		};
		Three[]=
		{
			"DEFAULT\numbers\Three.ogg"
		};
		Four[]=
		{
			"DEFAULT\numbers\Four.ogg"
		};
		Five[]=
		{
			"DEFAULT\numbers\Five.ogg"
		};
		Six[]=
		{
			"DEFAULT\numbers\Six.ogg"
		};
		Seven[]=
		{
			"DEFAULT\numbers\Seven.ogg"
		};
		Eight[]=
		{
			"DEFAULT\numbers\Eight.ogg"
		};
		nine[]=
		{
			"DEFAULT\numbers\nine.ogg"
		};
		Ten[]=
		{
			"DEFAULT\numbers\Ten.ogg"
		};
		Eleven[]=
		{
			"DEFAULT\numbers\Eleven.ogg"
		};
		Twelve[]=
		{
			"DEFAULT\numbers\Twelve.ogg"
		};
		Thirteen[]=
		{
			"DEFAULT\numbers\Thirteen.ogg"
		};
		Fourteen[]=
		{
			"DEFAULT\numbers\Fourteen.ogg"
		};
		Fifteen[]=
		{
			"DEFAULT\numbers\Fifteen.ogg"
		};
		Sixteen[]=
		{
			"DEFAULT\numbers\Sixteen.ogg"
		};
		Seventeen[]=
		{
			"DEFAULT\numbers\Seventeen.ogg"
		};
		Eighteen[]=
		{
			"DEFAULT\numbers\Eighteen.ogg"
		};
		Nineteen[]=
		{
			"DEFAULT\numbers\Nineteen.ogg"
		};
		Twenty[]=
		{
			"DEFAULT\numbers\Twenty.ogg"
		};
		Thirty[]=
		{
			"DEFAULT\numbers\Thirty.ogg"
		};
		Forty[]=
		{
			"DEFAULT\numbers\Forty.ogg"
		};
		Fifty[]=
		{
			"DEFAULT\numbers\Fifty.ogg"
		};
		Sixty[]=
		{
			"DEFAULT\numbers\Sixty.ogg"
		};
		Seventy[]=
		{
			"DEFAULT\numbers\Seventy.ogg"
		};
		Eighty[]=
		{
			"DEFAULT\numbers\Eighty.ogg"
		};
		Ninety[]=
		{
			"DEFAULT\numbers\Ninety.ogg"
		};
		Hundred[]=
		{
			"DEFAULT\numbers\Hundred.ogg"
		};
		zero2[]=
		{
			"DEFAULT\mapcoords\zero2.ogg"
		};
		one2[]=
		{
			"DEFAULT\mapcoords\one2.ogg"
		};
		two2[]=
		{
			"DEFAULT\mapcoords\two2.ogg"
		};
		three2[]=
		{
			"DEFAULT\mapcoords\three2.ogg"
		};
		four2[]=
		{
			"DEFAULT\mapcoords\four2.ogg"
		};
		five2[]=
		{
			"DEFAULT\mapcoords\five2.ogg"
		};
		six2[]=
		{
			"DEFAULT\mapcoords\six2.ogg"
		};
		seven2[]=
		{
			"DEFAULT\mapcoords\seven2.ogg"
		};
		eight2[]=
		{
			"DEFAULT\mapcoords\eight2.ogg"
		};
		nine2[]=
		{
			"DEFAULT\mapcoords\nine2.ogg"
		};
		Alpha[]=
		{
			"DEFAULT\alphabet\Alpha.ogg"
		};
		Bravo[]=
		{
			"DEFAULT\alphabet\Bravo.ogg"
		};
		Charlie[]=
		{
			"DEFAULT\alphabet\Charlie.ogg"
		};
		Delta[]=
		{
			"DEFAULT\alphabet\Delta.ogg"
		};
		Echo[]=
		{
			"DEFAULT\alphabet\Echo.ogg"
		};
		Fotxtrot[]=
		{
			"DEFAULT\alphabet\Fotxtrot.ogg"
		};
		Golf[]=
		{
			"DEFAULT\alphabet\Golf.ogg"
		};
		Hotel[]=
		{
			"DEFAULT\alphabet\Hotel.ogg"
		};
		India[]=
		{
			"DEFAULT\alphabet\India.ogg"
		};
		Juliet[]=
		{
			"DEFAULT\alphabet\Juliet.ogg"
		};
		Kilo[]=
		{
			"DEFAULT\alphabet\Kilo.ogg"
		};
		Lima[]=
		{
			"DEFAULT\alphabet\Lima.ogg"
		};
		Mike[]=
		{
			"DEFAULT\alphabet\Mike.ogg"
		};
		November[]=
		{
			"DEFAULT\alphabet\November.ogg"
		};
		Oscar[]=
		{
			"DEFAULT\alphabet\Oscar.ogg"
		};
		Papa[]=
		{
			"DEFAULT\alphabet\Papa.ogg"
		};
		Quebec[]=
		{
			"DEFAULT\alphabet\Quebec.ogg"
		};
		Romeo[]=
		{
			"DEFAULT\alphabet\Romeo.ogg"
		};
		Sierra[]=
		{
			"DEFAULT\alphabet\Sierra.ogg"
		};
		Tango[]=
		{
			"DEFAULT\alphabet\Tango.ogg"
		};
		Uniform[]=
		{
			"DEFAULT\alphabet\Uniform.ogg"
		};
		Victor[]=
		{
			"DEFAULT\alphabet\Victor.ogg"
		};
		Whiskey[]=
		{
			"DEFAULT\alphabet\Whiskey.ogg"
		};
		Xray[]=
		{
			"DEFAULT\alphabet\Xray.ogg"
		};
		Yankee[]=
		{
			"DEFAULT\alphabet\Yankee.ogg"
		};
		Zulu[]=
		{
			"DEFAULT\alphabet\Zulu.ogg"
		};
		Angel[]=
		{
			"DEFAULT\alphabet\Angel.ogg"
		};
		Bride[]=
		{
			"DEFAULT\alphabet\Bride.ogg"
		};
		Chocolate[]=
		{
			"DEFAULT\alphabet\Chocolate.ogg"
		};
		Dad[]=
		{
			"DEFAULT\alphabet\Dad.ogg"
		};
		HQ[]=
		{
			"DEFAULT\team\HQ.ogg"
		};
		Frostbite[]=
		{
			"DEFAULT\team\Frostbite.ogg"
		};
		Base[]=
		{
			"DEFAULT\team\Base.ogg"
		};
		Command[]=
		{
			"DEFAULT\team\Command.ogg"
		};
		Battlemage[]=
		{
			"DEFAULT\team\Battlemage.ogg"
		};
		Manhattan[]=
		{
			"DEFAULT\team\Manhattan.ogg"
		};
		Firefly[]=
		{
			"DEFAULT\team\Firefly.ogg"
		};
		Razor[]=
		{
			"DEFAULT\team\Razor.ogg"
		};
		Swordsman[]=
		{
			"DEFAULT\team\Swordsman.ogg"
		};
		Sabre[]=
		{
			"DEFAULT\team\Sabre.ogg"
		};
		StarForce[]=
		{
			"DEFAULT\team\StarForce.ogg"
		};
		Super[]=
		{
			"DEFAULT\team\Super.ogg"
		};
		Hammer[]=
		{
			"DEFAULT\team\Hammer.ogg"
		};
		Reaper[]=
		{
			"DEFAULT\team\Reaper.ogg"
		};
		Fatman[]=
		{
			"DEFAULT\team\Fatman.ogg"
		};
		Fortune[]=
		{
			"DEFAULT\team\Fortune.ogg"
		};
		Anvil[]=
		{
			"DEFAULT\team\Anvil.ogg"
		};
		Revolver[]=
		{
			"DEFAULT\team\Revolver.ogg"
		};
		Winchester[]=
		{
			"DEFAULT\team\Winchester.ogg"
		};
		Arizona[]=
		{
			"DEFAULT\team\Arizona.ogg"
		};
		Warmonger[]=
		{
			"DEFAULT\team\Warmonger.ogg"
		};
		Citizen[]=
		{
			"DEFAULT\team\Citizen.ogg"
		};
		Utah[]=
		{
			"DEFAULT\team\Utah.ogg"
		};
		Demon[]=
		{
			"DEFAULT\team\Demon.ogg"
		};
		Bandit[]=
		{
			"DEFAULT\team\Bandit.ogg"
		};
		Mohican[]=
		{
			"DEFAULT\team\Mohican.ogg"
		};
		Dustoff[]=
		{
			"DEFAULT\team\Dustoff.ogg"
		};
		whiteTeam[]=
		{
			"DEFAULT\team\whiteTeam.ogg"
		};
		redTeam[]=
		{
			"DEFAULT\team\redTeam.ogg"
		};
		greenTeam[]=
		{
			"DEFAULT\team\greenTeam.ogg"
		};
		blueTeam[]=
		{
			"DEFAULT\team\blueTeam.ogg"
		};
		yellowTeam[]=
		{
			"DEFAULT\team\yellowTeam.ogg"
		};
		allGroup[]=
		{
			"DEFAULT\team\allGroup.ogg"
		};
		at1[]=
		{
			"DEFAULT\clockfacing\at1.ogg"
		};
		at2[]=
		{
			"DEFAULT\clockfacing\at2.ogg"
		};
		at3[]=
		{
			"DEFAULT\clockfacing\at3.ogg"
		};
		at4[]=
		{
			"DEFAULT\clockfacing\at4.ogg"
		};
		at5[]=
		{
			"DEFAULT\clockfacing\at5.ogg"
		};
		at6[]=
		{
			"DEFAULT\clockfacing\at6.ogg"
		};
		at7[]=
		{
			"DEFAULT\clockfacing\at7.ogg"
		};
		at8[]=
		{
			"DEFAULT\clockfacing\at8.ogg"
		};
		at9[]=
		{
			"DEFAULT\clockfacing\at9.ogg"
		};
		at10[]=
		{
			"DEFAULT\clockfacing\at10.ogg"
		};
		at11[]=
		{
			"DEFAULT\clockfacing\at11.ogg"
		};
		at12[]=
		{
			"DEFAULT\clockfacing\at12.ogg"
		};
		dist50[]=
		{
			"DEFAULT\distance\dist50.ogg"
		};
		dist100[]=
		{
			"DEFAULT\distance\dist100.ogg"
		};
		dist200[]=
		{
			"DEFAULT\distance\dist200.ogg"
		};
		dist500[]=
		{
			"DEFAULT\distance\dist500.ogg"
		};
		dist1000[]=
		{
			"DEFAULT\distance\dist1000.ogg"
		};
		dist2000[]=
		{
			"DEFAULT\distance\dist2000.ogg"
		};
		distFar[]=
		{
			"DEFAULT\distance\distFar.ogg"
		};
		Meters[]=
		{
			"DEFAULT\distance\Meters.ogg"
		};
		North[]=
		{
			"DEFAULT\direction\North.ogg"
		};
		South[]=
		{
			"DEFAULT\direction\South.ogg"
		};
		West[]=
		{
			"DEFAULT\direction\West.ogg"
		};
		East[]=
		{
			"DEFAULT\direction\East.ogg"
		};
		Northwest[]=
		{
			"DEFAULT\direction\Northwest.ogg"
		};
		Southwest[]=
		{
			"DEFAULT\direction\Southwest.ogg"
		};
		Northeast[]=
		{
			"DEFAULT\direction\Northeast.ogg"
		};
		Southeast[]=
		{
			"DEFAULT\direction\Southeast.ogg"
		};
		NorthOf[]=
		{
			"DEFAULT\direction\NorthOf.ogg"
		};
		SouthOf[]=
		{
			"DEFAULT\direction\SouthOf.ogg"
		};
		WestOf[]=
		{
			"DEFAULT\direction\WestOf.ogg"
		};
		EastOf[]=
		{
			"DEFAULT\direction\EastOf.ogg"
		};
		NorthEastOf[]=
		{
			"DEFAULT\direction\NorthEastOf.ogg"
		};
		SouthEastOf[]=
		{
			"DEFAULT\direction\SouthEastOf.ogg"
		};
		NorthWestOf[]=
		{
			"DEFAULT\direction\NorthWestOf.ogg"
		};
		SouthWestOf[]=
		{
			"DEFAULT\direction\SouthWestOf.ogg"
		};
		front[]=
		{
			"DEFAULT\direction\front.ogg"
		};
		rear[]=
		{
			"DEFAULT\direction\rear.ogg"
		};
		Close[]=
		{
			"DEFAULT\direction\Close.ogg"
		};
		MediumRange[]=
		{
			"DEFAULT\direction\MediumRange.ogg"
		};
		Far[]=
		{
			"DEFAULT\direction\Far.ogg"
		};
		Bombs[]=
		{
			"DEFAULT\weapons\Bombs.ogg"
		};
		cannonHigh[]=
		{
			"DEFAULT\weapons\cannonHigh.ogg"
		};
		cannonLow[]=
		{
			"DEFAULT\weapons\cannonLow.ogg"
		};
		Flares[]=
		{
			"DEFAULT\weapons\Flares.ogg"
		};
		Missiles[]=
		{
			"DEFAULT\weapons\Missiles.ogg"
		};
		Rockets[]=
		{
			"DEFAULT\weapons\Rockets.ogg"
		};
		Smoke[]=
		{
			"DEFAULT\weapons\Smoke.ogg"
		};
		AALauncher[]=
		{
			"DEFAULT\weapons\AALauncher.ogg"
		};
		ATLauncher[]=
		{
			"DEFAULT\weapons\ATLauncher.ogg"
		};
		Backpack[]=
		{
			"DEFAULT\weapons\Backpack.ogg"
		};
		Binocular[]=
		{
			"DEFAULT\weapons\Binocular.ogg"
		};
		Flare[]=
		{
			"DEFAULT\weapons\Flare.ogg"
		};
		Grenade[]=
		{
			"DEFAULT\weapons\Grenade.ogg"
		};
		GrenadeLauncher[]=
		{
			"DEFAULT\weapons\GrenadeLauncher.ogg"
		};
		HandGrenade[]=
		{
			"DEFAULT\weapons\HandGrenade.ogg"
		};
		LaserDesignator[]=
		{
			"DEFAULT\weapons\LaserDesignator.ogg"
		};
		Magazine[]=
		{
			"DEFAULT\weapons\Magazine.ogg"
		};
		MachineGun[]=
		{
			"DEFAULT\weapons\MachineGun.ogg"
		};
		Mine[]=
		{
			"DEFAULT\weapons\Mine.ogg"
		};
		NVG[]=
		{
			"DEFAULT\weapons\NVG.ogg"
		};
		Rifle[]=
		{
			"DEFAULT\weapons\Rifle.ogg"
		};
		Charge[]=
		{
			"DEFAULT\weapons\Charge.ogg"
		};
		Handgun[]=
		{
			"DEFAULT\weapons\Handgun.ogg"
		};
		SmokeShell[]=
		{
			"DEFAULT\weapons\SmokeShell.ogg"
		};
		SniperRifle[]=
		{
			"DEFAULT\weapons\SniperRifle.ogg"
		};
		veh_man[]=
		{
			"DEFAULT\vehicles\man.ogg"
		};
		veh_woman[]=
		{
			"DEFAULT\vehicles\woman.ogg"
		};
		veh_unknown_s[]=
		{
			"DEFAULT\vehicles\unknown.ogg"
		};
		veh_infantry_s[]=
		{
			"DEFAULT\vehicles\soldier.ogg"
		};
		veh_infantry_AT_s[]=
		{
			"DEFAULT\vehicles\launchersoldier.ogg"
		};
		veh_infantry_MG_s[]=
		{
			"DEFAULT\vehicles\mgunner.ogg"
		};
		veh_infantry_Sniper_s[]=
		{
			"DEFAULT\vehicles\sniper.ogg"
		};
		veh_infantry_officer_s[]=
		{
			"DEFAULT\vehicles\officer.ogg"
		};
		veh_infantry_SF_s[]=
		{
			"DEFAULT\vehicles\specialforce.ogg"
		};
		veh_infantry_pilot_s[]=
		{
			"DEFAULT\vehicles\pilot.ogg"
		};
		veh_infantry_civilian_s[]=
		{
			"DEFAULT\vehicles\man.ogg"
		};
		veh_vehicle_s[]=
		{
			"DEFAULT\vehicles\vehicle.ogg"
		};
		veh_vehicle_car_s[]=
		{
			"DEFAULT\vehicles\car.ogg"
		};
		veh_vehicle_armedcar_s[]=
		{
			"DEFAULT\vehicles\armedcar.ogg"
		};
		veh_vehicle_truck_s[]=
		{
			"DEFAULT\vehicles\truck.ogg"
		};
		veh_vehicle_armor_s[]=
		{
			"DEFAULT\vehicles\armedcar.ogg"
		};
		veh_vehicle_APC_s[]=
		{
			"DEFAULT\vehicles\trackedapc.ogg"
		};
		veh_vehicle_tank_s[]=
		{
			"DEFAULT\vehicles\tank.ogg"
		};
		veh_air_s[]=
		{
			"DEFAULT\vehicles\aircraft.ogg"
		};
		veh_air_helicopter_s[]=
		{
			"DEFAULT\vehicles\helicopter.ogg"
		};
		veh_air_gunship_s[]=
		{
			"DEFAULT\vehicles\gunship.ogg"
		};
		veh_air_plane_s[]=
		{
			"DEFAULT\vehicles\airplane.ogg"
		};
		veh_air_parachute_s[]=
		{
			"DEFAULT\vehicles\parachute.ogg"
		};
		veh_ship_s[]=
		{
			"DEFAULT\vehicles\ship.ogg"
		};
		veh_ship_boat_s[]=
		{
			"DEFAULT\vehicles\ship.ogg"
		};
		veh_ship_attackBoat_s[]=
		{
			"DEFAULT\vehicles\ship.ogg"
		};
		veh_ship_submarine_s[]=
		{
			"DEFAULT\vehicles\ship.ogg"
		};
		veh_static_s[]=
		{
			"DEFAULT\vehicles\staticMGWeapon.ogg"
		};
		veh_Static_MG_s[]=
		{
			"DEFAULT\vehicles\staticMGWeapon.ogg"
		};
		veh_static_AA_s[]=
		{
			"DEFAULT\vehicles\staticATLauncher.ogg"
		};
		veh_static_AT_s[]=
		{
			"DEFAULT\vehicles\staticATLauncher.ogg"
		};
		veh_Static_mortar_s[]=
		{
			"DEFAULT\vehicles\staticMortar.ogg"
		};
		veh_static_GL_s[]=
		{
			"DEFAULT\vehicles\staticgrenadelauncher.ogg"
		};
		veh_static_cannon_s[]=
		{
			"DEFAULT\vehicles\staticcannon.ogg"
		};
		veh_infantry_AA_s[]=
		{
			"DEFAULT\vehicles\launchersoldier.ogg"
		};
		veh_infantry_medic_s[]=
		{
			"DEFAULT\vehicles\medic.ogg"
		};
		veh_infantry_diver_s[]=
		{
			"DEFAULT\vehicles\specialforce.ogg"
		};
		veh_vehicle_ugv_s[]=
		{
			"DEFAULT\vehicles\uav.ogg"
		};
		veh_vehicle_mrap_s[]=
		{
			"DEFAULT\vehicles\armedcar.ogg"
		};
		veh_air_uav_s[]=
		{
			"DEFAULT\vehicles\uav.ogg"
		};
		veh_unknown_p[]=
		{
			"DEFAULT\vehicles\unknown.ogg"
		};
		veh_infantry_p[]=
		{
			"DEFAULT\vehicles\soldiers.ogg"
		};
		veh_infantry_AT_p[]=
		{
			"DEFAULT\vehicles\launchersoldiers.ogg"
		};
		veh_infantry_MG_p[]=
		{
			"DEFAULT\vehicles\mgunners.ogg"
		};
		veh_infantry_Sniper_p[]=
		{
			"DEFAULT\vehicles\snipers.ogg"
		};
		veh_infantry_officer_p[]=
		{
			"DEFAULT\vehicles\officers.ogg"
		};
		veh_infantry_SF_p[]=
		{
			"DEFAULT\vehicles\specialforces.ogg"
		};
		veh_infantry_pilot_p[]=
		{
			"DEFAULT\vehicles\pilots.ogg"
		};
		veh_infantry_civilian_p[]=
		{
			"DEFAULT\vehicles\men.ogg"
		};
		veh_vehicle_p[]=
		{
			"DEFAULT\vehicles\vehicles.ogg"
		};
		veh_vehicle_car_p[]=
		{
			"DEFAULT\vehicles\cars.ogg"
		};
		veh_vehicle_armedcar_p[]=
		{
			"DEFAULT\vehicles\armedcars.ogg"
		};
		veh_vehicle_truck_p[]=
		{
			"DEFAULT\vehicles\trucks.ogg"
		};
		veh_vehicle_armor_p[]=
		{
			"DEFAULT\vehicles\armedcars.ogg"
		};
		veh_vehicle_APC_p[]=
		{
			"DEFAULT\vehicles\trackedapc.ogg"
		};
		veh_vehicle_tank_p[]=
		{
			"DEFAULT\vehicles\tanks.ogg"
		};
		veh_air_p[]=
		{
			"DEFAULT\vehicles\aircrafts.ogg"
		};
		veh_air_helicopter_p[]=
		{
			"DEFAULT\vehicles\helicopters.ogg"
		};
		veh_air_gunship_p[]=
		{
			"DEFAULT\vehicles\gunships.ogg"
		};
		veh_air_plane_p[]=
		{
			"DEFAULT\vehicles\airplanes.ogg"
		};
		veh_air_parachute_p[]=
		{
			"DEFAULT\vehicles\parachutes.ogg"
		};
		veh_ship_p[]=
		{
			"DEFAULT\vehicles\ships.ogg"
		};
		veh_ship_boat_p[]=
		{
			"DEFAULT\vehicles\ships.ogg"
		};
		veh_ship_attackBoat_p[]=
		{
			"DEFAULT\vehicles\ships.ogg"
		};
		veh_ship_submarine_p[]=
		{
			"DEFAULT\vehicles\ships.ogg"
		};
		veh_static_p[]=
		{
			"DEFAULT\vehicles\staticMGWeapons.ogg"
		};
		veh_Static_MG_p[]=
		{
			"DEFAULT\vehicles\staticMGWeapons.ogg"
		};
		veh_static_AA_p[]=
		{
			"DEFAULT\vehicles\staticATLaunchers.ogg"
		};
		veh_static_AT_p[]=
		{
			"DEFAULT\vehicles\staticATLaunchers.ogg"
		};
		veh_Static_mortar_p[]=
		{
			"DEFAULT\vehicles\staticMortars.ogg"
		};
		veh_static_GL_p[]=
		{
			"DEFAULT\vehicles\staticgrenadelaunchers.ogg"
		};
		veh_static_cannon_p[]=
		{
			"DEFAULT\vehicles\staticcannons.ogg"
		};
		veh_infantry_AA_p[]=
		{
			"DEFAULT\vehicles\launchersoldiers.ogg"
		};
		veh_infantry_medic_p[]=
		{
			"DEFAULT\vehicles\medics.ogg"
		};
		veh_infantry_diver_p[]=
		{
			"DEFAULT\vehicles\specialforces.ogg"
		};
		veh_vehicle_ugv_p[]=
		{
			"DEFAULT\vehicles\uavs.ogg"
		};
		veh_vehicle_mrap_p[]=
		{
			"DEFAULT\vehicles\armedcars.ogg"
		};
		veh_air_uav_p[]=
		{
			"DEFAULT\vehicles\uavs.ogg"
		};
		veh_boats[]=
		{
			"DEFAULT\vehicles\boats.ogg"
		};
		obj_ammocrate[]=
		{
			"DEFAULT\objects\ammocrate.ogg"
		};
		obj_building[]=
		{
			"DEFAULT\objects\building.ogg"
		};
		obj_bunker[]=
		{
			"DEFAULT\objects\bunker.ogg"
		};
		obj_bush[]=
		{
			"DEFAULT\objects\bush.ogg"
		};
		obj_cargoContainer[]=
		{
			"DEFAULT\objects\cargoContainer.ogg"
		};
		obj_cross[]=
		{
			"DEFAULT\objects\cross.ogg"
		};
		obj_fence[]=
		{
			"DEFAULT\objects\fence.ogg"
		};
		obj_flag[]=
		{
			"DEFAULT\objects\flag.ogg"
		};
		obj_house[]=
		{
			"DEFAULT\objects\house.ogg"
		};
		obj_church[]=
		{
			"DEFAULT\objects\church.ogg"
		};
		obj_LaserTarget[]=
		{
			"DEFAULT\objects\LaserTarget.ogg"
		};
		obj_object[]=
		{
			"DEFAULT\objects\object.ogg"
		};
		obj_rock[]=
		{
			"DEFAULT\objects\rock.ogg"
		};
		obj_ruin[]=
		{
			"DEFAULT\objects\ruin.ogg"
		};
		obj_structure[]=
		{
			"DEFAULT\objects\structure.ogg"
		};
		obj_target[]=
		{
			"DEFAULT\objects\target.ogg"
		};
		obj_tent[]=
		{
			"DEFAULT\objects\tent.ogg"
		};
		obj_tower[]=
		{
			"DEFAULT\objects\tower.ogg"
		};
		obj_tree[]=
		{
			"DEFAULT\objects\tree.ogg"
		};
		obj_wall[]=
		{
			"DEFAULT\objects\wall.ogg"
		};
		obj_wreck[]=
		{
			"DEFAULT\objects\wreck.ogg"
		};
		Berezino[]=
		{
			"EN\core\maploc\Town.ogg"
		};
		Berezino2[]=
		{
			"EN\core\maploc\Town.ogg"
		};
		Kamenyy[]=
		{
			"DEFAULT\core\maploc\Kamenyy.ogg"
		};
		Strelka[]=
		{
			"DEFAULT\core\maploc\Strelka.ogg"
		};
		Elektrozavodsk[]=
		{
			"DEFAULT\core\maploc\Elektrozavodsk.ogg"
		};
		Gorka[]=
		{
			"DEFAULT\core\maploc\Gorka.ogg"
		};
		Chernogorsk[]=
		{
			"DEFAULT\core\maploc\Chernogorsk.ogg"
		};
		Krasnostav[]=
		{
			"DEFAULT\core\maploc\Krasnostav.ogg"
		};
		Solnichniy[]=
		{
			"DEFAULT\core\maploc\Solnichniy.ogg"
		};
		StarySobor[]=
		{
			"DEFAULT\core\maploc\StarySobor.ogg"
		};
		Vybor[]=
		{
			"DEFAULT\core\maploc\Vybor.ogg"
		};
		Zelenogorsk[]=
		{
			"DEFAULT\core\maploc\Zelenogorsk.ogg"
		};
		Pusta[]=
		{
			"DEFAULT\core\maploc\Pusta.ogg"
		};
		Vyshnoe[]=
		{
			"DEFAULT\core\maploc\Vyshnoe.ogg"
		};
		Balota[]=
		{
			"DEFAULT\core\maploc\Balota.ogg"
		};
		Bor[]=
		{
			"DEFAULT\core\maploc\Bor.ogg"
		};
		Dolina[]=
		{
			"DEFAULT\core\maploc\Dolina.ogg"
		};
		Drozhino[]=
		{
			"DEFAULT\core\maploc\Drozhino.ogg"
		};
		Dubrovka[]=
		{
			"DEFAULT\core\maploc\Dubrovka.ogg"
		};
		Grishino[]=
		{
			"DEFAULT\core\maploc\Grishino.ogg"
		};
		Guglovo[]=
		{
			"DEFAULT\core\maploc\Guglovo.ogg"
		};
		Gvozdno[]=
		{
			"DEFAULT\core\maploc\Gvozdno.ogg"
		};
		Kabanino[]=
		{
			"DEFAULT\core\maploc\Kabanino.ogg"
		};
		Kamenka[]=
		{
			"DEFAULT\core\maploc\Kamenka.ogg"
		};
		Kamyshovo[]=
		{
			"DEFAULT\core\maploc\Kamyshovo.ogg"
		};
		Khelm[]=
		{
			"DEFAULT\core\maploc\Khelm.ogg"
		};
		Komarovo[]=
		{
			"DEFAULT\core\maploc\Komarovo.ogg"
		};
		Kozlovka[]=
		{
			"DEFAULT\core\maploc\Kozlovka.ogg"
		};
		Lopatino[]=
		{
			"DEFAULT\core\maploc\Lopatino.ogg"
		};
		Mogilevka[]=
		{
			"DEFAULT\core\maploc\Mogilevka.ogg"
		};
		Msta[]=
		{
			"DEFAULT\core\maploc\Msta.ogg"
		};
		Myshkino[]=
		{
			"DEFAULT\core\maploc\Myshkino.ogg"
		};
		Nadezhdino[]=
		{
			"DEFAULT\core\maploc\Nadezhdino.ogg"
		};
		Nizhnoye[]=
		{
			"DEFAULT\core\maploc\Nizhnoye.ogg"
		};
		NovySobor[]=
		{
			"DEFAULT\core\maploc\NovySobor.ogg"
		};
		Olsha[]=
		{
			"DEFAULT\core\maploc\Olsha.ogg"
		};
		Orlovets[]=
		{
			"DEFAULT\core\maploc\Orlovets.ogg"
		};
		Pavlovo[]=
		{
			"DEFAULT\core\maploc\Pavlovo.ogg"
		};
		Petrovka[]=
		{
			"DEFAULT\core\maploc\Petrovka.ogg"
		};
		Pogorevka[]=
		{
			"DEFAULT\core\maploc\Pogorevka.ogg"
		};
		Polana[]=
		{
			"DEFAULT\core\maploc\Polana.ogg"
		};
		Prigorodki[]=
		{
			"DEFAULT\core\maploc\Prigorodki.ogg"
		};
		Pulkovo[]=
		{
			"DEFAULT\core\maploc\Pulkovo.ogg"
		};
		Pustoshka[]=
		{
			"DEFAULT\core\maploc\Pustoshka.ogg"
		};
		Rogovo[]=
		{
			"DEFAULT\core\maploc\Rogovo.ogg"
		};
		Shakhovka[]=
		{
			"DEFAULT\core\maploc\Shakhovka.ogg"
		};
		Sosnovka[]=
		{
			"DEFAULT\core\maploc\Sosnovka.ogg"
		};
		Staroye[]=
		{
			"DEFAULT\core\maploc\Staroye.ogg"
		};
		Tulga[]=
		{
			"DEFAULT\core\maploc\Tulga.ogg"
		};
		Town[]=
		{
			"DEFAULT\core\maploc\Town.ogg"
		};
		Village[]=
		{
			"DEFAULT\core\maploc\Village.ogg"
		};
		Airfield[]=
		{
			"DEFAULT\core\maploc\Airfield.ogg"
		};
		Factory[]=
		{
			"DEFAULT\core\maploc\Factory.ogg"
		};
		Crossroad[]=
		{
			"DEFAULT\core\maploc\Crossroad.ogg"
		};
		Oilfield[]=
		{
			"DEFAULT\core\maploc\Oilfield.ogg"
		};
		mineplace[]=
		{
			"DEFAULT\core\maploc\mineplace.ogg"
		};
		Harbor[]=
		{
			"DEFAULT\core\maploc\Harbor.ogg"
		};
		Zargabad[]=
		{
			"DEFAULT\core\maploc\Zargabad.ogg"
		};
		Azizajt[]=
		{
			"DEFAULT\core\maploc\Azizajt.ogg"
		};
		Nango[]=
		{
			"DEFAULT\core\maploc\Nango.ogg"
		};
		Yarum[]=
		{
			"DEFAULT\core\maploc\Yarum.ogg"
		};
		HazarBagh[]=
		{
			"DEFAULT\core\maploc\HazarBagh.ogg"
		};
		Anar[]=
		{
			"DEFAULT\core\maploc\Anar.ogg"
		};
		Kakaru[]=
		{
			"DEFAULT\core\maploc\Kakaru.ogg"
		};
		Bastam[]=
		{
			"DEFAULT\core\maploc\Bastam.ogg"
		};
		Falar[]=
		{
			"DEFAULT\core\maploc\Falar.ogg"
		};
		FeeruzAbad[]=
		{
			"DEFAULT\core\maploc\FeeruzAbad.ogg"
		};
		Garmarud[]=
		{
			"DEFAULT\core\maploc\Garmarud.ogg"
		};
		Garmsar[]=
		{
			"DEFAULT\core\maploc\Garmsar.ogg"
		};
		Gospandi[]=
		{
			"DEFAULT\core\maploc\Gospandi.ogg"
		};
		ChakChak[]=
		{
			"DEFAULT\core\maploc\ChakChak.ogg"
		};
		Chaman[]=
		{
			"DEFAULT\core\maploc\Chaman.ogg"
		};
		LoyManara[]=
		{
			"DEFAULT\core\maploc\LoyManara.ogg"
		};
		Nagara[]=
		{
			"DEFAULT\core\maploc\Nagara.ogg"
		};
		Nur[]=
		{
			"DEFAULT\core\maploc\Nur.ogg"
		};
		Rasman[]=
		{
			"DEFAULT\core\maploc\Rasman.ogg"
		};
		Sakhee[]=
		{
			"DEFAULT\core\maploc\Sakhee.ogg"
		};
		Zavarak[]=
		{
			"DEFAULT\core\maploc\Zavarak.ogg"
		};
		Karachinar[]=
		{
			"DEFAULT\core\maploc\Karachinar.ogg"
		};
		Shamali[]=
		{
			"DEFAULT\core\maploc\Shamali.ogg"
		};
		Mulladoost[]=
		{
			"DEFAULT\core\maploc\Mulladoost.ogg"
		};
		Khushab[]=
		{
			"DEFAULT\core\maploc\Khushab.ogg"
		};
		Shukurkalay[]=
		{
			"DEFAULT\core\maploc\Shukurkalay.ogg"
		};
		Jilavur[]=
		{
			"DEFAULT\core\maploc\Jilavur.ogg"
		};
		Landay[]=
		{
			"DEFAULT\core\maploc\Landay.ogg"
		};
		Sultansafee[]=
		{
			"DEFAULT\core\maploc\Sultansafee.ogg"
		};
		Jaza[]=
		{
			"DEFAULT\core\maploc\Jaza.ogg"
		};
		Huzrutimam[]=
		{
			"DEFAULT\core\maploc\Huzrutimam.ogg"
		};
		Chardarakht[]=
		{
			"DEFAULT\core\maploc\Chardarakht.ogg"
		};
		Timurkalay[]=
		{
			"DEFAULT\core\maploc\Timurkalay.ogg"
		};
		Imarat[]=
		{
			"DEFAULT\core\maploc\Imarat.ogg"
		};
		Ravanay[]=
		{
			"DEFAULT\core\maploc\Ravanay.ogg"
		};
		CS_SuppressiveFireE[]=
		{
			"DEFAULT\combat\CS_SuppressiveFireE.ogg"
		};
		CS_HangOnIllSuppressEmE[]=
		{
			"DEFAULT\combat\CS_HangOnIllSuppressEmE.ogg"
		};
		CS_SuppressingE[]=
		{
			"DEFAULT\combat\CS_SuppressingE.ogg"
		};
		CS_CoveringFireE[]=
		{
			"DEFAULT\combat\CS_CoveringFireE.ogg"
		};
		CS_GoImCoveringE[]=
		{
			"DEFAULT\combat\CS_GoImCoveringE.ogg"
		};
		CS_GoIllCoverE[]=
		{
			"DEFAULT\combat\CS_GoIllCoverE.ogg"
		};
		CS_CoveringFire2E[]=
		{
			"DEFAULT\combat\CS_CoveringFire2E.ogg"
		};
		CS_CoveringGoE[]=
		{
			"DEFAULT\combat\CS_CoveringGoE.ogg"
		};
		CS_MoveOutE[]=
		{
			"DEFAULT\combat\CS_MoveOutE.ogg"
		};
		CS_GoE[]=
		{
			"DEFAULT\combat\CS_GoE.ogg"
		};
		CS_MoveE[]=
		{
			"DEFAULT\combat\CS_MoveE.ogg"
		};
		CS_EngagingE[]=
		{
			"DEFAULT\combat\CS_EngagingE.ogg"
		};
		CS_CoverMeE[]=
		{
			"DEFAULT\combat\CS_CoverMeE.ogg"
		};
		CS_OKLetsGo[]=
		{
			"DEFAULT\combat\CS_OKLetsGo.ogg"
		};
		CS_MovingE[]=
		{
			"DEFAULT\combat\CS_MovingE.ogg"
		};
		CS_MovinOutE[]=
		{
			"DEFAULT\combat\CS_MovinOutE.ogg"
		};
		CS_ReloadingE[]=
		{
			"DEFAULT\combat\CS_ReloadingE.ogg"
		};
		CS_GottaReloadE[]=
		{
			"DEFAULT\combat\CS_GottaReloadE.ogg"
		};
		CS_CoverMeReloadingE[]=
		{
			"DEFAULT\combat\CS_CoverMeReloadingE.ogg"
		};
		CS_ChangingMagsE[]=
		{
			"DEFAULT\combat\CS_ChangingMagsE.ogg"
		};
		CS_FireInTheHoleE[]=
		{
			"DEFAULT\combat\CS_FireInTheHoleE.ogg"
		};
		CS_ThrowingFragE[]=
		{
			"DEFAULT\combat\CS_ThrowingFragE.ogg"
		};
		CS_ThrowingSmokeE[]=
		{
			"DEFAULT\combat\CS_ThrowingSmokeE.ogg"
		};
		CS_SmokeOutE[]=
		{
			"DEFAULT\combat\CS_SmokeOutE.ogg"
		};
		CS_FragOutE[]=
		{
			"DEFAULT\combat\CS_FragOutE.ogg"
		};
		CS_GrenadeE[]=
		{
			"DEFAULT\combat\CS_GrenadeE.ogg"
		};
		CS_WatchTheGrenadeE[]=
		{
			"DEFAULT\combat\CS_WatchTheGrenadeE.ogg"
		};
		CS_IncomingFragE[]=
		{
			"DEFAULT\combat\CS_IncomingFragE.ogg"
		};
		CS_ContactE[]=
		{
			"DEFAULT\combat\CS_ContactE.ogg"
		};
		CS_HostilesE[]=
		{
			"DEFAULT\combat\CS_HostilesE.ogg"
		};
		CS_EnemyE[]=
		{
			"DEFAULT\combat\CS_EnemyE.ogg"
		};
		CS_DidYouSeeThatQ[]=
		{
			"DEFAULT\combat\CS_DidYouSeeThatQ.ogg"
		};
		CS_FocusE[]=
		{
			"DEFAULT\combat\CS_FocusE.ogg"
		};
		CS_CheckThatOut[]=
		{
			"DEFAULT\combat\CS_CheckThatOut.ogg"
		};
		CS_MotherfuckerE[]=
		{
			"DEFAULT\combat\CS_MotherfuckerE.ogg"
		};
		CS_SeeThatQE[]=
		{
			"DEFAULT\combat\CS_SeeThatQE.ogg"
		};
		CS_ARGHHE[]=
		{
			"DEFAULT\combat\CS_ARGHHE.ogg"
		};
		CS_OOFE[]=
		{
			"DEFAULT\combat\CS_OOFE.ogg"
		};
		CS_UGHE[]=
		{
			"DEFAULT\combat\CS_UGHE.ogg"
		};
		CS_NoE[]=
		{
			"DEFAULT\combat\CS_NoE.ogg"
		};
		CS_WoohooE[]=
		{
			"DEFAULT\combat\CS_WoohooE.ogg"
		};
		CS_YahooE[]=
		{
			"DEFAULT\combat\CS_YahooE.ogg"
		};
		CS_HeeeyE[]=
		{
			"DEFAULT\combat\CS_HeeeyE.ogg"
		};
		CS_YeehawEGreatE[]=
		{
			"DEFAULT\combat\CS_YeehawEGreatE.ogg"
		};
		HC_ReportingIn[]=
		{
			"DEFAULT\hc\HC_ReportingIn.ogg"
		};
		HC_StandingByForOrders[]=
		{
			"DEFAULT\hc\HC_StandingByForOrders.ogg"
		};
		HC_CombatReady[]=
		{
			"DEFAULT\hc\HC_CombatReady.ogg"
		};
		HC_WaitingForOrders[]=
		{
			"DEFAULT\hc\HC_WaitingForOrders.ogg"
		};
		HC_Advancing[]=
		{
			"DEFAULT\hc\HC_Advancing.ogg"
		};
		HC_Affirmative[]=
		{
			"DEFAULT\hc\HC_Affirmative.ogg"
		};
		HC_MovingToPosition[]=
		{
			"DEFAULT\hc\HC_MovingToPosition.ogg"
		};
		HC_OrderReceived[]=
		{
			"DEFAULT\hc\HC_OrderReceived.ogg"
		};
		HC_EngagingE[]=
		{
			"DEFAULT\hc\HC_EngagingE.ogg"
		};
		HC_AttackingE[]=
		{
			"DEFAULT\hc\HC_AttackingE.ogg"
		};
		SeveralAdv[]=
		{
			"DEFAULT\Core\Several.ogg"
		};
		Several_EN[]=
		{
			"DEFAULT\Core\Several.ogg"
		};
		Single_EN[]=
		{
			"DEFAULT\Core\Single.ogg"
		};
		None_EN[]=
		{
			"DEFAULT\Core\None.ogg"
		};
		Some_EN[]=
		{
			"DEFAULT\Core\Some.ogg"
		};
		ALotOf_EN[]=
		{
			"DEFAULT\Core\ALotOf.ogg"
		};
		Independent_EN[]=
		{
			"DEFAULT\Core\Independent.ogg"
		};
		Civilian_EN[]=
		{
			"DEFAULT\Core\Civilian.ogg"
		};
		OfThem_EN[]=
		{
			"DEFAULT\Core\OfThem.ogg"
		};
		One_EN[]=
		{
			"DEFAULT\Core\One.ogg"
		};
		In_EN[]=
		{
			"DEFAULT\Core\In.ogg"
		};
		Near_EN[]=
		{
			"DEFAULT\Core\Near.ogg"
		};
		NotFar_EN[]=
		{
			"DEFAULT\Core\NotFar.ogg"
		};
		From_EN[]=
		{
			"DEFAULT\Core\From.ogg"
		};
		Around_EN[]=
		{
			"DEFAULT\Core\Around.ogg"
		};
		Here_EN[]=
		{
			"DEFAULT\Core\Here.ogg"
		};
		There_EN[]=
		{
			"DEFAULT\Core\There.ogg"
		};
		Probably_EN[]=
		{
			"DEFAULT\Core\Probably.ogg"
		};
		ToThe_EN[]=
		{
			"DEFAULT\Core\ToThe.ogg"
		};
		IsProbablyToThe_EN[]=
		{
			"DEFAULT\Core\IsProbablyToThe.ogg"
		};
		JustNow_EN[]=
		{
			"DEFAULT\Core\JustNow.ogg"
		};
		AFewMinutesAgo_EN[]=
		{
			"DEFAULT\Core\AFewMinutesAgo.ogg"
		};
		AFewHoursAgo_EN[]=
		{
			"DEFAULT\Core\AFewHoursAgo.ogg"
		};
		Today_EN[]=
		{
			"DEFAULT\Core\Today.ogg"
		};
		Yesterday_EN[]=
		{
			"DEFAULT\Core\Yesterday.ogg"
		};
		SeveralDaysAgo_EN[]=
		{
			"DEFAULT\Core\SeveralDaysAgo.ogg"
		};
		EnglishQ[]=
		{
			"DEFAULT\Core\EnglishQ.ogg"
		};
		RussianQ[]=
		{
			"DEFAULT\Core\RussianQ.ogg"
		};
		CzechQ[]=
		{
			"DEFAULT\Core\CzechQ.ogg"
		};
		TakistaniQ[]=
		{
			"DEFAULT\Core\TakistaniQ.ogg"
		};
		North_EN[]=
		{
			"DEFAULT\Core\North.ogg"
		};
		South_EN[]=
		{
			"DEFAULT\Core\South.ogg"
		};
		West_EN[]=
		{
			"DEFAULT\Core\West.ogg"
		};
		East_EN[]=
		{
			"DEFAULT\Core\East.ogg"
		};
		Northwest_EN[]=
		{
			"DEFAULT\Core\Northwest.ogg"
		};
		Southwest_EN[]=
		{
			"DEFAULT\Core\Southwest.ogg"
		};
		Northeast_EN[]=
		{
			"DEFAULT\Core\Northeast.ogg"
		};
		Southeast_EN[]=
		{
			"DEFAULT\Core\Southeast.ogg"
		};
		DidYouSeeAnythingRecentlyQ_EN[]=
		{
			"DEFAULT\Core\DidYouSeeAnythingRecentlyQ.ogg"
		};
		YesISawSomething_EN[]=
		{
			"DEFAULT\Core\YesISawSomething.ogg"
		};
		NoIDidntSeeAnything_EN[]=
		{
			"DEFAULT\Core\NoIDidntSeeAnything.ogg"
		};
		WhatsTheWeatherForecastQ_EN[]=
		{
			"DEFAULT\Core\WhatsTheWeatherForecastQ.ogg"
		};
		NiceWeatherHuhQ_EN[]=
		{
			"DEFAULT\Core\NiceWeatherHuhQ.ogg"
		};
		NastyWeatherHuhQ_EN[]=
		{
			"DEFAULT\Core\NastyWeatherHuhQ.ogg"
		};
		ShouldBeClearingUpSoon_EN[]=
		{
			"DEFAULT\Core\ShouldBeClearingUpSoon.ogg"
		};
		IReckonWellGetSomeRainSoon_EN[]=
		{
			"DEFAULT\Core\IReckonWellGetSomeRainSoon.ogg"
		};
		TheySayItllStayLikeThisForAWhile_EN[]=
		{
			"DEFAULT\Core\TheySayItllStayLikeThisForAWhile.ogg"
		};
		WhatsTheClosestSettlementQ_EN[]=
		{
			"DEFAULT\Core\WhatsTheClosestSettlementQ.ogg"
		};
		TheClosestOneIs_EN[]=
		{
			"DEFAULT\Core\TheClosestOneIs.ogg"
		};
		ImNotFromAroundHere_EN[]=
		{
			"DEFAULT\Core\ImNotFromAroundHere.ogg"
		};
		NoIdeaIDontLiveHere_EN[]=
		{
			"DEFAULT\Core\NoIdeaIDontLiveHere.ogg"
		};
		YouAlreadyAskedMeThat_EN[]=
		{
			"DEFAULT\Core\YouAlreadyAskedMeThat.ogg"
		};
		AreYouKiddingQ_EN[]=
		{
			"DEFAULT\Core\AreYouKiddingQ.ogg"
		};
		StopAskingMeThat_EN[]=
		{
			"DEFAULT\Core\StopAskingMeThat.ogg"
		};
		SorryIDontUnderstand_EN[]=
		{
			"DEFAULT\Core\SorryIDontUnderstand.ogg"
		};
		UhWhatQ_EN[]=
		{
			"DEFAULT\Core\UhWhatQ.ogg"
		};
		IWillOnlyTellYouMyNameRankAndSerialNumber_EN[]=
		{
			"DEFAULT\Core\IWillOnlyTellYouMyNameRankAndSerialNumber.ogg"
		};
		SirQ_EN[]=
		{
			"DEFAULT\Core\SirQ.ogg"
		};
		PrivateQ_EN[]=
		{
			"DEFAULT\Core\PrivateQ.ogg"
		};
		CorporalQ_EN[]=
		{
			"DEFAULT\Core\CorporalQ.ogg"
		};
		SergeantQ_EN[]=
		{
			"DEFAULT\Core\SergeantQ.ogg"
		};
		LieutenantQ_EN[]=
		{
			"DEFAULT\Core\LieutenantQ.ogg"
		};
		CaptainQ_EN[]=
		{
			"DEFAULT\Core\CaptainQ.ogg"
		};
		MajorQ_EN[]=
		{
			"DEFAULT\Core\MajorQ.ogg"
		};
		ColonelQ_EN[]=
		{
			"DEFAULT\Core\ColonelQ.ogg"
		};
		YesPrivate_EN[]=
		{
			"DEFAULT\Core\YesPrivate.ogg"
		};
		YesCorporal_EN[]=
		{
			"DEFAULT\Core\YesCorporal.ogg"
		};
		YesSergeant_EN[]=
		{
			"DEFAULT\Core\YesSergeant.ogg"
		};
		YesLieutenant_EN[]=
		{
			"DEFAULT\Core\YesLieutenant.ogg"
		};
		YesCaptain_EN[]=
		{
			"DEFAULT\Core\YesCaptain.ogg"
		};
		YesMajor_EN[]=
		{
			"DEFAULT\Core\YesMajor.ogg"
		};
		YesColonel_EN[]=
		{
			"DEFAULT\Core\YesColonel.ogg"
		};
		SoldierQ_EN[]=
		{
			"DEFAULT\Core\SoldierQ.ogg"
		};
		MorninSoldier_EN[]=
		{
			"DEFAULT\Core\MorninSoldier.ogg"
		};
		EveninSoldier_EN[]=
		{
			"DEFAULT\Core\EveninSoldier.ogg"
		};
		GoodDaySir_EN[]=
		{
			"DEFAULT\Core\GoodDaySir.ogg"
		};
		GoodEveningSir_EN[]=
		{
			"DEFAULT\Core\GoodEveningSir.ogg"
		};
		GoodMorningSir_EN[]=
		{
			"DEFAULT\Core\GoodMorningSir.ogg"
		};
		GoodDay_EN[]=
		{
			"DEFAULT\Core\GoodDay.ogg"
		};
		GoodMorning_EN[]=
		{
			"DEFAULT\Core\GoodMorning.ogg"
		};
		GoodEvening_EN[]=
		{
			"DEFAULT\Core\GoodEvening.ogg"
		};
		WhatQ_EN[]=
		{
			"DEFAULT\Core\WhatQ.ogg"
		};
		YesSir_EN[]=
		{
			"DEFAULT\Core\YesSir.ogg"
		};
		HelloSir_EN[]=
		{
			"DEFAULT\Core\HelloSir.ogg"
		};
		Yep_EN[]=
		{
			"DEFAULT\Core\Yep.ogg"
		};
		YeahQ_EN[]=
		{
			"DEFAULT\Core\YeahQ.ogg"
		};
		Hi_EN[]=
		{
			"DEFAULT\Core\Hi.ogg"
		};
		HiThereE_EN[]=
		{
			"DEFAULT\Core\HiThereE.ogg"
		};
		HeyMan_EN[]=
		{
			"DEFAULT\Core\HeyMan.ogg"
		};
		HiDude_EN[]=
		{
			"DEFAULT\Core\HiDude.ogg"
		};
		Hello_EN[]=
		{
			"DEFAULT\Core\Hello.ogg"
		};
		HowsThingsQ_EN[]=
		{
			"DEFAULT\Core\HowsThingsQ.ogg"
		};
		HowAreYouQ_EN[]=
		{
			"DEFAULT\Core\HowAreYouQ.ogg"
		};
		HeyE_EN[]=
		{
			"DEFAULT\Core\HeyE.ogg"
		};
		WhatDoYouWantQ_EN[]=
		{
			"DEFAULT\Core\WhatDoYouWantQ.ogg"
		};
		WhatDoYouNeedQ_EN[]=
		{
			"DEFAULT\Core\WhatDoYouNeedQ.ogg"
		};
		WhatsUpQ_EN[]=
		{
			"DEFAULT\Core\WhatsUpQ.ogg"
		};
		YesQ_EN[]=
		{
			"DEFAULT\Core\YesQ.ogg"
		};
		MaamQ_EN[]=
		{
			"DEFAULT\Core\MaamQ.ogg"
		};
		HaveANiceDay_EN[]=
		{
			"DEFAULT\Core\HaveANiceDay.ogg"
		};
		MorningMaam_EN[]=
		{
			"DEFAULT\Core\MorningMaam.ogg"
		};
		HelloThere_EN[]=
		{
			"DEFAULT\Core\HelloThere.ogg"
		};
		HowYouDoinQ_EN[]=
		{
			"DEFAULT\Core\HowYouDoinQ.ogg"
		};
		DontTouchMeE_EN[]=
		{
			"DEFAULT\Core\DontTouchMeE.ogg"
		};
		NotNowE_EN[]=
		{
			"DEFAULT\Core\NotNowE.ogg"
		};
		Later_EN[]=
		{
			"DEFAULT\Core\Later.ogg"
		};
		NoTimeE_EN[]=
		{
			"DEFAULT\Core\NoTimeE.ogg"
		};
		HushE_EN[]=
		{
			"DEFAULT\Core\HushE.ogg"
		};
		SsshhE_EN[]=
		{
			"DEFAULT\Core\SsshhE.ogg"
		};
		CantYouSeeImBusyQ_EN[]=
		{
			"DEFAULT\Core\CantYouSeeImBusyQ.ogg"
		};
		BitOccupiedAtTheMomentDude_EN[]=
		{
			"DEFAULT\Core\BitOccupiedAtTheMomentDude.ogg"
		};
		ImBusyE_EN[]=
		{
			"DEFAULT\Core\ImBusyE.ogg"
		};
		PissOffE_EN[]=
		{
			"DEFAULT\Core\PissOffE.ogg"
		};
		NiceToSeeYou_EN[]=
		{
			"DEFAULT\Core\NiceToSeeYou.ogg"
		};
		GoodToSeeYou_EN[]=
		{
			"DEFAULT\Core\GoodToSeeYou.ogg"
		};
		HeyGladYoureHere_EN[]=
		{
			"DEFAULT\Core\HeyGladYoureHere.ogg"
		};
		CanIHelpYouQ_EN[]=
		{
			"DEFAULT\Core\CanIHelpYouQ.ogg"
		};
		GetLostE_EN[]=
		{
			"DEFAULT\Core\GetLostE.ogg"
		};
		LeaveMeAloneE_EN[]=
		{
			"DEFAULT\Core\LeaveMeAloneE.ogg"
		};
		LeaveUsAloneE_EN[]=
		{
			"DEFAULT\Core\LeaveUsAloneE.ogg"
		};
		FuckingPig_EN[]=
		{
			"DEFAULT\Core\FuckingPig.ogg"
		};
		SonOfABitchE_EN[]=
		{
			"DEFAULT\Core\SonOfABitchE.ogg"
		};
		DamnYouE_EN[]=
		{
			"DEFAULT\Core\DamnYouE.ogg"
		};
		CanIAskYouSomethingQ_EN[]=
		{
			"DEFAULT\Core\CanIAskYouSomethingQ.ogg"
		};
		PleaseCanYouHelpQ_EN[]=
		{
			"DEFAULT\Core\PleaseCanYouHelpQ.ogg"
		};
		Speak_EN[]=
		{
			"DEFAULT\Core\Speak.ogg"
		};
		HelpUs_EN[]=
		{
			"DEFAULT\Core\HelpUs.ogg"
		};
		IWontSayAnotherWord_EN[]=
		{
			"DEFAULT\Core\IWontSayAnotherWord.ogg"
		};
		MindYourOwnBusiness_EN[]=
		{
			"DEFAULT\Core\MindYourOwnBusiness.ogg"
		};
		GoBotherSomeoneElse_EN[]=
		{
			"DEFAULT\Core\GoBotherSomeoneElse.ogg"
		};
		CopyThat[]=
		{
			"DEFAULT\SOM\CopyThat.ogg"
		};
		ObjectiveFailed[]=
		{
			"DEFAULT\SOM\ObjectiveFailed.ogg"
		};
		DoYouCopyQ[]=
		{
			"DEFAULT\SOM\DoYouCopyQ.ogg"
		};
		RequestingFireSupportAtGrid[]=
		{
			"DEFAULT\SOM\RequestingFireSupportAtGrid.ogg"
		};
		FiringAtTargetLocation[]=
		{
			"DEFAULT\SOM\FiringAtTargetLocation.ogg"
		};
		ArtilleryNotAvailableRightNow[]=
		{
			"DEFAULT\SOM\ArtilleryNotAvailableRightNow.ogg"
		};
		RequestingContinuousIlluminationAtGrid[]=
		{
			"DEFAULT\SOM\RequestingContinuousIlluminationAtGrid.ogg"
		};
		IlluminatingTargetLocation[]=
		{
			"DEFAULT\SOM\IlluminatingTargetLocation.ogg"
		};
		NoFireMissionAvailableAtThisTime[]=
		{
			"DEFAULT\SOM\NoFireMissionAvailableAtThisTime.ogg"
		};
		ThisIs[]=
		{
			"DEFAULT\SOM\ThisIs.ogg"
		};
		RequestingReinforcementsToOurPositionGrid[]=
		{
			"DEFAULT\SOM\RequestingReinforcementsToOurPositionGrid.ogg"
		};
		WeCanFlyInReinforcmentsAsNeeded[]=
		{
			"DEFAULT\SOM\WeCanFlyInReinforcmentsAsNeeded.ogg"
		};
		YouWillHaveToManageYourself[]=
		{
			"DEFAULT\SOM\YouWillHaveToManageYourself.ogg"
		};
		RequestingSupplyDropAtGrid[]=
		{
			"DEFAULT\SOM\RequestingSupplyDropAtGrid.ogg"
		};
		SupportOnWayStandBy[]=
		{
			"DEFAULT\SOM\SupportOnWayStandBy.ogg"
		};
		RequestingCloseAirSupportAtGrid[]=
		{
			"DEFAULT\SOM\RequestingCloseAirSupportAtGrid.ogg"
		};
		RogerAircraftOnTheWay[]=
		{
			"DEFAULT\SOM\RogerAircraftOnTheWay.ogg"
		};
		NegativeOnTheCloseAirSupport[]=
		{
			"DEFAULT\SOM\NegativeOnTheCloseAirSupport.ogg"
		};
		IntelShowsAConvoyEnrouteNearYourPositionAreYouFreeToInterceptAndDestroyItQ[]=
		{
			"DEFAULT\SOM\IntelShowsAConvoyEnrouteNearYourPositionAreYouFreeToInterceptAndDestroyItQ.ogg"
		};
		BeAdvisedOtherUnitsWillHandleTheConvoy[]=
		{
			"DEFAULT\SOM\BeAdvisedOtherUnitsWillHandleTheConvoy.ogg"
		};
		UAVConfirmsAllVehiclesDestroyed[]=
		{
			"DEFAULT\SOM\UAVConfirmsAllVehiclesDestroyed.ogg"
		};
		BeAdvisedTargetVehicleHasReachedItsDestination[]=
		{
			"DEFAULT\SOM\BeAdvisedTargetVehicleHasReachedItsDestination.ogg"
		};
		BeAdvisedTargetVehicleIsDisabled[]=
		{
			"DEFAULT\SOM\BeAdvisedTargetVehicleIsDisabled.ogg"
		};
		EnemyPositionInCloseProximityCanYouAssaultTheLocationQ[]=
		{
			"DEFAULT\SOM\EnemyPositionInCloseProximityCanYouAssaultTheLocationQ.ogg"
		};
		BeAdvisedEnemyHasChangedPositionAttackCancelled[]=
		{
			"DEFAULT\SOM\BeAdvisedEnemyHasChangedPositionAttackCancelled.ogg"
		};
		EnemyPositionNeutralized[]=
		{
			"DEFAULT\SOM\EnemyPositionNeutralized.ogg"
		};
		BeAdvisedFriendlyUnitsUnderAttackCanYouAssistQ[]=
		{
			"DEFAULT\SOM\BeAdvisedFriendlyUnitsUnderAttackCanYouAssistQ.ogg"
		};
		EnemyAttackRepelled[]=
		{
			"DEFAULT\SOM\EnemyAttackRepelled.ogg"
		};
		GoodWorkWeSeeNoMoreHostilesInTheArea[]=
		{
			"DEFAULT\SOM\GoodWorkWeSeeNoMoreHostilesInTheArea.ogg"
		};
		ZeroHostilesAttackHalted[]=
		{
			"DEFAULT\SOM\ZeroHostilesAttackHalted.ogg"
		};
		WereUnableToHoldPositionFallingBack[]=
		{
			"DEFAULT\SOM\WereUnableToHoldPositionFallingBack.ogg"
		};
		BeAdvisedAHighValueTargetHasBeenMarkedOnYourMapCanYouInterceptAndDestroyQ[]=
		{
			"DEFAULT\SOM\BeAdvisedAHighValueTargetHasBeenMarkedOnYourMapCanYouInterceptAndDestroyQ.ogg"
		};
		CancellingTheDestroyOrderBadIntelHowCopyQ[]=
		{
			"DEFAULT\SOM\CancellingTheDestroyOrderBadIntelHowCopyQ.ogg"
		};
		HighValueTargetDestroyedOver[]=
		{
			"DEFAULT\SOM\HighValueTargetDestroyedOver.ogg"
		};
		FriendlyTroopsRequestingEscortThroughHostileZoneCanYouOfferSupportAlongTheDesignatedRouteQ[]=
		{
			"DEFAULT\SOM\FriendlyTroopsRequestingEscortThroughHostileZoneCanYouOfferSupportAlongTheDesignatedRouteQ.ogg"
		};
		WeHaveAssignedAnotherUnitToThisEscortOp[]=
		{
			"DEFAULT\SOM\WeHaveAssignedAnotherUnitToThisEscortOp.ogg"
		};
		TargetInSightCommencingEscort[]=
		{
			"DEFAULT\SOM\TargetInSightCommencingEscort.ogg"
		};
		BeAdvisedEnemyPatrolsInCloseProximityHowCopyQ[]=
		{
			"DEFAULT\SOM\BeAdvisedEnemyPatrolsInCloseProximityHowCopyQ.ogg"
		};
		SolidCopyThanksForTheIntel[]=
		{
			"DEFAULT\SOM\SolidCopyThanksForTheIntel.ogg"
		};
		DestinationReachedEveryoneAccountedForOver[]=
		{
			"DEFAULT\SOM\DestinationReachedEveryoneAccountedForOver.ogg"
		};
		WereAtTheDestinationReportingLowCasualtiesOver[]=
		{
			"DEFAULT\SOM\WereAtTheDestinationReportingLowCasualtiesOver.ogg"
		};
		BeAdvisedEscortFailedWeLostThemOver[]=
		{
			"DEFAULT\SOM\BeAdvisedEscortFailedWeLostThemOver.ogg"
		};
		BeAdvisedHostilesReportedNearYourLocationCanYouMakeASweepOfTheCheckpointsQ[]=
		{
			"DEFAULT\SOM\BeAdvisedHostilesReportedNearYourLocationCanYouMakeASweepOfTheCheckpointsQ.ogg"
		};
		CancelThePatrolBadIntelOver[]=
		{
			"DEFAULT\SOM\CancelThePatrolBadIntelOver.ogg"
		};
		BeAdvisedImPassingCheckpointOne[]=
		{
			"DEFAULT\SOM\BeAdvisedImPassingCheckpointOne.ogg"
		};
		SitrepPassingCheckpointTwo[]=
		{
			"DEFAULT\SOM\SitrepPassingCheckpointTwo.ogg"
		};
		ReportingPatrolComplete[]=
		{
			"DEFAULT\SOM\ReportingPatrolComplete.ogg"
		};
		ThereAreFriendlyPOWsHeldInCloseProximityCanYouExtractThemQ[]=
		{
			"DEFAULT\SOM\ThereAreFriendlyPOWsHeldInCloseProximityCanYouExtractThemQ.ogg"
		};
		BeAdvisedPOWsWereTransportedToUnknownLocationMissionCanceled[]=
		{
			"DEFAULT\SOM\BeAdvisedPOWsWereTransportedToUnknownLocationMissionCanceled.ogg"
		};
		ExtractionConfirmedPOWsRecovered[]=
		{
			"DEFAULT\SOM\ExtractionConfirmedPOWsRecovered.ogg"
		};
		RequestingTransportForTheRecoveredPOWsOver[]=
		{
			"DEFAULT\SOM\RequestingTransportForTheRecoveredPOWsOver.ogg"
		};
		POWsAreKIAISayAgainAllFriendliesKIAOver[]=
		{
			"DEFAULT\SOM\POWsAreKIAISayAgainAllFriendliesKIAOver.ogg"
		};
		LocalsReportEnemyCachesInYourAOCanYouSearchForTheseCachesQ[]=
		{
			"DEFAULT\SOM\LocalsReportEnemyCachesInYourAOCanYouSearchForTheseCachesQ.ogg"
		};
		BeAdvisedFindingTheCachesIsNoLongerAPriority[]=
		{
			"DEFAULT\SOM\BeAdvisedFindingTheCachesIsNoLongerAPriority.ogg"
		};
		SearchCompleteSeveralStorageCachesUncoveredAndMarkedForCollectionHowCopyQ[]=
		{
			"DEFAULT\SOM\SearchCompleteSeveralStorageCachesUncoveredAndMarkedForCollectionHowCopyQ.ogg"
		};
		SearchCompleteALargeNumberOfCachesWereLocatedAndMarkedForCollectionOver[]=
		{
			"DEFAULT\SOM\SearchCompleteALargeNumberOfCachesWereLocatedAndMarkedForCollectionOver.ogg"
		};
		SearchCompleteNothingToReportZeroCachesFoundOver[]=
		{
			"DEFAULT\SOM\SearchCompleteNothingToReportZeroCachesFoundOver.ogg"
		};
		WeHaveAnAircraftDownInYourVicinityCanYouLocateAndSecureTheCrashSiteQ[]=
		{
			"DEFAULT\SOM\WeHaveAnAircraftDownInYourVicinityCanYouLocateAndSecureTheCrashSiteQ.ogg"
		};
		ReturnToYourPrimarySARTeamsOnRouteToTheCrashSite[]=
		{
			"DEFAULT\SOM\ReturnToYourPrimarySARTeamsOnRouteToTheCrashSite.ogg"
		};
		SurvivorsOnBoardTransportResumingPrimary[]=
		{
			"DEFAULT\SOM\SurvivorsOnBoardTransportResumingPrimary.ogg"
		};
		CrashSiteSecuredNoSurvivors[]=
		{
			"DEFAULT\SOM\CrashSiteSecuredNoSurvivors.ogg"
		};
		BeAdvisedCrashSiteCompromisedOver[]=
		{
			"DEFAULT\SOM\BeAdvisedCrashSiteCompromisedOver.ogg"
		};
		CrashSiteSecuredWeveGotSurvivorsRequestingCASEVACOver[]=
		{
			"DEFAULT\SOM\CrashSiteSecuredWeveGotSurvivorsRequestingCASEVACOver.ogg"
		};
		IGotARequestForTransportHereThePickUpIsCloseByCanYouHandleItQ[]=
		{
			"DEFAULT\SOM\IGotARequestForTransportHereThePickUpIsCloseByCanYouHandleItQ.ogg"
		};
		CancelThatRequestAlternateTransportFoundOver[]=
		{
			"DEFAULT\SOM\CancelThatRequestAlternateTransportFoundOver.ogg"
		};
		WeHavePickUpPointInSightOver[]=
		{
			"DEFAULT\SOM\WeHavePickUpPointInSightOver.ogg"
		};
		RogerThatThoseTroopsAreNeededElsewhereDoubleTimeGentlemen[]=
		{
			"DEFAULT\SOM\RogerThatThoseTroopsAreNeededElsewhereDoubleTimeGentlemen.ogg"
		};
		WeLostOurTransportISayAgainTransportDisabled[]=
		{
			"DEFAULT\SOM\WeLostOurTransportISayAgainTransportDisabled.ogg"
		};
		BeAdvisedAllPassengersAreKIAOver[]=
		{
			"DEFAULT\SOM\BeAdvisedAllPassengersAreKIAOver.ogg"
		};
		WereAtOurDestinationEveryoneAccountedForOver[]=
		{
			"DEFAULT\SOM\WereAtOurDestinationEveryoneAccountedForOver.ogg"
		};
		WereAtOurDestinationTookSomeCasualtiesButTheMajorityIsSafeOver[]=
		{
			"DEFAULT\SOM\WereAtOurDestinationTookSomeCasualtiesButTheMajorityIsSafeOver.ogg"
		};
		RequestingSupplyDrop[]=
		{
			"DEFAULT\SOM\RequestingSupplyDrop.ogg"
		};
		SupplyDropReadyRequestingDropZoneLocationOver[]=
		{
			"DEFAULT\SOM\SupplyDropReadyRequestingDropZoneLocationOver.ogg"
		};
		PositionConfirmedSuppliesInbound[]=
		{
			"DEFAULT\SOM\PositionConfirmedSuppliesInbound.ogg"
		};
		BeAdvisedWeLostContactWithTheTransportVehicleOut[]=
		{
			"DEFAULT\SOM\BeAdvisedWeLostContactWithTheTransportVehicleOut.ogg"
		};
		SuppliesDeliveredOut[]=
		{
			"DEFAULT\SOM\SuppliesDeliveredOut.ogg"
		};
		TheSuppliesHaveBeenDroppedOut[]=
		{
			"DEFAULT\SOM\TheSuppliesHaveBeenDroppedOut.ogg"
		};
		RequestingFastTransportOver[]=
		{
			"DEFAULT\SOM\RequestingFastTransportOver.ogg"
		};
		RogerTransportIsAvailableSendDestinationOver[]=
		{
			"DEFAULT\SOM\RogerTransportIsAvailableSendDestinationOver.ogg"
		};
		NegativeTransportUnavailableEnemyActivityInYourSectorOut[]=
		{
			"DEFAULT\SOM\NegativeTransportUnavailableEnemyActivityInYourSectorOut.ogg"
		};
		NegativeTransportUnavailableOut[]=
		{
			"DEFAULT\SOM\NegativeTransportUnavailableOut.ogg"
		};
		NegativeTransportIsUnavailableAtYourLocationOut[]=
		{
			"DEFAULT\SOM\NegativeTransportIsUnavailableAtYourLocationOut.ogg"
		};
		DestinationReachedThanksForTheAssistanceOut[]=
		{
			"DEFAULT\SOM\DestinationReachedThanksForTheAssistanceOut.ogg"
		};
		RequestingAerialReconOver[]=
		{
			"DEFAULT\SOM\RequestingAerialReconOver.ogg"
		};
		UAVReadyRequestingTargetLocationOver[]=
		{
			"DEFAULT\SOM\UAVReadyRequestingTargetLocationOver.ogg"
		};
		CoordinatesReceivedDroneIsEnrouteOver[]=
		{
			"DEFAULT\SOM\CoordinatesReceivedDroneIsEnrouteOver.ogg"
		};
		DroneIsBingoFuelAndRTBOver[]=
		{
			"DEFAULT\SOM\DroneIsBingoFuelAndRTBOver.ogg"
		};
		ThanksForTheUpdateOut[]=
		{
			"DEFAULT\SOM\ThanksForTheUpdateOut.ogg"
		};
		WeRequireLongRangeTransportHowCopyQ[]=
		{
			"DEFAULT\SOM\WeRequireLongRangeTransportHowCopyQ.ogg"
		};
		RogerThatTransportAvailableRequestingLZOver[]=
		{
			"DEFAULT\SOM\RogerThatTransportAvailableRequestingLZOver.ogg"
		};
		CopyTransportIsInboundOut[]=
		{
			"DEFAULT\SOM\CopyTransportIsInboundOut.ogg"
		};
		AllAboardSendingCoordinatesOver[]=
		{
			"DEFAULT\SOM\AllAboardSendingCoordinatesOver.ogg"
		};
		ReportingSuccessfulInsertionThanksForTheRideOut[]=
		{
			"DEFAULT\SOM\ReportingSuccessfulInsertionThanksForTheRideOut.ogg"
		};
		BeAdvisedTransportWasImmobilizedOut[]=
		{
			"DEFAULT\SOM\BeAdvisedTransportWasImmobilizedOut.ogg"
		};
		RequestingImmediateCloseAirSupportHowCopyQ[]=
		{
			"DEFAULT\SOM\RequestingImmediateCloseAirSupportHowCopyQ.ogg"
		};
		CopyThatAirstrikeIsReadyTransmitTargetLocationOver[]=
		{
			"DEFAULT\SOM\CopyThatAirstrikeIsReadyTransmitTargetLocationOver.ogg"
		};
		TargetLocationMarkedOver[]=
		{
			"DEFAULT\SOM\TargetLocationMarkedOver.ogg"
		};
		CoordinatesReceivedAircraftAreInboundContactOnLaserDesignatorOut[]=
		{
			"DEFAULT\SOM\CoordinatesReceivedAircraftAreInboundContactOnLaserDesignatorOut.ogg"
		};
		BeAdvisedWeHaveABirdStandingByWeCanFlyInReinforcementsIfNeededCheckYourMapForTheRendezvousPointAndConfirmOver[]=
		{
			"DEFAULT\SOM\BeAdvisedWeHaveABirdStandingByWeCanFlyInReinforcementsIfNeededCheckYourMapForTheRendezvousPointAndConfirmOver.ogg"
		};
		TheBirdHadToRTBForFuelOver[]=
		{
			"DEFAULT\SOM\TheBirdHadToRTBForFuelOver.ogg"
		};
		WeLinkedUpWithTheReinforcementsThanksForTheSupport[]=
		{
			"DEFAULT\SOM\WeLinkedUpWithTheReinforcementsThanksForTheSupport.ogg"
		};
		WeLostCommunicationWithThePilotBirdCouldBeDownOver[]=
		{
			"DEFAULT\SOM\WeLostCommunicationWithThePilotBirdCouldBeDownOver.ogg"
		};
		YourReinforcementsDidntMakeItToTheRendezvousYoullHaveToManageOver[]=
		{
			"DEFAULT\SOM\YourReinforcementsDidntMakeItToTheRendezvousYoullHaveToManageOver.ogg"
		};
		RequestingReleaseOfAnAttackHelicopterNearOurPositionOver[]=
		{
			"DEFAULT\SOM\RequestingReleaseOfAnAttackHelicopterNearOurPositionOver.ogg"
		};
		ReleaseAuthorizedSendStrikeTargetOver[]=
		{
			"DEFAULT\SOM\ReleaseAuthorizedSendStrikeTargetOver.ogg"
		};
		StrikeTargetSentOver[]=
		{
			"DEFAULT\SOM\StrikeTargetSentOver.ogg"
		};
		CoordinatesReceivedHeloIsAttackingTheTargetOut[]=
		{
			"DEFAULT\SOM\CoordinatesReceivedHeloIsAttackingTheTargetOut.ogg"
		};
		RequestingImmediateArtillerySuppressionHighExplosiveHowCopyQ[]=
		{
			"DEFAULT\SOM\RequestingImmediateArtillerySuppressionHighExplosiveHowCopyQ.ogg"
		};
		WithAnImmediateArtillerySuppressionRequestSmokeOver[]=
		{
			"DEFAULT\SOM\WithAnImmediateArtillerySuppressionRequestSmokeOver.ogg"
		};
		RequestingImmediateCoverWithWilliePeteOver[]=
		{
			"DEFAULT\SOM\RequestingImmediateCoverWithWilliePeteOver.ogg"
		};
		RequestingContinuousIlluminationAtTheTargetLocationHowCopyQ[]=
		{
			"DEFAULT\SOM\RequestingContinuousIlluminationAtTheTargetLocationHowCopyQ.ogg"
		};
		WeNeedLaserGuidedOrdnanceOver[]=
		{
			"DEFAULT\SOM\WeNeedLaserGuidedOrdnanceOver.ogg"
		};
		WeNeedAGuidedAntiArmorStrikeOver[]=
		{
			"DEFAULT\SOM\WeNeedAGuidedAntiArmorStrikeOver.ogg"
		};
		RequestingFireSupportFireForEffectOver[]=
		{
			"DEFAULT\SOM\RequestingFireSupportFireForEffectOver.ogg"
		};
		RequestingFireSupportAtTheTargetLocationWilliePeteInEffectHowCopyQ[]=
		{
			"DEFAULT\SOM\RequestingFireSupportAtTheTargetLocationWilliePeteInEffectHowCopyQ.ogg"
		};
		AdjustFireAtTheTargetLocationOver[]=
		{
			"DEFAULT\SOM\AdjustFireAtTheTargetLocationOver.ogg"
		};
		ArtilleryAvailableTransmitTargetLocationOver[]=
		{
			"DEFAULT\SOM\ArtilleryAvailableTransmitTargetLocationOver.ogg"
		};
		RogerThatTargetLocationReceivedOrdnanceIsInboundOver[]=
		{
			"DEFAULT\SOM\RogerThatTargetLocationReceivedOrdnanceIsInboundOver.ogg"
		};
		BeAdvisedArtilleryIsUnavailableAtThisTimeOut[]=
		{
			"DEFAULT\SOM\BeAdvisedArtilleryIsUnavailableAtThisTimeOut.ogg"
		};
		NegativeWeLostContactWithTheBatteryOut[]=
		{
			"DEFAULT\SOM\NegativeWeLostContactWithTheBatteryOut.ogg"
		};
		BeAdvisedTheBatteryCannotTargetThatGridOut[]=
		{
			"DEFAULT\SOM\BeAdvisedTheBatteryCannotTargetThatGridOut.ogg"
		};
		CannotExecuteAdjustCoordinatesOut[]=
		{
			"DEFAULT\SOM\CannotExecuteAdjustCoordinatesOut.ogg"
		};
		ThatsOutsideOurFiringEnvelopeOut[]=
		{
			"DEFAULT\SOM\ThatsOutsideOurFiringEnvelopeOut.ogg"
		};
		ShotOver[]=
		{
			"DEFAULT\SOM\ShotOver.ogg"
		};
		ShotOut[]=
		{
			"DEFAULT\SOM\ShotOut.ogg"
		};
		SplashOver[]=
		{
			"DEFAULT\SOM\SplashOver.ogg"
		};
		SplashOut[]=
		{
			"DEFAULT\SOM\SplashOut.ogg"
		};
		RoundsComplete[]=
		{
			"DEFAULT\SOM\RoundsComplete.ogg"
		};
		CheckFireE[]=
		{
			"DEFAULT\SOM\CheckFireE.ogg"
		};
		CeasingFire[]=
		{
			"DEFAULT\SOM\CeasingFire.ogg"
		};
		BeAdvisedTheBatteryJustDroppedOffTheCommGridYoureOnYourOwnOver[]=
		{
			"DEFAULT\SOM\BeAdvisedTheBatteryJustDroppedOffTheCommGridYoureOnYourOwnOver.ogg"
		};
		RogerWellHandleItOurselvesOut[]=
		{
			"DEFAULT\SOM\RogerWellHandleItOurselvesOut.ogg"
		};
		StandByForMissionUpdate[]=
		{
			"DEFAULT\SOM\StandByForMissionUpdate.ogg"
		};
		Out[]=
		{
			"DEFAULT\SOM\Out.ogg"
		};
		RogerThat[]=
		{
			"DEFAULT\SOM\RogerThat.ogg"
		};
		JobWellDone[]=
		{
			"DEFAULT\SOM\JobWellDone.ogg"
		};
		GoodJobOut[]=
		{
			"DEFAULT\SOM\GoodJobOut.ogg"
		};
		WellDoneOut[]=
		{
			"DEFAULT\SOM\WellDoneOut.ogg"
		};
		MissionFailure[]=
		{
			"DEFAULT\SOM\MissionFailure.ogg"
		};
		MessageOver[]=
		{
			"DEFAULT\SOM\MessageOver.ogg"
		};
		ComeIn[]=
		{
			"DEFAULT\SOM\ComeIn.ogg"
		};
		GoAheadOver[]=
		{
			"DEFAULT\SOM\GoAheadOver.ogg"
		};
		CopyGoAhead[]=
		{
			"DEFAULT\SOM\CopyGoAhead.ogg"
		};
		Here[]=
		{
			"DEFAULT\SOM\Here.ogg"
		};
		WeCopyYouLoudAndClear[]=
		{
			"DEFAULT\SOM\WeCopyYouLoudAndClear.ogg"
		};
		WeCannotDivertAtThisTimeOut[]=
		{
			"DEFAULT\SOM\WeCannotDivertAtThisTimeOut.ogg"
		};
		Sorry[]=
		{
			"DEFAULT\SOM\Sorry.ogg"
		};
		NoWayWeCanHelpWithThatRightNowOut[]=
		{
			"DEFAULT\SOM\NoWayWeCanHelpWithThatRightNowOut.ogg"
		};
		WereOnTheWayOut[]=
		{
			"DEFAULT\SOM\WereOnTheWayOut.ogg"
		};
		WereOscarMikeOut[]=
		{
			"DEFAULT\SOM\WereOscarMikeOut.ogg"
		};
		UnableToCompleteTheObjectiveAbortingOver[]=
		{
			"DEFAULT\SOM\UnableToCompleteTheObjectiveAbortingOver.ogg"
		};
		WeHaveToAbortOver[]=
		{
			"DEFAULT\SOM\WeHaveToAbortOver.ogg"
		};
		ContinueYourPreviousMissionOver[]=
		{
			"DEFAULT\SOM\ContinueYourPreviousMissionOver.ogg"
		};
		AbortTheOpOver[]=
		{
			"DEFAULT\SOM\AbortTheOpOver.ogg"
		};
		ReturnToYourPrimaryOver[]=
		{
			"DEFAULT\SOM\ReturnToYourPrimaryOver.ogg"
		};
		CarryOnWithYourPriorTasksOver[]=
		{
			"DEFAULT\SOM\CarryOnWithYourPriorTasksOver.ogg"
		};
		StandByOver[]=
		{
			"DEFAULT\SOM\StandByOver.ogg"
		};
		Affirmative[]=
		{
			"DEFAULT\SOM\Affirmative.ogg"
		};
		SupportIsNotAvailableOut[]=
		{
			"DEFAULT\SOM\SupportIsNotAvailableOut.ogg"
		};
		YourRequestHasBeenRejectedOut[]=
		{
			"DEFAULT\SOM\YourRequestHasBeenRejectedOut.ogg"
		};
		CannotExecuteThatsOutsideOurFiringEnvelope[]=
		{
			"DEFAULT\SOM\CannotExecuteThatsOutsideOurFiringEnvelope.ogg"
		};
		CannotExecuteAdjustCoordinates[]=
		{
			"DEFAULT\SOM\CannotExecuteAdjustCoordinates.ogg"
		};
		FireAt[]=
		{
			"DEFAULT\FireAt.ogg"
		};
		RepairThat[]=
		{
			"DEFAULT\RepairThat.ogg"
		};
		Several_TK[]=
		{
			"DEFAULT\Core_TK\Several.ogg"
		};
		Single_TK[]=
		{
			"DEFAULT\Core_TK\Single.ogg"
		};
		None_TK[]=
		{
			"DEFAULT\Core_TK\None.ogg"
		};
		Some_TK[]=
		{
			"DEFAULT\Core_TK\Some.ogg"
		};
		ALotOf_TK[]=
		{
			"DEFAULT\Core_TK\ALotOf.ogg"
		};
		Independent_TK[]=
		{
			"DEFAULT\Core_TK\Independent.ogg"
		};
		Civilian_TK[]=
		{
			"DEFAULT\Core_TK\Civilian.ogg"
		};
		OfThem_TK[]=
		{
			"DEFAULT\Core_TK\OfThem.ogg"
		};
		One_TK[]=
		{
			"DEFAULT\Core_TK\One.ogg"
		};
		In_TK[]=
		{
			"DEFAULT\Core_TK\In.ogg"
		};
		Near_TK[]=
		{
			"DEFAULT\Core_TK\Near.ogg"
		};
		NotFar_TK[]=
		{
			"DEFAULT\Core_TK\NotFar.ogg"
		};
		From_TK[]=
		{
			"DEFAULT\Core_TK\From.ogg"
		};
		Around_TK[]=
		{
			"DEFAULT\Core_TK\Around.ogg"
		};
		Here_TK[]=
		{
			"DEFAULT\Core_TK\Here.ogg"
		};
		There_TK[]=
		{
			"DEFAULT\Core_TK\There.ogg"
		};
		Probably_TK[]=
		{
			"DEFAULT\Core_TK\Probably.ogg"
		};
		ToThe_TK[]=
		{
			"DEFAULT\Core_TK\ToThe.ogg"
		};
		IsProbablyToThe_TK[]=
		{
			"DEFAULT\Core_TK\IsProbablyToThe.ogg"
		};
		JustNow_TK[]=
		{
			"DEFAULT\Core_TK\JustNow.ogg"
		};
		AFewMinutesAgo_TK[]=
		{
			"DEFAULT\Core_TK\AFewMinutesAgo.ogg"
		};
		AFewHoursAgo_TK[]=
		{
			"DEFAULT\Core_TK\AFewHoursAgo.ogg"
		};
		Today_TK[]=
		{
			"DEFAULT\Core_TK\Today.ogg"
		};
		Yesterday_TK[]=
		{
			"DEFAULT\Core_TK\Yesterday.ogg"
		};
		SeveralDaysAgo_TK[]=
		{
			"DEFAULT\Core_TK\SeveralDaysAgo.ogg"
		};
		EnglishQ_TK[]=
		{
			"DEFAULT\Core_TK\EnglishQ.ogg"
		};
		RussianQ_TK[]=
		{
			"DEFAULT\Core_TK\RussianQ.ogg"
		};
		CzechQ_TK[]=
		{
			"DEFAULT\Core_TK\CzechQ.ogg"
		};
		TakistaniQ_TK[]=
		{
			"DEFAULT\Core_TK\TakistaniQ.ogg"
		};
		North_TK[]=
		{
			"DEFAULT\Core_TK\North.ogg"
		};
		South_TK[]=
		{
			"DEFAULT\Core_TK\South.ogg"
		};
		West_TK[]=
		{
			"DEFAULT\Core_TK\West.ogg"
		};
		East_TK[]=
		{
			"DEFAULT\Core_TK\East.ogg"
		};
		Northwest_TK[]=
		{
			"DEFAULT\Core_TK\Northwest.ogg"
		};
		Southwest_TK[]=
		{
			"DEFAULT\Core_TK\Southwest.ogg"
		};
		Northeast_TK[]=
		{
			"DEFAULT\Core_TK\Northeast.ogg"
		};
		Southeast_TK[]=
		{
			"DEFAULT\Core_TK\Southeast.ogg"
		};
		DidYouSeeAnythingRecentlyQ_TK[]=
		{
			"DEFAULT\Core_TK\DidYouSeeAnythingRecentlyQ.ogg"
		};
		YesISawSomething_TK[]=
		{
			"DEFAULT\Core_TK\YesISawSomething.ogg"
		};
		NoIDidntSeeAnything_TK[]=
		{
			"DEFAULT\Core_TK\NoIDidntSeeAnything.ogg"
		};
		WhatsTheWeatherForecastQ_TK[]=
		{
			"DEFAULT\Core_TK\WhatsTheWeatherForecastQ.ogg"
		};
		NiceWeatherHuhQ_TK[]=
		{
			"DEFAULT\Core_TK\NiceWeatherHuhQ.ogg"
		};
		NastyWeatherHuhQ_TK[]=
		{
			"DEFAULT\Core_TK\NastyWeatherHuhQ.ogg"
		};
		ShouldBeClearingUpSoon_TK[]=
		{
			"DEFAULT\Core_TK\ShouldBeClearingUpSoon.ogg"
		};
		IReckonWellGetSomeRainSoon_TK[]=
		{
			"DEFAULT\Core_TK\IReckonWellGetSomeRainSoon.ogg"
		};
		TheySayItllStayLikeThisForAWhile_TK[]=
		{
			"DEFAULT\Core_TK\TheySayItllStayLikeThisForAWhile.ogg"
		};
		WhatsTheClosestSettlementQ_TK[]=
		{
			"DEFAULT\Core_TK\WhatsTheClosestSettlementQ.ogg"
		};
		TheClosestOneIs_TK[]=
		{
			"DEFAULT\Core_TK\TheClosestOneIs.ogg"
		};
		ImNotFromAroundHere_TK[]=
		{
			"DEFAULT\Core_TK\ImNotFromAroundHere.ogg"
		};
		NoIdeaIDontLiveHere_TK[]=
		{
			"DEFAULT\Core_TK\NoIdeaIDontLiveHere.ogg"
		};
		YouAlreadyAskedMeThat_TK[]=
		{
			"DEFAULT\Core_TK\YouAlreadyAskedMeThat.ogg"
		};
		AreYouKiddingQ_TK[]=
		{
			"DEFAULT\Core_TK\AreYouKiddingQ.ogg"
		};
		StopAskingMeThat_TK[]=
		{
			"DEFAULT\Core_TK\StopAskingMeThat.ogg"
		};
		SorryIDontUnderstand_TK[]=
		{
			"DEFAULT\Core_TK\SorryIDontUnderstand.ogg"
		};
		UhWhatQ_TK[]=
		{
			"DEFAULT\Core_TK\UhWhatQ.ogg"
		};
		IWillOnlyTellYouMyNameRankAndSerialNumber_TK[]=
		{
			"DEFAULT\Core_TK\IWillOnlyTellYouMyNameRankAndSerialNumber.ogg"
		};
		SirQ_TK[]=
		{
			"DEFAULT\Core_TK\SirQ.ogg"
		};
		PrivateQ_TK[]=
		{
			"DEFAULT\Core_TK\PrivateQ.ogg"
		};
		CorporalQ_TK[]=
		{
			"DEFAULT\Core_TK\CorporalQ.ogg"
		};
		SergeantQ_TK[]=
		{
			"DEFAULT\Core_TK\SergeantQ.ogg"
		};
		LieutenantQ_TK[]=
		{
			"DEFAULT\Core_TK\LieutenantQ.ogg"
		};
		CaptainQ_TK[]=
		{
			"DEFAULT\Core_TK\CaptainQ.ogg"
		};
		MajorQ_TK[]=
		{
			"DEFAULT\Core_TK\MajorQ.ogg"
		};
		ColonelQ_TK[]=
		{
			"DEFAULT\Core_TK\ColonelQ.ogg"
		};
		YesPrivate_TK[]=
		{
			"DEFAULT\Core_TK\YesPrivate.ogg"
		};
		YesCorporal_TK[]=
		{
			"DEFAULT\Core_TK\YesCorporal.ogg"
		};
		YesSergeant_TK[]=
		{
			"DEFAULT\Core_TK\YesSergeant.ogg"
		};
		YesLieutenant_TK[]=
		{
			"DEFAULT\Core_TK\YesLieutenant.ogg"
		};
		YesCaptain_TK[]=
		{
			"DEFAULT\Core_TK\YesCaptain.ogg"
		};
		YesMajor_TK[]=
		{
			"DEFAULT\Core_TK\YesMajor.ogg"
		};
		YesColonel_TK[]=
		{
			"DEFAULT\Core_TK\YesColonel.ogg"
		};
		SoldierQ_TK[]=
		{
			"DEFAULT\Core_TK\SoldierQ.ogg"
		};
		MorninSoldier_TK[]=
		{
			"DEFAULT\Core_TK\MorninSoldier.ogg"
		};
		EveninSoldier_TK[]=
		{
			"DEFAULT\Core_TK\EveninSoldier.ogg"
		};
		GoodDaySir_TK[]=
		{
			"DEFAULT\Core_TK\GoodDaySir.ogg"
		};
		GoodEveningSir_TK[]=
		{
			"DEFAULT\Core_TK\GoodEveningSir.ogg"
		};
		GoodMorningSir_TK[]=
		{
			"DEFAULT\Core_TK\GoodMorningSir.ogg"
		};
		GoodDay_TK[]=
		{
			"DEFAULT\Core_TK\GoodDay.ogg"
		};
		GoodMorning_TK[]=
		{
			"DEFAULT\Core_TK\GoodMorning.ogg"
		};
		GoodEvening_TK[]=
		{
			"DEFAULT\Core_TK\GoodEvening.ogg"
		};
		WhatQ_TK[]=
		{
			"DEFAULT\Core_TK\WhatQ.ogg"
		};
		YesSir_TK[]=
		{
			"DEFAULT\Core_TK\YesSir.ogg"
		};
		HelloSir_TK[]=
		{
			"DEFAULT\Core_TK\HelloSir.ogg"
		};
		Yep_TK[]=
		{
			"DEFAULT\Core_TK\Yep.ogg"
		};
		YeahQ_TK[]=
		{
			"DEFAULT\Core_TK\YeahQ.ogg"
		};
		Hi_TK[]=
		{
			"DEFAULT\Core_TK\Hi.ogg"
		};
		HiThereE_TK[]=
		{
			"DEFAULT\Core_TK\HiThereE.ogg"
		};
		HeyMan_TK[]=
		{
			"DEFAULT\Core_TK\HeyMan.ogg"
		};
		HiDude_TK[]=
		{
			"DEFAULT\Core_TK\HiDude.ogg"
		};
		Hello_TK[]=
		{
			"DEFAULT\Core_TK\Hello.ogg"
		};
		HowsThingsQ_TK[]=
		{
			"DEFAULT\Core_TK\HowsThingsQ.ogg"
		};
		HowAreYouQ_TK[]=
		{
			"DEFAULT\Core_TK\HowAreYouQ.ogg"
		};
		HeyE_TK[]=
		{
			"DEFAULT\Core_TK\HeyE.ogg"
		};
		WhatDoYouWantQ_TK[]=
		{
			"DEFAULT\Core_TK\WhatDoYouWantQ.ogg"
		};
		WhatDoYouNeedQ_TK[]=
		{
			"DEFAULT\Core_TK\WhatDoYouNeedQ.ogg"
		};
		WhatsUpQ_TK[]=
		{
			"DEFAULT\Core_TK\WhatsUpQ.ogg"
		};
		YesQ_TK[]=
		{
			"DEFAULT\Core_TK\YesQ.ogg"
		};
		MaamQ_TK[]=
		{
			"DEFAULT\Core_TK\MaamQ.ogg"
		};
		HaveANiceDay_TK[]=
		{
			"DEFAULT\Core_TK\HaveANiceDay.ogg"
		};
		MorningMaam_TK[]=
		{
			"DEFAULT\Core_TK\MorningMaam.ogg"
		};
		HelloThere_TK[]=
		{
			"DEFAULT\Core_TK\HelloThere.ogg"
		};
		HowYouDoinQ_TK[]=
		{
			"DEFAULT\Core_TK\HowYouDoinQ.ogg"
		};
		DontTouchMeE_TK[]=
		{
			"DEFAULT\Core_TK\DontTouchMeE.ogg"
		};
		NotNowE_TK[]=
		{
			"DEFAULT\Core_TK\NotNowE.ogg"
		};
		Later_TK[]=
		{
			"DEFAULT\Core_TK\Later.ogg"
		};
		NoTimeE_TK[]=
		{
			"DEFAULT\Core_TK\NoTimeE.ogg"
		};
		HushE_TK[]=
		{
			"DEFAULT\Core_TK\HushE.ogg"
		};
		SsshhE_TK[]=
		{
			"DEFAULT\Core_TK\SsshhE.ogg"
		};
		CantYouSeeImBusyQ_TK[]=
		{
			"DEFAULT\Core_TK\CantYouSeeImBusyQ.ogg"
		};
		BitOccupiedAtTheMomentDude_TK[]=
		{
			"DEFAULT\Core_TK\BitOccupiedAtTheMomentDude.ogg"
		};
		ImBusyE_TK[]=
		{
			"DEFAULT\Core_TK\ImBusyE.ogg"
		};
		PissOffE_TK[]=
		{
			"DEFAULT\Core_TK\PissOffE.ogg"
		};
		NiceToSeeYou_TK[]=
		{
			"DEFAULT\Core_TK\NiceToSeeYou.ogg"
		};
		GoodToSeeYou_TK[]=
		{
			"DEFAULT\Core_TK\GoodToSeeYou.ogg"
		};
		HeyGladYoureHere_TK[]=
		{
			"DEFAULT\Core_TK\HeyGladYoureHere.ogg"
		};
		CanIHelpYouQ_TK[]=
		{
			"DEFAULT\Core_TK\CanIHelpYouQ.ogg"
		};
		GetLostE_TK[]=
		{
			"DEFAULT\Core_TK\GetLostE.ogg"
		};
		LeaveMeAloneE_TK[]=
		{
			"DEFAULT\Core_TK\LeaveMeAloneE.ogg"
		};
		LeaveUsAloneE_TK[]=
		{
			"DEFAULT\Core_TK\LeaveUsAloneE.ogg"
		};
		FuckingPig_TK[]=
		{
			"DEFAULT\Core_TK\FuckingPig.ogg"
		};
		SonOfABitchE_TK[]=
		{
			"DEFAULT\Core_TK\SonOfABitchE.ogg"
		};
		DamnYouE_TK[]=
		{
			"DEFAULT\Core_TK\DamnYouE.ogg"
		};
		CanIAskYouSomethingQ_TK[]=
		{
			"DEFAULT\Core_TK\CanIAskYouSomethingQ.ogg"
		};
		PleaseCanYouHelpQ_TK[]=
		{
			"DEFAULT\Core_TK\PleaseCanYouHelpQ.ogg"
		};
		Speak_TK[]=
		{
			"DEFAULT\Core_TK\Speak.ogg"
		};
		HelpUs_TK[]=
		{
			"DEFAULT\Core_TK\HelpUs.ogg"
		};
		IWontSayAnotherWord_TK[]=
		{
			"DEFAULT\Core_TK\IWontSayAnotherWord.ogg"
		};
		MindYourOwnBusiness_TK[]=
		{
			"DEFAULT\Core_TK\MindYourOwnBusiness.ogg"
		};
		GoBotherSomeoneElse_TK[]=
		{
			"DEFAULT\Core_TK\GoBotherSomeoneElse.ogg"
		};
		10minutesleft[]=
		{
			"DEFAULT\warfare\OperationTerminatesIn10Minutes.ogg"
		};
		20minutesleft[]=
		{
			"DEFAULT\warfare\OperationTerminatesIn20Minutes.ogg"
		};
		5minutesleft[]=
		{
			"DEFAULT\warfare\OperationTerminatesIn5Minutes.ogg"
		};
		BaseUnderAtack[]=
		{
			"DEFAULT\warfare\BaseUnderAttackE.ogg"
		};
		BaseUnderAttack[]=
		{
			"DEFAULT\warfare\BaseUnderAttackE.ogg"
		};
		CanDoWereOnIt[]=
		{
			"DEFAULT\warfare\CanDoWereOnIt.ogg"
		};
		Captured[]=
		{
			"DEFAULT\warfare\Captured.ogg"
		};
		CapturedNear[]=
		{
			"DEFAULT\warfare\CapturedNear.ogg"
		};
		CiviliansUnderEnemyFireIn[]=
		{
			"DEFAULT\warfare\CiviliansUnderEnemyFireIn.ogg"
		};
		Constructed[]=
		{
			"DEFAULT\warfare\Constructed.ogg"
		};
		Deployed[]=
		{
			"DEFAULT\warfare\Deployed.ogg"
		};
		Destroyed[]=
		{
			"DEFAULT\warfare\Destroyed.ogg"
		};
		EnemyBaseLocated[]=
		{
			"DEFAULT\warfare\EnemyBaseLocated.ogg"
		};
		EnemyForcesDetected[]=
		{
			"DEFAULT\warfare\EnemyForcesDetected.ogg"
		};
		HostilesDetectedNear[]=
		{
			"DEFAULT\warfare\HostilesDetectedNear.ogg"
		};
		InsufficientFunds[]=
		{
			"DEFAULT\warfare\InsufficientFunds.ogg"
		};
		InsufficientResources[]=
		{
			"DEFAULT\warfare\InsufficientResources.ogg"
		};
		InsufficientSupplies[]=
		{
			"DEFAULT\warfare\InsufficientSupplies.ogg"
		};
		IsUnderAttack[]=
		{
			"DEFAULT\warfare\IsUnderAttack.ogg"
		};
		Lost[]=
		{
			"DEFAULT\warfare\Lost.ogg"
		};
		LostAt[]=
		{
			"DEFAULT\warfare\LostAt.ogg"
		};
		Mobilized[]=
		{
			"DEFAULT\warfare\Mobilized.ogg"
		};
		NegativeWeCannotDivertAtThisTime[]=
		{
			"DEFAULT\warfare\Mobilized.ogg"
		};
		NegativeWeCannotDivert[]=
		{
			"DEFAULT\warfare\Mobilized.ogg"
		};
		NewIntelAvailable[]=
		{
			"DEFAULT\warfare\NewIntelAvailable.ogg"
		};
		NewMissionAvailable[]=
		{
			"DEFAULT\warfare\NewMissionAvailable.ogg"
		};
		NewSupportAvailable[]=
		{
			"DEFAULT\warfare\NewSupportAvailable.ogg"
		};
		UnderAttack[]=
		{
			"DEFAULT\warfare\UnderAttackE.ogg"
		};
		VotingForNewCommander[]=
		{
			"DEFAULT\warfare\VotingForANewCommander.ogg"
		};
		AntiAirRadar[]=
		{
			"DEFAULT\warfare\AntiAirRadar.ogg"
		};
		ArtilleryBattery[]=
		{
			"DEFAULT\warfare\ArtilleryBattery.ogg"
		};
		ArtilleryRadar[]=
		{
			"DEFAULT\warfare\ArtilleryRadar.ogg"
		};
		Barracks[]=
		{
			"DEFAULT\warfare\Barracks.ogg"
		};
		Headquarters[]=
		{
			"DEFAULT\warfare\Headquarters.ogg"
		};
		HeavyVehicleSupply[]=
		{
			"DEFAULT\warfare\HeavyVehicleSupplyPoint.ogg"
		};
		Helipad[]=
		{
			"DEFAULT\warfare\Helipad.ogg"
		};
		LightVehicleSupply[]=
		{
			"DEFAULT\warfare\LightVehicleSupplyPoint.ogg"
		};
		ServicePoint[]=
		{
			"DEFAULT\warfare\ServicePoint.ogg"
		};
		Strongpoint[]=
		{
			"DEFAULT\warfare\StrongPoint.ogg"
		};
		UAVTerminal[]=
		{
			"DEFAULT\warfare\UAVTerminal.ogg"
		};
		PermissionGranted[]=
		{
			"DEFAULT\warfare\PermissionGranted.ogg"
		};
		RequestingAssistance[]=
		{
			"DEFAULT\warfare\RequestingAssistance.ogg"
		};
		RequestingPermissionToJoin[]=
		{
			"DEFAULT\warfare\RequestingPermissionToJoinYourTeam.ogg"
		};
		RequestingPermissionToLeave[]=
		{
			"DEFAULT\warfare\RequestingPermissionToLeaveYourTeam.ogg"
		};
		RequestRejected[]=
		{
			"DEFAULT\warfare\RequestRejected.ogg"
		};
		AllianceFormed[]=
		{
			"DEFAULT\warfare\AllianceFormed.ogg"
		};
		AllianceHasEnded[]=
		{
			"DEFAULT\warfare\AllianceHasEnded.ogg"
		};
		AnotherTeamHasTransferredFundsToYou[]=
		{
			"DEFAULT\warfare\AnotherTeamHasTransferredFundsToYou.ogg"
		};
		BLUFORCommanderRequestsACeaseFire[]=
		{
			"DEFAULT\warfare\BLUFORCommanderRequestsACeaseFire.ogg"
		};
		BLUFORCommanderRequestsAnAlliance[]=
		{
			"DEFAULT\warfare\BLUFORCommanderRequestsAnAlliance.ogg"
		};
		CeaseFireHasEnded[]=
		{
			"DEFAULT\warfare\CeaseFireHasEnded.ogg"
		};
		CeaseFireInEffect[]=
		{
			"DEFAULT\warfare\CeaseFireInEffect.ogg"
		};
		CommandPost[]=
		{
			"DEFAULT\warfare\CommandPost.ogg"
		};
		NeutralCommanderRequestsACeaseFire[]=
		{
			"DEFAULT\warfare\NeutralCommanderRequestsACeaseFire.ogg"
		};
		NeutralCommanderRequestsAnAlliance[]=
		{
			"DEFAULT\warfare\NeutralCommanderRequestsAnAlliance.ogg"
		};
		OPFORCommanderRequestsACeaseFire[]=
		{
			"DEFAULT\warfare\OPFORCommanderRequestsACeaseFire.ogg"
		};
		OPFORCommanderRequestsAnAlliance[]=
		{
			"DEFAULT\warfare\OPFORCommanderRequestsAnAlliance.ogg"
		};
		StrongpointCapturedNear[]=
		{
			"DEFAULT\warfare\StrongpointCapturedNear.ogg"
		};
		StrongpointLostAt[]=
		{
			"DEFAULT\warfare\StrongpointLostAt.ogg"
		};
		aborting[]=
		{
			"DEFAULT\SOM\WeHaveToAbortOver.ogg"
		};
		aborttheop[]=
		{
			"DEFAULT\SOM\AbortTheOpOver.ogg"
		};
		attack[]=
		{
			"DEFAULT\AttackE.ogg"
		};
		awaitingorders[]=
		{
			"DEFAULT\hc\HC_StandingByForOrders.ogg"
		};
		atthistime[]=
		{
			"DEFAULT\Core\JustNow.ogg"
		};
		binoculars[]=
		{
			"DEFAULT\weapons\Binocular.ogg"
		};
		cannon[]=
		{
			"DEFAULT\weapons\cannonHigh.ogg"
		};
		cannotfirenowe[]=
		{
			"DEFAULT\CannotFire.ogg"
		};
		cantshoote[]=
		{
			"DEFAULT\CantShoot.ogg"
		};
		ceasefire[]=
		{
			"DEFAULT\CeaseFireE.ogg"
		};
		ceasefiregoddamnite[]=
		{
			"DEFAULT\CeaseFireE.ogg"
		};
		civilian[]=
		{
			"DEFAULT\Core\Civilian.ogg"
		};
		clearedtoengage[]=
		{
			"DEFAULT\Clear.ogg"
		};
		corpsmane[]=
		{
			"DEFAULT\MedicE.ogg"
		};
		healyourselfe[]=
		{
			"DEFAULT\HealYourself.ogg"
		};
		contact[]=
		{
			"DEFAULT\ContactE.ogg"
		};
		damne[]=
		{
			"DEFAULT\Core\DamnYouE.ogg"
		};
		damnitweloste[]=
		{
			"DEFAULT\WeLost.ogg"
		};
		dangerouslyclose[]=
		{
			"DEFAULT\dangerCloseTo.ogg"
		};
		deactivatethatcharge[]=
		{
			"DEFAULT\DeactivateCharge.ogg"
		};
		detonatechargenowe[]=
		{
			"DEFAULT\DetonateCharge.ogg"
		};
		disablingmanualfire[]=
		{
			"DEFAULT\CancelManualFire.ogg"
		};
		donotfiree[]=
		{
			"DEFAULT\HoldFire.ogg"
		};
		downandquiet[]=
		{
			"DEFAULT\Stealth.ogg"
		};
		enemiese[]=
		{
			"DEFAULT\combat\CS_EnemyE.ogg"
		};
		firee[]=
		{
			"DEFAULT\Fire.ogg"
		};
		followmylead[]=
		{
			"DEFAULT\Follow.ogg"
		};
		formationcolumn[]=
		{
			"DEFAULT\formation\FormColumn.ogg"
		};
		formationdiamond[]=
		{
			"DEFAULT\formation\FormDiamond.ogg"
		};
		formationechelonleft[]=
		{
			"DEFAULT\formation\FormEcholonLeft.ogg"
		};
		formationechelonright[]=
		{
			"DEFAULT\formation\FormEcholonRight.ogg"
		};
		formationfile[]=
		{
			"DEFAULT\formation\FormFile.ogg"
		};
		formationline[]=
		{
			"DEFAULT\formation\FormLine.ogg"
		};
		formationstaggeredcolumn[]=
		{
			"DEFAULT\formation\FormStaggeredColumn.ogg"
		};
		formationvee[]=
		{
			"DEFAULT\formation\FormVee.ogg"
		};
		formationwedge[]=
		{
			"DEFAULT\formation\FormWedge.ogg"
		};
		foxtrot[]=
		{
			"DEFAULT\alphabet\Fotxtrot.ogg"
		};
		from[]=
		{
			"DEFAULT\Core\From.ogg"
		};
		fuckthatsclosee[]=
		{
			"DEFAULT\damnClose.ogg"
		};
		gaginge[]=
		{
			"DEFAULT\EngagingE.ogg"
		};
		getmeacorpsmannowe[]=
		{
			"DEFAULT\MedicE.ogg"
		};
		goddamne[]=
		{
			"DEFAULT\FuckE.ogg"
		};
		halte[]=
		{
			"DEFAULT\Halt.ogg"
		};
		hc_assaultingenemyposition[]=
		{
			"DEFAULT\hc\HC_EngagingE.ogg"
		};
		hc_pinneddowne[]=
		{
			"DEFAULT\HesDownE.ogg"
		};
		hc_takingheavyfiree[]=
		{
			"DEFAULT\TakingFireE.ogg"
		};
		healat[]=
		{
			"DEFAULT\NeedHelpE.ogg"
		};
		healsomeone[]=
		{
			"DEFAULT\NeedHelpE.ogg"
		};
		holdfiree[]=
		{
			"DEFAULT\HoldFire.ogg"
		};
		icantgetthere[]=
		{
			"DEFAULT\CantGetThereE.ogg"
		};
		imbleedinge[]=
		{
			"DEFAULT\WoundedE.ogg"
		};
		imoutoffuele[]=
		{
			"DEFAULT\OutOfFuelE.ogg"
		};
		imrunningoutoffuel[]=
		{
			"DEFAULT\OutOfFuelE.ogg"
		};
		imtakingcommand[]=
		{
			"DEFAULT\TakingCommand.ogg"
		};
		mandowne[]=
		{
			"DEFAULT\HesDownE.ogg"
		};
		nomoretarget[]=
		{
			"DEFAULT\NoTarget.ogg"
		};
		east2[]=
		{
			"DEFAULT\direction\East.ogg"
		};
		north2[]=
		{
			"DEFAULT\direction\North.ogg"
		};
		northwest2[]=
		{
			"DEFAULT\direction\Northwest.ogg"
		};
		northeast2[]=
		{
			"DEFAULT\direction\Northeast.ogg"
		};
		south2[]=
		{
			"DEFAULT\direction\South.ogg"
		};
		west2[]=
		{
			"DEFAULT\direction\West.ogg"
		};
		southeast2[]=
		{
			"DEFAULT\direction\Southeast.ogg"
		};
		southwest2[]=
		{
			"DEFAULT\direction\Southwest.ogg"
		};
		nosupportavailableatthistime[]=
		{
			"DEFAULT\SOM\SupportIsNotAvailableOut.ogg"
		};
		nowaywecandivertnow[]=
		{
			"DEFAULT\SOM\WeCannotDivertAtThisTimeOut.ogg"
		};
		obj_ammocrates[]=
		{
			"DEFAULT\objects\ammocrate.ogg"
		};
		obj_buildings[]=
		{
			"DEFAULT\objects\building.ogg"
		};
		obj_bunkers[]=
		{
			"DEFAULT\objects\bunker.ogg"
		};
		obj_bushes[]=
		{
			"DEFAULT\objects\bush.ogg"
		};
		obj_churches[]=
		{
			"DEFAULT\objects\church.ogg"
		};
		obj_crosses[]=
		{
			"DEFAULT\objects\cross.ogg"
		};
		obj_fences[]=
		{
			"DEFAULT\objects\fence.ogg"
		};
		obj_flags[]=
		{
			"DEFAULT\objects\flag.ogg"
		};
		obj_houses[]=
		{
			"DEFAULT\objects\house.ogg"
		};
		obj_objects[]=
		{
			"DEFAULT\objects\object.ogg"
		};
		obj_rocks[]=
		{
			"DEFAULT\objects\rock.ogg"
		};
		obj_structures[]=
		{
			"DEFAULT\objects\structure.ogg"
		};
		obj_targets[]=
		{
			"DEFAULT\objects\target.ogg"
		};
		obj_tents[]=
		{
			"DEFAULT\objects\tent.ogg"
		};
		obj_trees[]=
		{
			"DEFAULT\objects\tree.ogg"
		};
		obj_walls[]=
		{
			"DEFAULT\objects\wall.ogg"
		};
		out1[]=
		{
			"DEFAULT\SOM\Out.ogg"
		};
		over1[]=
		{
			"DEFAULT\Over.ogg"
		};
		over2[]=
		{
			"DEFAULT\Over.ogg"
		};
		ten2[]=
		{
			"DEFAULT\numbers\Ten.ogg"
		};
		eleven2[]=
		{
			"DEFAULT\numbers\Eleven.ogg"
		};
		twelve2[]=
		{
			"DEFAULT\numbers\Twelve.ogg"
		};
		readyfororders[]=
		{
			"DEFAULT\Ready.ogg"
		};
		runningoutofammoe[]=
		{
			"DEFAULT\RunningOutOfAmmo.ogg"
		};
		switchingtomanualfire[]=
		{
			"DEFAULT\ManualFire.ogg"
		};
		targetdestroyede[]=
		{
			"DEFAULT\TargetEliminated.ogg"
		};
		unabletocompletetheobjective[]=
		{
			"DEFAULT\SOM\UnableToCompleteTheObjectiveAbortingOver.ogg"
		};
		unabletofiree[]=
		{
			"DEFAULT\CannotFire.ogg"
		};
		underheavyfiree[]=
		{
			"DEFAULT\UnderFireE.ogg"
		};
		veh_armedcar[]=
		{
			"DEFAULT\vehicles\technical.ogg"
		};
		veh_armedcars[]=
		{
			"DEFAULT\vehicles\technicals.ogg"
		};
		veh_civilian[]=
		{
			"DEFAULT\Core\Civilian.ogg"
		};
		veh_civilians[]=
		{
			"DEFAULT\vehicles\men.ogg"
		};
		veh_staticaaweapon[]=
		{
			"DEFAULT\vehicles\staticAALauncher.ogg"
		};
		veh_staticaaweapons[]=
		{
			"DEFAULT\vehicles\staticAALaunchers.ogg"
		};
		veh_staticatweapon[]=
		{
			"DEFAULT\vehicles\staticATLauncher.ogg"
		};
		veh_staticatweapons[]=
		{
			"DEFAULT\vehicles\staticATLaunchers.ogg"
		};
		veh_transporthelicopter[]=
		{
			"DEFAULT\vehicles\helicopter.ogg"
		};
		veh_transporthelicopters[]=
		{
			"DEFAULT\vehicles\helicopters.ogg"
		};
		veh_wreck[]=
		{
			"DEFAULT\objects\wreck.ogg"
		};
		veh_wrecks[]=
		{
			"DEFAULT\objects\wreck.ogg"
		};
		watchthatposition[]=
		{
			"DEFAULT\WatchThat.ogg"
		};
		weaponshote[]=
		{
			"DEFAULT\WeaponsHot.ogg"
		};
		wecannotcompletethismission[]=
		{
			"DEFAULT\SOM\UnableToCompleteTheObjectiveAbortingOver.ogg"
		};
		wecannotdivert[]=
		{
			"DEFAULT\SOM\WeCannotDivertAtThisTimeOut.ogg"
		};
		wehavetoabort[]=
		{
			"DEFAULT\SOM\WeHaveToAbortOver.ogg"
		};
		welldone[]=
		{
			"DEFAULT\SOM\JobWellDone.ogg"
		};
		wereheavilydamagede[]=
		{
			"DEFAULT\CriticalDamageE.ogg"
		};
		wereonit[]=
		{
			"DEFAULT\warfare\CanDoWereOnIt.ogg"
		};
		yourefreetoengage[]=
		{
			"DEFAULT\FreeToEngage.ogg"
		};
		heat[]=
		{
			"DEFAULT\weapons\cannonLow.ogg"
		};
		ImAtThisPosition[]=
		{
			"DEFAULT\weapons\cannonLow.ogg"
		};
		class StealthWords
		{
			micOut[]=
			{
				"\ca\DubbingRadio_E\Data\Mic_Out1.ogg"
			};
			micOut1[]=
			{
				"\ca\DubbingRadio_E\Data\over01.ogg"
			};
			micOut2[]=
			{
				"\ca\DubbingRadio_E\Data\over02.ogg"
			};
			micOut3[]=
			{
				"\ca\DubbingRadio_E\Data\over03.ogg"
			};
			loop[]=
			{
				"\ca\DubbingRadio_E\Data\radionoise1.ogg"
			};
			beepBeep[]=
			{
				"\ca\DubbingRadio_E\Data\beep.ogg"
			};
			pause[]=
			{
				"\ca\DubbingRadio_E\Data\empty01sec.ogg"
			};
			xmit[]=
			{
				"\ca\DubbingRadio_E\Data\beep.ogg"
			};
			sabot[]=
			{
				"DEFAULT\weapons\cannonLow.ogg"
			};
			mgun[]=
			{
				"DEFAULT\weapons\MachineGun.ogg"
			};
			NO_SPEECH[]={};
			empty[]={};
			Advance[]=
			{
				"STEALTH\Advance.ogg"
			};
			And[]=
			{
				"STEALTH\And.ogg"
			};
			Are[]=
			{
				"STEALTH\Are.ogg"
			};
			AreaClear[]=
			{
				"DEFAULT\AreaClear.ogg"
			};
			At[]=
			{
				"DEFAULT\At.ogg"
			};
			AtEase[]=
			{
				"STEALTH\AtEase.ogg"
			};
			AttackE[]=
			{
				"STEALTH\AttackE.ogg"
			};
			AttackingE[]=
			{
				"DEFAULT\AttackingE.ogg"
			};
			AttackThat[]=
			{
				"STEALTH\AttackThat.ogg"
			};
			BailOutE[]=
			{
				"DEFAULT\BailOutE.ogg"
			};
			BeAdvised[]=
			{
				"STEALTH\BeAdvised.ogg"
			};
			BingoFuel[]=
			{
				"DEFAULT\BingoFuel.ogg"
			};
			BlueOnBlueE[]=
			{
				"DEFAULT\BlueOnBlueE.ogg"
			};
			BoardThat[]=
			{
				"STEALTH\BoardThat.ogg"
			};
			CancelManualFire[]=
			{
				"DEFAULT\CancelManualFire.ogg"
			};
			CancelTarget[]=
			{
				"DEFAULT\CancelTarget.ogg"
			};
			CannotFire[]=
			{
				"STEALTH\CannotFire.ogg"
			};
			CantGetThereE[]=
			{
				"STEALTH\CantGetThereE.ogg"
			};
			CantMakeItThere[]=
			{
				"DEFAULT\CantMakeItThere.ogg"
			};
			CantShoot[]=
			{
				"DEFAULT\CantShoot.ogg"
			};
			CeaseFireE[]=
			{
				"DEFAULT\CeaseFireE.ogg"
			};
			Clear[]=
			{
				"STEALTH\Clear.ogg"
			};
			CloseThatDoor[]=
			{
				"STEALTH\CloseThatDoor.ogg"
			};
			Commander[]=
			{
				"STEALTH\Commander.ogg"
			};
			ContactE[]=
			{
				"STEALTH\ContactE.ogg"
			};
			Copy[]=
			{
				"STEALTH\Copy.ogg"
			};
			CopyMyStance[]=
			{
				"STEALTH\CopyMyStance.ogg"
			};
			CriticalDamageE[]=
			{
				"DEFAULT\CriticalDamageE.ogg"
			};
			DangerE[]=
			{
				"STEALTH\DangerE.ogg"
			};
			DeactivateCharge[]=
			{
				"STEALTH\DeactivateCharge.ogg"
			};
			DetonateCharge[]=
			{
				"STEALTH\DetonateCharge.ogg"
			};
			DisarmThatMine[]=
			{
				"STEALTH\DisarmThatMine.ogg"
			};
			Disembark[]=
			{
				"DEFAULT\Disembark.ogg"
			};
			Disengage[]=
			{
				"STEALTH\Disengage.ogg"
			};
			Dismount[]=
			{
				"STEALTH\Dismount.ogg"
			};
			DoYouReadQ[]=
			{
				"DEFAULT\DoYouReadQ.ogg"
			};
			Driver[]=
			{
				"STEALTH\Driver.ogg"
			};
			DropThat[]=
			{
				"STEALTH\DropThat.ogg"
			};
			EjectE[]=
			{
				"STEALTH\EjectE.ogg"
			};
			EnemyFireE[]=
			{
				"DEFAULT\EnemyFireE.ogg"
			};
			EngageAtWill[]=
			{
				"STEALTH\EngageAtWill.ogg"
			};
			EngageE[]=
			{
				"STEALTH\EngageE.ogg"
			};
			EngageThat[]=
			{
				"STEALTH\EngageThat.ogg"
			};
			EngagingE[]=
			{
				"STEALTH\EngagingE.ogg"
			};
			EngagingTargetE[]=
			{
				"DEFAULT\EngagingTargetE.ogg"
			};
			EyesOnTarget[]=
			{
				"STEALTH\EyesOnTarget.ogg"
			};
			FallBackE[]=
			{
				"STEALTH\FallBackE.ogg"
			};
			Fast[]=
			{
				"DEFAULT\Fast.ogg"
			};
			Fire[]=
			{
				"STEALTH\Fire.ogg"
			};
			FireAtThat[]=
			{
				"STEALTH\FireAtThat.ogg"
			};
			FireAtWill[]=
			{
				"STEALTH\FireAtWill.ogg"
			};
			FireOnMyLead[]=
			{
				"DEFAULT\FireOnMyLead.ogg"
			};
			FlankLeft[]=
			{
				"STEALTH\FlankLeft.ogg"
			};
			FlankRight[]=
			{
				"STEALTH\FlankRight.ogg"
			};
			Follow[]=
			{
				"STEALTH\Follow.ogg"
			};
			FormColumn[]=
			{
				"STEALTH\formation\FormColumn.ogg"
			};
			FormDiamond[]=
			{
				"STEALTH\formation\FormDiamond.ogg"
			};
			FormEcholonLeft[]=
			{
				"STEALTH\formation\FormEcholonLeft.ogg"
			};
			FormEcholonRight[]=
			{
				"STEALTH\formation\FormEcholonRight.ogg"
			};
			FormFile[]=
			{
				"STEALTH\formation\FormFile.ogg"
			};
			FormLine[]=
			{
				"STEALTH\formation\FormLine.ogg"
			};
			FormStaggeredColumn[]=
			{
				"STEALTH\formation\FormStaggeredColumn.ogg"
			};
			FormVee[]=
			{
				"STEALTH\formation\FormVee.ogg"
			};
			FormWedge[]=
			{
				"STEALTH\formation\FormWedge.ogg"
			};
			FormOnMeE[]=
			{
				"DEFAULT\FormOnMeE.ogg"
			};
			Forward[]=
			{
				"DEFAULT\Forward.ogg"
			};
			FreeToEngage[]=
			{
				"DEFAULT\FreeToEngage.ogg"
			};
			GetBackE[]=
			{
				"STEALTH\GetBackE.ogg"
			};
			GetDownE[]=
			{
				"STEALTH\GetDownE.ogg"
			};
			GetInThat[]=
			{
				"STEALTH\GetInThat.ogg"
			};
			GetSupportAt[]=
			{
				"STEALTH\GetSupportAt.ogg"
			};
			GiveEmHellE[]=
			{
				"DEFAULT\GiveEmHellE.ogg"
			};
			GoGoGoE[]=
			{
				"DEFAULT\GoGoGoE.ogg"
			};
			GoProne[]=
			{
				"STEALTH\GoProne.ogg"
			};
			Gunner[]=
			{
				"STEALTH\Gunner.ogg"
			};
			Halt[]=
			{
				"STEALTH\Halt.ogg"
			};
			HealThat[]=
			{
				"STEALTH\HealThat.ogg"
			};
			HealYourself[]=
			{
				"STEALTH\HealYourself.ogg"
			};
			HesDownE[]=
			{
				"STEALTH\HesDownE.ogg"
			};
			HitTheDirt[]=
			{
				"STEALTH\HitTheDirt.ogg"
			};
			HoldFire[]=
			{
				"STEALTH\HoldFire.ogg"
			};
			HostileDownE[]=
			{
				"DEFAULT\HostileDownE.ogg"
			};
			HostilesE[]=
			{
				"STEALTH\HostilesE.ogg"
			};
			CheckYourFireE[]=
			{
				"STEALTH\CheckYourFireE.ogg"
			};
			ImAtGrid[]=
			{
				"STEALTH\ImAtGrid.ogg"
			};
			Grid[]=
			{
				"STEALTH\Grid.ogg"
			};
			ImOnHim[]=
			{
				"DEFAULT\ImOnHim.ogg"
			};
			ImTheNewActual[]=
			{
				"DEFAULT\ImTheNewActual.ogg"
			};
			Is[]=
			{
				"STEALTH\Is.ogg"
			};
			IsDownE[]=
			{
				"STEALTH\IsDownE.ogg"
			};
			IsDead[]=
			{
				"DEFAULT\IsDead.ogg"
			};
			IsHistory[]=
			{
				"DEFAULT\IsHistory.ogg"
			};
			Injured[]=
			{
				"STEALTH\Injured.ogg"
			};
			IveGotHimE[]=
			{
				"STEALTH\IveGotHimE.ogg"
			};
			Left[]=
			{
				"STEALTH\Left.ogg"
			};
			LightEmUpE[]=
			{
				"DEFAULT\LightEmUpE.ogg"
			};
			LightThatFire[]=
			{
				"STEALTH\LightThatFire.ogg"
			};
			MaintainFormation[]=
			{
				"DEFAULT\MaintainFormation.ogg"
			};
			ManualFire[]=
			{
				"DEFAULT\ManualFire.ogg"
			};
			MedicE[]=
			{
				"STEALTH\MedicE.ogg"
			};
			NeedHelpE[]=
			{
				"STEALTH\NeedHelpE.ogg"
			};
			Negative[]=
			{
				"STEALTH\Negative.ogg"
			};
			NoCanDo[]=
			{
				"STEALTH\NoCanDo.ogg"
			};
			NoMoreAmmoE[]=
			{
				"DEFAULT\NoMoreAmmoE.ogg"
			};
			NoTarget[]=
			{
				"STEALTH\NoTarget.ogg"
			};
			ObserveThat[]=
			{
				"DEFAULT\ObserveThat.ogg"
			};
			ObserveThatPosition[]=
			{
				"STEALTH\ObserveThatPosition.ogg"
			};
			OnTheWay[]=
			{
				"STEALTH\OnTheWay.ogg"
			};
			OpenThatDoor[]=
			{
				"STEALTH\OpenThatDoor.ogg"
			};
			OpenUpE[]=
			{
				"DEFAULT\OpenUpE.ogg"
			};
			OscarMike[]=
			{
				"STEALTH\OscarMike.ogg"
			};
			OutOfAmmoE[]=
			{
				"STEALTH\OutOfAmmoE.ogg"
			};
			OutOfFuelE[]=
			{
				"DEFAULT\OutOfFuelE.ogg"
			};
			Over[]=
			{
				"STEALTH\Over.ogg"
			};
			Pilot[]=
			{
				"STEALTH\Pilot.ogg"
			};
			PutOutThatFire[]=
			{
				"STEALTH\PutOutThatFire.ogg"
			};
			PlaceAMine[]=
			{
				"DEFAULT\PlaceAMine.ogg"
			};
			Ready[]=
			{
				"STEALTH\Ready.ogg"
			};
			ReadyToFire[]=
			{
				"STEALTH\ReadyToFire.ogg"
			};
			RegroupE[]=
			{
				"DEFAULT\RegroupE.ogg"
			};
			RepeatLast[]=
			{
				"STEALTH\RepeatLast.ogg"
			};
			ReportPositionE[]=
			{
				"DEFAULT\ReportPositionE.ogg"
			};
			Position[]=
			{
				"STEALTH\Position.ogg"
			};
			ReportStatus[]=
			{
				"STEALTH\ReportStatus.ogg"
			};
			RequestingSupportTo[]=
			{
				"STEALTH\RequestingSupportTo.ogg"
			};
			ReturnTheFlag[]=
			{
				"DEFAULT\ReturnTheFlag.ogg"
			};
			ReturnToFormationE[]=
			{
				"DEFAULT\ReturnToFormationE.ogg"
			};
			Reverse[]=
			{
				"DEFAULT\Reverse.ogg"
			};
			Right[]=
			{
				"DEFAULT\Right.ogg"
			};
			Roger[]=
			{
				"STEALTH\Roger.ogg"
			};
			RunningOutOfAmmo[]=
			{
				"STEALTH\RunningOutOfAmmo.ogg"
			};
			RunningOutOfFuel[]=
			{
				"DEFAULT\RunningOutOfFuel.ogg"
			};
			SayAgain[]=
			{
				"STEALTH\SayAgain.ogg"
			};
			ScanHorizon[]=
			{
				"STEALTH\ScanHorizon.ogg"
			};
			ScratchOneE[]=
			{
				"DEFAULT\ScratchOneE.ogg"
			};
			SetACharge[]=
			{
				"STEALTH\SetACharge.ogg"
			};
			SetTheTimer[]=
			{
				"STEALTH\SetTheTimer.ogg"
			};
			Slow[]=
			{
				"DEFAULT\Slow.ogg"
			};
			SolidCopy[]=
			{
				"STEALTH\SolidCopy.ogg"
			};
			SomebodyHelpMeE[]=
			{
				"DEFAULT\SomebodyHelpMeE.ogg"
			};
			StandingBy[]=
			{
				"STEALTH\StandingBy.ogg"
			};
			StandUp[]=
			{
				"STEALTH\StandUp.ogg"
			};
			StatusRedE[]=
			{
				"STEALTH\StatusRedE.ogg"
			};
			StayAlert[]=
			{
				"STEALTH\StayAlert.ogg"
			};
			StayBack[]=
			{
				"STEALTH\StayBack.ogg"
			};
			StayCrouched[]=
			{
				"STEALTH\StayCrouched.ogg"
			};
			StayInFormationE[]=
			{
				"DEFAULT\StayInFormationE.ogg"
			};
			Stealth[]=
			{
				"STEALTH\Stealth.ogg"
			};
			StopE[]=
			{
				"STEALTH\StopE.ogg"
			};
			Supporting[]=
			{
				"STEALTH\Supporting.ogg"
			};
			SuppressiveFireE[]=
			{
				"DEFAULT\SuppressiveFireE.ogg"
			};
			TakeCoverE[]=
			{
				"STEALTH\TakeCoverE.ogg"
			};
			TakeThat[]=
			{
				"STEALTH\TakeThat.ogg"
			};
			TakeThatMine[]=
			{
				"STEALTH\TakeThatMine.ogg"
			};
			TakeTheFlag[]=
			{
				"STEALTH\TakeTheFlag.ogg"
			};
			TakingCommand[]=
			{
				"STEALTH\TakingCommand.ogg"
			};
			TakingFireE[]=
			{
				"STEALTH\TakingFireE.ogg"
			};
			TargetAcquired[]=
			{
				"DEFAULT\TargetAcquired.ogg"
			};
			TargetEliminated[]=
			{
				"STEALTH\TargetEliminated.ogg"
			};
			TargetInSight[]=
			{
				"STEALTH\TargetInSight.ogg"
			};
			TargetThat[]=
			{
				"STEALTH\TargetThat.ogg"
			};
			UnderFireE[]=
			{
				"STEALTH\UnderFireE.ogg"
			};
			Understood[]=
			{
				"STEALTH\Understood.ogg"
			};
			Waiting[]=
			{
				"STEALTH\Waiting.ogg"
			};
			WaitForMe[]=
			{
				"DEFAULT\WaitForMe.ogg"
			};
			Watch[]=
			{
				"STEALTH\Watch.ogg"
			};
			WatchThat[]=
			{
				"STEALTH\WatchThat.ogg"
			};
			WeaponsFree[]=
			{
				"STEALTH\WeaponsFree.ogg"
			};
			WeaponsHot[]=
			{
				"DEFAULT\WeaponsHot.ogg"
			};
			WeLost[]=
			{
				"STEALTH\WeLost.ogg"
			};
			WhereAreYouQ[]=
			{
				"STEALTH\WhereAreYouQ.ogg"
			};
			WoundedE[]=
			{
				"STEALTH\WoundedE.ogg"
			};
			AssembleThat[]=
			{
				"STEALTH\AssembleThat.ogg"
			};
			DisassembleThat[]=
			{
				"STEALTH\DisassembleThat.ogg"
			};
			FlashlightsOn[]=
			{
				"STEALTH\FlashlightsOn.ogg"
			};
			FlashlightsOff[]=
			{
				"STEALTH\FlashlightsOff.ogg"
			};
			LasersOn[]=
			{
				"STEALTH\LasersOn.ogg"
			};
			LasersOff[]=
			{
				"STEALTH\LasersOff.ogg"
			};
			FuckE[]=
			{
				"STEALTH\FuckE.ogg"
			};
			Enemy[]=
			{
				"STEALTH\side\Enemy.ogg"
			};
			Unknown[]={};
			Friendly[]=
			{
				"STEALTH\side\Friendly.ogg"
			};
			Neutral[]=
			{
				"STEALTH\side\Neutral.ogg"
			};
			Of[]=
			{
				"STEALTH\Of.ogg"
			};
			OfYou[]=
			{
				"STEALTH\OfYou.ogg"
			};
			OfMe[]=
			{
				"STEALTH\OfMe.ogg"
			};
			Move[]=
			{
				"STEALTH\Move.ogg"
			};
			MoveTo[]=
			{
				"STEALTH\MoveTo.ogg"
			};
			MoveToThat[]=
			{
				"STEALTH\MoveToThat.ogg"
			};
			GoTo[]=
			{
				"STEALTH\GoTo.ogg"
			};
			GoToThat[]=
			{
				"STEALTH\GoToThat.ogg"
			};
			That[]=
			{
				"STEALTH\That.ogg"
			};
			ToOur[]=
			{
				"STEALTH\ToOur.ogg"
			};
			ToThe[]=
			{
				"STEALTH\ToThe.ogg"
			};
			FromMe[]=
			{
				"STEALTH\FromMe.ogg"
			};
			OfYourPosition[]=
			{
				"STEALTH\OfYourPosition.ogg"
			};
			In[]=
			{
				"STEALTH\In.ogg"
			};
			Us[]=
			{
				"STEALTH\Us.ogg"
			};
			inFrontOf[]=
			{
				"STEALTH\inFrontOf.ogg"
			};
			rightOf[]=
			{
				"STEALTH\rightOf.ogg"
			};
			behind[]=
			{
				"STEALTH\behind.ogg"
			};
			leftOf[]=
			{
				"STEALTH\leftOf.ogg"
			};
			rightFlank[]=
			{
				"STEALTH\rightFlank.ogg"
			};
			leftFlank[]=
			{
				"STEALTH\leftFlank.ogg"
			};
			dangerCloseTo[]=
			{
				"STEALTH\dangerCloseTo.ogg"
			};
			closeTo[]=
			{
				"STEALTH\closeTo.ogg"
			};
			notFarFrom[]=
			{
				"STEALTH\notFarFrom.ogg"
			};
			farFrom[]=
			{
				"STEALTH\farFrom.ogg"
			};
			Just[]=
			{
				"STEALTH\Just.ogg"
			};
			Way[]=
			{
				"STEALTH\Way.ogg"
			};
			damnClose[]=
			{
				"STEALTH\damnClose.ogg"
			};
			All[]=
			{
				"STEALTH\numbers\All.ogg"
			};
			Zero[]=
			{
				"STEALTH\numbers\Zero.ogg"
			};
			One[]=
			{
				"STEALTH\numbers\One.ogg"
			};
			Two[]=
			{
				"STEALTH\numbers\Two.ogg"
			};
			Three[]=
			{
				"STEALTH\numbers\Three.ogg"
			};
			Four[]=
			{
				"STEALTH\numbers\Four.ogg"
			};
			Five[]=
			{
				"STEALTH\numbers\Five.ogg"
			};
			Six[]=
			{
				"STEALTH\numbers\Six.ogg"
			};
			Seven[]=
			{
				"STEALTH\numbers\Seven.ogg"
			};
			Eight[]=
			{
				"STEALTH\numbers\Eight.ogg"
			};
			nine[]=
			{
				"STEALTH\numbers\nine.ogg"
			};
			Ten[]=
			{
				"STEALTH\numbers\Ten.ogg"
			};
			Eleven[]=
			{
				"STEALTH\numbers\Eleven.ogg"
			};
			Twelve[]=
			{
				"STEALTH\numbers\Twelve.ogg"
			};
			Thirteen[]=
			{
				"STEALTH\numbers\Thirteen.ogg"
			};
			Fourteen[]=
			{
				"STEALTH\numbers\Fourteen.ogg"
			};
			Fifteen[]=
			{
				"STEALTH\numbers\Fifteen.ogg"
			};
			Sixteen[]=
			{
				"STEALTH\numbers\Sixteen.ogg"
			};
			Seventeen[]=
			{
				"STEALTH\numbers\Seventeen.ogg"
			};
			Eighteen[]=
			{
				"STEALTH\numbers\Eighteen.ogg"
			};
			Nineteen[]=
			{
				"STEALTH\numbers\Nineteen.ogg"
			};
			Twenty[]=
			{
				"STEALTH\numbers\Twenty.ogg"
			};
			Thirty[]=
			{
				"STEALTH\numbers\Thirty.ogg"
			};
			Forty[]=
			{
				"STEALTH\numbers\Forty.ogg"
			};
			Fifty[]=
			{
				"STEALTH\numbers\Fifty.ogg"
			};
			Sixty[]=
			{
				"STEALTH\numbers\Sixty.ogg"
			};
			Seventy[]=
			{
				"STEALTH\numbers\Seventy.ogg"
			};
			Eighty[]=
			{
				"STEALTH\numbers\Eighty.ogg"
			};
			Ninety[]=
			{
				"STEALTH\numbers\Ninety.ogg"
			};
			Hundred[]=
			{
				"STEALTH\numbers\Hundred.ogg"
			};
			zero2[]=
			{
				"STEALTH\mapcoords\zero2.ogg"
			};
			one2[]=
			{
				"STEALTH\mapcoords\one2.ogg"
			};
			two2[]=
			{
				"STEALTH\mapcoords\two2.ogg"
			};
			three2[]=
			{
				"STEALTH\mapcoords\three2.ogg"
			};
			four2[]=
			{
				"STEALTH\mapcoords\four2.ogg"
			};
			five2[]=
			{
				"STEALTH\mapcoords\five2.ogg"
			};
			six2[]=
			{
				"STEALTH\mapcoords\six2.ogg"
			};
			seven2[]=
			{
				"STEALTH\mapcoords\seven2.ogg"
			};
			eight2[]=
			{
				"STEALTH\mapcoords\eight2.ogg"
			};
			nine2[]=
			{
				"STEALTH\mapcoords\nine2.ogg"
			};
			Alpha[]=
			{
				"STEALTH\alphabet\Alpha.ogg"
			};
			Bravo[]=
			{
				"STEALTH\alphabet\Bravo.ogg"
			};
			Charlie[]=
			{
				"STEALTH\alphabet\Charlie.ogg"
			};
			Delta[]=
			{
				"STEALTH\alphabet\Delta.ogg"
			};
			Echo[]=
			{
				"STEALTH\alphabet\Echo.ogg"
			};
			Fotxtrot[]=
			{
				"STEALTH\alphabet\Fotxtrot.ogg"
			};
			Golf[]=
			{
				"STEALTH\alphabet\Golf.ogg"
			};
			Hotel[]=
			{
				"STEALTH\alphabet\Hotel.ogg"
			};
			India[]=
			{
				"STEALTH\alphabet\India.ogg"
			};
			Juliet[]=
			{
				"STEALTH\alphabet\Juliet.ogg"
			};
			Kilo[]=
			{
				"STEALTH\alphabet\Kilo.ogg"
			};
			Lima[]=
			{
				"STEALTH\alphabet\Lima.ogg"
			};
			Mike[]=
			{
				"STEALTH\alphabet\Mike.ogg"
			};
			November[]=
			{
				"STEALTH\alphabet\November.ogg"
			};
			Oscar[]=
			{
				"STEALTH\alphabet\Oscar.ogg"
			};
			Papa[]=
			{
				"STEALTH\alphabet\Papa.ogg"
			};
			Quebec[]=
			{
				"STEALTH\alphabet\Quebec.ogg"
			};
			Romeo[]=
			{
				"STEALTH\alphabet\Romeo.ogg"
			};
			Sierra[]=
			{
				"STEALTH\alphabet\Sierra.ogg"
			};
			Tango[]=
			{
				"STEALTH\alphabet\Tango.ogg"
			};
			Uniform[]=
			{
				"STEALTH\alphabet\Uniform.ogg"
			};
			Victor[]=
			{
				"STEALTH\alphabet\Victor.ogg"
			};
			Whiskey[]=
			{
				"STEALTH\alphabet\Whiskey.ogg"
			};
			Xray[]=
			{
				"STEALTH\alphabet\Xray.ogg"
			};
			Yankee[]=
			{
				"STEALTH\alphabet\Yankee.ogg"
			};
			Zulu[]=
			{
				"STEALTH\alphabet\Zulu.ogg"
			};
			Angel[]=
			{
				"DEFAULT\alphabet\Angel.ogg"
			};
			Bride[]=
			{
				"DEFAULT\alphabet\Bride.ogg"
			};
			Chocolate[]=
			{
				"DEFAULT\alphabet\Chocolate.ogg"
			};
			Dad[]=
			{
				"DEFAULT\alphabet\Dad.ogg"
			};
			HQ[]=
			{
				"DEFAULT\team\HQ.ogg"
			};
			Frostbite[]=
			{
				"DEFAULT\team\Frostbite.ogg"
			};
			Base[]=
			{
				"DEFAULT\team\Base.ogg"
			};
			Command[]=
			{
				"DEFAULT\team\Command.ogg"
			};
			Battlemage[]=
			{
				"DEFAULT\team\Battlemage.ogg"
			};
			Manhattan[]=
			{
				"DEFAULT\team\Manhattan.ogg"
			};
			Firefly[]=
			{
				"DEFAULT\team\Firefly.ogg"
			};
			Razor[]=
			{
				"DEFAULT\team\Razor.ogg"
			};
			Swordsman[]=
			{
				"DEFAULT\team\Swordsman.ogg"
			};
			Sabre[]=
			{
				"DEFAULT\team\Sabre.ogg"
			};
			StarForce[]=
			{
				"DEFAULT\team\StarForce.ogg"
			};
			Super[]=
			{
				"DEFAULT\team\Super.ogg"
			};
			Hammer[]=
			{
				"DEFAULT\team\Hammer.ogg"
			};
			Reaper[]=
			{
				"DEFAULT\team\Reaper.ogg"
			};
			Fatman[]=
			{
				"DEFAULT\team\Fatman.ogg"
			};
			Fortune[]=
			{
				"DEFAULT\team\Fortune.ogg"
			};
			Anvil[]=
			{
				"DEFAULT\team\Anvil.ogg"
			};
			Revolver[]=
			{
				"DEFAULT\team\Revolver.ogg"
			};
			Winchester[]=
			{
				"DEFAULT\team\Winchester.ogg"
			};
			Arizona[]=
			{
				"DEFAULT\team\Arizona.ogg"
			};
			Warmonger[]=
			{
				"DEFAULT\team\Warmonger.ogg"
			};
			Citizen[]=
			{
				"DEFAULT\team\Citizen.ogg"
			};
			Utah[]=
			{
				"DEFAULT\team\Utah.ogg"
			};
			Demon[]=
			{
				"DEFAULT\team\Demon.ogg"
			};
			Bandit[]=
			{
				"DEFAULT\team\Bandit.ogg"
			};
			Mohican[]=
			{
				"DEFAULT\team\Mohican.ogg"
			};
			Dustoff[]=
			{
				"DEFAULT\team\Dustoff.ogg"
			};
			whiteTeam[]=
			{
				"STEALTH\team\whiteTeam.ogg"
			};
			redTeam[]=
			{
				"STEALTH\team\redTeam.ogg"
			};
			greenTeam[]=
			{
				"STEALTH\team\greenTeam.ogg"
			};
			blueTeam[]=
			{
				"STEALTH\team\blueTeam.ogg"
			};
			yellowTeam[]=
			{
				"STEALTH\team\yellowTeam.ogg"
			};
			allGroup[]=
			{
				"STEALTH\team\allGroup.ogg"
			};
			at1[]=
			{
				"STEALTH\clockfacing\at1.ogg"
			};
			at2[]=
			{
				"STEALTH\clockfacing\at2.ogg"
			};
			at3[]=
			{
				"STEALTH\clockfacing\at3.ogg"
			};
			at4[]=
			{
				"STEALTH\clockfacing\at4.ogg"
			};
			at5[]=
			{
				"STEALTH\clockfacing\at5.ogg"
			};
			at6[]=
			{
				"STEALTH\clockfacing\at6.ogg"
			};
			at7[]=
			{
				"STEALTH\clockfacing\at7.ogg"
			};
			at8[]=
			{
				"STEALTH\clockfacing\at8.ogg"
			};
			at9[]=
			{
				"STEALTH\clockfacing\at9.ogg"
			};
			at10[]=
			{
				"STEALTH\clockfacing\at10.ogg"
			};
			at11[]=
			{
				"STEALTH\clockfacing\at11.ogg"
			};
			at12[]=
			{
				"STEALTH\clockfacing\at12.ogg"
			};
			dist50[]=
			{
				"STEALTH\distance\dist50.ogg"
			};
			dist100[]=
			{
				"STEALTH\distance\dist100.ogg"
			};
			dist200[]=
			{
				"STEALTH\distance\dist200.ogg"
			};
			dist500[]=
			{
				"STEALTH\distance\dist500.ogg"
			};
			dist1000[]=
			{
				"STEALTH\distance\dist1000.ogg"
			};
			dist2000[]=
			{
				"STEALTH\distance\dist2000.ogg"
			};
			distFar[]=
			{
				"STEALTH\distance\distFar.ogg"
			};
			Meters[]=
			{
				"STEALTH\distance\Meters.ogg"
			};
			North[]=
			{
				"STEALTH\direction\North.ogg"
			};
			South[]=
			{
				"STEALTH\direction\South.ogg"
			};
			West[]=
			{
				"STEALTH\direction\West.ogg"
			};
			East[]=
			{
				"STEALTH\direction\East.ogg"
			};
			Northwest[]=
			{
				"STEALTH\direction\Northwest.ogg"
			};
			Southwest[]=
			{
				"STEALTH\direction\Southwest.ogg"
			};
			Northeast[]=
			{
				"STEALTH\direction\Northeast.ogg"
			};
			Southeast[]=
			{
				"STEALTH\direction\Southeast.ogg"
			};
			NorthOf[]=
			{
				"STEALTH\direction\NorthOf.ogg"
			};
			SouthOf[]=
			{
				"STEALTH\direction\SouthOf.ogg"
			};
			WestOf[]=
			{
				"STEALTH\direction\WestOf.ogg"
			};
			EastOf[]=
			{
				"STEALTH\direction\EastOf.ogg"
			};
			NorthEastOf[]=
			{
				"STEALTH\direction\NorthEastOf.ogg"
			};
			SouthEastOf[]=
			{
				"STEALTH\direction\SouthEastOf.ogg"
			};
			NorthWestOf[]=
			{
				"STEALTH\direction\NorthWestOf.ogg"
			};
			SouthWestOf[]=
			{
				"STEALTH\direction\SouthWestOf.ogg"
			};
			front[]=
			{
				"STEALTH\direction\front.ogg"
			};
			rear[]=
			{
				"STEALTH\direction\rear.ogg"
			};
			Close[]=
			{
				"STEALTH\direction\Close.ogg"
			};
			MediumRange[]=
			{
				"STEALTH\direction\MediumRange.ogg"
			};
			Far[]=
			{
				"STEALTH\direction\Far.ogg"
			};
			Bombs[]=
			{
				"STEALTH\weapons\Bombs.ogg"
			};
			cannonHigh[]=
			{
				"STEALTH\weapons\cannonHigh.ogg"
			};
			cannonLow[]=
			{
				"STEALTH\weapons\cannonLow.ogg"
			};
			Flares[]=
			{
				"STEALTH\weapons\Flares.ogg"
			};
			Missiles[]=
			{
				"STEALTH\weapons\Missiles.ogg"
			};
			Rockets[]=
			{
				"STEALTH\weapons\Rockets.ogg"
			};
			Smoke[]=
			{
				"STEALTH\weapons\Smoke.ogg"
			};
			AALauncher[]=
			{
				"STEALTH\weapons\AALauncher.ogg"
			};
			ATLauncher[]=
			{
				"STEALTH\weapons\ATLauncher.ogg"
			};
			Backpack[]=
			{
				"STEALTH\weapons\Backpack.ogg"
			};
			Binocular[]=
			{
				"STEALTH\weapons\Binocular.ogg"
			};
			Flare[]=
			{
				"STEALTH\weapons\Flare.ogg"
			};
			Grenade[]=
			{
				"STEALTH\weapons\Grenade.ogg"
			};
			GrenadeLauncher[]=
			{
				"STEALTH\weapons\GrenadeLauncher.ogg"
			};
			HandGrenade[]=
			{
				"STEALTH\weapons\HandGrenade.ogg"
			};
			LaserDesignator[]=
			{
				"STEALTH\weapons\LaserDesignator.ogg"
			};
			Magazine[]=
			{
				"STEALTH\weapons\Magazine.ogg"
			};
			MachineGun[]=
			{
				"STEALTH\weapons\MachineGun.ogg"
			};
			Mine[]=
			{
				"STEALTH\weapons\Mine.ogg"
			};
			NVG[]=
			{
				"STEALTH\weapons\NVG.ogg"
			};
			Rifle[]=
			{
				"STEALTH\weapons\Rifle.ogg"
			};
			Charge[]=
			{
				"STEALTH\weapons\Charge.ogg"
			};
			Handgun[]=
			{
				"STEALTH\weapons\Handgun.ogg"
			};
			SmokeShell[]=
			{
				"STEALTH\weapons\SmokeShell.ogg"
			};
			SniperRifle[]=
			{
				"STEALTH\weapons\SniperRifle.ogg"
			};
			veh_man[]=
			{
				"STEALTH\vehicles\man.ogg"
			};
			veh_woman[]=
			{
				"STEALTH\vehicles\woman.ogg"
			};
			veh_soldier[]=
			{
				"STEALTH\vehicles\soldier.ogg"
			};
			veh_launcherSoldier[]=
			{
				"STEALTH\vehicles\launcherSoldier.ogg"
			};
			veh_Sniper[]=
			{
				"STEALTH\vehicles\Sniper.ogg"
			};
			veh_Medic[]=
			{
				"STEALTH\vehicles\Medic.ogg"
			};
			veh_SpecialForce[]=
			{
				"STEALTH\vehicles\SpecialForce.ogg"
			};
			veh_MGunner[]=
			{
				"STEALTH\vehicles\MGunner.ogg"
			};
			veh_officer[]=
			{
				"STEALTH\vehicles\officer.ogg"
			};
			veh_crew[]=
			{
				"STEALTH\vehicles\crew.ogg"
			};
			veh_pilot[]=
			{
				"STEALTH\vehicles\pilot.ogg"
			};
			veh_vehicle[]=
			{
				"STEALTH\vehicles\vehicle.ogg"
			};
			veh_bike[]=
			{
				"STEALTH\vehicles\bike.ogg"
			};
			veh_motorcycle[]=
			{
				"STEALTH\vehicles\motorcycle.ogg"
			};
			veh_car[]=
			{
				"STEALTH\vehicles\car.ogg"
			};
			veh_technical[]=
			{
				"STEALTH\vehicles\technical.ogg"
			};
			veh_supportTruck[]=
			{
				"STEALTH\vehicles\supportTruck.ogg"
			};
			veh_truck[]=
			{
				"STEALTH\vehicles\truck.ogg"
			};
			veh_APC[]=
			{
				"STEALTH\vehicles\APC.ogg"
			};
			veh_WheeledAPC[]=
			{
				"STEALTH\vehicles\APC.ogg"
			};
			veh_TrackedAPC[]=
			{
				"STEALTH\vehicles\APC.ogg"
			};
			veh_unknown[]=
			{
				"STEALTH\side\unknown.ogg"
			};
			veh_tractor[]=
			{
				"STEALTH\vehicles\tractor.ogg"
			};
			veh_bus[]=
			{
				"STEALTH\vehicles\bus.ogg"
			};
			veh_tank[]=
			{
				"STEALTH\vehicles\tank.ogg"
			};
			veh_MobileHQ[]=
			{
				"STEALTH\vehicles\MobileHQ.ogg"
			};
			veh_ship[]=
			{
				"STEALTH\vehicles\ship.ogg"
			};
			veh_mobileArtillery[]=
			{
				"STEALTH\vehicles\mobileArtillery.ogg"
			};
			veh_StaticMGWeapon[]=
			{
				"STEALTH\vehicles\StaticMGWeapon.ogg"
			};
			veh_StaticMortar[]=
			{
				"STEALTH\vehicles\StaticMortar.ogg"
			};
			veh_searchLight[]=
			{
				"STEALTH\vehicles\searchLight.ogg"
			};
			veh_staticgrenadelauncher[]=
			{
				"STEALTH\vehicles\staticgrenadelauncher.ogg"
			};
			veh_staticCannon[]=
			{
				"STEALTH\vehicles\staticCannon.ogg"
			};
			veh_staticATLauncher[]=
			{
				"STEALTH\vehicles\staticATLauncher.ogg"
			};
			veh_staticAALauncher[]=
			{
				"STEALTH\vehicles\staticAALauncher.ogg"
			};
			veh_aircraft[]=
			{
				"STEALTH\vehicles\aircraft.ogg"
			};
			veh_parachute[]=
			{
				"STEALTH\vehicles\parachute.ogg"
			};
			veh_airplane[]=
			{
				"STEALTH\vehicles\airplane.ogg"
			};
			veh_cargoAirplane[]=
			{
				"STEALTH\vehicles\cargoAirplane.ogg"
			};
			veh_attackAirplane[]=
			{
				"STEALTH\vehicles\attackAirplane.ogg"
			};
			veh_UAV[]=
			{
				"STEALTH\vehicles\UAV.ogg"
			};
			veh_helicopter[]=
			{
				"STEALTH\vehicles\helicopter.ogg"
			};
			veh_gunship[]=
			{
				"STEALTH\vehicles\gunship.ogg"
			};
			veh_animal[]=
			{
				"STEALTH\vehicles\animal.ogg"
			};
			veh_boat[]=
			{
				"STEALTH\vehicles\boat.ogg"
			};
			veh_men[]=
			{
				"STEALTH\vehicles\men.ogg"
			};
			veh_women[]=
			{
				"STEALTH\vehicles\women.ogg"
			};
			veh_soldiers[]=
			{
				"STEALTH\vehicles\soldiers.ogg"
			};
			veh_launcherSoldiers[]=
			{
				"STEALTH\vehicles\launcherSoldiers.ogg"
			};
			veh_Snipers[]=
			{
				"STEALTH\vehicles\Snipers.ogg"
			};
			veh_Medics[]=
			{
				"STEALTH\vehicles\Medics.ogg"
			};
			veh_SpecialForces[]=
			{
				"STEALTH\vehicles\SpecialForces.ogg"
			};
			veh_Mgunners[]=
			{
				"STEALTH\vehicles\Mgunners.ogg"
			};
			veh_officers[]=
			{
				"STEALTH\vehicles\officers.ogg"
			};
			veh_crews[]=
			{
				"STEALTH\vehicles\crews.ogg"
			};
			veh_pilots[]=
			{
				"STEALTH\vehicles\pilots.ogg"
			};
			veh_vehicles[]=
			{
				"STEALTH\vehicles\vehicles.ogg"
			};
			veh_bikes[]=
			{
				"STEALTH\vehicles\bikes.ogg"
			};
			veh_motorcycles[]=
			{
				"STEALTH\vehicles\motorcycles.ogg"
			};
			veh_cars[]=
			{
				"STEALTH\vehicles\cars.ogg"
			};
			veh_technicals[]=
			{
				"STEALTH\vehicles\technicals.ogg"
			};
			veh_supportTrucks[]=
			{
				"STEALTH\vehicles\supportTrucks.ogg"
			};
			veh_trucks[]=
			{
				"STEALTH\vehicles\trucks.ogg"
			};
			veh_APCs[]=
			{
				"STEALTH\vehicles\APCs.ogg"
			};
			veh_WheeledAPCs[]=
			{
				"STEALTH\vehicles\APCs.ogg"
			};
			veh_TrackedAPCs[]=
			{
				"STEALTH\vehicles\APC.ogg"
			};
			veh_unknowns[]=
			{
				"STEALTH\side\unknown.ogg"
			};
			veh_tractors[]=
			{
				"STEALTH\vehicles\tractors.ogg"
			};
			veh_buses[]=
			{
				"STEALTH\vehicles\buses.ogg"
			};
			veh_tanks[]=
			{
				"STEALTH\vehicles\tanks.ogg"
			};
			veh_MobileHQs[]=
			{
				"STEALTH\vehicles\MobileHQs.ogg"
			};
			veh_ships[]=
			{
				"STEALTH\vehicles\ships.ogg"
			};
			veh_mobileArtilleryUnits[]=
			{
				"STEALTH\vehicles\mobileArtilleryUnits.ogg"
			};
			veh_StaticMGWeapons[]=
			{
				"STEALTH\vehicles\StaticMGWeapons.ogg"
			};
			veh_StaticMortars[]=
			{
				"STEALTH\vehicles\StaticMortars.ogg"
			};
			veh_searchLights[]=
			{
				"STEALTH\vehicles\searchLights.ogg"
			};
			veh_staticgrenadelaunchers[]=
			{
				"STEALTH\vehicles\staticgrenadelaunchers.ogg"
			};
			veh_staticCannons[]=
			{
				"STEALTH\vehicles\staticCannons.ogg"
			};
			veh_staticATLaunchers[]=
			{
				"STEALTH\vehicles\staticATLaunchers.ogg"
			};
			veh_staticAALaunchers[]=
			{
				"STEALTH\vehicles\staticAALaunchers.ogg"
			};
			veh_aircrafts[]=
			{
				"STEALTH\vehicles\aircrafts.ogg"
			};
			veh_parachutes[]=
			{
				"STEALTH\vehicles\parachutes.ogg"
			};
			veh_airplanes[]=
			{
				"STEALTH\vehicles\airplanes.ogg"
			};
			veh_cargoAirplanes[]=
			{
				"STEALTH\vehicles\cargoAirplanes.ogg"
			};
			veh_attackAirplanes[]=
			{
				"STEALTH\vehicles\attackAirplanes.ogg"
			};
			veh_UAVs[]=
			{
				"STEALTH\vehicles\UAVs.ogg"
			};
			veh_helicopters[]=
			{
				"STEALTH\vehicles\helicopters.ogg"
			};
			veh_gunships[]=
			{
				"STEALTH\vehicles\gunships.ogg"
			};
			veh_animals[]=
			{
				"STEALTH\vehicles\animals.ogg"
			};
			veh_boats[]=
			{
				"STEALTH\vehicles\boats.ogg"
			};
			obj_ammocrate[]=
			{
				"STEALTH\objects\ammocrate.ogg"
			};
			obj_building[]=
			{
				"STEALTH\objects\building.ogg"
			};
			obj_bunker[]=
			{
				"STEALTH\objects\bunker.ogg"
			};
			obj_bush[]=
			{
				"STEALTH\objects\bush.ogg"
			};
			obj_cargoContainer[]=
			{
				"STEALTH\objects\cargoContainer.ogg"
			};
			obj_cross[]=
			{
				"STEALTH\objects\cross.ogg"
			};
			obj_fence[]=
			{
				"STEALTH\objects\fence.ogg"
			};
			obj_flag[]=
			{
				"STEALTH\objects\flag.ogg"
			};
			obj_house[]=
			{
				"STEALTH\objects\house.ogg"
			};
			obj_church[]=
			{
				"STEALTH\objects\church.ogg"
			};
			obj_LaserTarget[]=
			{
				"STEALTH\objects\LaserTarget.ogg"
			};
			obj_object[]=
			{
				"STEALTH\objects\object.ogg"
			};
			obj_rock[]=
			{
				"STEALTH\objects\rock.ogg"
			};
			obj_ruin[]=
			{
				"STEALTH\objects\ruin.ogg"
			};
			obj_structure[]=
			{
				"STEALTH\objects\structure.ogg"
			};
			obj_target[]=
			{
				"STEALTH\objects\target.ogg"
			};
			obj_tent[]=
			{
				"STEALTH\objects\tent.ogg"
			};
			obj_tower[]=
			{
				"STEALTH\objects\tower.ogg"
			};
			obj_tree[]=
			{
				"STEALTH\objects\tree.ogg"
			};
			obj_wall[]=
			{
				"STEALTH\objects\wall.ogg"
			};
			obj_wreck[]=
			{
				"STEALTH\objects\wreck.ogg"
			};
			Kamenyy[]=
			{
				"STEALTH\core\maploc\Kamenyy.ogg"
			};
			Strelka[]=
			{
				"STEALTH\core\maploc\Strelka.ogg"
			};
			Elektrozavodsk[]=
			{
				"STEALTH\core\maploc\Elektrozavodsk.ogg"
			};
			Gorka[]=
			{
				"STEALTH\core\maploc\Gorka.ogg"
			};
			Chernogorsk[]=
			{
				"STEALTH\core\maploc\Chernogorsk.ogg"
			};
			Krasnostav[]=
			{
				"STEALTH\core\maploc\Krasnostav.ogg"
			};
			Solnichniy[]=
			{
				"STEALTH\core\maploc\Solnichniy.ogg"
			};
			StarySobor[]=
			{
				"STEALTH\core\maploc\StarySobor.ogg"
			};
			Vybor[]=
			{
				"STEALTH\core\maploc\Vybor.ogg"
			};
			Zelenogorsk[]=
			{
				"STEALTH\core\maploc\Zelenogorsk.ogg"
			};
			Pusta[]=
			{
				"STEALTH\core\maploc\Pusta.ogg"
			};
			Vyshnoe[]=
			{
				"STEALTH\core\maploc\Vyshnoe.ogg"
			};
			Balota[]=
			{
				"STEALTH\core\maploc\Balota.ogg"
			};
			Bor[]=
			{
				"STEALTH\core\maploc\Bor.ogg"
			};
			Dolina[]=
			{
				"STEALTH\core\maploc\Dolina.ogg"
			};
			Drozhino[]=
			{
				"STEALTH\core\maploc\Drozhino.ogg"
			};
			Dubrovka[]=
			{
				"STEALTH\core\maploc\Dubrovka.ogg"
			};
			Grishino[]=
			{
				"STEALTH\core\maploc\Grishino.ogg"
			};
			Guglovo[]=
			{
				"STEALTH\core\maploc\Guglovo.ogg"
			};
			Gvozdno[]=
			{
				"STEALTH\core\maploc\Gvozdno.ogg"
			};
			Kabanino[]=
			{
				"STEALTH\core\maploc\Kabanino.ogg"
			};
			Kamenka[]=
			{
				"STEALTH\core\maploc\Kamenka.ogg"
			};
			Kamyshovo[]=
			{
				"STEALTH\core\maploc\Kamyshovo.ogg"
			};
			Khelm[]=
			{
				"STEALTH\core\maploc\Khelm.ogg"
			};
			Komarovo[]=
			{
				"STEALTH\core\maploc\Komarovo.ogg"
			};
			Kozlovka[]=
			{
				"STEALTH\core\maploc\Kozlovka.ogg"
			};
			Lopatino[]=
			{
				"STEALTH\core\maploc\Lopatino.ogg"
			};
			Mogilevka[]=
			{
				"STEALTH\core\maploc\Mogilevka.ogg"
			};
			Msta[]=
			{
				"STEALTH\core\maploc\Msta.ogg"
			};
			Myshkino[]=
			{
				"STEALTH\core\maploc\Myshkino.ogg"
			};
			Nadezhdino[]=
			{
				"STEALTH\core\maploc\Nadezhdino.ogg"
			};
			Nizhnoye[]=
			{
				"STEALTH\core\maploc\Nizhnoye.ogg"
			};
			NovySobor[]=
			{
				"STEALTH\core\maploc\NovySobor.ogg"
			};
			Olsha[]=
			{
				"STEALTH\core\maploc\Olsha.ogg"
			};
			Orlovets[]=
			{
				"STEALTH\core\maploc\Orlovets.ogg"
			};
			Pavlovo[]=
			{
				"STEALTH\core\maploc\Pavlovo.ogg"
			};
			Petrovka[]=
			{
				"STEALTH\core\maploc\Petrovka.ogg"
			};
			Pogorevka[]=
			{
				"STEALTH\core\maploc\Pogorevka.ogg"
			};
			Polana[]=
			{
				"STEALTH\core\maploc\Polana.ogg"
			};
			Prigorodki[]=
			{
				"STEALTH\core\maploc\Prigorodki.ogg"
			};
			Pulkovo[]=
			{
				"STEALTH\core\maploc\Pulkovo.ogg"
			};
			Pustoshka[]=
			{
				"STEALTH\core\maploc\Pustoshka.ogg"
			};
			Rogovo[]=
			{
				"STEALTH\core\maploc\Rogovo.ogg"
			};
			Shakhovka[]=
			{
				"STEALTH\core\maploc\Shakhovka.ogg"
			};
			Sosnovka[]=
			{
				"STEALTH\core\maploc\Sosnovka.ogg"
			};
			Staroye[]=
			{
				"STEALTH\core\maploc\Staroye.ogg"
			};
			Tulga[]=
			{
				"STEALTH\core\maploc\Tulga.ogg"
			};
			Town[]=
			{
				"STEALTH\core\maploc\Town.ogg"
			};
			Village[]=
			{
				"STEALTH\core\maploc\Village.ogg"
			};
			Airfield[]=
			{
				"STEALTH\core\maploc\Airfield.ogg"
			};
			Factory[]=
			{
				"STEALTH\core\maploc\Factory.ogg"
			};
			Crossroad[]=
			{
				"STEALTH\core\maploc\Crossroad.ogg"
			};
			Oilfield[]=
			{
				"STEALTH\core\maploc\Oilfield.ogg"
			};
			mineplace[]=
			{
				"STEALTH\core\maploc\mineplace.ogg"
			};
			Harbor[]=
			{
				"STEALTH\core\maploc\Harbor.ogg"
			};
			Zargabad[]=
			{
				"STEALTH\core\maploc\Zargabad.ogg"
			};
			Azizajt[]=
			{
				"STEALTH\core\maploc\Azizajt.ogg"
			};
			Nango[]=
			{
				"STEALTH\core\maploc\Nango.ogg"
			};
			Yarum[]=
			{
				"STEALTH\core\maploc\Yarum.ogg"
			};
			HazarBagh[]=
			{
				"STEALTH\core\maploc\HazarBagh.ogg"
			};
			Anar[]=
			{
				"STEALTH\core\maploc\Anar.ogg"
			};
			Kakaru[]=
			{
				"STEALTH\core\maploc\Kakaru.ogg"
			};
			Bastam[]=
			{
				"STEALTH\core\maploc\Bastam.ogg"
			};
			Falar[]=
			{
				"STEALTH\core\maploc\Falar.ogg"
			};
			FeeruzAbad[]=
			{
				"STEALTH\core\maploc\FeeruzAbad.ogg"
			};
			Garmarud[]=
			{
				"STEALTH\core\maploc\Garmarud.ogg"
			};
			Garmsar[]=
			{
				"STEALTH\core\maploc\Garmsar.ogg"
			};
			Gospandi[]=
			{
				"STEALTH\core\maploc\Gospandi.ogg"
			};
			ChakChak[]=
			{
				"STEALTH\core\maploc\ChakChak.ogg"
			};
			Chaman[]=
			{
				"STEALTH\core\maploc\Chaman.ogg"
			};
			LoyManara[]=
			{
				"STEALTH\core\maploc\LoyManara.ogg"
			};
			Nagara[]=
			{
				"STEALTH\core\maploc\Nagara.ogg"
			};
			Nur[]=
			{
				"STEALTH\core\maploc\Nur.ogg"
			};
			Rasman[]=
			{
				"STEALTH\core\maploc\Rasman.ogg"
			};
			Sakhee[]=
			{
				"STEALTH\core\maploc\Sakhee.ogg"
			};
			Zavarak[]=
			{
				"STEALTH\core\maploc\Zavarak.ogg"
			};
			Karachinar[]=
			{
				"STEALTH\core\maploc\Karachinar.ogg"
			};
			Shamali[]=
			{
				"STEALTH\core\maploc\Shamali.ogg"
			};
			Mulladoost[]=
			{
				"STEALTH\core\maploc\Mulladoost.ogg"
			};
			Khushab[]=
			{
				"STEALTH\core\maploc\Khushab.ogg"
			};
			Shukurkalay[]=
			{
				"STEALTH\core\maploc\Shukurkalay.ogg"
			};
			Jilavur[]=
			{
				"STEALTH\core\maploc\Jilavur.ogg"
			};
			Landay[]=
			{
				"STEALTH\core\maploc\Landay.ogg"
			};
			Sultansafee[]=
			{
				"STEALTH\core\maploc\Sultansafee.ogg"
			};
			Jaza[]=
			{
				"STEALTH\core\maploc\Jaza.ogg"
			};
			Huzrutimam[]=
			{
				"STEALTH\core\maploc\Huzrutimam.ogg"
			};
			Chardarakht[]=
			{
				"STEALTH\core\maploc\Chardarakht.ogg"
			};
			Timurkalay[]=
			{
				"STEALTH\core\maploc\Timurkalay.ogg"
			};
			Imarat[]=
			{
				"STEALTH\core\maploc\Imarat.ogg"
			};
			Ravanay[]=
			{
				"STEALTH\core\maploc\Ravanay.ogg"
			};
			CS_SuppressiveFireE[]=
			{
				"DEFAULT\combat\CS_SuppressiveFireE.ogg"
			};
			CS_HangOnIllSuppressEmE[]=
			{
				"DEFAULT\combat\CS_HangOnIllSuppressEmE.ogg"
			};
			CS_SuppressingE[]=
			{
				"DEFAULT\combat\CS_SuppressingE.ogg"
			};
			CS_CoveringFireE[]=
			{
				"DEFAULT\combat\CS_CoveringFireE.ogg"
			};
			CS_GoImCoveringE[]=
			{
				"DEFAULT\combat\CS_GoImCoveringE.ogg"
			};
			CS_GoIllCoverE[]=
			{
				"DEFAULT\combat\CS_GoIllCoverE.ogg"
			};
			CS_CoveringFire2E[]=
			{
				"DEFAULT\combat\CS_CoveringFire2E.ogg"
			};
			CS_CoveringGoE[]=
			{
				"DEFAULT\combat\CS_CoveringGoE.ogg"
			};
			CS_MoveOutE[]=
			{
				"DEFAULT\combat\CS_MoveOutE.ogg"
			};
			CS_GoE[]=
			{
				"DEFAULT\combat\CS_GoE.ogg"
			};
			CS_MoveE[]=
			{
				"DEFAULT\combat\CS_MoveE.ogg"
			};
			CS_EngagingE[]=
			{
				"DEFAULT\combat\CS_EngagingE.ogg"
			};
			CS_CoverMeE[]=
			{
				"DEFAULT\combat\CS_CoverMeE.ogg"
			};
			CS_OKLetsGo[]=
			{
				"DEFAULT\combat\CS_OKLetsGo.ogg"
			};
			CS_MovingE[]=
			{
				"DEFAULT\combat\CS_MovingE.ogg"
			};
			CS_MovinOutE[]=
			{
				"DEFAULT\combat\CS_MovinOutE.ogg"
			};
			CS_ReloadingE[]=
			{
				"DEFAULT\combat\CS_ReloadingE.ogg"
			};
			CS_GottaReloadE[]=
			{
				"DEFAULT\combat\CS_GottaReloadE.ogg"
			};
			CS_CoverMeReloadingE[]=
			{
				"DEFAULT\combat\CS_CoverMeReloadingE.ogg"
			};
			CS_ChangingMagsE[]=
			{
				"DEFAULT\combat\CS_ChangingMagsE.ogg"
			};
			CS_FireInTheHoleE[]=
			{
				"DEFAULT\combat\CS_FireInTheHoleE.ogg"
			};
			CS_ThrowingFragE[]=
			{
				"DEFAULT\combat\CS_ThrowingFragE.ogg"
			};
			CS_ThrowingSmokeE[]=
			{
				"DEFAULT\combat\CS_ThrowingSmokeE.ogg"
			};
			CS_SmokeOutE[]=
			{
				"DEFAULT\combat\CS_SmokeOutE.ogg"
			};
			CS_FragOutE[]=
			{
				"DEFAULT\combat\CS_FragOutE.ogg"
			};
			CS_GrenadeE[]=
			{
				"DEFAULT\combat\CS_GrenadeE.ogg"
			};
			CS_WatchTheGrenadeE[]=
			{
				"DEFAULT\combat\CS_WatchTheGrenadeE.ogg"
			};
			CS_IncomingFragE[]=
			{
				"DEFAULT\combat\CS_IncomingFragE.ogg"
			};
			CS_ContactE[]=
			{
				"DEFAULT\combat\CS_ContactE.ogg"
			};
			CS_HostilesE[]=
			{
				"DEFAULT\combat\CS_HostilesE.ogg"
			};
			CS_EnemyE[]=
			{
				"DEFAULT\combat\CS_EnemyE.ogg"
			};
			CS_DidYouSeeThatQ[]=
			{
				"DEFAULT\combat\CS_DidYouSeeThatQ.ogg"
			};
			CS_FocusE[]=
			{
				"DEFAULT\combat\CS_FocusE.ogg"
			};
			CS_CheckThatOut[]=
			{
				"DEFAULT\combat\CS_CheckThatOut.ogg"
			};
			CS_MotherfuckerE[]=
			{
				"DEFAULT\combat\CS_MotherfuckerE.ogg"
			};
			CS_SeeThatQE[]=
			{
				"DEFAULT\combat\CS_SeeThatQE.ogg"
			};
			CS_ARGHHE[]=
			{
				"DEFAULT\combat\CS_ARGHHE.ogg"
			};
			CS_OOFE[]=
			{
				"DEFAULT\combat\CS_OOFE.ogg"
			};
			CS_UGHE[]=
			{
				"DEFAULT\combat\CS_UGHE.ogg"
			};
			CS_NoE[]=
			{
				"DEFAULT\combat\CS_NoE.ogg"
			};
			CS_WoohooE[]=
			{
				"DEFAULT\combat\CS_WoohooE.ogg"
			};
			CS_YahooE[]=
			{
				"DEFAULT\combat\CS_YahooE.ogg"
			};
			CS_HeeeyE[]=
			{
				"DEFAULT\combat\CS_HeeeyE.ogg"
			};
			CS_YeehawEGreatE[]=
			{
				"DEFAULT\combat\CS_YeehawEGreatE.ogg"
			};
			BaseUnderAttackE[]=
			{
				"DEFAULT\warfare\BaseUnderAttackE.ogg"
			};
			UnderAttackE[]=
			{
				"DEFAULT\warfare\UnderAttackE.ogg"
			};
			InsufficientFunds[]=
			{
				"DEFAULT\warfare\InsufficientFunds.ogg"
			};
			InsufficientSupplies[]=
			{
				"DEFAULT\warfare\InsufficientSupplies.ogg"
			};
			InsufficientResources[]=
			{
				"DEFAULT\warfare\InsufficientResources.ogg"
			};
			VotingForANewCommander[]=
			{
				"DEFAULT\warfare\VotingForANewCommander.ogg"
			};
			EnemyBaseLocated[]=
			{
				"DEFAULT\warfare\EnemyBaseLocated.ogg"
			};
			EnemyForcesDetected[]=
			{
				"DEFAULT\warfare\EnemyForcesDetected.ogg"
			};
			HostilesDetectedNear[]=
			{
				"DEFAULT\warfare\HostilesDetectedNear.ogg"
			};
			NewIntelAvailable[]=
			{
				"DEFAULT\warfare\NewIntelAvailable.ogg"
			};
			NewSupportAvailable[]=
			{
				"DEFAULT\warfare\NewSupportAvailable.ogg"
			};
			StrongpointCapturedNear[]=
			{
				"DEFAULT\warfare\StrongpointCapturedNear.ogg"
			};
			StrongpointLostAt[]=
			{
				"DEFAULT\warfare\StrongpointLostAt.ogg"
			};
			Captured[]=
			{
				"DEFAULT\warfare\Captured.ogg"
			};
			CapturedNear[]=
			{
				"DEFAULT\warfare\CapturedNear.ogg"
			};
			Lost[]=
			{
				"DEFAULT\warfare\Lost.ogg"
			};
			LostAt[]=
			{
				"DEFAULT\warfare\LostAt.ogg"
			};
			IsUnderAttack[]=
			{
				"DEFAULT\warfare\IsUnderAttack.ogg"
			};
			Funds[]=
			{
				"DEFAULT\warfare\Funds.ogg"
			};
			Resources[]=
			{
				"DEFAULT\warfare\Resources.ogg"
			};
			Supplys[]=
			{
				"DEFAULT\warfare\Supplys.ogg"
			};
			StrongPoint[]=
			{
				"DEFAULT\warfare\StrongPoint.ogg"
			};
			OperationTerminatesIn20Minutes[]=
			{
				"DEFAULT\warfare\OperationTerminatesIn20Minutes.ogg"
			};
			OperationTerminatesIn10Minutes[]=
			{
				"DEFAULT\warfare\OperationTerminatesIn10Minutes.ogg"
			};
			OperationTerminatesIn5Minutes[]=
			{
				"DEFAULT\warfare\OperationTerminatesIn5Minutes.ogg"
			};
			MissionAccomplished[]=
			{
				"DEFAULT\warfare\MissionAccomplished.ogg"
			};
			MissionFailed[]=
			{
				"DEFAULT\warfare\MissionFailed.ogg"
			};
			MissionCanceled[]=
			{
				"DEFAULT\warfare\MissionCanceled.ogg"
			};
			NewMissionAvailable[]=
			{
				"DEFAULT\warfare\NewMissionAvailable.ogg"
			};
			Mission[]=
			{
				"DEFAULT\warfare\Mission.ogg"
			};
			Mobilized[]=
			{
				"DEFAULT\warfare\Mobilized.ogg"
			};
			Deployed[]=
			{
				"DEFAULT\warfare\Deployed.ogg"
			};
			Constructed[]=
			{
				"DEFAULT\warfare\Constructed.ogg"
			};
			Destroyed[]=
			{
				"DEFAULT\warfare\Destroyed.ogg"
			};
			CommandPost[]=
			{
				"DEFAULT\warfare\CommandPost.ogg"
			};
			Headquarters[]=
			{
				"DEFAULT\warfare\Headquarters.ogg"
			};
			Barracks[]=
			{
				"DEFAULT\warfare\Barracks.ogg"
			};
			LightVehicleSupplyPoint[]=
			{
				"DEFAULT\warfare\LightVehicleSupplyPoint.ogg"
			};
			HeavyVehicleSupplyPoint[]=
			{
				"DEFAULT\warfare\HeavyVehicleSupplyPoint.ogg"
			};
			Helipad[]=
			{
				"DEFAULT\warfare\Helipad.ogg"
			};
			ArtilleryBattery[]=
			{
				"DEFAULT\warfare\ArtilleryBattery.ogg"
			};
			AntiAirRadar[]=
			{
				"DEFAULT\warfare\AntiAirRadar.ogg"
			};
			ArtilleryRadar[]=
			{
				"DEFAULT\warfare\ArtilleryRadar.ogg"
			};
			UAVTerminal[]=
			{
				"DEFAULT\warfare\UAVTerminal.ogg"
			};
			ServicePoint[]=
			{
				"DEFAULT\warfare\ServicePoint.ogg"
			};
			CiviliansUnderEnemyFireIn[]=
			{
				"DEFAULT\warfare\CiviliansUnderEnemyFireIn.ogg"
			};
			RequestingAssistance[]=
			{
				"DEFAULT\warfare\RequestingAssistance.ogg"
			};
			NegativeWeCannotDivertAtThisTime[]=
			{
				"DEFAULT\warfare\NegativeWeCannotDivertAtThisTime.ogg"
			};
			CanDoWereOnIt[]=
			{
				"DEFAULT\warfare\CanDoWereOnIt.ogg"
			};
			RequestingPermissionToJoinYourTeam[]=
			{
				"DEFAULT\warfare\RequestingPermissionToJoinYourTeam.ogg"
			};
			PermissionGranted[]=
			{
				"DEFAULT\warfare\PermissionGranted.ogg"
			};
			RequestRejected[]=
			{
				"DEFAULT\warfare\RequestRejected.ogg"
			};
			RequestingPermissionToLeaveYourTeam[]=
			{
				"DEFAULT\warfare\RequestingPermissionToLeaveYourTeam.ogg"
			};
			BLUFORCommanderRequestsAnAlliance[]=
			{
				"DEFAULT\warfare\BLUFORCommanderRequestsAnAlliance.ogg"
			};
			OPFORCommanderRequestsAnAlliance[]=
			{
				"DEFAULT\warfare\OPFORCommanderRequestsAnAlliance.ogg"
			};
			NeutralCommanderRequestsAnAlliance[]=
			{
				"DEFAULT\warfare\NeutralCommanderRequestsAnAlliance.ogg"
			};
			BLUFORCommanderRequestsACeaseFire[]=
			{
				"DEFAULT\warfare\BLUFORCommanderRequestsACeaseFire.ogg"
			};
			OPFORCommanderRequestsACeaseFire[]=
			{
				"DEFAULT\warfare\OPFORCommanderRequestsACeaseFire.ogg"
			};
			NeutralCommanderRequestsACeaseFire[]=
			{
				"DEFAULT\warfare\NeutralCommanderRequestsACeaseFire.ogg"
			};
			AllianceFormed[]=
			{
				"DEFAULT\warfare\AllianceFormed.ogg"
			};
			AllianceHasEnded[]=
			{
				"DEFAULT\warfare\AllianceHasEnded.ogg"
			};
			CeaseFireInEffect[]=
			{
				"DEFAULT\warfare\CeaseFireInEffect.ogg"
			};
			CeaseFireHasEnded[]=
			{
				"DEFAULT\warfare\CeaseFireHasEnded.ogg"
			};
			AnotherTeamHasTransferredFundsToYou[]=
			{
				"DEFAULT\warfare\AnotherTeamHasTransferredFundsToYou.ogg"
			};
			HC_ReportingIn[]=
			{
				"STEALTH\hc\HC_ReportingIn.ogg"
			};
			HC_StandingByForOrders[]=
			{
				"STEALTH\hc\HC_StandingByForOrders.ogg"
			};
			HC_CombatReady[]=
			{
				"STEALTH\hc\HC_CombatReady.ogg"
			};
			HC_WaitingForOrders[]=
			{
				"STEALTH\hc\HC_WaitingForOrders.ogg"
			};
			HC_Advancing[]=
			{
				"STEALTH\hc\HC_Advancing.ogg"
			};
			HC_Affirmative[]=
			{
				"STEALTH\hc\HC_Affirmative.ogg"
			};
			HC_MovingToPosition[]=
			{
				"STEALTH\hc\HC_MovingToPosition.ogg"
			};
			HC_OrderReceived[]=
			{
				"STEALTH\hc\HC_OrderReceived.ogg"
			};
			HC_EngagingE[]=
			{
				"STEALTH\hc\HC_EngagingE.ogg"
			};
			HC_AttackingE[]=
			{
				"STEALTH\hc\HC_AttackingE.ogg"
			};
			SeveralAdv[]=
			{
				"DEFAULT\Core\Several.ogg"
			};
			Single_EN[]=
			{
				"DEFAULT\Core\Single.ogg"
			};
			None_EN[]=
			{
				"DEFAULT\Core\None.ogg"
			};
			Some_EN[]=
			{
				"DEFAULT\Core\Some.ogg"
			};
			ALotOf_EN[]=
			{
				"DEFAULT\Core\ALotOf.ogg"
			};
			Independent_EN[]=
			{
				"DEFAULT\Core\Independent.ogg"
			};
			Civilian_EN[]=
			{
				"DEFAULT\Core\Civilian.ogg"
			};
			OfThem_EN[]=
			{
				"DEFAULT\Core\OfThem.ogg"
			};
			One_EN[]=
			{
				"DEFAULT\Core\One.ogg"
			};
			In_EN[]=
			{
				"DEFAULT\Core\In.ogg"
			};
			Near_EN[]=
			{
				"DEFAULT\Core\Near.ogg"
			};
			NotFar_EN[]=
			{
				"DEFAULT\Core\NotFar.ogg"
			};
			From_EN[]=
			{
				"DEFAULT\Core\From.ogg"
			};
			Around_EN[]=
			{
				"DEFAULT\Core\Around.ogg"
			};
			Here_EN[]=
			{
				"DEFAULT\Core\Here.ogg"
			};
			There_EN[]=
			{
				"DEFAULT\Core\There.ogg"
			};
			Probably_EN[]=
			{
				"DEFAULT\Core\Probably.ogg"
			};
			ToThe_EN[]=
			{
				"DEFAULT\Core\ToThe.ogg"
			};
			IsProbablyToThe_EN[]=
			{
				"DEFAULT\Core\IsProbablyToThe.ogg"
			};
			JustNow_EN[]=
			{
				"DEFAULT\Core\JustNow.ogg"
			};
			AFewMinutesAgo_EN[]=
			{
				"DEFAULT\Core\AFewMinutesAgo.ogg"
			};
			AFewHoursAgo_EN[]=
			{
				"DEFAULT\Core\AFewHoursAgo.ogg"
			};
			Today_EN[]=
			{
				"DEFAULT\Core\Today.ogg"
			};
			Yesterday_EN[]=
			{
				"DEFAULT\Core\Yesterday.ogg"
			};
			SeveralDaysAgo_EN[]=
			{
				"DEFAULT\Core\SeveralDaysAgo.ogg"
			};
			EnglishQ[]=
			{
				"DEFAULT\Core\EnglishQ.ogg"
			};
			RussianQ[]=
			{
				"DEFAULT\Core\RussianQ.ogg"
			};
			CzechQ[]=
			{
				"DEFAULT\Core\CzechQ.ogg"
			};
			TakistaniQ[]=
			{
				"DEFAULT\Core\TakistaniQ.ogg"
			};
			North_EN[]=
			{
				"DEFAULT\direction\North.ogg"
			};
			South_EN[]=
			{
				"DEFAULT\direction\South.ogg"
			};
			West_EN[]=
			{
				"DEFAULT\direction\West.ogg"
			};
			East_EN[]=
			{
				"DEFAULT\direction\East.ogg"
			};
			Northwest_EN[]=
			{
				"DEFAULT\direction\Northwest.ogg"
			};
			Southwest_EN[]=
			{
				"DEFAULT\direction\Southwest.ogg"
			};
			Northeast_EN[]=
			{
				"DEFAULT\direction\Northeast.ogg"
			};
			Southeast_EN[]=
			{
				"DEFAULT\direction\Southeast.ogg"
			};
			DidYouSeeAnythingRecentlyQ_EN[]=
			{
				"DEFAULT\Core\DidYouSeeAnythingRecentlyQ.ogg"
			};
			YesISawSomething_EN[]=
			{
				"DEFAULT\Core\YesISawSomething.ogg"
			};
			NoIDidntSeeAnything_EN[]=
			{
				"DEFAULT\Core\NoIDidntSeeAnything.ogg"
			};
			WhatsTheWeatherForecastQ_EN[]=
			{
				"DEFAULT\Core\WhatsTheWeatherForecastQ.ogg"
			};
			NiceWeatherHuhQ_EN[]=
			{
				"DEFAULT\Core\NiceWeatherHuhQ.ogg"
			};
			NastyWeatherHuhQ_EN[]=
			{
				"DEFAULT\Core\NastyWeatherHuhQ.ogg"
			};
			ShouldBeClearingUpSoon_EN[]=
			{
				"DEFAULT\Core\ShouldBeClearingUpSoon.ogg"
			};
			IReckonWellGetSomeRainSoon_EN[]=
			{
				"DEFAULT\Core\IReckonWellGetSomeRainSoon.ogg"
			};
			TheySayItllStayLikeThisForAWhile_EN[]=
			{
				"DEFAULT\Core\TheySayItllStayLikeThisForAWhile.ogg"
			};
			WhatsTheClosestSettlementQ_EN[]=
			{
				"DEFAULT\Core\WhatsTheClosestSettlementQ.ogg"
			};
			TheClosestOneIs_EN[]=
			{
				"DEFAULT\Core\TheClosestOneIs.ogg"
			};
			ImNotFromAroundHere_EN[]=
			{
				"DEFAULT\Core\ImNotFromAroundHere.ogg"
			};
			NoIdeaIDontLiveHere_EN[]=
			{
				"DEFAULT\Core\NoIdeaIDontLiveHere.ogg"
			};
			YouAlreadyAskedMeThat_EN[]=
			{
				"DEFAULT\Core\YouAlreadyAskedMeThat.ogg"
			};
			AreYouKiddingQ_EN[]=
			{
				"DEFAULT\Core\AreYouKiddingQ.ogg"
			};
			StopAskingMeThat_EN[]=
			{
				"DEFAULT\Core\StopAskingMeThat.ogg"
			};
			SorryIDontUnderstand_EN[]=
			{
				"DEFAULT\Core\SorryIDontUnderstand.ogg"
			};
			UhWhatQ_EN[]=
			{
				"DEFAULT\Core\UhWhatQ.ogg"
			};
			IWillOnlyTellYouMyNameRankAndSerialNumber_EN[]=
			{
				"DEFAULT\Core\IWillOnlyTellYouMyNameRankAndSerialNumber.ogg"
			};
			SirQ_EN[]=
			{
				"DEFAULT\Core\SirQ.ogg"
			};
			PrivateQ_EN[]=
			{
				"DEFAULT\Core\PrivateQ.ogg"
			};
			CorporalQ_EN[]=
			{
				"DEFAULT\Core\CorporalQ.ogg"
			};
			SergeantQ_EN[]=
			{
				"DEFAULT\Core\SergeantQ.ogg"
			};
			LieutenantQ_EN[]=
			{
				"DEFAULT\Core\LieutenantQ.ogg"
			};
			CaptainQ_EN[]=
			{
				"DEFAULT\Core\CaptainQ.ogg"
			};
			MajorQ_EN[]=
			{
				"DEFAULT\Core\MajorQ.ogg"
			};
			ColonelQ_EN[]=
			{
				"DEFAULT\Core\ColonelQ.ogg"
			};
			YesPrivate_EN[]=
			{
				"DEFAULT\Core\YesPrivate.ogg"
			};
			YesCorporal_EN[]=
			{
				"DEFAULT\Core\YesCorporal.ogg"
			};
			YesSergeant_EN[]=
			{
				"DEFAULT\Core\YesSergeant.ogg"
			};
			YesLieutenant_EN[]=
			{
				"DEFAULT\Core\YesLieutenant.ogg"
			};
			YesCaptain_EN[]=
			{
				"DEFAULT\Core\YesCaptain.ogg"
			};
			YesMajor_EN[]=
			{
				"DEFAULT\Core\YesMajor.ogg"
			};
			YesColonel_EN[]=
			{
				"DEFAULT\Core\YesColonel.ogg"
			};
			SoldierQ_EN[]=
			{
				"DEFAULT\Core\SoldierQ.ogg"
			};
			MorninSoldier_EN[]=
			{
				"DEFAULT\Core\MorninSoldier.ogg"
			};
			EveninSoldier_EN[]=
			{
				"DEFAULT\Core\EveninSoldier.ogg"
			};
			GoodDaySir_EN[]=
			{
				"DEFAULT\Core\GoodDaySir.ogg"
			};
			GoodEveningSir_EN[]=
			{
				"DEFAULT\Core\GoodEveningSir.ogg"
			};
			GoodMorningSir_EN[]=
			{
				"DEFAULT\Core\GoodMorningSir.ogg"
			};
			GoodDay_EN[]=
			{
				"DEFAULT\Core\GoodDay.ogg"
			};
			GoodMorning_EN[]=
			{
				"DEFAULT\Core\GoodMorning.ogg"
			};
			GoodEvening_EN[]=
			{
				"DEFAULT\Core\GoodEvening.ogg"
			};
			WhatQ_EN[]=
			{
				"DEFAULT\Core\WhatQ.ogg"
			};
			YesSir_EN[]=
			{
				"DEFAULT\Core\YesSir.ogg"
			};
			HelloSir_EN[]=
			{
				"DEFAULT\Core\HelloSir.ogg"
			};
			Yep_EN[]=
			{
				"DEFAULT\Core\Yep.ogg"
			};
			YeahQ_EN[]=
			{
				"DEFAULT\Core\YeahQ.ogg"
			};
			Hi_EN[]=
			{
				"DEFAULT\Core\Hi.ogg"
			};
			HiThereE_EN[]=
			{
				"DEFAULT\Core\HiThereE.ogg"
			};
			HeyMan_EN[]=
			{
				"DEFAULT\Core\HeyMan.ogg"
			};
			HiDude_EN[]=
			{
				"DEFAULT\Core\HiDude.ogg"
			};
			Hello_EN[]=
			{
				"DEFAULT\Core\Hello.ogg"
			};
			HowsThingsQ_EN[]=
			{
				"DEFAULT\Core\HowsThingsQ.ogg"
			};
			HowAreYouQ_EN[]=
			{
				"DEFAULT\Core\HowAreYouQ.ogg"
			};
			HeyE_EN[]=
			{
				"DEFAULT\Core\HeyE.ogg"
			};
			WhatDoYouWantQ_EN[]=
			{
				"DEFAULT\Core\WhatDoYouWantQ.ogg"
			};
			WhatDoYouNeedQ_EN[]=
			{
				"DEFAULT\Core\WhatDoYouNeedQ.ogg"
			};
			WhatsUpQ_EN[]=
			{
				"DEFAULT\Core\WhatsUpQ.ogg"
			};
			YesQ_EN[]=
			{
				"DEFAULT\Core\YesQ.ogg"
			};
			MaamQ_EN[]=
			{
				"DEFAULT\Core\MaamQ.ogg"
			};
			HaveANiceDay_EN[]=
			{
				"DEFAULT\Core\HaveANiceDay.ogg"
			};
			MorningMaam_EN[]=
			{
				"DEFAULT\Core\MorningMaam.ogg"
			};
			HelloThere_EN[]=
			{
				"DEFAULT\Core\HelloThere.ogg"
			};
			HowYouDoinQ_EN[]=
			{
				"DEFAULT\Core\HowYouDoinQ.ogg"
			};
			DontTouchMeE_EN[]=
			{
				"DEFAULT\Core\DontTouchMeE.ogg"
			};
			NotNowE_EN[]=
			{
				"DEFAULT\Core\NotNowE.ogg"
			};
			Later_EN[]=
			{
				"DEFAULT\Core\Later.ogg"
			};
			NoTimeE_EN[]=
			{
				"DEFAULT\Core\NoTimeE.ogg"
			};
			HushE_EN[]=
			{
				"DEFAULT\Core\HushE.ogg"
			};
			SsshhE_EN[]=
			{
				"DEFAULT\Core\SsshhE.ogg"
			};
			CantYouSeeImBusyQ_EN[]=
			{
				"DEFAULT\Core\CantYouSeeImBusyQ.ogg"
			};
			BitOccupiedAtTheMomentDude_EN[]=
			{
				"DEFAULT\Core\BitOccupiedAtTheMomentDude.ogg"
			};
			ImBusyE_EN[]=
			{
				"DEFAULT\Core\ImBusyE.ogg"
			};
			PissOffE_EN[]=
			{
				"DEFAULT\Core\PissOffE.ogg"
			};
			NiceToSeeYou_EN[]=
			{
				"DEFAULT\Core\NiceToSeeYou.ogg"
			};
			GoodToSeeYou_EN[]=
			{
				"DEFAULT\Core\GoodToSeeYou.ogg"
			};
			HeyGladYoureHere_EN[]=
			{
				"DEFAULT\Core\HeyGladYoureHere.ogg"
			};
			CanIHelpYouQ_EN[]=
			{
				"DEFAULT\Core\CanIHelpYouQ.ogg"
			};
			GetLostE_EN[]=
			{
				"DEFAULT\Core\GetLostE.ogg"
			};
			LeaveMeAloneE_EN[]=
			{
				"DEFAULT\Core\LeaveMeAloneE.ogg"
			};
			LeaveUsAloneE_EN[]=
			{
				"DEFAULT\Core\LeaveUsAloneE.ogg"
			};
			FuckingPig_EN[]=
			{
				"DEFAULT\Core\FuckingPig.ogg"
			};
			SonOfABitchE_EN[]=
			{
				"DEFAULT\Core\SonOfABitchE.ogg"
			};
			DamnYouE_EN[]=
			{
				"DEFAULT\Core\DamnYouE.ogg"
			};
			CanIAskYouSomethingQ_EN[]=
			{
				"DEFAULT\Core\CanIAskYouSomethingQ.ogg"
			};
			PleaseCanYouHelpQ_EN[]=
			{
				"DEFAULT\Core\PleaseCanYouHelpQ.ogg"
			};
			Speak_EN[]=
			{
				"DEFAULT\Core\Speak.ogg"
			};
			HelpUs_EN[]=
			{
				"DEFAULT\Core\HelpUs.ogg"
			};
			IWontSayAnotherWord_EN[]=
			{
				"DEFAULT\Core\IWontSayAnotherWord.ogg"
			};
			MindYourOwnBusiness_EN[]=
			{
				"DEFAULT\Core\MindYourOwnBusiness.ogg"
			};
			GoBotherSomeoneElse_EN[]=
			{
				"DEFAULT\Core\GoBotherSomeoneElse.ogg"
			};
			CopyThat[]=
			{
				"DEFAULT\SOM\CopyThat.ogg"
			};
			ObjectiveFailed[]=
			{
				"DEFAULT\SOM\ObjectiveFailed.ogg"
			};
			DoYouCopyQ[]=
			{
				"DEFAULT\SOM\DoYouCopyQ.ogg"
			};
			RequestingFireSupportAtGrid[]=
			{
				"DEFAULT\SOM\RequestingFireSupportAtGrid.ogg"
			};
			FiringAtTargetLocation[]=
			{
				"DEFAULT\SOM\FiringAtTargetLocation.ogg"
			};
			ArtilleryNotAvailableRightNow[]=
			{
				"DEFAULT\SOM\ArtilleryNotAvailableRightNow.ogg"
			};
			RequestingContinuousIlluminationAtGrid[]=
			{
				"DEFAULT\SOM\RequestingContinuousIlluminationAtGrid.ogg"
			};
			IlluminatingTargetLocation[]=
			{
				"DEFAULT\SOM\IlluminatingTargetLocation.ogg"
			};
			NoFireMissionAvailableAtThisTime[]=
			{
				"DEFAULT\SOM\NoFireMissionAvailableAtThisTime.ogg"
			};
			ThisIs[]=
			{
				"DEFAULT\SOM\ThisIs.ogg"
			};
			RequestingReinforcementsToOurPositionGrid[]=
			{
				"DEFAULT\SOM\RequestingReinforcementsToOurPositionGrid.ogg"
			};
			WeCanFlyInReinforcmentsAsNeeded[]=
			{
				"DEFAULT\SOM\WeCanFlyInReinforcmentsAsNeeded.ogg"
			};
			YouWillHaveToManageYourself[]=
			{
				"DEFAULT\SOM\YouWillHaveToManageYourself.ogg"
			};
			RequestingSupplyDropAtGrid[]=
			{
				"DEFAULT\SOM\RequestingSupplyDropAtGrid.ogg"
			};
			SupportOnWayStandBy[]=
			{
				"DEFAULT\SOM\SupportOnWayStandBy.ogg"
			};
			RequestingCloseAirSupportAtGrid[]=
			{
				"DEFAULT\SOM\RequestingCloseAirSupportAtGrid.ogg"
			};
			RogerAircraftOnTheWay[]=
			{
				"DEFAULT\SOM\RogerAircraftOnTheWay.ogg"
			};
			NegativeOnTheCloseAirSupport[]=
			{
				"DEFAULT\SOM\NegativeOnTheCloseAirSupport.ogg"
			};
			IntelShowsAConvoyEnrouteNearYourPositionAreYouFreeToInterceptAndDestroyItQ[]=
			{
				"DEFAULT\SOM\IntelShowsAConvoyEnrouteNearYourPositionAreYouFreeToInterceptAndDestroyItQ.ogg"
			};
			BeAdvisedOtherUnitsWillHandleTheConvoy[]=
			{
				"DEFAULT\SOM\BeAdvisedOtherUnitsWillHandleTheConvoy.ogg"
			};
			UAVConfirmsAllVehiclesDestroyed[]=
			{
				"DEFAULT\SOM\UAVConfirmsAllVehiclesDestroyed.ogg"
			};
			BeAdvisedTargetVehicleHasReachedItsDestination[]=
			{
				"DEFAULT\SOM\BeAdvisedTargetVehicleHasReachedItsDestination.ogg"
			};
			BeAdvisedTargetVehicleIsDisabled[]=
			{
				"DEFAULT\SOM\BeAdvisedTargetVehicleIsDisabled.ogg"
			};
			EnemyPositionInCloseProximityCanYouAssaultTheLocationQ[]=
			{
				"DEFAULT\SOM\EnemyPositionInCloseProximityCanYouAssaultTheLocationQ.ogg"
			};
			BeAdvisedEnemyHasChangedPositionAttackCancelled[]=
			{
				"DEFAULT\SOM\BeAdvisedEnemyHasChangedPositionAttackCancelled.ogg"
			};
			EnemyPositionNeutralized[]=
			{
				"DEFAULT\SOM\EnemyPositionNeutralized.ogg"
			};
			BeAdvisedFriendlyUnitsUnderAttackCanYouAssistQ[]=
			{
				"DEFAULT\SOM\BeAdvisedFriendlyUnitsUnderAttackCanYouAssistQ.ogg"
			};
			EnemyAttackRepelled[]=
			{
				"DEFAULT\SOM\EnemyAttackRepelled.ogg"
			};
			GoodWorkWeSeeNoMoreHostilesInTheArea[]=
			{
				"DEFAULT\SOM\GoodWorkWeSeeNoMoreHostilesInTheArea.ogg"
			};
			ZeroHostilesAttackHalted[]=
			{
				"DEFAULT\SOM\ZeroHostilesAttackHalted.ogg"
			};
			WereUnableToHoldPositionFallingBack[]=
			{
				"DEFAULT\SOM\WereUnableToHoldPositionFallingBack.ogg"
			};
			BeAdvisedAHighValueTargetHasBeenMarkedOnYourMapCanYouInterceptAndDestroyQ[]=
			{
				"DEFAULT\SOM\BeAdvisedAHighValueTargetHasBeenMarkedOnYourMapCanYouInterceptAndDestroyQ.ogg"
			};
			CancellingTheDestroyOrderBadIntelHowCopyQ[]=
			{
				"DEFAULT\SOM\CancellingTheDestroyOrderBadIntelHowCopyQ.ogg"
			};
			HighValueTargetDestroyedOver[]=
			{
				"DEFAULT\SOM\HighValueTargetDestroyedOver.ogg"
			};
			FriendlyTroopsRequestingEscortThroughHostileZoneCanYouOfferSupportAlongTheDesignatedRouteQ[]=
			{
				"DEFAULT\SOM\FriendlyTroopsRequestingEscortThroughHostileZoneCanYouOfferSupportAlongTheDesignatedRouteQ.ogg"
			};
			WeHaveAssignedAnotherUnitToThisEscortOp[]=
			{
				"DEFAULT\SOM\WeHaveAssignedAnotherUnitToThisEscortOp.ogg"
			};
			TargetInSightCommencingEscort[]=
			{
				"DEFAULT\SOM\TargetInSightCommencingEscort.ogg"
			};
			BeAdvisedEnemyPatrolsInCloseProximityHowCopyQ[]=
			{
				"DEFAULT\SOM\BeAdvisedEnemyPatrolsInCloseProximityHowCopyQ.ogg"
			};
			SolidCopyThanksForTheIntel[]=
			{
				"DEFAULT\SOM\SolidCopyThanksForTheIntel.ogg"
			};
			DestinationReachedEveryoneAccountedForOver[]=
			{
				"DEFAULT\SOM\DestinationReachedEveryoneAccountedForOver.ogg"
			};
			WereAtTheDestinationReportingLowCasualtiesOver[]=
			{
				"DEFAULT\SOM\WereAtTheDestinationReportingLowCasualtiesOver.ogg"
			};
			BeAdvisedEscortFailedWeLostThemOver[]=
			{
				"DEFAULT\SOM\BeAdvisedEscortFailedWeLostThemOver.ogg"
			};
			BeAdvisedHostilesReportedNearYourLocationCanYouMakeASweepOfTheCheckpointsQ[]=
			{
				"DEFAULT\SOM\BeAdvisedHostilesReportedNearYourLocationCanYouMakeASweepOfTheCheckpointsQ.ogg"
			};
			CancelThePatrolBadIntelOver[]=
			{
				"DEFAULT\SOM\CancelThePatrolBadIntelOver.ogg"
			};
			BeAdvisedImPassingCheckpointOne[]=
			{
				"DEFAULT\SOM\BeAdvisedImPassingCheckpointOne.ogg"
			};
			SitrepPassingCheckpointTwo[]=
			{
				"DEFAULT\SOM\SitrepPassingCheckpointTwo.ogg"
			};
			ReportingPatrolComplete[]=
			{
				"DEFAULT\SOM\ReportingPatrolComplete.ogg"
			};
			ThereAreFriendlyPOWsHeldInCloseProximityCanYouExtractThemQ[]=
			{
				"DEFAULT\SOM\ThereAreFriendlyPOWsHeldInCloseProximityCanYouExtractThemQ.ogg"
			};
			BeAdvisedPOWsWereTransportedToUnknownLocationMissionCanceled[]=
			{
				"DEFAULT\SOM\BeAdvisedPOWsWereTransportedToUnknownLocationMissionCanceled.ogg"
			};
			ExtractionConfirmedPOWsRecovered[]=
			{
				"DEFAULT\SOM\ExtractionConfirmedPOWsRecovered.ogg"
			};
			RequestingTransportForTheRecoveredPOWsOver[]=
			{
				"DEFAULT\SOM\RequestingTransportForTheRecoveredPOWsOver.ogg"
			};
			POWsAreKIAISayAgainAllFriendliesKIAOver[]=
			{
				"DEFAULT\SOM\POWsAreKIAISayAgainAllFriendliesKIAOver.ogg"
			};
			LocalsReportEnemyCachesInYourAOCanYouSearchForTheseCachesQ[]=
			{
				"DEFAULT\SOM\LocalsReportEnemyCachesInYourAOCanYouSearchForTheseCachesQ.ogg"
			};
			BeAdvisedFindingTheCachesIsNoLongerAPriority[]=
			{
				"DEFAULT\SOM\BeAdvisedFindingTheCachesIsNoLongerAPriority.ogg"
			};
			SearchCompleteSeveralStorageCachesUncoveredAndMarkedForCollectionHowCopyQ[]=
			{
				"DEFAULT\SOM\SearchCompleteSeveralStorageCachesUncoveredAndMarkedForCollectionHowCopyQ.ogg"
			};
			SearchCompleteALargeNumberOfCachesWereLocatedAndMarkedForCollectionOver[]=
			{
				"DEFAULT\SOM\SearchCompleteALargeNumberOfCachesWereLocatedAndMarkedForCollectionOver.ogg"
			};
			SearchCompleteNothingToReportZeroCachesFoundOver[]=
			{
				"DEFAULT\SOM\SearchCompleteNothingToReportZeroCachesFoundOver.ogg"
			};
			WeHaveAnAircraftDownInYourVicinityCanYouLocateAndSecureTheCrashSiteQ[]=
			{
				"DEFAULT\SOM\WeHaveAnAircraftDownInYourVicinityCanYouLocateAndSecureTheCrashSiteQ.ogg"
			};
			ReturnToYourPrimarySARTeamsOnRouteToTheCrashSite[]=
			{
				"DEFAULT\SOM\ReturnToYourPrimarySARTeamsOnRouteToTheCrashSite.ogg"
			};
			SurvivorsOnBoardTransportResumingPrimary[]=
			{
				"DEFAULT\SOM\SurvivorsOnBoardTransportResumingPrimary.ogg"
			};
			CrashSiteSecuredNoSurvivors[]=
			{
				"DEFAULT\SOM\CrashSiteSecuredNoSurvivors.ogg"
			};
			BeAdvisedCrashSiteCompromisedOver[]=
			{
				"DEFAULT\SOM\BeAdvisedCrashSiteCompromisedOver.ogg"
			};
			CrashSiteSecuredWeveGotSurvivorsRequestingCASEVACOver[]=
			{
				"DEFAULT\SOM\CrashSiteSecuredWeveGotSurvivorsRequestingCASEVACOver.ogg"
			};
			IGotARequestForTransportHereThePickUpIsCloseByCanYouHandleItQ[]=
			{
				"DEFAULT\SOM\IGotARequestForTransportHereThePickUpIsCloseByCanYouHandleItQ.ogg"
			};
			CancelThatRequestAlternateTransportFoundOver[]=
			{
				"DEFAULT\SOM\CancelThatRequestAlternateTransportFoundOver.ogg"
			};
			WeHavePickUpPointInSightOver[]=
			{
				"DEFAULT\SOM\WeHavePickUpPointInSightOver.ogg"
			};
			RogerThatThoseTroopsAreNeededElsewhereDoubleTimeGentlemen[]=
			{
				"DEFAULT\SOM\RogerThatThoseTroopsAreNeededElsewhereDoubleTimeGentlemen.ogg"
			};
			WeLostOurTransportISayAgainTransportDisabled[]=
			{
				"DEFAULT\SOM\WeLostOurTransportISayAgainTransportDisabled.ogg"
			};
			BeAdvisedAllPassengersAreKIAOver[]=
			{
				"DEFAULT\SOM\BeAdvisedAllPassengersAreKIAOver.ogg"
			};
			WereAtOurDestinationEveryoneAccountedForOver[]=
			{
				"DEFAULT\SOM\WereAtOurDestinationEveryoneAccountedForOver.ogg"
			};
			WereAtOurDestinationTookSomeCasualtiesButTheMajorityIsSafeOver[]=
			{
				"DEFAULT\SOM\WereAtOurDestinationTookSomeCasualtiesButTheMajorityIsSafeOver.ogg"
			};
			RequestingSupplyDrop[]=
			{
				"DEFAULT\SOM\RequestingSupplyDrop.ogg"
			};
			SupplyDropReadyRequestingDropZoneLocationOver[]=
			{
				"DEFAULT\SOM\SupplyDropReadyRequestingDropZoneLocationOver.ogg"
			};
			PositionConfirmedSuppliesInbound[]=
			{
				"DEFAULT\SOM\PositionConfirmedSuppliesInbound.ogg"
			};
			BeAdvisedWeLostContactWithTheTransportVehicleOut[]=
			{
				"DEFAULT\SOM\BeAdvisedWeLostContactWithTheTransportVehicleOut.ogg"
			};
			SuppliesDeliveredOut[]=
			{
				"DEFAULT\SOM\SuppliesDeliveredOut.ogg"
			};
			TheSuppliesHaveBeenDroppedOut[]=
			{
				"DEFAULT\SOM\TheSuppliesHaveBeenDroppedOut.ogg"
			};
			RequestingFastTransportOver[]=
			{
				"DEFAULT\SOM\RequestingFastTransportOver.ogg"
			};
			RogerTransportIsAvailableSendDestinationOver[]=
			{
				"DEFAULT\SOM\RogerTransportIsAvailableSendDestinationOver.ogg"
			};
			NegativeTransportUnavailableEnemyActivityInYourSectorOut[]=
			{
				"DEFAULT\SOM\NegativeTransportUnavailableEnemyActivityInYourSectorOut.ogg"
			};
			NegativeTransportUnavailableOut[]=
			{
				"DEFAULT\SOM\NegativeTransportUnavailableOut.ogg"
			};
			NegativeTransportIsUnavailableAtYourLocationOut[]=
			{
				"DEFAULT\SOM\NegativeTransportIsUnavailableAtYourLocationOut.ogg"
			};
			DestinationReachedThanksForTheAssistanceOut[]=
			{
				"DEFAULT\SOM\DestinationReachedThanksForTheAssistanceOut.ogg"
			};
			RequestingAerialReconOver[]=
			{
				"DEFAULT\SOM\RequestingAerialReconOver.ogg"
			};
			UAVReadyRequestingTargetLocationOver[]=
			{
				"DEFAULT\SOM\UAVReadyRequestingTargetLocationOver.ogg"
			};
			CoordinatesReceivedDroneIsEnrouteOver[]=
			{
				"DEFAULT\SOM\CoordinatesReceivedDroneIsEnrouteOver.ogg"
			};
			DroneIsBingoFuelAndRTBOver[]=
			{
				"DEFAULT\SOM\DroneIsBingoFuelAndRTBOver.ogg"
			};
			ThanksForTheUpdateOut[]=
			{
				"DEFAULT\SOM\ThanksForTheUpdateOut.ogg"
			};
			WeRequireLongRangeTransportHowCopyQ[]=
			{
				"DEFAULT\SOM\WeRequireLongRangeTransportHowCopyQ.ogg"
			};
			RogerThatTransportAvailableRequestingLZOver[]=
			{
				"DEFAULT\SOM\RogerThatTransportAvailableRequestingLZOver.ogg"
			};
			CopyTransportIsInboundOut[]=
			{
				"DEFAULT\SOM\CopyTransportIsInboundOut.ogg"
			};
			AllAboardSendingCoordinatesOver[]=
			{
				"DEFAULT\SOM\AllAboardSendingCoordinatesOver.ogg"
			};
			ReportingSuccessfulInsertionThanksForTheRideOut[]=
			{
				"DEFAULT\SOM\ReportingSuccessfulInsertionThanksForTheRideOut.ogg"
			};
			BeAdvisedTransportWasImmobilizedOut[]=
			{
				"DEFAULT\SOM\BeAdvisedTransportWasImmobilizedOut.ogg"
			};
			RequestingImmediateCloseAirSupportHowCopyQ[]=
			{
				"DEFAULT\SOM\RequestingImmediateCloseAirSupportHowCopyQ.ogg"
			};
			CopyThatAirstrikeIsReadyTransmitTargetLocationOver[]=
			{
				"DEFAULT\SOM\CopyThatAirstrikeIsReadyTransmitTargetLocationOver.ogg"
			};
			TargetLocationMarkedOver[]=
			{
				"DEFAULT\SOM\TargetLocationMarkedOver.ogg"
			};
			CoordinatesReceivedAircraftAreInboundContactOnLaserDesignatorOut[]=
			{
				"DEFAULT\SOM\CoordinatesReceivedAircraftAreInboundContactOnLaserDesignatorOut.ogg"
			};
			BeAdvisedWeHaveABirdStandingByWeCanFlyInReinforcementsIfNeededCheckYourMapForTheRendezvousPointAndConfirmOver[]=
			{
				"DEFAULT\SOM\BeAdvisedWeHaveABirdStandingByWeCanFlyInReinforcementsIfNeededCheckYourMapForTheRendezvousPointAndConfirmOver.ogg"
			};
			TheBirdHadToRTBForFuelOver[]=
			{
				"DEFAULT\SOM\TheBirdHadToRTBForFuelOver.ogg"
			};
			WeLinkedUpWithTheReinforcementsThanksForTheSupport[]=
			{
				"DEFAULT\SOM\WeLinkedUpWithTheReinforcementsThanksForTheSupport.ogg"
			};
			WeLostCommunicationWithThePilotBirdCouldBeDownOver[]=
			{
				"DEFAULT\SOM\WeLostCommunicationWithThePilotBirdCouldBeDownOver.ogg"
			};
			YourReinforcementsDidntMakeItToTheRendezvousYoullHaveToManageOver[]=
			{
				"DEFAULT\SOM\YourReinforcementsDidntMakeItToTheRendezvousYoullHaveToManageOver.ogg"
			};
			RequestingReleaseOfAnAttackHelicopterNearOurPositionOver[]=
			{
				"DEFAULT\SOM\RequestingReleaseOfAnAttackHelicopterNearOurPositionOver.ogg"
			};
			ReleaseAuthorizedSendStrikeTargetOver[]=
			{
				"DEFAULT\SOM\ReleaseAuthorizedSendStrikeTargetOver.ogg"
			};
			StrikeTargetSentOver[]=
			{
				"DEFAULT\SOM\StrikeTargetSentOver.ogg"
			};
			CoordinatesReceivedHeloIsAttackingTheTargetOut[]=
			{
				"DEFAULT\SOM\CoordinatesReceivedHeloIsAttackingTheTargetOut.ogg"
			};
			RequestingImmediateArtillerySuppressionHighExplosiveHowCopyQ[]=
			{
				"DEFAULT\SOM\RequestingImmediateArtillerySuppressionHighExplosiveHowCopyQ.ogg"
			};
			WithAnImmediateArtillerySuppressionRequestSmokeOver[]=
			{
				"DEFAULT\SOM\WithAnImmediateArtillerySuppressionRequestSmokeOver.ogg"
			};
			RequestingImmediateCoverWithWilliePeteOver[]=
			{
				"DEFAULT\SOM\RequestingImmediateCoverWithWilliePeteOver.ogg"
			};
			RequestingContinuousIlluminationAtTheTargetLocationHowCopyQ[]=
			{
				"DEFAULT\SOM\RequestingContinuousIlluminationAtTheTargetLocationHowCopyQ.ogg"
			};
			WeNeedLaserGuidedOrdnanceOver[]=
			{
				"DEFAULT\SOM\WeNeedLaserGuidedOrdnanceOver.ogg"
			};
			WeNeedAGuidedAntiArmorStrikeOver[]=
			{
				"DEFAULT\SOM\WeNeedAGuidedAntiArmorStrikeOver.ogg"
			};
			RequestingFireSupportFireForEffectOver[]=
			{
				"DEFAULT\SOM\RequestingFireSupportFireForEffectOver.ogg"
			};
			RequestingFireSupportAtTheTargetLocationWilliePeteInEffectHowCopyQ[]=
			{
				"DEFAULT\SOM\RequestingFireSupportAtTheTargetLocationWilliePeteInEffectHowCopyQ.ogg"
			};
			AdjustFireAtTheTargetLocationOver[]=
			{
				"DEFAULT\SOM\AdjustFireAtTheTargetLocationOver.ogg"
			};
			ArtilleryAvailableTransmitTargetLocationOver[]=
			{
				"DEFAULT\SOM\ArtilleryAvailableTransmitTargetLocationOver.ogg"
			};
			RogerThatTargetLocationReceivedOrdnanceIsInboundOver[]=
			{
				"DEFAULT\SOM\RogerThatTargetLocationReceivedOrdnanceIsInboundOver.ogg"
			};
			BeAdvisedArtilleryIsUnavailableAtThisTimeOut[]=
			{
				"DEFAULT\SOM\BeAdvisedArtilleryIsUnavailableAtThisTimeOut.ogg"
			};
			NegativeWeLostContactWithTheBatteryOut[]=
			{
				"DEFAULT\SOM\NegativeWeLostContactWithTheBatteryOut.ogg"
			};
			BeAdvisedTheBatteryCannotTargetThatGridOut[]=
			{
				"DEFAULT\SOM\BeAdvisedTheBatteryCannotTargetThatGridOut.ogg"
			};
			CannotExecuteAdjustCoordinatesOut[]=
			{
				"DEFAULT\SOM\CannotExecuteAdjustCoordinatesOut.ogg"
			};
			ThatsOutsideOurFiringEnvelopeOut[]=
			{
				"DEFAULT\SOM\ThatsOutsideOurFiringEnvelopeOut.ogg"
			};
			ShotOver[]=
			{
				"DEFAULT\SOM\ShotOver.ogg"
			};
			ShotOut[]=
			{
				"DEFAULT\SOM\ShotOut.ogg"
			};
			SplashOver[]=
			{
				"DEFAULT\SOM\SplashOver.ogg"
			};
			SplashOut[]=
			{
				"DEFAULT\SOM\SplashOut.ogg"
			};
			RoundsComplete[]=
			{
				"DEFAULT\SOM\RoundsComplete.ogg"
			};
			CheckFireE[]=
			{
				"DEFAULT\SOM\CheckFireE.ogg"
			};
			CeasingFire[]=
			{
				"DEFAULT\SOM\CeasingFire.ogg"
			};
			BeAdvisedTheBatteryJustDroppedOffTheCommGridYoureOnYourOwnOver[]=
			{
				"DEFAULT\SOM\BeAdvisedTheBatteryJustDroppedOffTheCommGridYoureOnYourOwnOver.ogg"
			};
			RogerWellHandleItOurselvesOut[]=
			{
				"DEFAULT\SOM\RogerWellHandleItOurselvesOut.ogg"
			};
			StandByForMissionUpdate[]=
			{
				"DEFAULT\SOM\StandByForMissionUpdate.ogg"
			};
			Out[]=
			{
				"DEFAULT\SOM\Out.ogg"
			};
			RogerThat[]=
			{
				"DEFAULT\SOM\RogerThat.ogg"
			};
			JobWellDone[]=
			{
				"DEFAULT\SOM\JobWellDone.ogg"
			};
			GoodJobOut[]=
			{
				"DEFAULT\SOM\GoodJobOut.ogg"
			};
			WellDoneOut[]=
			{
				"DEFAULT\SOM\WellDoneOut.ogg"
			};
			MissionFailure[]=
			{
				"DEFAULT\SOM\MissionFailure.ogg"
			};
			MessageOver[]=
			{
				"DEFAULT\SOM\MessageOver.ogg"
			};
			ComeIn[]=
			{
				"DEFAULT\SOM\ComeIn.ogg"
			};
			GoAheadOver[]=
			{
				"DEFAULT\SOM\GoAheadOver.ogg"
			};
			CopyGoAhead[]=
			{
				"DEFAULT\SOM\CopyGoAhead.ogg"
			};
			WeCopyYouLoudAndClear[]=
			{
				"DEFAULT\SOM\WeCopyYouLoudAndClear.ogg"
			};
			WeCannotDivertAtThisTimeOut[]=
			{
				"DEFAULT\SOM\WeCannotDivertAtThisTimeOut.ogg"
			};
			Sorry[]=
			{
				"DEFAULT\SOM\Sorry.ogg"
			};
			NoWayWeCanHelpWithThatRightNowOut[]=
			{
				"DEFAULT\SOM\NoWayWeCanHelpWithThatRightNowOut.ogg"
			};
			WereOnTheWayOut[]=
			{
				"DEFAULT\SOM\WereOnTheWayOut.ogg"
			};
			WereOscarMikeOut[]=
			{
				"DEFAULT\SOM\WereOscarMikeOut.ogg"
			};
			UnableToCompleteTheObjectiveAbortingOver[]=
			{
				"DEFAULT\SOM\UnableToCompleteTheObjectiveAbortingOver.ogg"
			};
			WeHaveToAbortOver[]=
			{
				"DEFAULT\SOM\WeHaveToAbortOver.ogg"
			};
			ContinueYourPreviousMissionOver[]=
			{
				"DEFAULT\SOM\ContinueYourPreviousMissionOver.ogg"
			};
			AbortTheOpOver[]=
			{
				"DEFAULT\SOM\AbortTheOpOver.ogg"
			};
			ReturnToYourPrimaryOver[]=
			{
				"DEFAULT\SOM\ReturnToYourPrimaryOver.ogg"
			};
			CarryOnWithYourPriorTasksOver[]=
			{
				"DEFAULT\SOM\CarryOnWithYourPriorTasksOver.ogg"
			};
			StandByOver[]=
			{
				"DEFAULT\SOM\StandByOver.ogg"
			};
			Affirmative[]=
			{
				"DEFAULT\SOM\Affirmative.ogg"
			};
			SupportIsNotAvailableOut[]=
			{
				"DEFAULT\SOM\SupportIsNotAvailableOut.ogg"
			};
			YourRequestHasBeenRejectedOut[]=
			{
				"DEFAULT\SOM\YourRequestHasBeenRejectedOut.ogg"
			};
		};
		SupportRequestRGSupplyDrop[]={};
		SupportRequestRGUAV[]={};
		SupportRequestRGArty[]=
		{
			"DEFAULT\secops\artillery\secop_artillery_04"
		};
		SupportRequestRGTransport[]=
		{
			"DEFAULT\secops\transport\secop_trans_01"
		};
		RequestAcknowledgedSGCASBombing[]=
		{
			"DEFAULT\secops\airstrike\secop_airstrike_04"
		};
		RequestAcknowledgedSGCASHelicopter[]=
		{
			"DEFAULT\secops\airstrike\secop_airstrike_04"
		};
		RequestAcknowledgedSGSupplyDrop[]=
		{
			"DEFAULT\secops\supply_drop\secop_supplydrop_01"
		};
		RequestAcknowledgedSGUAV[]={};
		RequestAcknowledgedSGArty[]=
		{
			"DEFAULT\hc\orderreceived"
		};
		RequestAcknowledgedTransport[]=
		{
			"DEFAULT\secops\transport\secop_trans_04"
		};
		UnitDestroyedHQCASBombing[]={};
		UnitDestroyedHQSupplyDrop[]={};
		UnitDestroyedHQUAV[]={};
		UnitDestroyedHQArty[]={};
		UnitDestroyedHQTransport[]={};
		RequestAccomplishedSGCASBombing[]={};
		RequestAccomplishedSGCASHelicopter[]={};
		RequestAccomplishedSGSupplyDrop[]={};
		RequestAccomplishedSGUAV[]={};
		RequestAccomplishedSGArty[]=
		{
			"DEFAULT\secops\generic\wecopyyouloudandclear"
		};
		RequestAccomplishedSGTransport[]={};
		SupportAddedDuringMission[]=
		{
			"DEFAULT\Warfare\NewSupportAvailable"
		};
		ArtySGSupportRoundsComplete[]=
		{
			"DEFAULT\secops\artillery\wecopyyouloudandclear"
		};
		TransportSGWelcomeAboard[]={};
		TransportSGLZCoordinatesSelected[]={};
	};
	class Arguments
	{
		class Direction
		{
			class Relative1
			{
				class 0
				{
					speech[]=
					{
						"InFrontOf"
					};
				};
				class 90
				{
					speech[]=
					{
						"RightOf"
					};
				};
				class 180
				{
					speech[]=
					{
						"Behind"
					};
				};
				class 270
				{
					speech[]=
					{
						"LeftOf"
					};
				};
			};
			class Relative2
			{
				class 0
				{
					speech[]=
					{
						"Front"
					};
				};
				class 90
				{
					speech[]=
					{
						"Right"
					};
				};
				class 180
				{
					speech[]=
					{
						"Rear"
					};
				};
				class 270
				{
					speech[]=
					{
						"Left"
					};
				};
			};
			class Relative3
			{
				class 0
				{
					speech[]=
					{
						"Front"
					};
				};
				class 90
				{
					speech[]=
					{
						"RightFlank"
					};
				};
				class 180
				{
					speech[]=
					{
						"Rear"
					};
				};
				class 270
				{
					speech[]=
					{
						"LeftFlank"
					};
				};
			};
			class Compass1
			{
				class 0
				{
					speech[]=
					{
						"North"
					};
				};
				class 45
				{
					speech[]=
					{
						"NorthEast"
					};
				};
				class 90
				{
					speech[]=
					{
						"East"
					};
				};
				class 135
				{
					speech[]=
					{
						"SouthEast"
					};
				};
				class 180
				{
					speech[]=
					{
						"South"
					};
				};
				class 225
				{
					speech[]=
					{
						"SouthWest"
					};
				};
				class 270
				{
					speech[]=
					{
						"West"
					};
				};
				class 315
				{
					speech[]=
					{
						"NorthWest"
					};
				};
			};
			class Compass2
			{
				class 0
				{
					speech[]=
					{
						"bearing000"
					};
				};
				class 15
				{
					speech[]=
					{
						"bearing015"
					};
				};
				class 30
				{
					speech[]=
					{
						"bearing030"
					};
				};
				class 45
				{
					speech[]=
					{
						"bearing045"
					};
				};
				class 60
				{
					speech[]=
					{
						"bearing060"
					};
				};
				class 75
				{
					speech[]=
					{
						"bearing075"
					};
				};
				class 90
				{
					speech[]=
					{
						"bearing090"
					};
				};
				class 105
				{
					speech[]=
					{
						"bearing105"
					};
				};
				class 120
				{
					speech[]=
					{
						"bearing120"
					};
				};
				class 135
				{
					speech[]=
					{
						"bearing135"
					};
				};
				class 150
				{
					speech[]=
					{
						"bearing150"
					};
				};
				class 165
				{
					speech[]=
					{
						"bearing165"
					};
				};
				class 180
				{
					speech[]=
					{
						"bearing180"
					};
				};
				class 195
				{
					speech[]=
					{
						"bearing195"
					};
				};
				class 210
				{
					speech[]=
					{
						"bearing210"
					};
				};
				class 225
				{
					speech[]=
					{
						"bearing225"
					};
				};
				class 240
				{
					speech[]=
					{
						"bearing240"
					};
				};
				class 255
				{
					speech[]=
					{
						"bearing255"
					};
				};
				class 270
				{
					speech[]=
					{
						"bearing270"
					};
				};
				class 285
				{
					speech[]=
					{
						"bearing285"
					};
				};
				class 300
				{
					speech[]=
					{
						"bearing300"
					};
				};
				class 315
				{
					speech[]=
					{
						"bearing315"
					};
				};
				class 330
				{
					speech[]=
					{
						"bearing330"
					};
				};
				class 345
				{
					speech[]=
					{
						"bearing345"
					};
				};
				class 360
				{
					speech[]=
					{
						"bearing360"
					};
				};
			};
		};
		class Distance1
		{
			class Level0
			{
				speech[]=
				{
					"DangerouslyCloseTo"
				};
			};
			class Level1
			{
				speech[]=
				{
					"NotFarFrom"
				};
			};
			class Level2
			{
				speech[]=
				{
					"FarFrom"
				};
			};
		};
		class Distance2
		{
			class Level0
			{
				speech[]=
				{
					"Just"
				};
			};
			class Level1
			{
				speech[]=
				{
					"Way"
				};
			};
			class Level2
			{
				speech[]=
				{
					"Far"
				};
			};
		};
		class Distance3
		{
			class Level0
			{
				speech[]=
				{
					"Close"
				};
			};
			class Level1
			{
				speech[]=
				{
					"MediumRange"
				};
			};
			class Level2
			{
				speech[]=
				{
					"Far"
				};
			};
		};
	};
	class SelectEnemyDetectedSentence
	{
		sentences[]=
		{
			"SentEnemyToOur",
			"0.1 + (1 - (DistanceToGroup factor [1200-1/2, 1200+1/2]))",
			"SentEnemyOnGrid",
			"DistanceToGroup factor [1200-1/2, 1200+1/2]"
		};
	};
	class SelectCmdMoveSentence
	{
		sentences[]=
		{
			"SentCmdMoveToOur",
			"0.1 + (1-MoveToObject) * (1 - (DistanceToGroup factor [1200-1/2, 1200+1/2]))",
			"SentCmdMoveNearObject",
			"MoveToObject * (1 - (DistanceToGroup factor [1200-1/2, 1200+1/2]))",
			"SentCmdMoveToGridPos",
			"DistanceToGroup factor [1200-1/2, 1200+1/2]"
		};
	};
	class SelectVehicleMoveSentence
	{
		sentences[]=
		{
			"VehicleMoveGroupRelative",
			"GroupCompactness",
			"VehicleMoveToGrid",
			"((DistanceToGroup factor [750,1000]) + (1 - GroupCompactness)/2) / 2",
			"VehicleMoveRecipientsRelative",
			"(DistanceToRecipients / RecipientsRadius) factor [1.5, 3]",
			"VehicleMoveToObject",
			"3*MoveToObject",
			"VehicleMoveLocationRelative",
			"5 * ( ( GroupCompactness * ((DistanceToLocation/DistanceToGroup) factor [0.4,0.2]) ) + ( DistanceToLocation/DistanceToUnit factor [0.5,0.3] ) )"
		};
	};
	class SentEnemyDetectedSenderRelative
	{
		sentences[]=
		{
			"SentEnemyDetectedSenderRelativeDefault",
			"(1-Stealth)",
			"SentEnemyDetectedSenderRelativeStealth",
			"Stealth"
		};
	};
	class SentEnemyDetectedSenderRelativeDefault
	{
		versions[]=
		{
			"SentEnemyDetectedSenderRelative_1",
			0.5,
			"SentEnemyDetectedSenderRelative_2",
			0.5
		};
		class SentEnemyDetectedSenderRelative_1
		{
			speech[]=
			{
				"ContactE",
				"%4",
				"%2",
				"%7.2",
				"ToOur",
				"%6.3"
			};
		};
		class SentEnemyDetectedSenderRelative_2
		{
			speech[]=
			{
				"ContactE",
				"%4",
				"%2",
				"%7.101",
				"FromMe",
				"ToThe",
				"%8.101"
			};
		};
	};
	class SentEnemyDetectedSenderRelativeStealth
	{
		versions[]=
		{
			"SentEnemyDetectedSenderRelative_1",
			0.5,
			"SentEnemyDetectedSenderRelative_2",
			0.5
		};
		class SentEnemyDetectedSenderRelative_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"ContactE",
				"%4",
				"%2",
				"%7.2",
				"ToOur",
				"%6.3"
			};
		};
		class SentEnemyDetectedSenderRelative_2
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"ContactE",
				"%4",
				"%2",
				"%7.101",
				"FromMe",
				"ToThe",
				"%8.101"
			};
		};
	};
	class SentEnemyDetectedUnitRelative
	{
		sentences[]=
		{
			"SentEnemyDetectedUnitRelativeDefault",
			"(1-Stealth)",
			"SentEnemyDetectedUnitRelativeStealth",
			"Stealth"
		};
	};
	class SentEnemyDetectedUnitRelativeDefault
	{
		versions[]=
		{
			"SentEnemyDetectedUnitRelative_1",
			0.33000001,
			"SentEnemyDetectedUnitRelative_2",
			0.33000001,
			"SentEnemyDetectedUnitRelative_3",
			0.33000001
		};
		class SentEnemyDetectedUnitRelative_1
		{
			speech[]=
			{
				"%13",
				"BeAdvised",
				"%4",
				"%2",
				"%9.2",
				"ToThe",
				"%10.1"
			};
		};
		class SentEnemyDetectedUnitRelative_2
		{
			speech[]=
			{
				"%13",
				"%4",
				"%2",
				"%9.2",
				"ToThe",
				"%10.1",
				"OfYourPosition"
			};
		};
		class SentEnemyDetectedUnitRelative_3
		{
			speech[]=
			{
				"%13",
				"BeAdvised",
				"%4",
				"%2",
				"%10.1",
				"%9.3",
				"OfYourPosition"
			};
		};
	};
	class SentEnemyDetectedUnitRelativeStealth
	{
		versions[]=
		{
			"SentEnemyDetectedUnitRelative_1",
			0.33000001,
			"SentEnemyDetectedUnitRelative_2",
			0.33000001,
			"SentEnemyDetectedUnitRelative_3",
			0.33000001
		};
		class SentEnemyDetectedUnitRelative_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%13",
				"BeAdvised",
				"%4",
				"%2",
				"%9.2",
				"ToThe",
				"%10.1"
			};
		};
		class SentEnemyDetectedUnitRelative_2
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%13",
				"%4",
				"%2",
				"%9.2",
				"ToThe",
				"%10.1",
				"OfYourPosition"
			};
		};
		class SentEnemyDetectedUnitRelative_3
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%13",
				"BeAdvised",
				"%4",
				"%2",
				"%10.1",
				"%9.3",
				"OfYourPosition"
			};
		};
	};
	class SentEnemyDetectedLocationRelative
	{
		sentences[]=
		{
			"SentEnemyDetectedLocationRelativeDefault",
			"(1-Stealth)",
			"SentEnemyDetectedLocationRelativeStealth",
			"Stealth"
		};
	};
	class SentEnemyDetectedLocationRelativeDefault
	{
		versions[]=
		{
			"SentEnemyDetectedLocationRelative_1",
			1
		};
		class SentEnemyDetectedLocationRelative_1
		{
			speech[]=
			{
				"%4",
				"%2",
				"In",
				"%14"
			};
		};
	};
	class SentEnemyDetectedLocationRelativeStealth
	{
		versions[]=
		{
			"SentEnemyDetectedLocationRelative_1",
			1
		};
		class SentEnemyDetectedLocationRelative_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%4",
				"%2",
				"In",
				"%14"
			};
		};
	};
	class SentEnemyDetectedGroupCoreRelative
	{
		sentences[]=
		{
			"SentEnemyDetectedGroupCoreRelativeDefault",
			"(1-Stealth)",
			"SentEnemyDetectedGroupCoreRelativeStealth",
			"Stealth"
		};
	};
	class SentEnemyDetectedGroupCoreRelativeDefault
	{
		versions[]=
		{
			"SentEnemyDetectedGroupCoreRelative_1",
			0.2,
			"SentEnemyDetectedGroupCoreRelative_2",
			0.2,
			"SentEnemyDetectedGroupCoreRelative_3",
			0.2,
			"SentEnemyDetectedGroupCoreRelative_4",
			0.2,
			"SentEnemyDetectedGroupCoreRelative_5",
			0.2
		};
		class SentEnemyDetectedGroupCoreRelative_1
		{
			speech[]=
			{
				"%6.3",
				"%5.101",
				"%4",
				"%2"
			};
		};
		class SentEnemyDetectedGroupCoreRelative_2
		{
			speech[]=
			{
				"%4",
				"%2",
				"ToOur",
				"%6.2",
				"%5.3"
			};
		};
		class SentEnemyDetectedGroupCoreRelative_3
		{
			speech[]=
			{
				"%4",
				"%2",
				"ToOur",
				"%6.3",
				"%5.3"
			};
		};
		class SentEnemyDetectedGroupCoreRelative_4
		{
			speech[]=
			{
				"%4",
				"%2",
				"%5.2",
				"%6.1",
				"Us"
			};
		};
		class SentEnemyDetectedGroupCoreRelative_5
		{
			speech[]=
			{
				"%4",
				"%2",
				"%5.2",
				"ToOur",
				"%6.2"
			};
		};
	};
	class SentEnemyDetectedGroupCoreRelativeStealth
	{
		versions[]=
		{
			"SentEnemyDetectedGroupCoreRelative_1",
			0.2,
			"SentEnemyDetectedGroupCoreRelative_2",
			0.2,
			"SentEnemyDetectedGroupCoreRelative_3",
			0.2,
			"SentEnemyDetectedGroupCoreRelative_4",
			0.2,
			"SentEnemyDetectedGroupCoreRelative_5",
			0.2
		};
		class SentEnemyDetectedGroupCoreRelative_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%6.3",
				"%5.101",
				"%4",
				"%2"
			};
		};
		class SentEnemyDetectedGroupCoreRelative_2
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%4",
				"%2",
				"ToOur",
				"%6.2",
				"%5.3"
			};
		};
		class SentEnemyDetectedGroupCoreRelative_3
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%4",
				"%2",
				"ToOur",
				"%6.3",
				"%5.3"
			};
		};
		class SentEnemyDetectedGroupCoreRelative_4
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%4",
				"%2",
				"%5.2",
				"%6.1",
				"Us"
			};
		};
		class SentEnemyDetectedGroupCoreRelative_5
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%4",
				"%2",
				"%5.2",
				"ToOur",
				"%6.2"
			};
		};
	};
	class SentEnemyDetectedOnGridReference
	{
		sentences[]=
		{
			"SentEnemyDetectedOnGridReferenceDefault",
			"(1-Stealth)",
			"SentEnemyDetectedOnGridReferenceStealth",
			"Stealth"
		};
	};
	class SentEnemyDetectedOnGridReferenceDefault
	{
		versions[]=
		{
			"SentEnemyDetectedOnGridReference_1",
			1
		};
		class SentEnemyDetectedOnGridReference_1
		{
			speech[]=
			{
				"%3",
				"%2",
				"%4"
			};
		};
	};
	class SentEnemyDetectedOnGridReferenceStealth
	{
		versions[]=
		{
			"SentEnemyDetectedOnGridReference_1",
			1
		};
		class SentEnemyDetectedOnGridReference_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%3",
				"%2",
				"%4"
			};
		};
	};
	class SentCmdMoveGroupRelative
	{
		sentences[]=
		{
			"SentCmdMoveGroupRelativeDefault",
			"(1-Stealth)",
			"SentCmdMoveGroupRelativeStealth",
			"Stealth"
		};
	};
	class SentCmdMoveGroupRelativeDefault
	{
		versions[]=
		{
			"SentCmdMoveGroupRelative_1",
			1
		};
		class SentCmdMoveGroupRelative_1
		{
			speech[]=
			{
				"%1.1",
				"Move",
				"%3.101",
				"ToOur",
				"%4.2"
			};
		};
	};
	class SentCmdMoveGroupRelativeStealth
	{
		versions[]=
		{
			"SentCmdMoveGroupRelative_1",
			1
		};
		class SentCmdMoveGroupRelative_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"Move",
				"%3.101",
				"ToOur",
				"%4.2"
			};
		};
	};
	class SentCmdMoveToGrid
	{
		sentences[]=
		{
			"SentCmdMoveToGridDefault",
			"(1-Stealth)",
			"SentCmdMoveToGridStealth",
			"Stealth"
		};
	};
	class SentCmdMoveToGridDefault
	{
		versions[]=
		{
			"SentCmdMoveToGrid_1",
			0.5,
			"SentCmdMoveToGrid_2",
			0.5
		};
		class SentCmdMoveToGrid_1
		{
			speech[]=
			{
				"%1.1",
				"MoveTo",
				"%2"
			};
		};
		class SentCmdMoveToGrid_2
		{
			speech[]=
			{
				"%1.1",
				"GoTo",
				"%2"
			};
		};
	};
	class SentCmdMoveToGridStealth
	{
		versions[]=
		{
			"SentCmdMoveToGrid_1",
			0.5,
			"SentCmdMoveToGrid_2",
			0.5
		};
		class SentCmdMoveToGrid_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"MoveTo",
				"%2"
			};
		};
		class SentCmdMoveToGrid_2
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"GoTo",
				"%2"
			};
		};
	};
	class SentCmdMoveRecipientsRelative
	{
		sentences[]=
		{
			"SentCmdMoveRecipientsRelativeDefault",
			"(1-Stealth)",
			"SentCmdMoveRecipientsRelativeStealth",
			"Stealth"
		};
	};
	class SentCmdMoveRecipientsRelativeDefault
	{
		versions[]=
		{
			"SentCmdMoveRecipientsRelative_1",
			1
		};
		class SentCmdMoveRecipientsRelative_1
		{
			speech[]=
			{
				"%1.1",
				"Move",
				"%10.101",
				"%11.101"
			};
		};
	};
	class SentCmdMoveRecipientsRelativeStealth
	{
		versions[]=
		{
			"SentCmdMoveRecipientsRelative_1",
			1
		};
		class SentCmdMoveRecipientsRelative_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"Move",
				"%10.101",
				"%11.101"
			};
		};
	};
	class SentCmdMoveToObject
	{
		sentences[]=
		{
			"SentCmdMoveToObjectDefault",
			"(1-Stealth)",
			"SentCmdMoveToObjectStealth",
			"Stealth"
		};
	};
	class SentCmdMoveToObjectDefault
	{
		versions[]=
		{
			"SentCmdMoveToObject_1",
			0.5,
			"SentCmdMoveToObject_2",
			0.5
		};
		class SentCmdMoveToObject_1
		{
			speech[]=
			{
				"%1.1",
				"MoveTo",
				"That",
				"%8"
			};
		};
		class SentCmdMoveToObject_2
		{
			speech[]=
			{
				"%1.1",
				"GoTo",
				"That",
				"%8",
				"ToOur",
				"%9.2"
			};
		};
	};
	class SentCmdMoveToObjectStealth
	{
		versions[]=
		{
			"SentCmdMoveToObject_1",
			0.5,
			"SentCmdMoveToObject_2",
			0.5
		};
		class SentCmdMoveToObject_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"MoveTo",
				"That",
				"%8"
			};
		};
		class SentCmdMoveToObject_2
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"GoTo",
				"That",
				"%8",
				"ToOur",
				"%9.2"
			};
		};
	};
	class SentCmdMoveLocationRelative
	{
		sentences[]=
		{
			"SentCmdMoveLocationRelativeDefault",
			"(1-Stealth)",
			"SentCmdMoveLocationRelativeStealth",
			"Stealth"
		};
	};
	class SentCmdMoveLocationRelativeDefault
	{
		versions[]=
		{
			"SentCmdMoveLocationRelative_1",
			0.5,
			"SentCmdMoveLocationRelative_2",
			0.5
		};
		class SentCmdMoveLocationRelative_1
		{
			speech[]=
			{
				"%1.1",
				"Move",
				"%5.101",
				"%6",
				"Of",
				"%7"
			};
		};
		class SentCmdMoveLocationRelative_2
		{
			speech[]=
			{
				"%1.1",
				"MoveTo",
				"%7"
			};
		};
	};
	class SentCmdMoveLocationRelativeStealth
	{
		versions[]=
		{
			"SentCmdMoveLocationRelative_1",
			0.5,
			"SentCmdMoveLocationRelative_2",
			0.5
		};
		class SentCmdMoveLocationRelative_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"Move",
				"%5.101",
				"%6",
				"Of",
				"%7"
			};
		};
		class SentCmdMoveLocationRelative_2
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"MoveTo",
				"%7"
			};
		};
	};
	class VehicleMoveGroupRelative
	{
		sentences[]=
		{
			"VehicleMoveGroupRelativeDefault",
			"(1-Stealth)",
			"VehicleMoveGroupRelativeStealth",
			"Stealth"
		};
	};
	class VehicleMoveGroupRelativeDefault
	{
		versions[]=
		{
			"VehicleMoveGroupRelative_1",
			1
		};
		class VehicleMoveGroupRelative_1
		{
			speech[]=
			{
				"XMIT",
				"Move",
				"%2.101",
				"ToOur",
				"%3.2"
			};
		};
	};
	class VehicleMoveGroupRelativeStealth
	{
		versions[]=
		{
			"VehicleMoveGroupRelative_1",
			1
		};
		class VehicleMoveGroupRelative_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"XMIT",
				"Move",
				"%2.101",
				"ToOur",
				"%3.2"
			};
		};
	};
	class VehicleMoveToGrid
	{
		sentences[]=
		{
			"VehicleMoveToGridDefault",
			"(1-Stealth)",
			"VehicleMoveToGridStealth",
			"Stealth"
		};
	};
	class VehicleMoveToGridDefault
	{
		versions[]=
		{
			"VehicleMoveToGrid_1",
			0.5,
			"VehicleMoveToGrid_2",
			0.5
		};
		class VehicleMoveToGrid_1
		{
			speech[]=
			{
				"XMIT",
				"MoveTo",
				"%1"
			};
		};
		class VehicleMoveToGrid_2
		{
			speech[]=
			{
				"XMIT",
				"GoTo",
				"%1"
			};
		};
	};
	class VehicleMoveToGridStealth
	{
		versions[]=
		{
			"VehicleMoveToGrid_1",
			0.5,
			"VehicleMoveToGrid_2",
			0.5
		};
		class VehicleMoveToGrid_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"XMIT",
				"MoveTo",
				"%1"
			};
		};
		class VehicleMoveToGrid_2
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"XMIT",
				"GoTo",
				"%1"
			};
		};
	};
	class VehicleMoveRecipientsRelative
	{
		sentences[]=
		{
			"VehicleMoveRecipientsRelativeDefault",
			"(1-Stealth)",
			"VehicleMoveRecipientsRelativeStealth",
			"Stealth"
		};
	};
	class VehicleMoveRecipientsRelativeDefault
	{
		versions[]=
		{
			"VehicleMoveRecipientsRelative_1",
			1
		};
		class VehicleMoveRecipientsRelative_1
		{
			speech[]=
			{
				"XMIT",
				"Move",
				"%9.101",
				"%10.101"
			};
		};
	};
	class VehicleMoveRecipientsRelativeStealth
	{
		versions[]=
		{
			"VehicleMoveRecipientsRelative_1",
			1
		};
		class VehicleMoveRecipientsRelative_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"XMIT",
				"Move",
				"%9.101",
				"%10.101"
			};
		};
	};
	class VehicleMoveToObject
	{
		sentences[]=
		{
			"VehicleMoveToObjectDefault",
			"(1-Stealth)",
			"VehicleMoveToObjectStealth",
			"Stealth"
		};
	};
	class VehicleMoveToObjectDefault
	{
		versions[]=
		{
			"VehicleMoveToObject_1",
			0.5,
			"VehicleMoveToObject_2",
			0.5
		};
		class VehicleMoveToObject_1
		{
			speech[]=
			{
				"XMIT",
				"MoveTo",
				"That",
				"%7"
			};
		};
		class VehicleMoveToObject_2
		{
			speech[]=
			{
				"XMIT",
				"GoTo",
				"That",
				"%7",
				"ToOur",
				"%8.2"
			};
		};
	};
	class VehicleMoveToObjectStealth
	{
		versions[]=
		{
			"VehicleMoveToObject_1",
			0.5,
			"VehicleMoveToObject_2",
			0.5
		};
		class VehicleMoveToObject_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"XMIT",
				"MoveTo",
				"That",
				"%7"
			};
		};
		class VehicleMoveToObject_2
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"XMIT",
				"GoTo",
				"That",
				"%7",
				"ToOur",
				"%8.2"
			};
		};
	};
	class VehicleMoveLocationRelative
	{
		sentences[]=
		{
			"VehicleMoveLocationRelativeDefault",
			"(1-Stealth)",
			"VehicleMoveLocationRelativeStealth",
			"Stealth"
		};
	};
	class VehicleMoveLocationRelativeDefault
	{
		versions[]=
		{
			"VehicleMoveLocationRelative_1",
			0.5,
			"VehicleMoveLocationRelative_2",
			0.5
		};
		class VehicleMoveLocationRelative_1
		{
			speech[]=
			{
				"XMIT",
				"Move",
				"%4.101",
				"%5",
				"Of",
				"%6"
			};
		};
		class VehicleMoveLocationRelative_2
		{
			speech[]=
			{
				"XMIT",
				"MoveTo",
				"%6"
			};
		};
	};
	class VehicleMoveLocationRelativeStealth
	{
		versions[]=
		{
			"VehicleMoveLocationRelative_1",
			0.5,
			"VehicleMoveLocationRelative_2",
			0.5
		};
		class VehicleMoveLocationRelative_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"XMIT",
				"Move",
				"%4.101",
				"%5",
				"Of",
				"%6"
			};
		};
		class VehicleMoveLocationRelative_2
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"XMIT",
				"MoveTo",
				"%6"
			};
		};
	};
	class SentEnemyToOur
	{
		sentences[]=
		{
			"SentEnemyToOurDefault",
			"(1-Stealth)",
			"SentEnemyToOurStealth",
			"Stealth"
		};
	};
	class SentEnemyToOurDefault
	{
		versions[]=
		{
			"SentEnemyToOur_1",
			0.2,
			"SentEnemyToOur_2",
			0.2,
			"SentEnemyToOur_3",
			0.2,
			"SentEnemyToOur_4",
			0.2,
			"SentEnemyToOur_5",
			0.2
		};
		class SentEnemyToOur_1
		{
			speech[]=
			{
				"%16.202",
				"%4",
				"%2",
				"%15.3"
			};
		};
		class SentEnemyToOur_2
		{
			speech[]=
			{
				"%16.202",
				"%4",
				"%2",
				"%15.101"
			};
		};
		class SentEnemyToOur_3
		{
			speech[]=
			{
				"%16.202",
				"%4",
				"%15.3"
			};
		};
		class SentEnemyToOur_4
		{
			speech[]=
			{
				"%4",
				"%2",
				"%16.202",
				"%15.101"
			};
		};
		class SentEnemyToOur_5
		{
			speech[]=
			{
				"%4",
				"%2",
				"%6.2",
				"%5.101"
			};
		};
	};
	class SentEnemyToOurStealth
	{
		versions[]=
		{
			"SentEnemyToOur_1",
			0.2,
			"SentEnemyToOur_2",
			0.2,
			"SentEnemyToOur_3",
			0.2,
			"SentEnemyToOur_4",
			0.2,
			"SentEnemyToOur_5",
			0.2
		};
		class SentEnemyToOur_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%16.202",
				"%4",
				"%2",
				"%15.3"
			};
		};
		class SentEnemyToOur_2
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%16.202",
				"%4",
				"%2",
				"%15.101"
			};
		};
		class SentEnemyToOur_3
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%16.202",
				"%4",
				"%15.3"
			};
		};
		class SentEnemyToOur_4
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%4",
				"%2",
				"%16.202",
				"%15.101"
			};
		};
		class SentEnemyToOur_5
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%4",
				"%2",
				"%6.2",
				"%5.101"
			};
		};
	};
	class SentEnemyOnGrid
	{
		sentences[]=
		{
			"SentEnemyOnGridDefault",
			"(1-Stealth)",
			"SentEnemyOnGridStealth",
			"Stealth"
		};
	};
	class SentEnemyOnGridDefault
	{
		versions[]=
		{
			"SentEnemyOnGrid_1",
			0.33000001,
			"SentEnemyOnGrid_2",
			0.33000001,
			"SentEnemyOnGrid_3",
			0.33000001
		};
		class SentEnemyOnGrid_1
		{
			speech[]=
			{
				"%4",
				"%2",
				"Position",
				"%3"
			};
		};
		class SentEnemyOnGrid_2
		{
			speech[]=
			{
				"%4",
				"%2",
				"Grid",
				"%3"
			};
		};
		class SentEnemyOnGrid_3
		{
			speech[]=
			{
				"%3",
				"%4",
				"%2"
			};
		};
	};
	class SentEnemyOnGridStealth
	{
		versions[]=
		{
			"SentEnemyOnGrid_1",
			0.33000001,
			"SentEnemyOnGrid_2",
			0.33000001,
			"SentEnemyOnGrid_3",
			0.33000001
		};
		class SentEnemyOnGrid_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%4",
				"%2",
				"Position",
				"%3"
			};
		};
		class SentEnemyOnGrid_2
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%4",
				"%2",
				"Grid",
				"%3"
			};
		};
		class SentEnemyOnGrid_3
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%3",
				"%4",
				"%2"
			};
		};
	};
	class SentCmdMoveToOur
	{
		sentences[]=
		{
			"SentCmdMoveToOurDefault",
			"(1-Stealth)",
			"SentCmdMoveToOurStealth",
			"Stealth"
		};
	};
	class SentCmdMoveToOurDefault
	{
		versions[]=
		{
			"SentCmdMoveToOur_1",
			0.5,
			"SentCmdMoveToOur_2",
			0.5
		};
		class SentCmdMoveToOur_1
		{
			speech[]=
			{
				"%1.1",
				"Move",
				"%12.101",
				"%13.202"
			};
		};
		class SentCmdMoveToOur_2
		{
			speech[]=
			{
				"%1.1",
				"Move",
				"%12.101",
				"%13.202"
			};
		};
	};
	class SentCmdMoveToOurStealth
	{
		versions[]=
		{
			"SentCmdMoveToOur_1",
			0.5,
			"SentCmdMoveToOur_2",
			0.5
		};
		class SentCmdMoveToOur_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"Move",
				"%12.101",
				"%13.202"
			};
		};
		class SentCmdMoveToOur_2
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"Move",
				"%12.101",
				"%13.202"
			};
		};
	};
	class SentCmdMoveNearObject
	{
		sentences[]=
		{
			"SentCmdMoveNearObjectDefault",
			"(1-Stealth)",
			"SentCmdMoveNearObjectStealth",
			"Stealth"
		};
	};
	class SentCmdMoveNearObjectDefault
	{
		versions[]=
		{
			"SentCmdMoveNearObject_1",
			0.5,
			"SentCmdMoveNearObject_2",
			0.5
		};
		class SentCmdMoveNearObject_1
		{
			speech[]=
			{
				"%1.1",
				"MoveTo",
				"%8",
				"%13.202"
			};
		};
		class SentCmdMoveNearObject_2
		{
			speech[]=
			{
				"%1.1",
				"MoveTo",
				"%8",
				"%13.202"
			};
		};
	};
	class SentCmdMoveNearObjectStealth
	{
		versions[]=
		{
			"SentCmdMoveNearObject_1",
			0.5,
			"SentCmdMoveNearObject_2",
			0.5
		};
		class SentCmdMoveNearObject_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"MoveTo",
				"%8",
				"%13.202"
			};
		};
		class SentCmdMoveNearObject_2
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"MoveTo",
				"%8",
				"%13.202"
			};
		};
	};
	class SentCmdMoveToGridPos
	{
		sentences[]=
		{
			"SentCmdMoveToGridPosDefault",
			"(1-Stealth)",
			"SentCmdMoveToGridPosStealth",
			"Stealth"
		};
	};
	class SentCmdMoveToGridPosDefault
	{
		versions[]=
		{
			"SentCmdMoveToGridPos_1",
			1
		};
		class SentCmdMoveToGridPos_1
		{
			speech[]=
			{
				"%1.1",
				"MoveTo",
				"%2"
			};
		};
	};
	class SentCmdMoveToGridPosStealth
	{
		versions[]=
		{
			"SentCmdMoveToGridPos_1",
			1
		};
		class SentCmdMoveToGridPos_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"MoveTo",
				"%2"
			};
		};
	};
	class SentUnitKilled
	{
		sentences[]=
		{
			"SentUnitKilledDefault",
			"(1-Stealth)",
			"SentUnitKilledStealth",
			"Stealth"
		};
	};
	class SentUnitKilledDefault
	{
		versions[]=
		{
			"SentUnitKilled_1",
			0.33000001,
			"SentUnitKilled_2",
			0.33000001,
			"SentUnitKilled_3",
			0.33000001
		};
		class SentUnitKilled_1
		{
			speech[]=
			{
				"%1.1",
				"IsDownE"
			};
		};
		class SentUnitKilled_2
		{
			gesture="gestureGo";
			speech[]=
			{
				"WeLost",
				"%1.1"
			};
		};
		class SentUnitKilled_3
		{
			speech[]=
			{
				"%1.1",
				"IsDead"
			};
		};
	};
	class SentUnitKilledStealth
	{
		versions[]=
		{
			"SentUnitKilled_1",
			0.5,
			"SentUnitKilled_2",
			0.5,
			"SentUnitKilled_3",
			0
		};
		class SentUnitKilled_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"IsDownE"
			};
		};
		class SentUnitKilled_2
		{
			wordsClass="StealthWords";
			gesture="gestureGo";
			speech[]=
			{
				"WeLost",
				"%1.1"
			};
		};
		class SentUnitKilled_3
		{
			speech[]=
			{
				"%1.1",
				"IsDead"
			};
		};
	};
	class SentSupportAskHeal
	{
		sentences[]=
		{
			"SentSupportAskHealDefault",
			"(1-Stealth)",
			"SentSupportAskHealStealth",
			"Stealth"
		};
	};
	class SentSupportAskHealDefault
	{
		versions[]=
		{
			"SentSupportAskHeal_1",
			1
		};
		class SentSupportAskHeal_1
		{
			speech[]=
			{
				"RequestingSupportTo",
				"%1",
				"Over"
			};
		};
	};
	class SentSupportAskHealStealth
	{
		versions[]=
		{
			"SentSupportAskHeal_1",
			1
		};
		class SentSupportAskHeal_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"RequestingSupportTo",
				"%1",
				"Over"
			};
		};
	};
	class SentSupportAskRepair
	{
		sentences[]=
		{
			"SentSupportAskRepairDefault",
			"(1-Stealth)",
			"SentSupportAskRepairStealth",
			"Stealth"
		};
	};
	class SentSupportAskRepairDefault
	{
		versions[]=
		{
			"SentSupportAskRepair_1",
			1
		};
		class SentSupportAskRepair_1
		{
			speech[]=
			{
				"RequestingSupportTo",
				"%1",
				"Over"
			};
		};
	};
	class SentSupportAskRepairStealth
	{
		versions[]=
		{
			"SentSupportAskRepair_1",
			1
		};
		class SentSupportAskRepair_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"RequestingSupportTo",
				"%1",
				"Over"
			};
		};
	};
	class SentSupportAskRefuel
	{
		sentences[]=
		{
			"SentSupportAskRefuelDefault",
			"(1-Stealth)",
			"SentSupportAskRefuelStealth",
			"Stealth"
		};
	};
	class SentSupportAskRefuelDefault
	{
		versions[]=
		{
			"SentSupportAskRefuel_1",
			1
		};
		class SentSupportAskRefuel_1
		{
			speech[]=
			{
				"RequestingSupportTo",
				"%1",
				"Over"
			};
		};
	};
	class SentSupportAskRefuelStealth
	{
		versions[]=
		{
			"SentSupportAskRefuel_1",
			1
		};
		class SentSupportAskRefuel_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"RequestingSupportTo",
				"%1",
				"Over"
			};
		};
	};
	class SentSupportAskRearm
	{
		sentences[]=
		{
			"SentSupportAskRearmDefault",
			"(1-Stealth)",
			"SentSupportAskRearmStealth",
			"Stealth"
		};
	};
	class SentSupportAskRearmDefault
	{
		versions[]=
		{
			"SentSupportAskRearm_1",
			1
		};
		class SentSupportAskRearm_1
		{
			speech[]=
			{
				"RequestingSupportTo",
				"%1",
				"Over"
			};
		};
	};
	class SentSupportAskRearmStealth
	{
		versions[]=
		{
			"SentSupportAskRearm_1",
			1
		};
		class SentSupportAskRearm_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"RequestingSupportTo",
				"%1",
				"Over"
			};
		};
	};
	class SentSupportConfirm
	{
		sentences[]=
		{
			"SentSupportConfirmDefault",
			"(1-Stealth)",
			"SentSupportConfirmStealth",
			"Stealth"
		};
	};
	class SentSupportConfirmDefault
	{
		versions[]=
		{
			"SentSupportConfirm_1",
			0.33000001,
			"SentSupportConfirm_2",
			0.33000001,
			"SentSupportConfirm_3",
			0.33000001
		};
		class SentSupportConfirm_1
		{
			speech[]=
			{
				"Roger"
			};
		};
		class SentSupportConfirm_2
		{
			speech[]=
			{
				"Copy"
			};
		};
		class SentSupportConfirm_3
		{
			speech[]=
			{
				"OscarMike"
			};
		};
	};
	class SentSupportConfirmStealth
	{
		versions[]=
		{
			"SentSupportConfirm_1",
			0.33000001,
			"SentSupportConfirm_2",
			0.33000001,
			"SentSupportConfirm_3",
			0.33000001
		};
		class SentSupportConfirm_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Roger"
			};
		};
		class SentSupportConfirm_2
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Copy"
			};
		};
		class SentSupportConfirm_3
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"OscarMike"
			};
		};
	};
	class SentSupportReady
	{
		sentences[]=
		{
			"SentSupportReadyDefault",
			"(1-Stealth)",
			"SentSupportReadyStealth",
			"Stealth"
		};
	};
	class SentSupportReadyDefault
	{
		versions[]=
		{
			"SentSupportReady_1",
			1
		};
		class SentSupportReady_1
		{
			speech[]=
			{
				"Ready"
			};
		};
	};
	class SentSupportReadyStealth
	{
		versions[]=
		{
			"SentSupportReady_1",
			1
		};
		class SentSupportReady_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Ready"
			};
		};
	};
	class SentSupportDone
	{
		sentences[]=
		{
			"SentSupportDoneDefault",
			"(1-Stealth)",
			"SentSupportDoneStealth",
			"Stealth"
		};
	};
	class SentSupportDoneDefault
	{
		versions[]=
		{
			"SentSupportDone_1",
			1
		};
		class SentSupportDone_1
		{
			speech[]=
			{
				"Ready"
			};
		};
	};
	class SentSupportDoneStealth
	{
		versions[]=
		{
			"SentSupportDone_1",
			1
		};
		class SentSupportDone_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Ready"
			};
		};
	};
	class SentSupportNotAvailable
	{
		sentences[]=
		{
			"SentSupportNotAvailableDefault",
			"(1-Stealth)",
			"SentSupportNotAvailableStealth",
			"Stealth"
		};
	};
	class SentSupportNotAvailableDefault
	{
		versions[]=
		{
			"SentSupportNotAvailable_1",
			1
		};
		class SentSupportNotAvailable_1
		{
			speech[]=
			{
				"Negative"
			};
		};
	};
	class SentSupportNotAvailableStealth
	{
		versions[]=
		{
			"SentSupportNotAvailable_1",
			1
		};
		class SentSupportNotAvailable_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Negative"
			};
		};
	};
	class SentHealthCritical
	{
		sentences[]=
		{
			"SentHealthCriticalDefault",
			"(1-Stealth)",
			"SentHealthCriticalStealth",
			"Stealth"
		};
	};
	class SentHealthCriticalDefault
	{
		versions[]=
		{
			"SentHealthCritical_1",
			0.2,
			"SentHealthCritical_2",
			0.2,
			"SentHealthCritical_3",
			0.2,
			"SentHealthCritical_4",
			0.2,
			"SentHealthCritical_5",
			0.2
		};
		class SentHealthCritical_1
		{
			speech[]=
			{
				"Injured"
			};
		};
		class SentHealthCritical_2
		{
			speech[]=
			{
				"SomebodyHelpMeE"
			};
		};
		class SentHealthCritical_3
		{
			speech[]=
			{
				"NeedHelpE"
			};
		};
		class SentHealthCritical_4
		{
			speech[]=
			{
				"WoundedE"
			};
		};
		class SentHealthCritical_5
		{
			speech[]=
			{
				"MedicE"
			};
		};
	};
	class SentHealthCriticalStealth
	{
		versions[]=
		{
			"SentHealthCritical_1",
			0.25,
			"SentHealthCritical_2",
			0,
			"SentHealthCritical_3",
			0.25,
			"SentHealthCritical_4",
			0.25,
			"SentHealthCritical_5",
			0.25
		};
		class SentHealthCritical_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Injured"
			};
		};
		class SentHealthCritical_2
		{
			speech[]=
			{
				"SomebodyHelpMeE"
			};
		};
		class SentHealthCritical_3
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"NeedHelpE"
			};
		};
		class SentHealthCritical_4
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"WoundedE"
			};
		};
		class SentHealthCritical_5
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"MedicE"
			};
		};
	};
	class SentDammageCritical
	{
		sentences[]=
		{
			"SentDammageCriticalDefault",
			"(1-Stealth)",
			"SentDammageCriticalStealth",
			"Stealth"
		};
	};
	class SentDammageCriticalDefault
	{
		versions[]=
		{
			"SentDammageCritical_1",
			0.5,
			"SentDammageCritical_2",
			0.5
		};
		class SentDammageCritical_1
		{
			speech[]=
			{
				"StatusRedE"
			};
		};
		class SentDammageCritical_2
		{
			speech[]=
			{
				"CriticalDamageE"
			};
		};
	};
	class SentDammageCriticalStealth
	{
		versions[]=
		{
			"SentDammageCritical_1",
			1,
			"SentDammageCritical_2",
			0
		};
		class SentDammageCritical_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"StatusRedE"
			};
		};
		class SentDammageCritical_2
		{
			speech[]=
			{
				"CriticalDamageE"
			};
		};
	};
	class SentFuelCritical
	{
		sentences[]=
		{
			"SentFuelCriticalDefault",
			1
		};
	};
	class SentFuelCriticalDefault
	{
		versions[]=
		{
			"SentFuelCritical_1",
			0.5,
			"SentFuelCritical_2",
			0.5
		};
		class SentFuelCritical_1
		{
			speech[]=
			{
				"BeAdvised",
				"OutOfFuelE"
			};
		};
		class SentFuelCritical_2
		{
			speech[]=
			{
				"RunningOutOfFuel"
			};
		};
	};
	class SentFuelLow
	{
		sentences[]=
		{
			"SentFuelLowDefault",
			1
		};
	};
	class SentFuelLowDefault
	{
		versions[]=
		{
			"SentFuelLow_1",
			0.5,
			"SentFuelLow_2",
			0.5
		};
		class SentFuelLow_1
		{
			speech[]=
			{
				"OutOfFuelE"
			};
		};
		class SentFuelLow_2
		{
			speech[]=
			{
				"BingoFuel"
			};
		};
	};
	class SentAmmoCritical
	{
		sentences[]=
		{
			"SentAmmoCriticalDefault",
			"(1-Stealth)",
			"SentAmmoCriticalStealth",
			"Stealth"
		};
	};
	class SentAmmoCriticalDefault
	{
		versions[]=
		{
			"SentAmmoCritical_1",
			0.33000001,
			"SentAmmoCritical_2",
			0.33000001,
			"SentAmmoCritical_3",
			0.33000001
		};
		class SentAmmoCritical_1
		{
			speech[]=
			{
				"OutOfAmmoE"
			};
		};
		class SentAmmoCritical_2
		{
			speech[]=
			{
				"NoMoreAmmoE"
			};
		};
		class SentAmmoCritical_3
		{
			speech[]=
			{
				"CantShoot",
				"OutOfAmmoE"
			};
		};
	};
	class SentAmmoCriticalStealth
	{
		versions[]=
		{
			"SentAmmoCritical_1",
			1,
			"SentAmmoCritical_2",
			0,
			"SentAmmoCritical_3",
			0
		};
		class SentAmmoCritical_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"OutOfAmmoE"
			};
		};
		class SentAmmoCritical_2
		{
			speech[]=
			{
				"NoMoreAmmoE"
			};
		};
		class SentAmmoCritical_3
		{
			speech[]=
			{
				"CantShoot",
				"OutOfAmmoE"
			};
		};
	};
	class SentAmmoLow
	{
		sentences[]=
		{
			"SentAmmoLowDefault",
			"(1-Stealth)",
			"SentAmmoLowStealth",
			"Stealth"
		};
	};
	class SentAmmoLowDefault
	{
		versions[]=
		{
			"SentAmmoLow_1",
			1
		};
		class SentAmmoLow_1
		{
			speech[]=
			{
				"RunningOutOfAmmo"
			};
		};
	};
	class SentAmmoLowStealth
	{
		versions[]=
		{
			"SentAmmoLow_1",
			1
		};
		class SentAmmoLow_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"RunningOutOfAmmo"
			};
		};
	};
	class SentReportPosition
	{
		sentences[]=
		{
			"SentReportPositionDefault",
			"(1-Stealth)",
			"SentReportPositionStealth",
			"Stealth"
		};
	};
	class SentReportPositionDefault
	{
		versions[]=
		{
			"SentReportPosition_1",
			1
		};
		class SentReportPosition_1
		{
			speech[]=
			{
				"ImAtGrid",
				"%2"
			};
		};
	};
	class SentReportPositionStealth
	{
		versions[]=
		{
			"SentReportPosition_1",
			1
		};
		class SentReportPosition_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"ImAtGrid",
				"%2"
			};
		};
	};
	class SentIsLeader
	{
		sentences[]=
		{
			"SentIsLeaderDefault",
			"(1-Stealth)",
			"SentIsLeaderStealth",
			"Stealth"
		};
	};
	class SentIsLeaderDefault
	{
		versions[]=
		{
			"SentIsLeader_1",
			0.5,
			"SentIsLeader_2",
			0.5
		};
		class SentIsLeader_1
		{
			speech[]=
			{
				"%1",
				"ImTheNewActual"
			};
		};
		class SentIsLeader_2
		{
			speech[]=
			{
				"%1",
				"TakingCommand"
			};
		};
	};
	class SentIsLeaderStealth
	{
		versions[]=
		{
			"SentIsLeader_1",
			0,
			"SentIsLeader_2",
			1
		};
		class SentIsLeader_1
		{
			speech[]=
			{
				"%1",
				"ImTheNewActual"
			};
		};
		class SentIsLeader_2
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1",
				"TakingCommand"
			};
		};
	};
	class SentCommandCompleted
	{
		sentences[]=
		{
			"SentCommandCompletedDefault",
			"(1-Stealth)",
			"SentCommandCompletedStealth",
			"Stealth"
		};
	};
	class SentCommandCompletedDefault
	{
		versions[]=
		{
			"SentCommandCompleted_1",
			0.33000001,
			"SentCommandCompleted_2",
			0.33000001,
			"SentCommandCompleted_3",
			0.33000001
		};
		class SentCommandCompleted_1
		{
			speech[]=
			{
				"Ready"
			};
		};
		class SentCommandCompleted_2
		{
			speech[]=
			{
				"Waiting"
			};
		};
		class SentCommandCompleted_3
		{
			speech[]=
			{
				"StandingBy"
			};
		};
	};
	class SentCommandCompletedStealth
	{
		versions[]=
		{
			"SentCommandCompleted_1",
			0.33000001,
			"SentCommandCompleted_2",
			0.33000001,
			"SentCommandCompleted_3",
			0.33000001
		};
		class SentCommandCompleted_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Ready"
			};
		};
		class SentCommandCompleted_2
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Waiting"
			};
		};
		class SentCommandCompleted_3
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"StandingBy"
			};
		};
	};
	class SentJoinCompleted
	{
		sentences[]=
		{
			"SentJoinCompletedDefault",
			"(1-Stealth)",
			"SentJoinCompletedStealth",
			"Stealth"
		};
	};
	class SentJoinCompletedDefault
	{
		versions[]=
		{
			"SentJoinCompleted_1",
			1
		};
		class SentJoinCompleted_1
		{
			speech[]=
			{
				"Ready"
			};
		};
	};
	class SentJoinCompletedStealth
	{
		versions[]=
		{
			"SentJoinCompleted_1",
			1
		};
		class SentJoinCompleted_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Ready"
			};
		};
	};
	class SentFireReady
	{
		sentences[]=
		{
			"SentFireReadyDefault",
			"(1-Stealth)",
			"SentFireReadyStealth",
			"Stealth"
		};
	};
	class SentFireReadyDefault
	{
		versions[]=
		{
			"SentFireReady_1",
			0.25,
			"SentFireReady_2",
			0.25,
			"SentFireReady_3",
			0.25,
			"SentFireReady_4",
			0.25
		};
		class SentFireReady_1
		{
			speech[]=
			{
				"ReadyToFire"
			};
		};
		class SentFireReady_2
		{
			speech[]=
			{
				"TargetInSight"
			};
		};
		class SentFireReady_3
		{
			speech[]=
			{
				"TargetAcquired"
			};
		};
		class SentFireReady_4
		{
			speech[]=
			{
				"EyesOnTarget"
			};
		};
	};
	class SentFireReadyStealth
	{
		versions[]=
		{
			"SentFireReady_1",
			0.33000001,
			"SentFireReady_2",
			0.33000001,
			"SentFireReady_3",
			0,
			"SentFireReady_4",
			0.33000001
		};
		class SentFireReady_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"ReadyToFire"
			};
		};
		class SentFireReady_2
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"TargetInSight"
			};
		};
		class SentFireReady_3
		{
			speech[]=
			{
				"TargetAcquired"
			};
		};
		class SentFireReady_4
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"EyesOnTarget"
			};
		};
	};
	class SentFireNegative
	{
		sentences[]=
		{
			"SentFireNegativeDefault",
			"(1-Stealth)",
			"SentFireNegativeStealth",
			"Stealth"
		};
	};
	class SentFireNegativeDefault
	{
		versions[]=
		{
			"SentFireNegative_1",
			1
		};
		class SentFireNegative_1
		{
			speech[]=
			{
				"CannotFire"
			};
		};
	};
	class SentFireNegativeStealth
	{
		versions[]=
		{
			"SentFireNegative_1",
			1
		};
		class SentFireNegative_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"CannotFire"
			};
		};
	};
	class SentCommandFailed
	{
		sentences[]=
		{
			"SentCommandFailedDefault",
			"(1-Stealth)",
			"SentCommandFailedStealth",
			"Stealth"
		};
	};
	class SentCommandFailedDefault
	{
		versions[]=
		{
			"SentCommandFailed_1",
			0.5,
			"SentCommandFailed_2",
			0.5
		};
		class SentCommandFailed_1
		{
			speech[]=
			{
				"Negative"
			};
		};
		class SentCommandFailed_2
		{
			speech[]=
			{
				"NoCanDo"
			};
		};
	};
	class SentCommandFailedStealth
	{
		versions[]=
		{
			"SentCommandFailed_1",
			0.5,
			"SentCommandFailed_2",
			0.5
		};
		class SentCommandFailed_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Negative"
			};
		};
		class SentCommandFailed_2
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"NoCanDo"
			};
		};
	};
	class SentDestinationUnreacheable
	{
		sentences[]=
		{
			"SentDestinationUnreacheableDefault",
			"(1-Stealth)",
			"SentDestinationUnreacheableStealth",
			"Stealth"
		};
	};
	class SentDestinationUnreacheableDefault
	{
		versions[]=
		{
			"SentDestinationUnreacheable_1",
			0.5,
			"SentDestinationUnreacheable_2",
			0.5
		};
		class SentDestinationUnreacheable_1
		{
			speech[]=
			{
				"CantGetThereE"
			};
		};
		class SentDestinationUnreacheable_2
		{
			speech[]=
			{
				"Negative",
				"CantMakeItThere"
			};
		};
	};
	class SentDestinationUnreacheableStealth
	{
		versions[]=
		{
			"SentDestinationUnreacheable_1",
			1,
			"SentDestinationUnreacheable_2",
			0
		};
		class SentDestinationUnreacheable_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"CantGetThereE"
			};
		};
		class SentDestinationUnreacheable_2
		{
			speech[]=
			{
				"Negative",
				"CantMakeItThere"
			};
		};
	};
	class SentObjectDestroyed
	{
		sentences[]=
		{
			"SentObjectDestroyedDefault",
			"(1-Stealth)",
			"SentObjectDestroyedStealth",
			"Stealth"
		};
	};
	class SentObjectDestroyedDefault
	{
		versions[]=
		{
			"SentObjectDestroyed_1",
			0.17,
			"SentObjectDestroyed_2",
			0.17,
			"SentObjectDestroyed_3",
			0.17,
			"SentObjectDestroyed_4",
			0.17,
			"SentObjectDestroyed_5",
			0.17,
			"SentObjectDestroyed_6",
			0.17
		};
		class SentObjectDestroyed_1
		{
			speech[]=
			{
				"ScratchOneE"
			};
		};
		class SentObjectDestroyed_2
		{
			speech[]=
			{
				"%2",
				"IsHistory"
			};
		};
		class SentObjectDestroyed_3
		{
			speech[]=
			{
				"TargetEliminated"
			};
		};
		class SentObjectDestroyed_4
		{
			speech[]=
			{
				"HesDownE"
			};
		};
		class SentObjectDestroyed_5
		{
			speech[]=
			{
				"IveGotHimE"
			};
		};
		class SentObjectDestroyed_6
		{
			speech[]=
			{
				"HostileDownE"
			};
		};
	};
	class SentObjectDestroyedStealth
	{
		versions[]=
		{
			"SentObjectDestroyed_1",
			0,
			"SentObjectDestroyed_2",
			0,
			"SentObjectDestroyed_3",
			0.33000001,
			"SentObjectDestroyed_4",
			0.33000001,
			"SentObjectDestroyed_5",
			0.33000001,
			"SentObjectDestroyed_6",
			0
		};
		class SentObjectDestroyed_1
		{
			speech[]=
			{
				"ScratchOneE"
			};
		};
		class SentObjectDestroyed_2
		{
			speech[]=
			{
				"%2",
				"IsHistory"
			};
		};
		class SentObjectDestroyed_3
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"TargetEliminated"
			};
		};
		class SentObjectDestroyed_4
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HesDownE"
			};
		};
		class SentObjectDestroyed_5
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"IveGotHimE"
			};
		};
		class SentObjectDestroyed_6
		{
			speech[]=
			{
				"HostileDownE"
			};
		};
	};
	class SentObjectDestroyedUnknown
	{
		sentences[]=
		{
			"SentObjectDestroyedUnknownDefault",
			"(1-Stealth)",
			"SentObjectDestroyedUnknownStealth",
			"Stealth"
		};
	};
	class SentObjectDestroyedUnknownDefault
	{
		versions[]=
		{
			"SentObjectDestroyedUnknown_1",
			0.2,
			"SentObjectDestroyedUnknown_2",
			0.2,
			"SentObjectDestroyedUnknown_3",
			0.2,
			"SentObjectDestroyedUnknown_4",
			0.2,
			"SentObjectDestroyedUnknown_5",
			0.2
		};
		class SentObjectDestroyedUnknown_1
		{
			speech[]=
			{
				"ScratchOneE"
			};
		};
		class SentObjectDestroyedUnknown_2
		{
			speech[]=
			{
				"TargetEliminated"
			};
		};
		class SentObjectDestroyedUnknown_3
		{
			speech[]=
			{
				"HesDownE"
			};
		};
		class SentObjectDestroyedUnknown_4
		{
			speech[]=
			{
				"IveGotHimE"
			};
		};
		class SentObjectDestroyedUnknown_5
		{
			speech[]=
			{
				"HostileDownE"
			};
		};
	};
	class SentObjectDestroyedUnknownStealth
	{
		versions[]=
		{
			"SentObjectDestroyedUnknown_1",
			0,
			"SentObjectDestroyedUnknown_2",
			0.33000001,
			"SentObjectDestroyedUnknown_3",
			0.33000001,
			"SentObjectDestroyedUnknown_4",
			0.33000001,
			"SentObjectDestroyedUnknown_5",
			0
		};
		class SentObjectDestroyedUnknown_1
		{
			speech[]=
			{
				"ScratchOneE"
			};
		};
		class SentObjectDestroyedUnknown_2
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"TargetEliminated"
			};
		};
		class SentObjectDestroyedUnknown_3
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HesDownE"
			};
		};
		class SentObjectDestroyedUnknown_4
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"IveGotHimE"
			};
		};
		class SentObjectDestroyedUnknown_5
		{
			speech[]=
			{
				"HostileDownE"
			};
		};
	};
	class SentContact
	{
		sentences[]=
		{
			"SentContactDefault",
			"(1-Stealth)",
			"SentContactStealth",
			"Stealth"
		};
	};
	class SentContactDefault
	{
		versions[]=
		{
			"SentContact_1",
			0.5,
			"SentContact_2",
			0.5
		};
		class SentContact_1
		{
			speech[]=
			{
				"ContactE"
			};
		};
		class SentContact_2
		{
			speech[]=
			{
				"HostilesE"
			};
		};
	};
	class SentContactStealth
	{
		versions[]=
		{
			"SentContact_1",
			0.5,
			"SentContact_2",
			0.5
		};
		class SentContact_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"ContactE"
			};
		};
		class SentContact_2
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HostilesE"
			};
		};
	};
	class SentUnderFire
	{
		sentences[]=
		{
			"SentUnderFireDefault",
			"(1-Stealth)",
			"SentUnderFireStealth",
			"Stealth"
		};
	};
	class SentUnderFireDefault
	{
		versions[]=
		{
			"SentUnderFire_1",
			0.33000001,
			"SentUnderFire_2",
			0.33000001,
			"SentUnderFire_3",
			0.33000001
		};
		class SentUnderFire_1
		{
			speech[]=
			{
				"UnderFireE"
			};
		};
		class SentUnderFire_2
		{
			speech[]=
			{
				"EnemyFireE"
			};
		};
		class SentUnderFire_3
		{
			speech[]=
			{
				"TakingFireE"
			};
		};
	};
	class SentUnderFireStealth
	{
		versions[]=
		{
			"SentUnderFire_1",
			0.5,
			"SentUnderFire_2",
			0,
			"SentUnderFire_3",
			0.5
		};
		class SentUnderFire_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"UnderFireE"
			};
		};
		class SentUnderFire_2
		{
			speech[]=
			{
				"EnemyFireE"
			};
		};
		class SentUnderFire_3
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"TakingFireE"
			};
		};
	};
	class SentClear
	{
		sentences[]=
		{
			"SentClearDefault",
			"(1-Stealth)",
			"SentClearStealth",
			"Stealth"
		};
	};
	class SentClearDefault
	{
		versions[]=
		{
			"SentClear_1",
			0.5,
			"SentClear_2",
			0.5
		};
		class SentClear_1
		{
			speech[]=
			{
				"Clear"
			};
		};
		class SentClear_2
		{
			speech[]=
			{
				"AreaClear"
			};
		};
	};
	class SentClearStealth
	{
		versions[]=
		{
			"SentClear_1",
			1,
			"SentClear_2",
			0
		};
		class SentClear_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Clear"
			};
		};
		class SentClear_2
		{
			speech[]=
			{
				"AreaClear"
			};
		};
	};
	class SentRepeatCommand
	{
		sentences[]=
		{
			"SentRepeatCommandDefault",
			"(1-Stealth)",
			"SentRepeatCommandStealth",
			"Stealth"
		};
	};
	class SentRepeatCommandDefault
	{
		versions[]=
		{
			"SentRepeatCommand_1",
			0.5,
			"SentRepeatCommand_2",
			0.5
		};
		class SentRepeatCommand_1
		{
			speech[]=
			{
				"SayAgain",
				"Over"
			};
		};
		class SentRepeatCommand_2
		{
			speech[]=
			{
				"RepeatLast",
				"Over"
			};
		};
	};
	class SentRepeatCommandStealth
	{
		versions[]=
		{
			"SentRepeatCommand_1",
			0.5,
			"SentRepeatCommand_2",
			0.5
		};
		class SentRepeatCommand_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"SayAgain",
				"Over"
			};
		};
		class SentRepeatCommand_2
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"RepeatLast",
				"Over"
			};
		};
	};
	class SentWhereAreYou
	{
		sentences[]=
		{
			"SentWhereAreYouDefault",
			"(1-Stealth)",
			"SentWhereAreYouStealth",
			"Stealth"
		};
	};
	class SentWhereAreYouDefault
	{
		versions[]=
		{
			"SentWhereAreYou_1",
			0.5,
			"SentWhereAreYou_2",
			0.5
		};
		class SentWhereAreYou_1
		{
			speech[]=
			{
				"ReportPositionE"
			};
		};
		class SentWhereAreYou_2
		{
			speech[]=
			{
				"WhereAreYouQ"
			};
		};
	};
	class SentWhereAreYouStealth
	{
		versions[]=
		{
			"SentWhereAreYou_1",
			0,
			"SentWhereAreYou_2",
			1
		};
		class SentWhereAreYou_1
		{
			speech[]=
			{
				"ReportPositionE"
			};
		};
		class SentWhereAreYou_2
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"WhereAreYouQ"
			};
		};
	};
	class SentReturnToFormation
	{
		sentences[]=
		{
			"SentReturnToFormationDefault",
			"(1-Stealth)",
			"SentReturnToFormationStealth",
			"Stealth"
		};
	};
	class SentReturnToFormationDefault
	{
		versions[]=
		{
			"SentReturnToFormation_1",
			0.25,
			"SentReturnToFormation_2",
			0.25,
			"SentReturnToFormation_3",
			0.25,
			"SentReturnToFormation_4",
			0.25
		};
		class SentReturnToFormation_1
		{
			speech[]=
			{
				"%1",
				"FallBackE"
			};
		};
		class SentReturnToFormation_2
		{
			speech[]=
			{
				"%1",
				"ReturnToFormationE"
			};
		};
		class SentReturnToFormation_3
		{
			speech[]=
			{
				"%1",
				"FormOnMeE"
			};
		};
		class SentReturnToFormation_4
		{
			speech[]=
			{
				"%1",
				"RegroupE"
			};
		};
	};
	class SentReturnToFormationStealth
	{
		versions[]=
		{
			"SentReturnToFormation_1",
			1,
			"SentReturnToFormation_2",
			0,
			"SentReturnToFormation_3",
			0,
			"SentReturnToFormation_4",
			0
		};
		class SentReturnToFormation_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1",
				"FallBackE"
			};
		};
		class SentReturnToFormation_2
		{
			speech[]=
			{
				"%1",
				"ReturnToFormationE"
			};
		};
		class SentReturnToFormation_3
		{
			speech[]=
			{
				"%1",
				"FormOnMeE"
			};
		};
		class SentReturnToFormation_4
		{
			speech[]=
			{
				"%1",
				"RegroupE"
			};
		};
	};
	class SentReportStatus
	{
		sentences[]=
		{
			"SentReportStatusDefault",
			"(1-Stealth)",
			"SentReportStatusStealth",
			"Stealth"
		};
	};
	class SentReportStatusDefault
	{
		versions[]=
		{
			"SentReportStatus_1",
			0.5,
			"SentReportStatus_2",
			0.5
		};
		class SentReportStatus_1
		{
			speech[]=
			{
				"%1.1",
				"ReportStatus"
			};
		};
		class SentReportStatus_2
		{
			speech[]=
			{
				"%1.1",
				"DoYouReadQ",
				"Over"
			};
		};
	};
	class SentReportStatusStealth
	{
		versions[]=
		{
			"SentReportStatus_1",
			1,
			"SentReportStatus_2",
			0
		};
		class SentReportStatus_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"ReportStatus"
			};
		};
		class SentReportStatus_2
		{
			speech[]=
			{
				"%1.1",
				"DoYouReadQ",
				"Over"
			};
		};
	};
	class SentFormColumn
	{
		sentences[]=
		{
			"SentFormColumnDefault",
			"(1-Stealth)",
			"SentFormColumnStealth",
			"Stealth"
		};
	};
	class SentFormColumnDefault
	{
		versions[]=
		{
			"SentFormColumn_1",
			1
		};
		class SentFormColumn_1
		{
			speech[]=
			{
				"FormColumn"
			};
		};
	};
	class SentFormColumnStealth
	{
		versions[]=
		{
			"SentFormColumn_1",
			1
		};
		class SentFormColumn_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"FormColumn"
			};
		};
	};
	class SentFormStaggeredColumn
	{
		sentences[]=
		{
			"SentFormStaggeredColumnDefault",
			"(1-Stealth)",
			"SentFormStaggeredColumnStealth",
			"Stealth"
		};
	};
	class SentFormStaggeredColumnDefault
	{
		versions[]=
		{
			"SentFormStaggeredColumn_1",
			1
		};
		class SentFormStaggeredColumn_1
		{
			speech[]=
			{
				"FormStaggeredColumn"
			};
		};
	};
	class SentFormStaggeredColumnStealth
	{
		versions[]=
		{
			"SentFormStaggeredColumn_1",
			1
		};
		class SentFormStaggeredColumn_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"FormStaggeredColumn"
			};
		};
	};
	class SentFormWedge
	{
		sentences[]=
		{
			"SentFormWedgeDefault",
			"(1-Stealth)",
			"SentFormWedgeStealth",
			"Stealth"
		};
	};
	class SentFormWedgeDefault
	{
		versions[]=
		{
			"SentFormWedge_1",
			1
		};
		class SentFormWedge_1
		{
			speech[]=
			{
				"FormWedge"
			};
		};
	};
	class SentFormWedgeStealth
	{
		versions[]=
		{
			"SentFormWedge_1",
			1
		};
		class SentFormWedge_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"FormWedge"
			};
		};
	};
	class SentFormEcholonLeft
	{
		sentences[]=
		{
			"SentFormEcholonLeftDefault",
			"(1-Stealth)",
			"SentFormEcholonLeftStealth",
			"Stealth"
		};
	};
	class SentFormEcholonLeftDefault
	{
		versions[]=
		{
			"SentFormEcholonLeft_1",
			1
		};
		class SentFormEcholonLeft_1
		{
			speech[]=
			{
				"FormEcholonLeft"
			};
		};
	};
	class SentFormEcholonLeftStealth
	{
		versions[]=
		{
			"SentFormEcholonLeft_1",
			1
		};
		class SentFormEcholonLeft_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"FormEcholonLeft"
			};
		};
	};
	class SentFormEcholonRight
	{
		sentences[]=
		{
			"SentFormEcholonRightDefault",
			"(1-Stealth)",
			"SentFormEcholonRightStealth",
			"Stealth"
		};
	};
	class SentFormEcholonRightDefault
	{
		versions[]=
		{
			"SentFormEcholonRight_1",
			1
		};
		class SentFormEcholonRight_1
		{
			speech[]=
			{
				"FormEcholonRight"
			};
		};
	};
	class SentFormEcholonRightStealth
	{
		versions[]=
		{
			"SentFormEcholonRight_1",
			1
		};
		class SentFormEcholonRight_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"FormEcholonRight"
			};
		};
	};
	class SentFormVee
	{
		sentences[]=
		{
			"SentFormVeeDefault",
			"(1-Stealth)",
			"SentFormVeeStealth",
			"Stealth"
		};
	};
	class SentFormVeeDefault
	{
		versions[]=
		{
			"SentFormVee_1",
			1
		};
		class SentFormVee_1
		{
			speech[]=
			{
				"FormVee"
			};
		};
	};
	class SentFormVeeStealth
	{
		versions[]=
		{
			"SentFormVee_1",
			1
		};
		class SentFormVee_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"FormVee"
			};
		};
	};
	class SentFormLine
	{
		sentences[]=
		{
			"SentFormLineDefault",
			"(1-Stealth)",
			"SentFormLineStealth",
			"Stealth"
		};
	};
	class SentFormLineDefault
	{
		versions[]=
		{
			"SentFormLine_1",
			1
		};
		class SentFormLine_1
		{
			speech[]=
			{
				"FormLine"
			};
		};
	};
	class SentFormLineStealth
	{
		versions[]=
		{
			"SentFormLine_1",
			1
		};
		class SentFormLine_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"FormLine"
			};
		};
	};
	class SentFormFile
	{
		sentences[]=
		{
			"SentFormFileDefault",
			"(1-Stealth)",
			"SentFormFileStealth",
			"Stealth"
		};
	};
	class SentFormFileDefault
	{
		versions[]=
		{
			"SentFormFile_1",
			1
		};
		class SentFormFile_1
		{
			speech[]=
			{
				"FormFile"
			};
		};
	};
	class SentFormFileStealth
	{
		versions[]=
		{
			"SentFormFile_1",
			1
		};
		class SentFormFile_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"FormFile"
			};
		};
	};
	class SentFormDiamond
	{
		sentences[]=
		{
			"SentFormDiamondDefault",
			"(1-Stealth)",
			"SentFormDiamondStealth",
			"Stealth"
		};
	};
	class SentFormDiamondDefault
	{
		versions[]=
		{
			"SentFormDiamond_1",
			1
		};
		class SentFormDiamond_1
		{
			speech[]=
			{
				"FormDiamond"
			};
		};
	};
	class SentFormDiamondStealth
	{
		versions[]=
		{
			"SentFormDiamond_1",
			1
		};
		class SentFormDiamond_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"FormDiamond"
			};
		};
	};
	class SentBehaviourSafe
	{
		sentences[]=
		{
			"SentBehaviourSafeDefault",
			"(1-Stealth)",
			"SentBehaviourSafeStealth",
			"Stealth"
		};
	};
	class SentBehaviourSafeDefault
	{
		versions[]=
		{
			"SentBehaviourSafe_1",
			1
		};
		class SentBehaviourSafe_1
		{
			speech[]=
			{
				"%1",
				"AtEase"
			};
		};
	};
	class SentBehaviourSafeStealth
	{
		versions[]=
		{
			"SentBehaviourSafe_1",
			1
		};
		class SentBehaviourSafe_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1",
				"AtEase"
			};
		};
	};
	class SentBehaviourAware
	{
		sentences[]=
		{
			"SentBehaviourAwareDefault",
			"(1-Stealth)",
			"SentBehaviourAwareStealth",
			"Stealth"
		};
	};
	class SentBehaviourAwareDefault
	{
		versions[]=
		{
			"SentBehaviourAware_1",
			1
		};
		class SentBehaviourAware_1
		{
			speech[]=
			{
				"%1",
				"StayAlert"
			};
		};
	};
	class SentBehaviourAwareStealth
	{
		versions[]=
		{
			"SentBehaviourAware_1",
			1
		};
		class SentBehaviourAware_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1",
				"StayAlert"
			};
		};
	};
	class SentBehaviourCombat
	{
		sentences[]=
		{
			"SentBehaviourCombatDefault",
			"(1-Stealth)",
			"SentBehaviourCombatStealth",
			"Stealth"
		};
	};
	class SentBehaviourCombatDefault
	{
		versions[]=
		{
			"SentBehaviourCombat_1",
			1
		};
		class SentBehaviourCombat_1
		{
			speech[]=
			{
				"%1",
				"DangerE"
			};
		};
	};
	class SentBehaviourCombatStealth
	{
		versions[]=
		{
			"SentBehaviourCombat_1",
			1
		};
		class SentBehaviourCombat_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1",
				"DangerE"
			};
		};
	};
	class SentBehaviourStealth
	{
		sentences[]=
		{
			"SentBehaviourStealthDefault",
			"(1-Stealth)",
			"SentBehaviourStealthStealth",
			"Stealth"
		};
	};
	class SentBehaviourStealthDefault
	{
		versions[]=
		{
			"SentBehaviourStealth_1",
			1
		};
		class SentBehaviourStealth_1
		{
			speech[]=
			{
				"%1",
				"Stealth"
			};
		};
	};
	class SentBehaviourStealthStealth
	{
		versions[]=
		{
			"SentBehaviourStealth_1",
			1
		};
		class SentBehaviourStealth_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1",
				"Stealth"
			};
		};
	};
	class SentOpenFire
	{
		sentences[]=
		{
			"SentOpenFireDefault",
			"(1-Stealth)",
			"SentOpenFireStealth",
			"Stealth"
		};
	};
	class SentOpenFireDefault
	{
		versions[]=
		{
			"SentOpenFire_1",
			0.5,
			"SentOpenFire_2",
			0.5
		};
		class SentOpenFire_1
		{
			speech[]=
			{
				"%1.1",
				"FireAtWill"
			};
		};
		class SentOpenFire_2
		{
			speech[]=
			{
				"%1.1",
				"WeaponsFree"
			};
		};
	};
	class SentOpenFireStealth
	{
		versions[]=
		{
			"SentOpenFire_1",
			0.5,
			"SentOpenFire_2",
			0.5
		};
		class SentOpenFire_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"FireAtWill"
			};
		};
		class SentOpenFire_2
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"WeaponsFree"
			};
		};
	};
	class SentOpenFireInCombat
	{
		sentences[]=
		{
			"SentOpenFireInCombatDefault",
			1
		};
	};
	class SentOpenFireInCombatDefault
	{
		versions[]=
		{
			"SentOpenFireInCombat_1",
			0.25,
			"SentOpenFireInCombat_2",
			0.25,
			"SentOpenFireInCombat_3",
			0.25,
			"SentOpenFireInCombat_4",
			0.25
		};
		class SentOpenFireInCombat_1
		{
			speech[]=
			{
				"%1.1",
				"WeaponsHot"
			};
		};
		class SentOpenFireInCombat_2
		{
			speech[]=
			{
				"%1.1",
				"LightEmUpE"
			};
		};
		class SentOpenFireInCombat_3
		{
			speech[]=
			{
				"%1.1",
				"GiveEmHellE"
			};
		};
		class SentOpenFireInCombat_4
		{
			speech[]=
			{
				"%1.1",
				"GoGoGoE"
			};
		};
	};
	class SentHoldFire
	{
		sentences[]=
		{
			"SentHoldFireDefault",
			"(1-Stealth)",
			"SentHoldFireStealth",
			"Stealth"
		};
	};
	class SentHoldFireDefault
	{
		versions[]=
		{
			"SentHoldFire_1",
			1
		};
		class SentHoldFire_1
		{
			speech[]=
			{
				"%1.1",
				"HoldFire"
			};
		};
	};
	class SentHoldFireStealth
	{
		versions[]=
		{
			"SentHoldFire_1",
			1
		};
		class SentHoldFire_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"HoldFire"
			};
		};
	};
	class SentHoldFireInCombat
	{
		sentences[]=
		{
			"SentHoldFireInCombatDefault",
			"(1-Stealth)",
			"SentHoldFireInCombatStealth",
			"Stealth"
		};
	};
	class SentHoldFireInCombatDefault
	{
		versions[]=
		{
			"SentHoldFireInCombat_1",
			0.5,
			"SentHoldFireInCombat_2",
			0.5
		};
		class SentHoldFireInCombat_1
		{
			speech[]=
			{
				"%1.1",
				"HoldFire"
			};
		};
		class SentHoldFireInCombat_2
		{
			speech[]=
			{
				"%1.1",
				"CeaseFireE"
			};
		};
	};
	class SentHoldFireInCombatStealth
	{
		versions[]=
		{
			"SentHoldFireInCombat_1",
			1,
			"SentHoldFireInCombat_2",
			0
		};
		class SentHoldFireInCombat_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"HoldFire"
			};
		};
		class SentHoldFireInCombat_2
		{
			speech[]=
			{
				"%1.1",
				"CeaseFireE"
			};
		};
	};
	class SentCeaseFireInsideGroup
	{
		sentences[]=
		{
			"SentCeaseFireInsideGroupDefault",
			"(1-Stealth)",
			"SentCeaseFireInsideGroupStealth",
			"Stealth"
		};
	};
	class SentCeaseFireInsideGroupDefault
	{
		versions[]=
		{
			"SentCeaseFireInsideGroup_1",
			1
		};
		class SentCeaseFireInsideGroup_1
		{
			speech[]=
			{
				"%1.1",
				"CheckYourFireE"
			};
		};
	};
	class SentCeaseFireInsideGroupStealth
	{
		versions[]=
		{
			"SentCeaseFireInsideGroup_1",
			1
		};
		class SentCeaseFireInsideGroup_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"CheckYourFireE"
			};
		};
	};
	class SentCeaseFire
	{
		sentences[]=
		{
			"SentCeaseFireDefault",
			"(1-Stealth)",
			"SentCeaseFireStealth",
			"Stealth"
		};
	};
	class SentCeaseFireDefault
	{
		versions[]=
		{
			"SentCeaseFire_1",
			0.33000001,
			"SentCeaseFire_2",
			0.33000001,
			"SentCeaseFire_3",
			0.33000001
		};
		class SentCeaseFire_1
		{
			speech[]=
			{
				"%2.1",
				"CheckYourFireE"
			};
		};
		class SentCeaseFire_2
		{
			speech[]=
			{
				"%2.1",
				"CeaseFireE"
			};
		};
		class SentCeaseFire_3
		{
			speech[]=
			{
				"%2.1",
				"BlueOnBlueE"
			};
		};
	};
	class SentCeaseFireStealth
	{
		versions[]=
		{
			"SentCeaseFire_1",
			1,
			"SentCeaseFire_2",
			0,
			"SentCeaseFire_3",
			0
		};
		class SentCeaseFire_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%2.1",
				"CheckYourFireE"
			};
		};
		class SentCeaseFire_2
		{
			speech[]=
			{
				"%2.1",
				"CeaseFireE"
			};
		};
		class SentCeaseFire_3
		{
			speech[]=
			{
				"%2.1",
				"BlueOnBlueE"
			};
		};
	};
	class SentLooseFormation
	{
		sentences[]=
		{
			"SentLooseFormationDefault",
			"(1-Stealth)",
			"SentLooseFormationStealth",
			"Stealth"
		};
	};
	class SentLooseFormationDefault
	{
		versions[]=
		{
			"SentLooseFormation_1",
			0.5,
			"SentLooseFormation_2",
			0.5
		};
		class SentLooseFormation_1
		{
			speech[]=
			{
				"%1.1",
				"EngageAtWill"
			};
		};
		class SentLooseFormation_2
		{
			speech[]=
			{
				"%1.1",
				"FreeToEngage"
			};
		};
	};
	class SentLooseFormationStealth
	{
		versions[]=
		{
			"SentLooseFormation_1",
			1,
			"SentLooseFormation_2",
			0
		};
		class SentLooseFormation_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"EngageAtWill"
			};
		};
		class SentLooseFormation_2
		{
			speech[]=
			{
				"%1.1",
				"FreeToEngage"
			};
		};
	};
	class SentKeepFormation
	{
		sentences[]=
		{
			"SentKeepFormationDefault",
			"(1-Stealth)",
			"SentKeepFormationStealth",
			"Stealth"
		};
	};
	class SentKeepFormationDefault
	{
		versions[]=
		{
			"SentKeepFormation_1",
			1
		};
		class SentKeepFormation_1
		{
			speech[]=
			{
				"%1.1",
				"Disengage"
			};
		};
	};
	class SentKeepFormationStealth
	{
		versions[]=
		{
			"SentKeepFormation_1",
			1
		};
		class SentKeepFormation_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"Disengage"
			};
		};
	};
	class SentUnitPosDown
	{
		sentences[]=
		{
			"SentUnitPosDownDefault",
			"(1-Stealth)",
			"SentUnitPosDownStealth",
			"Stealth"
		};
	};
	class SentUnitPosDownDefault
	{
		versions[]=
		{
			"SentUnitPosDown_1",
			0.33000001,
			"SentUnitPosDown_2",
			0.33000001,
			"SentUnitPosDown_3",
			0.33000001
		};
		class SentUnitPosDown_1
		{
			speech[]=
			{
				"%1.1",
				"GoProne"
			};
		};
		class SentUnitPosDown_2
		{
			speech[]=
			{
				"%1.1",
				"HitTheDirt"
			};
		};
		class SentUnitPosDown_3
		{
			speech[]=
			{
				"%1.1",
				"GetDownE"
			};
		};
	};
	class SentUnitPosDownStealth
	{
		versions[]=
		{
			"SentUnitPosDown_1",
			0.33000001,
			"SentUnitPosDown_2",
			0.33000001,
			"SentUnitPosDown_3",
			0.33000001
		};
		class SentUnitPosDown_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"GoProne"
			};
		};
		class SentUnitPosDown_2
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"HitTheDirt"
			};
		};
		class SentUnitPosDown_3
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"GetDownE"
			};
		};
	};
	class SentUnitPosMiddle
	{
		sentences[]=
		{
			"SentUnitPosMiddleDefault",
			"(1-Stealth)",
			"SentUnitPosMiddleStealth",
			"Stealth"
		};
	};
	class SentUnitPosMiddleDefault
	{
		versions[]=
		{
			"SentUnitPosMiddle_1",
			1
		};
		class SentUnitPosMiddle_1
		{
			speech[]=
			{
				"%1.1",
				"StayCrouched"
			};
		};
	};
	class SentUnitPosMiddleStealth
	{
		versions[]=
		{
			"SentUnitPosMiddle_1",
			1
		};
		class SentUnitPosMiddle_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"StayCrouched"
			};
		};
	};
	class SentUnitPosUp
	{
		sentences[]=
		{
			"SentUnitPosUpDefault",
			"(1-Stealth)",
			"SentUnitPosUpStealth",
			"Stealth"
		};
	};
	class SentUnitPosUpDefault
	{
		versions[]=
		{
			"SentUnitPosUp_1",
			1
		};
		class SentUnitPosUp_1
		{
			speech[]=
			{
				"%1.1",
				"StandUp"
			};
		};
	};
	class SentUnitPosUpStealth
	{
		versions[]=
		{
			"SentUnitPosUp_1",
			1
		};
		class SentUnitPosUp_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"StandUp"
			};
		};
	};
	class SentUnitPosAuto
	{
		sentences[]=
		{
			"SentUnitPosAutoDefault",
			"(1-Stealth)",
			"SentUnitPosAutoStealth",
			"Stealth"
		};
	};
	class SentUnitPosAutoDefault
	{
		versions[]=
		{
			"SentUnitPosAuto_1",
			1
		};
		class SentUnitPosAuto_1
		{
			speech[]=
			{
				"%1.1",
				"CopyMyStance"
			};
		};
	};
	class SentUnitPosAutoStealth
	{
		versions[]=
		{
			"SentUnitPosAuto_1",
			1
		};
		class SentUnitPosAuto_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"CopyMyStance"
			};
		};
	};
	class SentFormPosAdvance
	{
		sentences[]=
		{
			"SentFormPosAdvanceDefault",
			"(1-Stealth)",
			"SentFormPosAdvanceStealth",
			"Stealth"
		};
	};
	class SentFormPosAdvanceDefault
	{
		versions[]=
		{
			"SentFormPosAdvance_1",
			1
		};
		class SentFormPosAdvance_1
		{
			speech[]=
			{
				"%1.1",
				"Advance"
			};
		};
	};
	class SentFormPosAdvanceStealth
	{
		versions[]=
		{
			"SentFormPosAdvance_1",
			1
		};
		class SentFormPosAdvance_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"Advance"
			};
		};
	};
	class SentFormPosStayBack
	{
		sentences[]=
		{
			"SentFormPosStayBackDefault",
			"(1-Stealth)",
			"SentFormPosStayBackStealth",
			"Stealth"
		};
	};
	class SentFormPosStayBackDefault
	{
		versions[]=
		{
			"SentFormPosStayBack_1",
			1
		};
		class SentFormPosStayBack_1
		{
			speech[]=
			{
				"%1.1",
				"StayBack"
			};
		};
	};
	class SentFormPosStayBackStealth
	{
		versions[]=
		{
			"SentFormPosStayBack_1",
			1
		};
		class SentFormPosStayBack_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"StayBack"
			};
		};
	};
	class SentFormPosFlankLeft
	{
		sentences[]=
		{
			"SentFormPosFlankLeftDefault",
			"(1-Stealth)",
			"SentFormPosFlankLeftStealth",
			"Stealth"
		};
	};
	class SentFormPosFlankLeftDefault
	{
		versions[]=
		{
			"SentFormPosFlankLeft_1",
			1
		};
		class SentFormPosFlankLeft_1
		{
			speech[]=
			{
				"%1.1",
				"FlankLeft"
			};
		};
	};
	class SentFormPosFlankLeftStealth
	{
		versions[]=
		{
			"SentFormPosFlankLeft_1",
			1
		};
		class SentFormPosFlankLeft_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"FlankLeft"
			};
		};
	};
	class SentFormPosFlankRight
	{
		sentences[]=
		{
			"SentFormPosFlankRightDefault",
			"(1-Stealth)",
			"SentFormPosFlankRightStealth",
			"Stealth"
		};
	};
	class SentFormPosFlankRightDefault
	{
		versions[]=
		{
			"SentFormPosFlankRight_1",
			1
		};
		class SentFormPosFlankRight_1
		{
			speech[]=
			{
				"%1.1",
				"FlankRight"
			};
		};
	};
	class SentFormPosFlankRightStealth
	{
		versions[]=
		{
			"SentFormPosFlankRight_1",
			1
		};
		class SentFormPosFlankRight_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"FlankRight"
			};
		};
	};
	class SentTeam
	{
		sentences[]=
		{
			"SentTeamDefault",
			"(1-Stealth)",
			"SentTeamStealth",
			"Stealth"
		};
	};
	class SentTeamDefault
	{
		versions[]=
		{
			"SentTeam_1",
			1
		};
		class SentTeam_1
		{
			speech[]=
			{
				"%1.1",
				"Is",
				"%2"
			};
		};
	};
	class SentTeamStealth
	{
		versions[]=
		{
			"SentTeam_1",
			1
		};
		class SentTeam_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"Is",
				"%2"
			};
		};
	};
	class SentTeamPlural
	{
		sentences[]=
		{
			"SentTeamPluralDefault",
			"(1-Stealth)",
			"SentTeamPluralStealth",
			"Stealth"
		};
	};
	class SentTeamPluralDefault
	{
		versions[]=
		{
			"SentTeamPlural_1",
			1
		};
		class SentTeamPlural_1
		{
			speech[]=
			{
				"%1.1",
				"Are",
				"%2"
			};
		};
	};
	class SentTeamPluralStealth
	{
		versions[]=
		{
			"SentTeamPlural_1",
			1
		};
		class SentTeamPlural_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"Are",
				"%2"
			};
		};
	};
	class SentWatchTgt
	{
		sentences[]=
		{
			"SentWatchTgtDefault",
			"(1-Stealth)",
			"SentWatchTgtStealth",
			"Stealth"
		};
	};
	class SentWatchTgtDefault
	{
		versions[]=
		{
			"SentWatchTgt_1",
			0.5,
			"SentWatchTgt_2",
			0.5
		};
		class SentWatchTgt_1
		{
			speech[]=
			{
				"%1.1",
				"WatchThat",
				"%2"
			};
		};
		class SentWatchTgt_2
		{
			speech[]=
			{
				"%1.1",
				"ObserveThat",
				"%2"
			};
		};
	};
	class SentWatchTgtStealth
	{
		versions[]=
		{
			"SentWatchTgt_1",
			1,
			"SentWatchTgt_2",
			0
		};
		class SentWatchTgt_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"WatchThat",
				"%2"
			};
		};
		class SentWatchTgt_2
		{
			speech[]=
			{
				"%1.1",
				"ObserveThat",
				"%2"
			};
		};
	};
	class SentWatchDir
	{
		sentences[]=
		{
			"SentWatchDirDefault",
			"(1-Stealth)",
			"SentWatchDirStealth",
			"Stealth"
		};
	};
	class SentWatchDirDefault
	{
		versions[]=
		{
			"SentWatchDir_1",
			1
		};
		class SentWatchDir_1
		{
			speech[]=
			{
				"%1.1",
				"Watch",
				"%2"
			};
		};
	};
	class SentWatchDirStealth
	{
		versions[]=
		{
			"SentWatchDir_1",
			1
		};
		class SentWatchDir_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"Watch",
				"%2"
			};
		};
	};
	class SentWatchPos
	{
		sentences[]=
		{
			"SentWatchPosDefault",
			"(1-Stealth)",
			"SentWatchPosStealth",
			"Stealth"
		};
	};
	class SentWatchPosDefault
	{
		versions[]=
		{
			"SentWatchPos_1",
			1
		};
		class SentWatchPos_1
		{
			speech[]=
			{
				"%1.1",
				"ObserveThatPosition"
			};
		};
	};
	class SentWatchPosStealth
	{
		versions[]=
		{
			"SentWatchPos_1",
			1
		};
		class SentWatchPos_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"ObserveThatPosition"
			};
		};
	};
	class SentWatchAround
	{
		sentences[]=
		{
			"SentWatchAroundDefault",
			"(1-Stealth)",
			"SentWatchAroundStealth",
			"Stealth"
		};
	};
	class SentWatchAroundDefault
	{
		versions[]=
		{
			"SentWatchAround_1",
			1
		};
		class SentWatchAround_1
		{
			speech[]=
			{
				"%1.1",
				"ScanHorizon"
			};
		};
	};
	class SentWatchAroundStealth
	{
		versions[]=
		{
			"SentWatchAround_1",
			1
		};
		class SentWatchAround_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"ScanHorizon"
			};
		};
	};
	class SentNoTarget
	{
		sentences[]=
		{
			"SentNoTargetDefault",
			"(1-Stealth)",
			"SentNoTargetStealth",
			"Stealth"
		};
	};
	class SentNoTargetDefault
	{
		versions[]=
		{
			"SentNoTarget_1",
			0.5,
			"SentNoTarget_2",
			0.5
		};
		class SentNoTarget_1
		{
			speech[]=
			{
				"%1.1",
				"NoTarget"
			};
		};
		class SentNoTarget_2
		{
			speech[]=
			{
				"%1.1",
				"CancelTarget"
			};
		};
	};
	class SentNoTargetStealth
	{
		versions[]=
		{
			"SentNoTarget_1",
			1,
			"SentNoTarget_2",
			0
		};
		class SentNoTarget_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"NoTarget"
			};
		};
		class SentNoTarget_2
		{
			speech[]=
			{
				"%1.1",
				"CancelTarget"
			};
		};
	};
	class SentTarget
	{
		sentences[]=
		{
			"SentTargetDefault",
			"(1-Stealth)",
			"SentTargetStealth",
			"Stealth"
		};
	};
	class SentTargetDefault
	{
		versions[]=
		{
			"SentTarget_1",
			1
		};
		class SentTarget_1
		{
			speech[]=
			{
				"%1",
				"TargetThat",
				"%2"
			};
		};
	};
	class SentTargetStealth
	{
		versions[]=
		{
			"SentTarget_1",
			1
		};
		class SentTarget_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1",
				"TargetThat",
				"%2"
			};
		};
	};
	class SentEngage
	{
		sentences[]=
		{
			"SentEngageDefault",
			"(1-Stealth)",
			"SentEngageStealth",
			"Stealth"
		};
	};
	class SentEngageDefault
	{
		versions[]=
		{
			"SentEngage_1",
			1
		};
		class SentEngage_1
		{
			speech[]=
			{
				"%1",
				"EngageThat",
				"%2"
			};
		};
	};
	class SentEngageStealth
	{
		versions[]=
		{
			"SentEngage_1",
			1
		};
		class SentEngage_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1",
				"EngageThat",
				"%2"
			};
		};
	};
	class SentFire
	{
		sentences[]=
		{
			"SentFireDefault",
			"(1-Stealth)",
			"SentFireStealth",
			"Stealth"
		};
	};
	class SentFireDefault
	{
		versions[]=
		{
			"SentFire_1",
			1
		};
		class SentFire_1
		{
			speech[]=
			{
				"%1",
				"FireAtThat",
				"%2"
			};
		};
	};
	class SentFireStealth
	{
		versions[]=
		{
			"SentFire_1",
			1
		};
		class SentFire_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1",
				"FireAtThat",
				"%2"
			};
		};
	};
	class SentEngageNoTarget
	{
		sentences[]=
		{
			"SentEngageNoTargetDefault",
			"(1-Stealth)",
			"SentEngageNoTargetStealth",
			"Stealth"
		};
	};
	class SentEngageNoTargetDefault
	{
		versions[]=
		{
			"SentEngageNoTarget_1",
			1
		};
		class SentEngageNoTarget_1
		{
			speech[]=
			{
				"%1",
				"EngageE"
			};
		};
	};
	class SentEngageNoTargetStealth
	{
		versions[]=
		{
			"SentEngageNoTarget_1",
			1
		};
		class SentEngageNoTarget_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1",
				"EngageE"
			};
		};
	};
	class SentFireNoTarget
	{
		sentences[]=
		{
			"SentFireNoTargetDefault",
			"(1-Stealth)",
			"SentFireNoTargetStealth",
			"Stealth"
		};
	};
	class SentFireNoTargetDefault
	{
		versions[]=
		{
			"SentFireNoTarget_1",
			1
		};
		class SentFireNoTarget_1
		{
			speech[]=
			{
				"%1",
				"Fire"
			};
		};
	};
	class SentFireNoTargetStealth
	{
		versions[]=
		{
			"SentFireNoTarget_1",
			1
		};
		class SentFireNoTarget_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1",
				"Fire"
			};
		};
	};
	class SentCmdHealSomeone
	{
		sentences[]=
		{
			"SentCmdHealSomeoneDefault",
			"(1-Stealth)",
			"SentCmdHealSomeoneStealth",
			"Stealth"
		};
	};
	class SentCmdHealSomeoneDefault
	{
		versions[]=
		{
			"SentCmdHealSomeone_1",
			1
		};
		class SentCmdHealSomeone_1
		{
			speech[]=
			{
				"%1.1",
				"HealThat",
				"%2"
			};
		};
	};
	class SentCmdHealSomeoneStealth
	{
		versions[]=
		{
			"SentCmdHealSomeone_1",
			1
		};
		class SentCmdHealSomeone_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"HealThat",
				"%2"
			};
		};
	};
	class SentCmdHealSelf
	{
		sentences[]=
		{
			"SentCmdHealSelfDefault",
			"(1-Stealth)",
			"SentCmdHealSelfStealth",
			"Stealth"
		};
	};
	class SentCmdHealSelfDefault
	{
		versions[]=
		{
			"SentCmdHealSelf_1",
			1
		};
		class SentCmdHealSelf_1
		{
			speech[]=
			{
				"%1.1",
				"HealYourself"
			};
		};
	};
	class SentCmdHealSelfStealth
	{
		versions[]=
		{
			"SentCmdHealSelf_1",
			1
		};
		class SentCmdHealSelf_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"HealYourself"
			};
		};
	};
	class SentCmdHeal
	{
		sentences[]=
		{
			"SentCmdHealDefault",
			"(1-Stealth)",
			"SentCmdHealStealth",
			"Stealth"
		};
	};
	class SentCmdHealDefault
	{
		versions[]=
		{
			"SentCmdHeal_1",
			1
		};
		class SentCmdHeal_1
		{
			speech[]=
			{
				"%1.1",
				"GetSupportAt",
				"%2"
			};
		};
	};
	class SentCmdHealStealth
	{
		versions[]=
		{
			"SentCmdHeal_1",
			1
		};
		class SentCmdHeal_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"GetSupportAt",
				"%2"
			};
		};
	};
	class SentCmdHealFar
	{
		sentences[]=
		{
			"SentCmdHealFarDefault",
			"(1-Stealth)",
			"SentCmdHealFarStealth",
			"Stealth"
		};
	};
	class SentCmdHealFarDefault
	{
		versions[]=
		{
			"SentCmdHealFar_1",
			1
		};
		class SentCmdHealFar_1
		{
			speech[]=
			{
				"%1.1",
				"GetSupportAt",
				"%2"
			};
		};
	};
	class SentCmdHealFarStealth
	{
		versions[]=
		{
			"SentCmdHealFar_1",
			1
		};
		class SentCmdHealFar_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"GetSupportAt",
				"%2"
			};
		};
	};
	class SentCmdHealAt
	{
		sentences[]=
		{
			"SentCmdHealAtDefault",
			"(1-Stealth)",
			"SentCmdHealAtStealth",
			"Stealth"
		};
	};
	class SentCmdHealAtDefault
	{
		versions[]=
		{
			"SentCmdHealAt_1",
			1
		};
		class SentCmdHealAt_1
		{
			speech[]=
			{
				"%1.1",
				"GetSupportAt",
				"%2"
			};
		};
	};
	class SentCmdHealAtStealth
	{
		versions[]=
		{
			"SentCmdHealAt_1",
			1
		};
		class SentCmdHealAt_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"GetSupportAt",
				"%2"
			};
		};
	};
	class SentCmdRepair
	{
		sentences[]=
		{
			"SentCmdRepairDefault",
			"(1-Stealth)",
			"SentCmdRepairStealth",
			"Stealth"
		};
	};
	class SentCmdRepairDefault
	{
		versions[]=
		{
			"SentCmdRepair_1",
			1
		};
		class SentCmdRepair_1
		{
			speech[]=
			{
				"%1.1",
				"GetSupportAt",
				"%2"
			};
		};
	};
	class SentCmdRepairStealth
	{
		versions[]=
		{
			"SentCmdRepair_1",
			1
		};
		class SentCmdRepair_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"GetSupportAt",
				"%2"
			};
		};
	};
	class SentCmdRepairFar
	{
		sentences[]=
		{
			"SentCmdRepairFarDefault",
			"(1-Stealth)",
			"SentCmdRepairFarStealth",
			"Stealth"
		};
	};
	class SentCmdRepairFarDefault
	{
		versions[]=
		{
			"SentCmdRepairFar_1",
			1
		};
		class SentCmdRepairFar_1
		{
			speech[]=
			{
				"%1.1",
				"GetSupportAt",
				"%2"
			};
		};
	};
	class SentCmdRepairFarStealth
	{
		versions[]=
		{
			"SentCmdRepairFar_1",
			1
		};
		class SentCmdRepairFar_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"GetSupportAt",
				"%2"
			};
		};
	};
	class SentCmdRepairAt
	{
		sentences[]=
		{
			"SentCmdRepairAtDefault",
			"(1-Stealth)",
			"SentCmdRepairAtStealth",
			"Stealth"
		};
	};
	class SentCmdRepairAtDefault
	{
		versions[]=
		{
			"SentCmdRepairAt_1",
			1
		};
		class SentCmdRepairAt_1
		{
			speech[]=
			{
				"%1.1",
				"GetSupportAt",
				"%2"
			};
		};
	};
	class SentCmdRepairAtStealth
	{
		versions[]=
		{
			"SentCmdRepairAt_1",
			1
		};
		class SentCmdRepairAt_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"GetSupportAt",
				"%2"
			};
		};
	};
	class SentCmdRefuel
	{
		sentences[]=
		{
			"SentCmdRefuelDefault",
			"(1-Stealth)",
			"SentCmdRefuelStealth",
			"Stealth"
		};
	};
	class SentCmdRefuelDefault
	{
		versions[]=
		{
			"SentCmdRefuel_1",
			1
		};
		class SentCmdRefuel_1
		{
			speech[]=
			{
				"%1.1",
				"GetSupportAt",
				"%2"
			};
		};
	};
	class SentCmdRefuelStealth
	{
		versions[]=
		{
			"SentCmdRefuel_1",
			1
		};
		class SentCmdRefuel_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"GetSupportAt",
				"%2"
			};
		};
	};
	class SentCmdRefuelFar
	{
		sentences[]=
		{
			"SentCmdRefuelFarDefault",
			"(1-Stealth)",
			"SentCmdRefuelFarStealth",
			"Stealth"
		};
	};
	class SentCmdRefuelFarDefault
	{
		versions[]=
		{
			"SentCmdRefuelFar_1",
			1
		};
		class SentCmdRefuelFar_1
		{
			speech[]=
			{
				"%1.1",
				"GetSupportAt",
				"%2"
			};
		};
	};
	class SentCmdRefuelFarStealth
	{
		versions[]=
		{
			"SentCmdRefuelFar_1",
			1
		};
		class SentCmdRefuelFar_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"GetSupportAt",
				"%2"
			};
		};
	};
	class SentCmdRefuelAt
	{
		sentences[]=
		{
			"SentCmdRefuelAtDefault",
			"(1-Stealth)",
			"SentCmdRefuelAtStealth",
			"Stealth"
		};
	};
	class SentCmdRefuelAtDefault
	{
		versions[]=
		{
			"SentCmdRefuelAt_1",
			1
		};
		class SentCmdRefuelAt_1
		{
			speech[]=
			{
				"%1.1",
				"GetSupportAt",
				"%2"
			};
		};
	};
	class SentCmdRefuelAtStealth
	{
		versions[]=
		{
			"SentCmdRefuelAt_1",
			1
		};
		class SentCmdRefuelAt_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"GetSupportAt",
				"%2"
			};
		};
	};
	class SentCmdRearm
	{
		sentences[]=
		{
			"SentCmdRearmDefault",
			"(1-Stealth)",
			"SentCmdRearmStealth",
			"Stealth"
		};
	};
	class SentCmdRearmDefault
	{
		versions[]=
		{
			"SentCmdRearm_1",
			1
		};
		class SentCmdRearm_1
		{
			speech[]=
			{
				"%1.1",
				"GetSupportAt",
				"%2"
			};
		};
	};
	class SentCmdRearmStealth
	{
		versions[]=
		{
			"SentCmdRearm_1",
			1
		};
		class SentCmdRearm_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"GetSupportAt",
				"%2"
			};
		};
	};
	class SentCmdRearmFar
	{
		sentences[]=
		{
			"SentCmdRearmFarDefault",
			"(1-Stealth)",
			"SentCmdRearmFarStealth",
			"Stealth"
		};
	};
	class SentCmdRearmFarDefault
	{
		versions[]=
		{
			"SentCmdRearmFar_1",
			1
		};
		class SentCmdRearmFar_1
		{
			speech[]=
			{
				"%1.1",
				"GetSupportAt",
				"%2"
			};
		};
	};
	class SentCmdRearmFarStealth
	{
		versions[]=
		{
			"SentCmdRearmFar_1",
			1
		};
		class SentCmdRearmFar_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"GetSupportAt",
				"%2"
			};
		};
	};
	class SentCmdRearmAt
	{
		sentences[]=
		{
			"SentCmdRearmAtDefault",
			"(1-Stealth)",
			"SentCmdRearmAtStealth",
			"Stealth"
		};
	};
	class SentCmdRearmAtDefault
	{
		versions[]=
		{
			"SentCmdRearmAt_1",
			1
		};
		class SentCmdRearmAt_1
		{
			speech[]=
			{
				"%1.1",
				"GetSupportAt",
				"%2"
			};
		};
	};
	class SentCmdRearmAtStealth
	{
		versions[]=
		{
			"SentCmdRearmAt_1",
			1
		};
		class SentCmdRearmAt_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"GetSupportAt",
				"%2"
			};
		};
	};
	class SentCmdSupport
	{
		sentences[]=
		{
			"SentCmdSupportDefault",
			"(1-Stealth)",
			"SentCmdSupportStealth",
			"Stealth"
		};
	};
	class SentCmdSupportDefault
	{
		versions[]=
		{
			"SentCmdSupport_1",
			1
		};
		class SentCmdSupport_1
		{
			speech[]=
			{
				"%1.1",
				"GetSupportAt",
				"%2"
			};
		};
	};
	class SentCmdSupportStealth
	{
		versions[]=
		{
			"SentCmdSupport_1",
			1
		};
		class SentCmdSupport_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"GetSupportAt",
				"%2"
			};
		};
	};
	class SentCmdSupportFar
	{
		sentences[]=
		{
			"SentCmdSupportFarDefault",
			"(1-Stealth)",
			"SentCmdSupportFarStealth",
			"Stealth"
		};
	};
	class SentCmdSupportFarDefault
	{
		versions[]=
		{
			"SentCmdSupportFar_1",
			1
		};
		class SentCmdSupportFar_1
		{
			speech[]=
			{
				"%1.1",
				"GetSupportAt",
				"%2"
			};
		};
	};
	class SentCmdSupportFarStealth
	{
		versions[]=
		{
			"SentCmdSupportFar_1",
			1
		};
		class SentCmdSupportFar_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"GetSupportAt",
				"%2"
			};
		};
	};
	class SentCmdSupportAt
	{
		sentences[]=
		{
			"SentCmdSupportAtDefault",
			"(1-Stealth)",
			"SentCmdSupportAtStealth",
			"Stealth"
		};
	};
	class SentCmdSupportAtDefault
	{
		versions[]=
		{
			"SentCmdSupportAt_1",
			1
		};
		class SentCmdSupportAt_1
		{
			speech[]=
			{
				"%1.1",
				"GetSupportAt",
				"%2"
			};
		};
	};
	class SentCmdSupportAtStealth
	{
		versions[]=
		{
			"SentCmdSupportAt_1",
			1
		};
		class SentCmdSupportAt_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"GetSupportAt",
				"%2"
			};
		};
	};
	class SentCmdDropWeapon
	{
		sentences[]=
		{
			"SentCmdDropWeaponDefault",
			"(1-Stealth)",
			"SentCmdDropWeaponStealth",
			"Stealth"
		};
	};
	class SentCmdDropWeaponDefault
	{
		versions[]=
		{
			"SentCmdDropWeapon_1",
			1
		};
		class SentCmdDropWeapon_1
		{
			speech[]=
			{
				"%1.1",
				"DropThat",
				"%2"
			};
		};
	};
	class SentCmdDropWeaponStealth
	{
		versions[]=
		{
			"SentCmdDropWeapon_1",
			1
		};
		class SentCmdDropWeapon_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"DropThat",
				"%2"
			};
		};
	};
	class SentCmdDropMagazine
	{
		sentences[]=
		{
			"SentCmdDropMagazineDefault",
			"(1-Stealth)",
			"SentCmdDropMagazineStealth",
			"Stealth"
		};
	};
	class SentCmdDropMagazineDefault
	{
		versions[]=
		{
			"SentCmdDropMagazine_1",
			1
		};
		class SentCmdDropMagazine_1
		{
			speech[]=
			{
				"%1.1",
				"DropThat",
				"Magazine"
			};
		};
	};
	class SentCmdDropMagazineStealth
	{
		versions[]=
		{
			"SentCmdDropMagazine_1",
			1
		};
		class SentCmdDropMagazine_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"DropThat",
				"Magazine"
			};
		};
	};
	class SentCmdTakeWeapon
	{
		sentences[]=
		{
			"SentCmdTakeWeaponDefault",
			"(1-Stealth)",
			"SentCmdTakeWeaponStealth",
			"Stealth"
		};
	};
	class SentCmdTakeWeaponDefault
	{
		versions[]=
		{
			"SentCmdTakeWeapon_1",
			1
		};
		class SentCmdTakeWeapon_1
		{
			speech[]=
			{
				"%1.1",
				"TakeThat",
				"%2"
			};
		};
	};
	class SentCmdTakeWeaponStealth
	{
		versions[]=
		{
			"SentCmdTakeWeapon_1",
			1
		};
		class SentCmdTakeWeapon_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"TakeThat",
				"%2"
			};
		};
	};
	class SentCmdTakeWeaponFar
	{
		sentences[]=
		{
			"SentCmdTakeWeaponFarDefault",
			"(1-Stealth)",
			"SentCmdTakeWeaponFarStealth",
			"Stealth"
		};
	};
	class SentCmdTakeWeaponFarDefault
	{
		versions[]=
		{
			"SentCmdTakeWeaponFar_1",
			1
		};
		class SentCmdTakeWeaponFar_1
		{
			speech[]=
			{
				"%1.1",
				"TakeThat",
				"%2"
			};
		};
	};
	class SentCmdTakeWeaponFarStealth
	{
		versions[]=
		{
			"SentCmdTakeWeaponFar_1",
			1
		};
		class SentCmdTakeWeaponFar_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"TakeThat",
				"%2"
			};
		};
	};
	class SentCmdTakeWeaponAt
	{
		sentences[]=
		{
			"SentCmdTakeWeaponAtDefault",
			"(1-Stealth)",
			"SentCmdTakeWeaponAtStealth",
			"Stealth"
		};
	};
	class SentCmdTakeWeaponAtDefault
	{
		versions[]=
		{
			"SentCmdTakeWeaponAt_1",
			1
		};
		class SentCmdTakeWeaponAt_1
		{
			speech[]=
			{
				"%1.1",
				"TakeThat",
				"%2"
			};
		};
	};
	class SentCmdTakeWeaponAtStealth
	{
		versions[]=
		{
			"SentCmdTakeWeaponAt_1",
			1
		};
		class SentCmdTakeWeaponAt_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"TakeThat",
				"%2"
			};
		};
	};
	class SentCmdTakeMagazine
	{
		sentences[]=
		{
			"SentCmdTakeMagazineDefault",
			"(1-Stealth)",
			"SentCmdTakeMagazineStealth",
			"Stealth"
		};
	};
	class SentCmdTakeMagazineDefault
	{
		versions[]=
		{
			"SentCmdTakeMagazine_1",
			1
		};
		class SentCmdTakeMagazine_1
		{
			speech[]=
			{
				"%1.1",
				"TakeThat",
				"Magazine"
			};
		};
	};
	class SentCmdTakeMagazineStealth
	{
		versions[]=
		{
			"SentCmdTakeMagazine_1",
			1
		};
		class SentCmdTakeMagazine_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"TakeThat",
				"Magazine"
			};
		};
	};
	class SentCmdTakeMagazineFar
	{
		sentences[]=
		{
			"SentCmdTakeMagazineFarDefault",
			"(1-Stealth)",
			"SentCmdTakeMagazineFarStealth",
			"Stealth"
		};
	};
	class SentCmdTakeMagazineFarDefault
	{
		versions[]=
		{
			"SentCmdTakeMagazineFar_1",
			1
		};
		class SentCmdTakeMagazineFar_1
		{
			speech[]=
			{
				"%1.1",
				"TakeThat",
				"Magazine"
			};
		};
	};
	class SentCmdTakeMagazineFarStealth
	{
		versions[]=
		{
			"SentCmdTakeMagazineFar_1",
			1
		};
		class SentCmdTakeMagazineFar_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"TakeThat",
				"Magazine"
			};
		};
	};
	class SentCmdTakeMagazineAt
	{
		sentences[]=
		{
			"SentCmdTakeMagazineAtDefault",
			"(1-Stealth)",
			"SentCmdTakeMagazineAtStealth",
			"Stealth"
		};
	};
	class SentCmdTakeMagazineAtDefault
	{
		versions[]=
		{
			"SentCmdTakeMagazineAt_1",
			1
		};
		class SentCmdTakeMagazineAt_1
		{
			speech[]=
			{
				"%1.1",
				"TakeThat",
				"Magazine"
			};
		};
	};
	class SentCmdTakeMagazineAtStealth
	{
		versions[]=
		{
			"SentCmdTakeMagazineAt_1",
			1
		};
		class SentCmdTakeMagazineAt_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"TakeThat",
				"Magazine"
			};
		};
	};
	class SentCmdAction
	{
		sentences[]=
		{
			"SentCmdActionDefault",
			"(1-Stealth)",
			"SentCmdActionStealth",
			"Stealth"
		};
	};
	class SentCmdActionDefault
	{
		versions[]=
		{
			"SentCmdAction_1",
			1
		};
		class SentCmdAction_1
		{
			speech[]=
			{
				"NO_SPEECH"
			};
		};
	};
	class SentCmdActionStealth
	{
		versions[]=
		{
			"SentCmdAction_1",
			1
		};
		class SentCmdAction_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"NO_SPEECH"
			};
		};
	};
	class SentCmdActionNear
	{
		sentences[]=
		{
			"SentCmdActionNearDefault",
			"(1-Stealth)",
			"SentCmdActionNearStealth",
			"Stealth"
		};
	};
	class SentCmdActionNearDefault
	{
		versions[]=
		{
			"SentCmdActionNear_1",
			1
		};
		class SentCmdActionNear_1
		{
			speech[]=
			{
				"NO_SPEECH"
			};
		};
	};
	class SentCmdActionNearStealth
	{
		versions[]=
		{
			"SentCmdActionNear_1",
			1
		};
		class SentCmdActionNear_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"NO_SPEECH"
			};
		};
	};
	class SentCmdActionFar
	{
		sentences[]=
		{
			"SentCmdActionFarDefault",
			"(1-Stealth)",
			"SentCmdActionFarStealth",
			"Stealth"
		};
	};
	class SentCmdActionFarDefault
	{
		versions[]=
		{
			"SentCmdActionFar_1",
			1
		};
		class SentCmdActionFar_1
		{
			speech[]=
			{
				"NO_SPEECH"
			};
		};
	};
	class SentCmdActionFarStealth
	{
		versions[]=
		{
			"SentCmdActionFar_1",
			1
		};
		class SentCmdActionFar_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"NO_SPEECH"
			};
		};
	};
	class SentCmdActionAt
	{
		sentences[]=
		{
			"SentCmdActionAtDefault",
			"(1-Stealth)",
			"SentCmdActionAtStealth",
			"Stealth"
		};
	};
	class SentCmdActionAtDefault
	{
		versions[]=
		{
			"SentCmdActionAt_1",
			1
		};
		class SentCmdActionAt_1
		{
			speech[]=
			{
				"NO_SPEECH"
			};
		};
	};
	class SentCmdActionAtStealth
	{
		versions[]=
		{
			"SentCmdActionAt_1",
			1
		};
		class SentCmdActionAt_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"NO_SPEECH"
			};
		};
	};
	class SentCmdTakeFlag
	{
		sentences[]=
		{
			"SentCmdTakeFlagDefault",
			"(1-Stealth)",
			"SentCmdTakeFlagStealth",
			"Stealth"
		};
	};
	class SentCmdTakeFlagDefault
	{
		versions[]=
		{
			"SentCmdTakeFlag_1",
			1
		};
		class SentCmdTakeFlag_1
		{
			speech[]=
			{
				"%1.1",
				"TakeTheFlag"
			};
		};
	};
	class SentCmdTakeFlagStealth
	{
		versions[]=
		{
			"SentCmdTakeFlag_1",
			1
		};
		class SentCmdTakeFlag_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"TakeTheFlag"
			};
		};
	};
	class SentCmdTakeFlagFar
	{
		sentences[]=
		{
			"SentCmdTakeFlagFarDefault",
			"(1-Stealth)",
			"SentCmdTakeFlagFarStealth",
			"Stealth"
		};
	};
	class SentCmdTakeFlagFarDefault
	{
		versions[]=
		{
			"SentCmdTakeFlagFar_1",
			1
		};
		class SentCmdTakeFlagFar_1
		{
			speech[]=
			{
				"%1.1",
				"TakeTheFlag"
			};
		};
	};
	class SentCmdTakeFlagFarStealth
	{
		versions[]=
		{
			"SentCmdTakeFlagFar_1",
			1
		};
		class SentCmdTakeFlagFar_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"TakeTheFlag"
			};
		};
	};
	class SentCmdTakeFlagAt
	{
		sentences[]=
		{
			"SentCmdTakeFlagAtDefault",
			"(1-Stealth)",
			"SentCmdTakeFlagAtStealth",
			"Stealth"
		};
	};
	class SentCmdTakeFlagAtDefault
	{
		versions[]=
		{
			"SentCmdTakeFlagAt_1",
			1
		};
		class SentCmdTakeFlagAt_1
		{
			speech[]=
			{
				"%1.1",
				"TakeTheFlag"
			};
		};
	};
	class SentCmdTakeFlagAtStealth
	{
		versions[]=
		{
			"SentCmdTakeFlagAt_1",
			1
		};
		class SentCmdTakeFlagAt_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"TakeTheFlag"
			};
		};
	};
	class SentCmdReturnFlag
	{
		sentences[]=
		{
			"SentCmdReturnFlagDefault",
			1
		};
	};
	class SentCmdReturnFlagDefault
	{
		versions[]=
		{
			"SentCmdReturnFlag_1",
			1
		};
		class SentCmdReturnFlag_1
		{
			speech[]=
			{
				"%1.1",
				"ReturnTheFlag"
			};
		};
	};
	class SentCmdReturnFlagFar
	{
		sentences[]=
		{
			"SentCmdReturnFlagFarDefault",
			1
		};
	};
	class SentCmdReturnFlagFarDefault
	{
		versions[]=
		{
			"SentCmdReturnFlagFar_1",
			1
		};
		class SentCmdReturnFlagFar_1
		{
			speech[]=
			{
				"%1.1",
				"ReturnTheFlag"
			};
		};
	};
	class SentCmdReturnFlagAt
	{
		sentences[]=
		{
			"SentCmdReturnFlagAtDefault",
			1
		};
	};
	class SentCmdReturnFlagAtDefault
	{
		versions[]=
		{
			"SentCmdReturnFlagAt_1",
			1
		};
		class SentCmdReturnFlagAt_1
		{
			speech[]=
			{
				"%1.1",
				"ReturnTheFlag"
			};
		};
	};
	class SentCmdEject
	{
		sentences[]=
		{
			"SentCmdEjectDefault",
			"(1-Stealth)",
			"SentCmdEjectStealth",
			"Stealth"
		};
	};
	class SentCmdEjectDefault
	{
		versions[]=
		{
			"SentCmdEject_1",
			0.5,
			"SentCmdEject_2",
			0.5
		};
		class SentCmdEject_1
		{
			speech[]=
			{
				"%1.1",
				"EjectE"
			};
		};
		class SentCmdEject_2
		{
			speech[]=
			{
				"%1.1",
				"BailOutE"
			};
		};
	};
	class SentCmdEjectStealth
	{
		versions[]=
		{
			"SentCmdEject_1",
			1,
			"SentCmdEject_2",
			0
		};
		class SentCmdEject_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"EjectE"
			};
		};
		class SentCmdEject_2
		{
			speech[]=
			{
				"%1.1",
				"BailOutE"
			};
		};
	};
	class SentCmdPlaceCharge
	{
		sentences[]=
		{
			"SentCmdPlaceChargeDefault",
			"(1-Stealth)",
			"SentCmdPlaceChargeStealth",
			"Stealth"
		};
	};
	class SentCmdPlaceChargeDefault
	{
		versions[]=
		{
			"SentCmdPlaceCharge_1",
			1
		};
		class SentCmdPlaceCharge_1
		{
			speech[]=
			{
				"%1.1",
				"SetACharge"
			};
		};
	};
	class SentCmdPlaceChargeStealth
	{
		versions[]=
		{
			"SentCmdPlaceCharge_1",
			1
		};
		class SentCmdPlaceCharge_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"SetACharge"
			};
		};
	};
	class SentCmdPlaceMine
	{
		sentences[]=
		{
			"SentCmdPlaceMineDefault",
			1
		};
	};
	class SentCmdPlaceMineDefault
	{
		versions[]=
		{
			"SentCmdPlaceMine_1",
			1
		};
		class SentCmdPlaceMine_1
		{
			speech[]=
			{
				"%1.1",
				"PlaceAMine"
			};
		};
	};
	class SentCmdDetonate
	{
		sentences[]=
		{
			"SentCmdDetonateDefault",
			"(1-Stealth)",
			"SentCmdDetonateStealth",
			"Stealth"
		};
	};
	class SentCmdDetonateDefault
	{
		versions[]=
		{
			"SentCmdDetonate_1",
			1
		};
		class SentCmdDetonate_1
		{
			speech[]=
			{
				"%1.1",
				"DetonateCharge"
			};
		};
	};
	class SentCmdDetonateStealth
	{
		versions[]=
		{
			"SentCmdDetonate_1",
			1
		};
		class SentCmdDetonate_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"DetonateCharge"
			};
		};
	};
	class SentCmdActivateTimer
	{
		sentences[]=
		{
			"SentCmdActivateTimerDefault",
			"(1-Stealth)",
			"SentCmdActivateTimerStealth",
			"Stealth"
		};
	};
	class SentCmdActivateTimerDefault
	{
		versions[]=
		{
			"SentCmdActivateTimer_1",
			1
		};
		class SentCmdActivateTimer_1
		{
			speech[]=
			{
				"%1.1",
				"SetTheTimer"
			};
		};
	};
	class SentCmdActivateTimerStealth
	{
		versions[]=
		{
			"SentCmdActivateTimer_1",
			1
		};
		class SentCmdActivateTimer_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"SetTheTimer"
			};
		};
	};
	class SentCmdDeactivateBomb
	{
		sentences[]=
		{
			"SentCmdDeactivateBombDefault",
			"(1-Stealth)",
			"SentCmdDeactivateBombStealth",
			"Stealth"
		};
	};
	class SentCmdDeactivateBombDefault
	{
		versions[]=
		{
			"SentCmdDeactivateBomb_1",
			1
		};
		class SentCmdDeactivateBomb_1
		{
			speech[]=
			{
				"%1.1",
				"DeactivateCharge"
			};
		};
	};
	class SentCmdDeactivateBombStealth
	{
		versions[]=
		{
			"SentCmdDeactivateBomb_1",
			1
		};
		class SentCmdDeactivateBomb_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"DeactivateCharge"
			};
		};
	};
	class SentCmdDeactivateMine
	{
		sentences[]=
		{
			"SentCmdDeactivateMineDefault",
			"(1-Stealth)",
			"SentCmdDeactivateMineStealth",
			"Stealth"
		};
	};
	class SentCmdDeactivateMineDefault
	{
		versions[]=
		{
			"SentCmdDeactivateMine_1",
			1
		};
		class SentCmdDeactivateMine_1
		{
			speech[]=
			{
				"%1.1",
				"DisarmThatMine"
			};
		};
	};
	class SentCmdDeactivateMineStealth
	{
		versions[]=
		{
			"SentCmdDeactivateMine_1",
			1
		};
		class SentCmdDeactivateMine_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"DisarmThatMine"
			};
		};
	};
	class SentCmdTakeMine
	{
		sentences[]=
		{
			"SentCmdTakeMineDefault",
			"(1-Stealth)",
			"SentCmdTakeMineStealth",
			"Stealth"
		};
	};
	class SentCmdTakeMineDefault
	{
		versions[]=
		{
			"SentCmdTakeMine_1",
			1
		};
		class SentCmdTakeMine_1
		{
			speech[]=
			{
				"%1.1",
				"TakeThatMine"
			};
		};
	};
	class SentCmdTakeMineStealth
	{
		versions[]=
		{
			"SentCmdTakeMine_1",
			1
		};
		class SentCmdTakeMine_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"TakeThatMine"
			};
		};
	};
	class SentCmdLightFire
	{
		sentences[]=
		{
			"SentCmdLightFireDefault",
			"(1-Stealth)",
			"SentCmdLightFireStealth",
			"Stealth"
		};
	};
	class SentCmdLightFireDefault
	{
		versions[]=
		{
			"SentCmdLightFire_1",
			1
		};
		class SentCmdLightFire_1
		{
			speech[]=
			{
				"LightThatFire"
			};
		};
	};
	class SentCmdLightFireStealth
	{
		versions[]=
		{
			"SentCmdLightFire_1",
			1
		};
		class SentCmdLightFire_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"LightThatFire"
			};
		};
	};
	class SentCmdLightFireFar
	{
		sentences[]=
		{
			"SentCmdLightFireFarDefault",
			"(1-Stealth)",
			"SentCmdLightFireFarStealth",
			"Stealth"
		};
	};
	class SentCmdLightFireFarDefault
	{
		versions[]=
		{
			"SentCmdLightFireFar_1",
			1
		};
		class SentCmdLightFireFar_1
		{
			speech[]=
			{
				"%1.1",
				"LightThatFire"
			};
		};
	};
	class SentCmdLightFireFarStealth
	{
		versions[]=
		{
			"SentCmdLightFireFar_1",
			1
		};
		class SentCmdLightFireFar_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"LightThatFire"
			};
		};
	};
	class SentCmdLightFireAt
	{
		sentences[]=
		{
			"SentCmdLightFireAtDefault",
			"(1-Stealth)",
			"SentCmdLightFireAtStealth",
			"Stealth"
		};
	};
	class SentCmdLightFireAtDefault
	{
		versions[]=
		{
			"SentCmdLightFireAt_1",
			1
		};
		class SentCmdLightFireAt_1
		{
			speech[]=
			{
				"%1.1",
				"LightThatFire"
			};
		};
	};
	class SentCmdLightFireAtStealth
	{
		versions[]=
		{
			"SentCmdLightFireAt_1",
			1
		};
		class SentCmdLightFireAt_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"LightThatFire"
			};
		};
	};
	class SentCmdPutOutFire
	{
		sentences[]=
		{
			"SentCmdPutOutFireDefault",
			"(1-Stealth)",
			"SentCmdPutOutFireStealth",
			"Stealth"
		};
	};
	class SentCmdPutOutFireDefault
	{
		versions[]=
		{
			"SentCmdPutOutFire_1",
			1
		};
		class SentCmdPutOutFire_1
		{
			speech[]=
			{
				"PutOutThatFire"
			};
		};
	};
	class SentCmdPutOutFireStealth
	{
		versions[]=
		{
			"SentCmdPutOutFire_1",
			1
		};
		class SentCmdPutOutFire_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"PutOutThatFire"
			};
		};
	};
	class SentCmdPutOutFireFar
	{
		sentences[]=
		{
			"SentCmdPutOutFireFarDefault",
			"(1-Stealth)",
			"SentCmdPutOutFireFarStealth",
			"Stealth"
		};
	};
	class SentCmdPutOutFireFarDefault
	{
		versions[]=
		{
			"SentCmdPutOutFireFar_1",
			1
		};
		class SentCmdPutOutFireFar_1
		{
			speech[]=
			{
				"%1.1",
				"PutOutThatFire"
			};
		};
	};
	class SentCmdPutOutFireFarStealth
	{
		versions[]=
		{
			"SentCmdPutOutFireFar_1",
			1
		};
		class SentCmdPutOutFireFar_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"PutOutThatFire"
			};
		};
	};
	class SentCmdPutOutFireAt
	{
		sentences[]=
		{
			"SentCmdPutOutFireAtDefault",
			"(1-Stealth)",
			"SentCmdPutOutFireAtStealth",
			"Stealth"
		};
	};
	class SentCmdPutOutFireAtDefault
	{
		versions[]=
		{
			"SentCmdPutOutFireAt_1",
			1
		};
		class SentCmdPutOutFireAt_1
		{
			speech[]=
			{
				"%1.1",
				"PutOutThatFire"
			};
		};
	};
	class SentCmdPutOutFireAtStealth
	{
		versions[]=
		{
			"SentCmdPutOutFireAt_1",
			1
		};
		class SentCmdPutOutFireAt_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"PutOutThatFire"
			};
		};
	};
	class SentCmdOpenDoor
	{
		sentences[]=
		{
			"SentCmdOpenDoorDefault",
			"(1-Stealth)",
			"SentCmdOpenDoorStealth",
			"Stealth"
		};
	};
	class SentCmdOpenDoorDefault
	{
		versions[]=
		{
			"SentCmdOpenDoor_1",
			1
		};
		class SentCmdOpenDoor_1
		{
			speech[]=
			{
				"%1.1",
				"OpenThatDoor"
			};
		};
	};
	class SentCmdOpenDoorStealth
	{
		versions[]=
		{
			"SentCmdOpenDoor_1",
			1
		};
		class SentCmdOpenDoor_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"OpenThatDoor"
			};
		};
	};
	class SentCmdOpenDoorFar
	{
		sentences[]=
		{
			"SentCmdOpenDoorFarDefault",
			"(1-Stealth)",
			"SentCmdOpenDoorFarStealth",
			"Stealth"
		};
	};
	class SentCmdOpenDoorFarDefault
	{
		versions[]=
		{
			"SentCmdOpenDoorFar_1",
			1
		};
		class SentCmdOpenDoorFar_1
		{
			speech[]=
			{
				"%1.1",
				"OpenThatDoor"
			};
		};
	};
	class SentCmdOpenDoorFarStealth
	{
		versions[]=
		{
			"SentCmdOpenDoorFar_1",
			1
		};
		class SentCmdOpenDoorFar_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"OpenThatDoor"
			};
		};
	};
	class SentCmdOpenDoorAt
	{
		sentences[]=
		{
			"SentCmdOpenDoorAtDefault",
			"(1-Stealth)",
			"SentCmdOpenDoorAtStealth",
			"Stealth"
		};
	};
	class SentCmdOpenDoorAtDefault
	{
		versions[]=
		{
			"SentCmdOpenDoorAt_1",
			1
		};
		class SentCmdOpenDoorAt_1
		{
			speech[]=
			{
				"%1.1",
				"OpenThatDoor"
			};
		};
	};
	class SentCmdOpenDoorAtStealth
	{
		versions[]=
		{
			"SentCmdOpenDoorAt_1",
			1
		};
		class SentCmdOpenDoorAt_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"OpenThatDoor"
			};
		};
	};
	class SentCmdCloseDoor
	{
		sentences[]=
		{
			"SentCmdCloseDoorDefault",
			"(1-Stealth)",
			"SentCmdCloseDoorStealth",
			"Stealth"
		};
	};
	class SentCmdCloseDoorDefault
	{
		versions[]=
		{
			"SentCmdCloseDoor_1",
			1
		};
		class SentCmdCloseDoor_1
		{
			speech[]=
			{
				"%1.1",
				"CloseThatDoor"
			};
		};
	};
	class SentCmdCloseDoorStealth
	{
		versions[]=
		{
			"SentCmdCloseDoor_1",
			1
		};
		class SentCmdCloseDoor_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"CloseThatDoor"
			};
		};
	};
	class SentCmdCloseDoorFar
	{
		sentences[]=
		{
			"SentCmdCloseDoorFarDefault",
			"(1-Stealth)",
			"SentCmdCloseDoorFarStealth",
			"Stealth"
		};
	};
	class SentCmdCloseDoorFarDefault
	{
		versions[]=
		{
			"SentCmdCloseDoorFar_1",
			1
		};
		class SentCmdCloseDoorFar_1
		{
			speech[]=
			{
				"%1.1",
				"CloseThatDoor"
			};
		};
	};
	class SentCmdCloseDoorFarStealth
	{
		versions[]=
		{
			"SentCmdCloseDoorFar_1",
			1
		};
		class SentCmdCloseDoorFar_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"CloseThatDoor"
			};
		};
	};
	class SentCmdCloseDoorAt
	{
		sentences[]=
		{
			"SentCmdCloseDoorAtDefault",
			"(1-Stealth)",
			"SentCmdCloseDoorAtStealth",
			"Stealth"
		};
	};
	class SentCmdCloseDoorAtDefault
	{
		versions[]=
		{
			"SentCmdCloseDoorAt_1",
			1
		};
		class SentCmdCloseDoorAt_1
		{
			speech[]=
			{
				"%1.1",
				"CloseThatDoor"
			};
		};
	};
	class SentCmdCloseDoorAtStealth
	{
		versions[]=
		{
			"SentCmdCloseDoorAt_1",
			1
		};
		class SentCmdCloseDoorAt_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"CloseThatDoor"
			};
		};
	};
	class SentCmdFollowMe
	{
		sentences[]=
		{
			"SentCmdFollowMeDefault",
			"(1-Stealth)",
			"SentCmdFollowMeStealth",
			"Stealth"
		};
	};
	class SentCmdFollowMeDefault
	{
		versions[]=
		{
			"SentCmdFollowMe_1",
			0.33000001,
			"SentCmdFollowMe_2",
			0.33000001,
			"SentCmdFollowMe_3",
			0.33000001
		};
		class SentCmdFollowMe_1
		{
			speech[]=
			{
				"%1",
				"FallBackE"
			};
		};
		class SentCmdFollowMe_2
		{
			speech[]=
			{
				"%1",
				"ReturnToFormationE"
			};
		};
		class SentCmdFollowMe_3
		{
			speech[]=
			{
				"%1",
				"GetBackE"
			};
		};
	};
	class SentCmdFollowMeStealth
	{
		versions[]=
		{
			"SentCmdFollowMe_1",
			0.5,
			"SentCmdFollowMe_2",
			0,
			"SentCmdFollowMe_3",
			0.5
		};
		class SentCmdFollowMe_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1",
				"FallBackE"
			};
		};
		class SentCmdFollowMe_2
		{
			speech[]=
			{
				"%1",
				"ReturnToFormationE"
			};
		};
		class SentCmdFollowMe_3
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1",
				"GetBackE"
			};
		};
	};
	class SentCmdFollow
	{
		sentences[]=
		{
			"SentCmdFollowDefault",
			"(1-Stealth)",
			"SentCmdFollowStealth",
			"Stealth"
		};
	};
	class SentCmdFollowDefault
	{
		versions[]=
		{
			"SentCmdFollow_1",
			1
		};
		class SentCmdFollow_1
		{
			speech[]=
			{
				"%1.1",
				"Follow",
				"%2.1"
			};
		};
	};
	class SentCmdFollowStealth
	{
		versions[]=
		{
			"SentCmdFollow_1",
			1
		};
		class SentCmdFollow_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"Follow",
				"%2.1"
			};
		};
	};
	class SentCmdAttack
	{
		sentences[]=
		{
			"SentCmdAttackDefault",
			"(1-Stealth)",
			"SentCmdAttackStealth",
			"Stealth"
		};
	};
	class SentCmdAttackDefault
	{
		versions[]=
		{
			"SentCmdAttack_1",
			1
		};
		class SentCmdAttack_1
		{
			speech[]=
			{
				"%1.1",
				"AttackThat",
				"%2"
			};
		};
	};
	class SentCmdAttackStealth
	{
		versions[]=
		{
			"SentCmdAttack_1",
			1
		};
		class SentCmdAttack_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"AttackThat",
				"%2"
			};
		};
	};
	class SentAttackNoTarget
	{
		sentences[]=
		{
			"SentAttackNoTargetDefault",
			"(1-Stealth)",
			"SentAttackNoTargetStealth",
			"Stealth"
		};
	};
	class SentAttackNoTargetDefault
	{
		versions[]=
		{
			"SentAttackNoTarget_1",
			1
		};
		class SentAttackNoTarget_1
		{
			speech[]=
			{
				"%1.1",
				"AttackE"
			};
		};
	};
	class SentAttackNoTargetStealth
	{
		versions[]=
		{
			"SentAttackNoTarget_1",
			1
		};
		class SentAttackNoTarget_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"AttackE"
			};
		};
	};
	class SentCmdFire
	{
		sentences[]=
		{
			"SentCmdFireDefault",
			"(1-Stealth)",
			"SentCmdFireStealth",
			"Stealth"
		};
	};
	class SentCmdFireDefault
	{
		versions[]=
		{
			"SentCmdFire_1",
			1
		};
		class SentCmdFire_1
		{
			speech[]=
			{
				"%1.1",
				"FireAtThat",
				"%2"
			};
		};
	};
	class SentCmdFireStealth
	{
		versions[]=
		{
			"SentCmdFire_1",
			1
		};
		class SentCmdFire_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"FireAtThat",
				"%2"
			};
		};
	};
	class SentCmdGetIn
	{
		sentences[]=
		{
			"SentCmdGetInDefault",
			"(1-Stealth)",
			"SentCmdGetInStealth",
			"Stealth"
		};
	};
	class SentCmdGetInDefault
	{
		versions[]=
		{
			"SentCmdGetIn_1",
			1
		};
		class SentCmdGetIn_1
		{
			speech[]=
			{
				"%1.1",
				"GetInThat",
				"%2"
			};
		};
	};
	class SentCmdGetInStealth
	{
		versions[]=
		{
			"SentCmdGetIn_1",
			1
		};
		class SentCmdGetIn_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"GetInThat",
				"%2"
			};
		};
	};
	class SentCmdGetInCommander
	{
		sentences[]=
		{
			"SentCmdGetInCommanderDefault",
			"(1-Stealth)",
			"SentCmdGetInCommanderStealth",
			"Stealth"
		};
	};
	class SentCmdGetInCommanderDefault
	{
		versions[]=
		{
			"SentCmdGetInCommander_1",
			1
		};
		class SentCmdGetInCommander_1
		{
			speech[]=
			{
				"%1.1",
				"Commander",
				"GetInThat",
				"%2"
			};
		};
	};
	class SentCmdGetInCommanderStealth
	{
		versions[]=
		{
			"SentCmdGetInCommander_1",
			1
		};
		class SentCmdGetInCommander_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"Commander",
				"GetInThat",
				"%2"
			};
		};
	};
	class SentCmdGetInDriver
	{
		sentences[]=
		{
			"SentCmdGetInDriverDefault",
			"(1-Stealth)",
			"SentCmdGetInDriverStealth",
			"Stealth"
		};
	};
	class SentCmdGetInDriverDefault
	{
		versions[]=
		{
			"SentCmdGetInDriver_1",
			1
		};
		class SentCmdGetInDriver_1
		{
			speech[]=
			{
				"%1.1",
				"Driver",
				"GetInThat",
				"%2"
			};
		};
	};
	class SentCmdGetInDriverStealth
	{
		versions[]=
		{
			"SentCmdGetInDriver_1",
			1
		};
		class SentCmdGetInDriver_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"Driver",
				"GetInThat",
				"%2"
			};
		};
	};
	class SentCmdGetInPilot
	{
		sentences[]=
		{
			"SentCmdGetInPilotDefault",
			"(1-Stealth)",
			"SentCmdGetInPilotStealth",
			"Stealth"
		};
	};
	class SentCmdGetInPilotDefault
	{
		versions[]=
		{
			"SentCmdGetInPilot_1",
			1
		};
		class SentCmdGetInPilot_1
		{
			speech[]=
			{
				"%1.1",
				"Pilot",
				"GetInThat",
				"%2"
			};
		};
	};
	class SentCmdGetInPilotStealth
	{
		versions[]=
		{
			"SentCmdGetInPilot_1",
			1
		};
		class SentCmdGetInPilot_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"Pilot",
				"GetInThat",
				"%2"
			};
		};
	};
	class SentCmdGetInGunner
	{
		sentences[]=
		{
			"SentCmdGetInGunnerDefault",
			"(1-Stealth)",
			"SentCmdGetInGunnerStealth",
			"Stealth"
		};
	};
	class SentCmdGetInGunnerDefault
	{
		versions[]=
		{
			"SentCmdGetInGunner_1",
			1
		};
		class SentCmdGetInGunner_1
		{
			speech[]=
			{
				"%1.1",
				"Gunner",
				"GetInThat",
				"%2"
			};
		};
	};
	class SentCmdGetInGunnerStealth
	{
		versions[]=
		{
			"SentCmdGetInGunner_1",
			1
		};
		class SentCmdGetInGunner_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"Gunner",
				"GetInThat",
				"%2"
			};
		};
	};
	class SentCmdGetInCargo
	{
		sentences[]=
		{
			"SentCmdGetInCargoDefault",
			"(1-Stealth)",
			"SentCmdGetInCargoStealth",
			"Stealth"
		};
	};
	class SentCmdGetInCargoDefault
	{
		versions[]=
		{
			"SentCmdGetInCargo_1",
			1
		};
		class SentCmdGetInCargo_1
		{
			speech[]=
			{
				"%1.1",
				"BoardThat",
				"%2"
			};
		};
	};
	class SentCmdGetInCargoStealth
	{
		versions[]=
		{
			"SentCmdGetInCargo_1",
			1
		};
		class SentCmdGetInCargo_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"BoardThat",
				"%2"
			};
		};
	};
	class SentCmdSwitchToDriver
	{
		sentences[]=
		{
			"SentCmdSwitchToDriverDefault",
			"(1-Stealth)",
			"SentCmdSwitchToDriverStealth",
			"Stealth"
		};
	};
	class SentCmdSwitchToDriverDefault
	{
		versions[]=
		{
			"SentCmdSwitchToDriver_1",
			1
		};
		class SentCmdSwitchToDriver_1
		{
			speech[]=
			{
				"empty"
			};
		};
	};
	class SentCmdSwitchToDriverStealth
	{
		versions[]=
		{
			"SentCmdSwitchToDriver_1",
			1
		};
		class SentCmdSwitchToDriver_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"empty"
			};
		};
	};
	class SentCmdSwitchToGunner
	{
		sentences[]=
		{
			"SentCmdSwitchToGunnerDefault",
			"(1-Stealth)",
			"SentCmdSwitchToGunnerStealth",
			"Stealth"
		};
	};
	class SentCmdSwitchToGunnerDefault
	{
		versions[]=
		{
			"SentCmdSwitchToGunner_1",
			1
		};
		class SentCmdSwitchToGunner_1
		{
			speech[]=
			{
				"empty"
			};
		};
	};
	class SentCmdSwitchToGunnerStealth
	{
		versions[]=
		{
			"SentCmdSwitchToGunner_1",
			1
		};
		class SentCmdSwitchToGunner_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"empty"
			};
		};
	};
	class SentCmdSwitchToCommander
	{
		sentences[]=
		{
			"SentCmdSwitchToCommanderDefault",
			"(1-Stealth)",
			"SentCmdSwitchToCommanderStealth",
			"Stealth"
		};
	};
	class SentCmdSwitchToCommanderDefault
	{
		versions[]=
		{
			"SentCmdSwitchToCommander_1",
			1
		};
		class SentCmdSwitchToCommander_1
		{
			speech[]=
			{
				"empty"
			};
		};
	};
	class SentCmdSwitchToCommanderStealth
	{
		versions[]=
		{
			"SentCmdSwitchToCommander_1",
			1
		};
		class SentCmdSwitchToCommander_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"empty"
			};
		};
	};
	class SentCmdSwitchToCargo
	{
		sentences[]=
		{
			"SentCmdSwitchToCargoDefault",
			"(1-Stealth)",
			"SentCmdSwitchToCargoStealth",
			"Stealth"
		};
	};
	class SentCmdSwitchToCargoDefault
	{
		versions[]=
		{
			"SentCmdSwitchToCargo_1",
			1
		};
		class SentCmdSwitchToCargo_1
		{
			speech[]=
			{
				"empty"
			};
		};
	};
	class SentCmdSwitchToCargoStealth
	{
		versions[]=
		{
			"SentCmdSwitchToCargo_1",
			1
		};
		class SentCmdSwitchToCargo_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"empty"
			};
		};
	};
	class SentCmdGetOut
	{
		sentences[]=
		{
			"SentCmdGetOutDefault",
			"(1-Stealth)",
			"SentCmdGetOutStealth",
			"Stealth"
		};
	};
	class SentCmdGetOutDefault
	{
		versions[]=
		{
			"SentCmdGetOut_1",
			0.5,
			"SentCmdGetOut_2",
			0.5
		};
		class SentCmdGetOut_1
		{
			speech[]=
			{
				"%1.1",
				"Dismount"
			};
		};
		class SentCmdGetOut_2
		{
			speech[]=
			{
				"%1.1",
				"Disembark"
			};
		};
	};
	class SentCmdGetOutStealth
	{
		versions[]=
		{
			"SentCmdGetOut_1",
			1,
			"SentCmdGetOut_2",
			0
		};
		class SentCmdGetOut_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"Dismount"
			};
		};
		class SentCmdGetOut_2
		{
			speech[]=
			{
				"%1.1",
				"Disembark"
			};
		};
	};
	class SentCmdStop
	{
		sentences[]=
		{
			"SentCmdStopDefault",
			"(1-Stealth)",
			"SentCmdStopStealth",
			"Stealth"
		};
	};
	class SentCmdStopDefault
	{
		versions[]=
		{
			"SentCmdStop_1",
			0.5,
			"SentCmdStop_2",
			0.5
		};
		class SentCmdStop_1
		{
			speech[]=
			{
				"%1.1",
				"Halt"
			};
		};
		class SentCmdStop_2
		{
			speech[]=
			{
				"%1.1",
				"StopE"
			};
		};
	};
	class SentCmdStopStealth
	{
		versions[]=
		{
			"SentCmdStop_1",
			0.5,
			"SentCmdStop_2",
			0.5
		};
		class SentCmdStop_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"Halt"
			};
		};
		class SentCmdStop_2
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"StopE"
			};
		};
	};
	class SentCmdExpect
	{
		sentences[]=
		{
			"SentCmdExpectDefault",
			"(1-Stealth)",
			"SentCmdExpectStealth",
			"Stealth"
		};
	};
	class SentCmdExpectDefault
	{
		versions[]=
		{
			"SentCmdExpect_1",
			0.33000001,
			"SentCmdExpect_2",
			0.33000001,
			"SentCmdExpect_3",
			0.33000001
		};
		class SentCmdExpect_1
		{
			speech[]=
			{
				"%1.1",
				"Halt"
			};
		};
		class SentCmdExpect_2
		{
			speech[]=
			{
				"%1.1",
				"StopE"
			};
		};
		class SentCmdExpect_3
		{
			speech[]=
			{
				"%1.1",
				"WaitForMe"
			};
		};
	};
	class SentCmdExpectStealth
	{
		versions[]=
		{
			"SentCmdExpect_1",
			0.5,
			"SentCmdExpect_2",
			0.5
		};
		class SentCmdExpect_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"Halt"
			};
		};
		class SentCmdExpect_2
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"StopE"
			};
		};
	};
	class SentCmdHide
	{
		sentences[]=
		{
			"SentCmdHideDefault",
			"(1-Stealth)",
			"SentCmdHideStealth",
			"Stealth"
		};
	};
	class SentCmdHideDefault
	{
		versions[]=
		{
			"SentCmdHide_1",
			1
		};
		class SentCmdHide_1
		{
			speech[]=
			{
				"%1.1",
				"TakeCoverE"
			};
		};
	};
	class SentCmdHideStealth
	{
		versions[]=
		{
			"SentCmdHide_1",
			1
		};
		class SentCmdHide_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"TakeCoverE"
			};
		};
	};
	class SentCmdDismiss
	{
		sentences[]=
		{
			"SentCmdDismissDefault",
			"(1-Stealth)",
			"SentCmdDismissStealth",
			"Stealth"
		};
	};
	class SentCmdDismissDefault
	{
		versions[]=
		{
			"SentCmdDismiss_1",
			1
		};
		class SentCmdDismiss_1
		{
			speech[]={};
		};
	};
	class SentCmdDismissStealth
	{
		versions[]=
		{
			"SentCmdDismiss_1",
			1
		};
		class SentCmdDismiss_1
		{
			wordsClass="StealthWords";
			speech[]={};
		};
	};
	class SentNotifyAttack
	{
		sentences[]=
		{
			"SentNotifyAttackDefault",
			"(1-Stealth)",
			"SentNotifyAttackStealth",
			"Stealth"
		};
	};
	class SentNotifyAttackDefault
	{
		versions[]=
		{
			"SentNotifyAttack_1",
			0.25,
			"SentNotifyAttack_2",
			0.25,
			"SentNotifyAttack_3",
			0.25,
			"SentNotifyAttack_4",
			0.25
		};
		class SentNotifyAttack_1
		{
			speech[]=
			{
				"Copy",
				"ImOnHim"
			};
		};
		class SentNotifyAttack_2
		{
			speech[]=
			{
				"EngagingE"
			};
		};
		class SentNotifyAttack_3
		{
			speech[]=
			{
				"EngagingTargetE"
			};
		};
		class SentNotifyAttack_4
		{
			speech[]=
			{
				"AttackingE"
			};
		};
	};
	class SentNotifyAttackStealth
	{
		versions[]=
		{
			"SentNotifyAttack_1",
			0,
			"SentNotifyAttack_2",
			1,
			"SentNotifyAttack_3",
			0,
			"SentNotifyAttack_4",
			0
		};
		class SentNotifyAttack_1
		{
			speech[]=
			{
				"Copy",
				"ImOnHim"
			};
		};
		class SentNotifyAttack_2
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"EngagingE"
			};
		};
		class SentNotifyAttack_3
		{
			speech[]=
			{
				"EngagingTargetE"
			};
		};
		class SentNotifyAttack_4
		{
			speech[]=
			{
				"AttackingE"
			};
		};
	};
	class SentNotifyAttackSubgroup
	{
		sentences[]=
		{
			"SentNotifyAttackSubgroupDefault",
			"(1-Stealth)",
			"SentNotifyAttackSubgroupStealth",
			"Stealth"
		};
	};
	class SentNotifyAttackSubgroupDefault
	{
		versions[]=
		{
			"SentNotifyAttackSubgroup_1",
			0.5,
			"SentNotifyAttackSubgroup_2",
			0.5
		};
		class SentNotifyAttackSubgroup_1
		{
			speech[]=
			{
				"%3.1",
				"EngagingE"
			};
		};
		class SentNotifyAttackSubgroup_2
		{
			speech[]=
			{
				"%3.1",
				"EngagingTargetE"
			};
		};
	};
	class SentNotifyAttackSubgroupStealth
	{
		versions[]=
		{
			"SentNotifyAttackSubgroup_1",
			1,
			"SentNotifyAttackSubgroup_2",
			0
		};
		class SentNotifyAttackSubgroup_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%3.1",
				"EngagingE"
			};
		};
		class SentNotifyAttackSubgroup_2
		{
			speech[]=
			{
				"%3.1",
				"EngagingTargetE"
			};
		};
	};
	class SentNotifySupport
	{
		sentences[]=
		{
			"SentNotifySupportDefault",
			"(1-Stealth)",
			"SentNotifySupportStealth",
			"Stealth"
		};
	};
	class SentNotifySupportDefault
	{
		versions[]=
		{
			"SentNotifySupport_1",
			1
		};
		class SentNotifySupport_1
		{
			speech[]=
			{
				"%1.1",
				"Supporting"
			};
		};
	};
	class SentNotifySupportStealth
	{
		versions[]=
		{
			"SentNotifySupport_1",
			1
		};
		class SentNotifySupport_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1.1",
				"Supporting"
			};
		};
	};
	class SentConfirmMove
	{
		sentences[]=
		{
			"SentConfirmMoveDefault",
			"(1-Stealth)",
			"SentConfirmMoveStealth",
			"Stealth"
		};
	};
	class SentConfirmMoveDefault
	{
		versions[]=
		{
			"SentConfirmMove_1",
			0.17,
			"SentConfirmMove_2",
			0.17,
			"SentConfirmMove_3",
			0.17,
			"SentConfirmMove_4",
			0.17,
			"SentConfirmMove_5",
			0.17,
			"SentConfirmMove_6",
			0.17
		};
		class SentConfirmMove_1
		{
			speech[]=
			{
				"Roger"
			};
		};
		class SentConfirmMove_2
		{
			speech[]=
			{
				"Copy"
			};
		};
		class SentConfirmMove_3
		{
			speech[]=
			{
				"OscarMike"
			};
		};
		class SentConfirmMove_4
		{
			speech[]=
			{
				"Understood"
			};
		};
		class SentConfirmMove_5
		{
			speech[]=
			{
				"SolidCopy"
			};
		};
		class SentConfirmMove_6
		{
			speech[]=
			{
				"OnTheWay"
			};
		};
	};
	class SentConfirmMoveStealth
	{
		versions[]=
		{
			"SentConfirmMove_1",
			0.17,
			"SentConfirmMove_2",
			0.17,
			"SentConfirmMove_3",
			0.17,
			"SentConfirmMove_4",
			0.17,
			"SentConfirmMove_5",
			0.17,
			"SentConfirmMove_6",
			0.17
		};
		class SentConfirmMove_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Roger"
			};
		};
		class SentConfirmMove_2
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Copy"
			};
		};
		class SentConfirmMove_3
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"OscarMike"
			};
		};
		class SentConfirmMove_4
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Understood"
			};
		};
		class SentConfirmMove_5
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"SolidCopy"
			};
		};
		class SentConfirmMove_6
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"OnTheWay"
			};
		};
	};
	class SentConfirmAttack
	{
		sentences[]=
		{
			"SentConfirmAttackDefault",
			"(1-Stealth)",
			"SentConfirmAttackStealth",
			"Stealth"
		};
	};
	class SentConfirmAttackDefault
	{
		versions[]=
		{
			"SentConfirmAttack_1",
			0.5,
			"SentConfirmAttack_2",
			0.5
		};
		class SentConfirmAttack_1
		{
			speech[]=
			{
				"Roger"
			};
		};
		class SentConfirmAttack_2
		{
			speech[]=
			{
				"Copy"
			};
		};
	};
	class SentConfirmAttackStealth
	{
		versions[]=
		{
			"SentConfirmAttack_1",
			0.5,
			"SentConfirmAttack_2",
			0.5
		};
		class SentConfirmAttack_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Roger"
			};
		};
		class SentConfirmAttack_2
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Copy"
			};
		};
	};
	class SentConfirmOther
	{
		sentences[]=
		{
			"SentConfirmOtherDefault",
			"(1-Stealth)",
			"SentConfirmOtherStealth",
			"Stealth"
		};
	};
	class SentConfirmOtherDefault
	{
		versions[]=
		{
			"SentConfirmOther_1",
			1
		};
		class SentConfirmOther_1
		{
			speech[]=
			{
				"Roger"
			};
		};
	};
	class SentConfirmOtherStealth
	{
		versions[]=
		{
			"SentConfirmOther_1",
			1
		};
		class SentConfirmOther_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Roger"
			};
		};
	};
	class VehicleWatchTgt
	{
		sentences[]=
		{
			"VehicleWatchTgtDefault",
			1
		};
	};
	class VehicleWatchTgtDefault
	{
		versions[]=
		{
			"VehicleWatchTgt_1",
			1
		};
		class VehicleWatchTgt_1
		{
			speech[]=
			{
				"XMIT",
				"WatchThat",
				"%1",
				"At",
				"%2"
			};
		};
	};
	class VehicleWatchPos
	{
		sentences[]=
		{
			"VehicleWatchPosDefault",
			"(1-Stealth)",
			"VehicleWatchPosStealth",
			"Stealth"
		};
	};
	class VehicleWatchPosDefault
	{
		versions[]=
		{
			"VehicleWatchPos_1",
			1
		};
		class VehicleWatchPos_1
		{
			speech[]=
			{
				"XMIT",
				"Watch",
				"%1",
				"%2"
			};
		};
	};
	class VehicleWatchPosStealth
	{
		versions[]=
		{
			"VehicleWatchPos_1",
			1
		};
		class VehicleWatchPos_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"XMIT",
				"Watch",
				"%1",
				"%2"
			};
		};
	};
	class VehicleJoin
	{
		sentences[]=
		{
			"VehicleJoinDefault",
			1
		};
	};
	class VehicleJoinDefault
	{
		versions[]=
		{
			"VehicleJoin_1",
			0.5,
			"VehicleJoin_2",
			0.5
		};
		class VehicleJoin_1
		{
			speech[]=
			{
				"XMIT",
				"MaintainFormation"
			};
		};
		class VehicleJoin_2
		{
			speech[]=
			{
				"XMIT",
				"StayInFormationE"
			};
		};
	};
	class VehicleFire
	{
		sentences[]=
		{
			"VehicleFireDefault",
			"(1-Stealth)",
			"VehicleFireStealth",
			"Stealth"
		};
	};
	class VehicleFireDefault
	{
		versions[]=
		{
			"VehicleFire_1",
			1
		};
		class VehicleFire_1
		{
			speech[]=
			{
				"XMIT",
				"FireAtThat",
				"%1"
			};
		};
	};
	class VehicleFireStealth
	{
		versions[]=
		{
			"VehicleFire_1",
			1
		};
		class VehicleFire_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"XMIT",
				"FireAtThat",
				"%1"
			};
		};
	};
	class VehicleTarget
	{
		sentences[]=
		{
			"VehicleTargetDefault",
			1
		};
	};
	class VehicleTargetDefault
	{
		versions[]=
		{
			"VehicleTarget_1",
			1
		};
		class VehicleTarget_1
		{
			speech[]=
			{
				"XMIT",
				"TargetThat",
				"%1",
				"At",
				"%2"
			};
		};
	};
	class VehicleNoTarget
	{
		sentences[]=
		{
			"VehicleNoTargetDefault",
			"(1-Stealth)",
			"VehicleNoTargetStealth",
			"Stealth"
		};
	};
	class VehicleNoTargetDefault
	{
		versions[]=
		{
			"VehicleNoTarget_1",
			1
		};
		class VehicleNoTarget_1
		{
			speech[]=
			{
				"XMIT",
				"NoTarget"
			};
		};
	};
	class VehicleNoTargetStealth
	{
		versions[]=
		{
			"VehicleNoTarget_1",
			1
		};
		class VehicleNoTarget_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"XMIT",
				"NoTarget"
			};
		};
	};
	class VehicleCeaseFire
	{
		sentences[]=
		{
			"VehicleCeaseFireDefault",
			1
		};
	};
	class VehicleCeaseFireDefault
	{
		versions[]=
		{
			"VehicleCeaseFire_1",
			1
		};
		class VehicleCeaseFire_1
		{
			speech[]=
			{
				"XMIT",
				"CeaseFireE"
			};
		};
	};
	class VehicleForward
	{
		sentences[]=
		{
			"VehicleForwardDefault",
			1
		};
	};
	class VehicleForwardDefault
	{
		versions[]=
		{
			"VehicleForward_1",
			1
		};
		class VehicleForward_1
		{
			speech[]=
			{
				"XMIT",
				"Forward"
			};
		};
	};
	class VehicleStop
	{
		sentences[]=
		{
			"VehicleStopDefault",
			"(1-Stealth)",
			"VehicleStopStealth",
			"Stealth"
		};
	};
	class VehicleStopDefault
	{
		versions[]=
		{
			"VehicleStop_1",
			1
		};
		class VehicleStop_1
		{
			speech[]=
			{
				"XMIT",
				"Halt"
			};
		};
	};
	class VehicleStopStealth
	{
		versions[]=
		{
			"VehicleStop_1",
			1
		};
		class VehicleStop_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"XMIT",
				"Halt"
			};
		};
	};
	class VehicleBackward
	{
		sentences[]=
		{
			"VehicleBackwardDefault",
			1
		};
	};
	class VehicleBackwardDefault
	{
		versions[]=
		{
			"VehicleBackward_1",
			1
		};
		class VehicleBackward_1
		{
			speech[]=
			{
				"XMIT",
				"Reverse"
			};
		};
	};
	class VehicleFaster
	{
		sentences[]=
		{
			"VehicleFasterDefault",
			1
		};
	};
	class VehicleFasterDefault
	{
		versions[]=
		{
			"VehicleFaster_1",
			1
		};
		class VehicleFaster_1
		{
			speech[]=
			{
				"XMIT",
				"Fast"
			};
		};
	};
	class VehicleSlower
	{
		sentences[]=
		{
			"VehicleSlowerDefault",
			1
		};
	};
	class VehicleSlowerDefault
	{
		versions[]=
		{
			"VehicleSlower_1",
			1
		};
		class VehicleSlower_1
		{
			speech[]=
			{
				"XMIT",
				"Slow"
			};
		};
	};
	class VehicleLeft
	{
		sentences[]=
		{
			"VehicleLeftDefault",
			"(1-Stealth)",
			"VehicleLeftStealth",
			"Stealth"
		};
	};
	class VehicleLeftDefault
	{
		versions[]=
		{
			"VehicleLeft_1",
			1
		};
		class VehicleLeft_1
		{
			speech[]=
			{
				"XMIT",
				"Left"
			};
		};
	};
	class VehicleLeftStealth
	{
		versions[]=
		{
			"VehicleLeft_1",
			1
		};
		class VehicleLeft_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"XMIT",
				"Left"
			};
		};
	};
	class VehicleRight
	{
		sentences[]=
		{
			"VehicleRightDefault",
			1
		};
	};
	class VehicleRightDefault
	{
		versions[]=
		{
			"VehicleRight_1",
			1
		};
		class VehicleRight_1
		{
			speech[]=
			{
				"XMIT",
				"Right"
			};
		};
	};
	class VehicleManualFire
	{
		sentences[]=
		{
			"VehicleManualFireDefault",
			1
		};
	};
	class VehicleManualFireDefault
	{
		versions[]=
		{
			"VehicleManualFire_1",
			1
		};
		class VehicleManualFire_1
		{
			speech[]=
			{
				"XMIT",
				"ManualFire"
			};
		};
	};
	class VehicleCancelManualFire
	{
		sentences[]=
		{
			"VehicleCancelManualFireDefault",
			1
		};
	};
	class VehicleCancelManualFireDefault
	{
		versions[]=
		{
			"VehicleCancelManualFire_1",
			1
		};
		class VehicleCancelManualFire_1
		{
			speech[]=
			{
				"XMIT",
				"CancelManualFire"
			};
		};
	};
	class VehicleDirectFire
	{
		sentences[]=
		{
			"VehicleDirectFireDefault",
			"(1-Stealth)",
			"VehicleDirectFireStealth",
			"Stealth"
		};
	};
	class VehicleDirectFireDefault
	{
		versions[]=
		{
			"VehicleDirectFire_1",
			1
		};
		class VehicleDirectFire_1
		{
			speech[]=
			{
				"XMIT",
				"Fire"
			};
		};
	};
	class VehicleDirectFireStealth
	{
		versions[]=
		{
			"VehicleDirectFire_1",
			1
		};
		class VehicleDirectFire_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"XMIT",
				"Fire"
			};
		};
	};
	class VehicleLoad
	{
		sentences[]=
		{
			"VehicleLoadDefault",
			"(1-Stealth)",
			"VehicleLoadStealth",
			"Stealth"
		};
	};
	class VehicleLoadDefault
	{
		versions[]=
		{
			"VehicleLoad_1",
			1
		};
		class VehicleLoad_1
		{
			speech[]=
			{
				"%1"
			};
		};
	};
	class VehicleLoadStealth
	{
		versions[]=
		{
			"VehicleLoad_1",
			1
		};
		class VehicleLoad_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1"
			};
		};
	};
	class VehicleLoadMagazine
	{
		sentences[]=
		{
			"VehicleLoadMagazineDefault",
			"(1-Stealth)",
			"VehicleLoadMagazineStealth",
			"Stealth"
		};
	};
	class VehicleLoadMagazineDefault
	{
		versions[]=
		{
			"VehicleLoadMagazine_1",
			1
		};
		class VehicleLoadMagazine_1
		{
			speech[]=
			{
				"%1"
			};
		};
	};
	class VehicleLoadMagazineStealth
	{
		versions[]=
		{
			"VehicleLoadMagazine_1",
			1
		};
		class VehicleLoadMagazine_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1"
			};
		};
	};
	class VehicleAzimut
	{
		sentences[]=
		{
			"VehicleAzimutDefault",
			"(1-Stealth)",
			"VehicleAzimutStealth",
			"Stealth"
		};
	};
	class VehicleAzimutDefault
	{
		versions[]=
		{
			"VehicleAzimut_1",
			1
		};
		class VehicleAzimut_1
		{
			speech[]=
			{
				"%1"
			};
		};
	};
	class VehicleAzimutStealth
	{
		versions[]=
		{
			"VehicleAzimut_1",
			1
		};
		class VehicleAzimut_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1"
			};
		};
	};
	class VehicleFireFailed
	{
		sentences[]=
		{
			"VehicleFireFailedDefault",
			"(1-Stealth)",
			"VehicleFireFailedStealth",
			"Stealth"
		};
	};
	class VehicleFireFailedDefault
	{
		versions[]=
		{
			"VehicleFireFailed_1",
			0.5,
			"VehicleFireFailed_2",
			0.5
		};
		class VehicleFireFailed_1
		{
			speech[]=
			{
				"Negative"
			};
		};
		class VehicleFireFailed_2
		{
			speech[]=
			{
				"CannotFire"
			};
		};
	};
	class VehicleFireFailedStealth
	{
		versions[]=
		{
			"VehicleFireFailed_1",
			0.5,
			"VehicleFireFailed_2",
			0.5
		};
		class VehicleFireFailed_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Negative"
			};
		};
		class VehicleFireFailed_2
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"CannotFire"
			};
		};
	};
	class SentSuppress
	{
		sentences[]=
		{
			"SentSuppressDefault",
			1
		};
	};
	class SentSuppressDefault
	{
		versions[]=
		{
			"SentSuppress_1",
			0.5,
			"SentSuppress_2",
			0.5
		};
		class SentSuppress_1
		{
			speech[]=
			{
				"%1",
				"SuppressiveFireE"
			};
		};
		class SentSuppress_2
		{
			speech[]=
			{
				"%1",
				"OpenUpE"
			};
		};
	};
	class ClausePosition
	{
		sentences[]=
		{
			"ClausePositionDefault",
			"(1-Stealth)",
			"ClausePositionStealth",
			"Stealth"
		};
	};
	class ClausePositionDefault
	{
		versions[]=
		{
			"ClausePosition_1",
			1
		};
		class ClausePosition_1
		{
			speech[]=
			{
				"%1",
				"%2"
			};
		};
	};
	class ClausePositionStealth
	{
		versions[]=
		{
			"ClausePosition_1",
			1
		};
		class ClausePosition_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1",
				"%2"
			};
		};
	};
	class ClausePositionNear
	{
		sentences[]=
		{
			"ClausePositionNearDefault",
			1
		};
	};
	class ClausePositionNearDefault
	{
		versions[]=
		{
			"ClausePositionNear_1",
			1
		};
		class ClausePositionNear_1
		{
			speech[]=
			{
				"That",
				"%1",
				"At",
				"%2"
			};
		};
	};
	class SentAssemble
	{
		sentences[]=
		{
			"SentAssembleDefault",
			"(1-Stealth)",
			"SentAssembleStealth",
			"Stealth"
		};
	};
	class SentAssembleDefault
	{
		versions[]=
		{
			"SentAssemble_1",
			1
		};
		class SentAssemble_1
		{
			speech[]=
			{
				"%1",
				"AssembleThat",
				"%2"
			};
		};
	};
	class SentAssembleStealth
	{
		versions[]=
		{
			"SentAssemble_1",
			1
		};
		class SentAssemble_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1",
				"AssembleThat",
				"%2"
			};
		};
	};
	class SentDisassemble
	{
		sentences[]=
		{
			"SentDisassembleDefault",
			"(1-Stealth)",
			"SentDisassembleStealth",
			"Stealth"
		};
	};
	class SentDisassembleDefault
	{
		versions[]=
		{
			"SentDisassemble_1",
			1
		};
		class SentDisassemble_1
		{
			speech[]=
			{
				"%1",
				"DisassembleThat",
				"%2"
			};
		};
	};
	class SentDisassembleStealth
	{
		versions[]=
		{
			"SentDisassemble_1",
			1
		};
		class SentDisassemble_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1",
				"DisassembleThat",
				"%2"
			};
		};
	};
	class SentCmdActionOpenBag
	{
		sentences[]=
		{
			"SentCmdActionOpenBagDefault",
			"(1-Stealth)",
			"SentCmdActionOpenBagStealth",
			"Stealth"
		};
	};
	class SentCmdActionOpenBagDefault
	{
		versions[]=
		{
			"SentCmdActionOpenBag_1",
			1
		};
		class SentCmdActionOpenBag_1
		{
			speech[]=
			{
				"NO_SPEECH"
			};
		};
	};
	class SentCmdActionOpenBagStealth
	{
		versions[]=
		{
			"SentCmdActionOpenBag_1",
			1
		};
		class SentCmdActionOpenBag_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"NO_SPEECH"
			};
		};
	};
	class SentCmdActionDropBag
	{
		sentences[]=
		{
			"SentCmdActionDropBagDefault",
			"(1-Stealth)",
			"SentCmdActionDropBagStealth",
			"Stealth"
		};
	};
	class SentCmdActionDropBagDefault
	{
		versions[]=
		{
			"SentCmdActionDropBag_1",
			1
		};
		class SentCmdActionDropBag_1
		{
			speech[]=
			{
				"NO_SPEECH"
			};
		};
	};
	class SentCmdActionDropBagStealth
	{
		versions[]=
		{
			"SentCmdActionDropBag_1",
			1
		};
		class SentCmdActionDropBag_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"NO_SPEECH"
			};
		};
	};
	class SentCmdActionTakeBag
	{
		sentences[]=
		{
			"SentCmdActionTakeBagDefault",
			"(1-Stealth)",
			"SentCmdActionTakeBagStealth",
			"Stealth"
		};
	};
	class SentCmdActionTakeBagDefault
	{
		versions[]=
		{
			"SentCmdActionTakeBag_1",
			1
		};
		class SentCmdActionTakeBag_1
		{
			speech[]=
			{
				"NO_SPEECH"
			};
		};
	};
	class SentCmdActionTakeBagStealth
	{
		versions[]=
		{
			"SentCmdActionTakeBag_1",
			1
		};
		class SentCmdActionTakeBag_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"NO_SPEECH"
			};
		};
	};
	class SentLightsOn
	{
		sentences[]=
		{
			"SentLightsOnDefault",
			"(1-Stealth)",
			"SentLightsOnStealth",
			"Stealth"
		};
	};
	class SentLightsOnDefault
	{
		versions[]=
		{
			"SentLightsOn_1",
			1
		};
		class SentLightsOn_1
		{
			speech[]=
			{
				"%1",
				"FlashlightsOn"
			};
		};
	};
	class SentLightsOnStealth
	{
		versions[]=
		{
			"SentLightsOn_1",
			1
		};
		class SentLightsOn_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1",
				"FlashlightsOn"
			};
		};
	};
	class SentLightsOff
	{
		sentences[]=
		{
			"SentLightsOffDefault",
			"(1-Stealth)",
			"SentLightsOffStealth",
			"Stealth"
		};
	};
	class SentLightsOffDefault
	{
		versions[]=
		{
			"SentLightsOff_1",
			1,
			"HC_Select_2",
			0.25,
			"HC_Select_3",
			0.25,
			"HC_Select_4",
			0.25
		};
		class SentLightsOff_1
		{
			speech[]=
			{
				"%1",
				"FlashlightsOff"
			};
		};
		class HC_Select_2
		{
			speech[]=
			{
				"HC_StandingByForOrders"
			};
		};
		class HC_Select_3
		{
			speech[]=
			{
				"HC_CombatReady"
			};
		};
		class HC_Select_4
		{
			speech[]=
			{
				"HC_WaitingForOrders"
			};
		};
	};
	class SentLightsOffStealth
	{
		versions[]=
		{
			"SentLightsOff_1",
			1,
			"HC_Select_2",
			0.25,
			"HC_Select_3",
			0.25,
			"HC_Select_4",
			0.25
		};
		class SentLightsOff_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1",
				"FlashlightsOff"
			};
		};
		class HC_Select_2
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HC_StandingByForOrders"
			};
		};
		class HC_Select_3
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HC_CombatReady"
			};
		};
		class HC_Select_4
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HC_WaitingForOrders"
			};
		};
	};
	class SentPointersOn
	{
		sentences[]=
		{
			"SentPointersOnDefault",
			"(1-Stealth)",
			"SentPointersOnStealth",
			"Stealth"
		};
	};
	class SentPointersOnDefault
	{
		versions[]=
		{
			"SentPointersOn_1",
			1
		};
		class SentPointersOn_1
		{
			speech[]=
			{
				"%1",
				"LasersOn"
			};
		};
	};
	class SentPointersOnStealth
	{
		versions[]=
		{
			"SentPointersOn_1",
			1
		};
		class SentPointersOn_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1",
				"LasersOn"
			};
		};
	};
	class SentPointersOff
	{
		sentences[]=
		{
			"SentPointersOffDefault",
			"(1-Stealth)",
			"SentPointersOffStealth",
			"Stealth"
		};
	};
	class SentPointersOffDefault
	{
		versions[]=
		{
			"SentPointersOff_1",
			1
		};
		class SentPointersOff_1
		{
			speech[]=
			{
				"%1",
				"LasersOff"
			};
		};
	};
	class SentPointersOffStealth
	{
		versions[]=
		{
			"SentPointersOff_1",
			1
		};
		class SentPointersOff_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"%1",
				"LasersOff"
			};
		};
	};
	class HC_Select
	{
		sentences[]=
		{
			"HC_SelectDefault",
			"(1-Stealth)",
			"HC_SelectStealth",
			"Stealth"
		};
	};
	class HC_SelectDefault
	{
		versions[]=
		{
			"HC_Select_1",
			0.25,
			"HC_Select_2",
			0.25,
			"HC_Select_3",
			0.25,
			"HC_Select_4",
			0.25
		};
		class HC_Select_1
		{
			speech[]=
			{
				"HC_ReportingIn"
			};
		};
		class HC_Select_2
		{
			speech[]=
			{
				"HC_StandingByForOrders"
			};
		};
		class HC_Select_3
		{
			speech[]=
			{
				"HC_CombatReady"
			};
		};
		class HC_Select_4
		{
			speech[]=
			{
				"HC_WaitingForOrders"
			};
		};
	};
	class HC_SelectStealth
	{
		versions[]=
		{
			"HC_Select_1",
			0.25,
			"HC_Select_2",
			0.25,
			"HC_Select_3",
			0.25,
			"HC_Select_4",
			0.25
		};
		class HC_Select_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HC_ReportingIn"
			};
		};
		class HC_Select_2
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HC_StandingByForOrders"
			};
		};
		class HC_Select_3
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HC_CombatReady"
			};
		};
		class HC_Select_4
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HC_WaitingForOrders"
			};
		};
	};
	class HC_Move
	{
		sentences[]=
		{
			"HC_MoveDefault",
			"(1-Stealth)",
			"HC_MoveStealth",
			"Stealth"
		};
	};
	class HC_MoveDefault
	{
		versions[]=
		{
			"HC_Move_1",
			0.25,
			"HC_Move_2",
			0.25,
			"HC_Move_3",
			0.25,
			"HC_Move_4",
			0.25
		};
		class HC_Move_1
		{
			speech[]=
			{
				"HC_Advancing"
			};
		};
		class HC_Move_2
		{
			speech[]=
			{
				"HC_Affirmative"
			};
		};
		class HC_Move_3
		{
			speech[]=
			{
				"HC_MovingToPosition"
			};
		};
		class HC_Move_4
		{
			speech[]=
			{
				"HC_OrderReceived"
			};
		};
	};
	class HC_MoveStealth
	{
		versions[]=
		{
			"HC_Move_1",
			0.25,
			"HC_Move_2",
			0.25,
			"HC_Move_3",
			0.25,
			"HC_Move_4",
			0.25
		};
		class HC_Move_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HC_Advancing"
			};
		};
		class HC_Move_2
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HC_Affirmative"
			};
		};
		class HC_Move_3
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HC_MovingToPosition"
			};
		};
		class HC_Move_4
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HC_OrderReceived"
			};
		};
	};
	class HC_Attack
	{
		sentences[]=
		{
			"HC_AttackDefault",
			"(1-Stealth)",
			"HC_AttackStealth",
			"Stealth"
		};
	};
	class HC_AttackDefault
	{
		versions[]=
		{
			"HC_Attack_1",
			0.2,
			"HC_Attack_2",
			0.2,
			"HC_Attack_3",
			0.2,
			"HC_Attack_4",
			0.2,
			"HC_Attack_5",
			0.2
		};
		class HC_Attack_1
		{
			speech[]=
			{
				"HC_Advancing"
			};
		};
		class HC_Attack_2
		{
			speech[]=
			{
				"HC_Affirmative"
			};
		};
		class HC_Attack_3
		{
			speech[]=
			{
				"HC_OrderReceived"
			};
		};
		class HC_Attack_4
		{
			speech[]=
			{
				"HC_EngagingE"
			};
		};
		class HC_Attack_5
		{
			speech[]=
			{
				"HC_AttackingE"
			};
		};
	};
	class HC_AttackStealth
	{
		versions[]=
		{
			"HC_Attack_1",
			0.2,
			"HC_Attack_2",
			0.2,
			"HC_Attack_3",
			0.2,
			"HC_Attack_4",
			0.2,
			"HC_Attack_5",
			0.2
		};
		class HC_Attack_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HC_Advancing"
			};
		};
		class HC_Attack_2
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HC_Affirmative"
			};
		};
		class HC_Attack_3
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HC_OrderReceived"
			};
		};
		class HC_Attack_4
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HC_EngagingE"
			};
		};
		class HC_Attack_5
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HC_AttackingE"
			};
		};
	};
	class SentSuppressing
	{
		sentences[]=
		{
			"SentSuppressingDefault",
			"(1-Stealth)",
			"SentSuppressingStealth",
			"Stealth"
		};
	};
	class SentSuppressingDefault
	{
		versions[]=
		{
			"SentSuppressing_1",
			0.2,
			"SentSuppressing_2",
			0.2,
			"SentSuppressing_3",
			0.2,
			"SentSuppressing_4",
			0.2,
			"SentSuppressing_5",
			0.2
		};
		class SentSuppressing_1
		{
			speech[]=
			{
				"CS_SuppressiveFireE"
			};
		};
		class SentSuppressing_2
		{
			speech[]=
			{
				"CS_HangOnIllSuppressEmE"
			};
		};
		class SentSuppressing_3
		{
			speech[]=
			{
				"CS_SuppressingE"
			};
		};
		class SentSuppressing_4
		{
			speech[]=
			{
				"CS_CoveringFireE"
			};
		};
		class SentSuppressing_5
		{
			gesture="GestureCover";
			speech[]={};
		};
	};
	class SentSuppressingStealth
	{
		versions[]={};
	};
	class SentCovering
	{
		sentences[]=
		{
			"SentCoveringDefault",
			"(1-Stealth)",
			"SentCoveringStealth",
			"Stealth"
		};
	};
	class SentCoveringDefault
	{
		versions[]=
		{
			"SentCovering_1",
			0.11,
			"SentCovering_2",
			0.11,
			"SentCovering_3",
			0.11,
			"SentCovering_4",
			0.11,
			"SentCovering_5",
			0.11,
			"SentCovering_6",
			0.11,
			"SentCovering_7",
			0.11,
			"SentCovering_8",
			0.11,
			"SentCovering_9",
			9
		};
		class SentCovering_1
		{
			speech[]=
			{
				"CS_GoImCoveringE"
			};
		};
		class SentCovering_2
		{
			speech[]=
			{
				"CS_GoIllCoverE"
			};
		};
		class SentCovering_3
		{
			speech[]=
			{
				"CS_CoveringFireE"
			};
		};
		class SentCovering_4
		{
			speech[]=
			{
				"CS_CoveringGoE"
			};
		};
		class SentCovering_5
		{
			speech[]=
			{
				"CS_MoveOutE"
			};
		};
		class SentCovering_6
		{
			speech[]=
			{
				"CS_GoE"
			};
		};
		class SentCovering_7
		{
			speech[]=
			{
				"CS_MoveE"
			};
		};
		class SentCovering_8
		{
			gesture="GestureCover";
			speech[]={};
		};
		class SentCovering_9
		{
			speech[]={};
		};
	};
	class SentCoveringStealth
	{
		versions[]=
		{
			"SentCovering_8",
			0.5,
			"SentCovering_9",
			9
		};
		class SentCovering_8
		{
			wordsClass="StealthWords";
			gesture="GestureCover";
			speech[]={};
		};
		class SentCovering_9
		{
			wordsClass="StealthWords";
			speech[]={};
		};
	};
	class sentCoverMe
	{
		sentences[]=
		{
			"sentCoverMeDefault",
			"(1-Stealth)",
			"sentCoverMeStealth",
			"Stealth"
		};
	};
	class sentCoverMeDefault
	{
		versions[]=
		{
			"sentCoverMe_1",
			0.17,
			"sentCoverMe_2",
			0.17,
			"sentCoverMe_3",
			0.17,
			"sentCoverMe_4",
			0.17,
			"sentCoverMe_5",
			0.17,
			"sentCoverMe_6",
			9
		};
		class sentCoverMe_1
		{
			speech[]=
			{
				"CS_CoverMeE"
			};
		};
		class sentCoverMe_2
		{
			speech[]=
			{
				"CS_OKLetsGo"
			};
		};
		class sentCoverMe_3
		{
			speech[]=
			{
				"CS_MovingE"
			};
		};
		class sentCoverMe_4
		{
			speech[]=
			{
				"CS_MovinOutE"
			};
		};
		class sentCoverMe_5
		{
			gesture="GestureCover";
			speech[]={};
		};
		class sentCoverMe_6
		{
			speech[]={};
		};
	};
	class sentCoverMeStealth
	{
		versions[]=
		{
			"sentCoverMe_5",
			0.5,
			"sentCoverMe_6",
			9
		};
		class sentCoverMe_5
		{
			wordsClass="StealthWords";
			gesture="GestureCover";
			speech[]={};
		};
		class sentCoverMe_6
		{
			wordsClass="StealthWords";
			speech[]={};
		};
	};
	class SentReloading
	{
		sentences[]=
		{
			"SentReloadingDefault",
			1
		};
	};
	class SentReloadingDefault
	{
		versions[]=
		{
			"SentReloading_1",
			0.25,
			"SentReloading_2",
			0.25,
			"SentReloading_3",
			0.25,
			"SentReloading_4",
			0.25
		};
		class SentReloading_1
		{
			speech[]=
			{
				"CS_ReloadingE"
			};
		};
		class SentReloading_2
		{
			speech[]=
			{
				"CS_GottaReloadE"
			};
		};
		class SentReloading_3
		{
			speech[]=
			{
				"CS_CoverMeReloadingE"
			};
		};
		class SentReloading_4
		{
			speech[]=
			{
				"CS_ChangingMagsE"
			};
		};
	};
	class SentThrowingGrenade
	{
		sentences[]=
		{
			"SentThrowingGrenadeDefault",
			1
		};
	};
	class SentThrowingGrenadeDefault
	{
		versions[]=
		{
			"SentThrowingGrenade_1",
			0.33000001,
			"SentThrowingGrenade_2",
			0.33000001,
			"SentThrowingGrenade_3",
			0.33000001
		};
		class SentThrowingGrenade_1
		{
			speech[]=
			{
				"CS_FireInTheHoleE"
			};
		};
		class SentThrowingGrenade_2
		{
			speech[]=
			{
				"CS_ThrowingFragE"
			};
		};
		class SentThrowingGrenade_3
		{
			speech[]=
			{
				"CS_FragOutE"
			};
		};
	};
	class SentThrowingSmoke
	{
		sentences[]=
		{
			"SentThrowingSmokeDefault",
			1
		};
	};
	class SentThrowingSmokeDefault
	{
		versions[]=
		{
			"SentThrowingSmoke_1",
			0.5,
			"SentThrowingSmoke_2",
			0.5
		};
		class SentThrowingSmoke_1
		{
			speech[]=
			{
				"CS_ThrowingSmokeE"
			};
		};
		class SentThrowingSmoke_2
		{
			speech[]=
			{
				"CS_SmokeOutE"
			};
		};
	};
	class SentIncomingGrenade
	{
		sentences[]=
		{
			"SentIncomingGrenadeDefault",
			1
		};
	};
	class SentIncomingGrenadeDefault
	{
		versions[]=
		{
			"SentIncomingGrenade_1",
			0.33000001,
			"SentIncomingGrenade_2",
			0.33000001,
			"SentIncomingGrenade_3",
			0.33000001
		};
		class SentIncomingGrenade_1
		{
			speech[]=
			{
				"CS_GrenadeE"
			};
		};
		class SentIncomingGrenade_2
		{
			speech[]=
			{
				"CS_WatchTheGrenadeE"
			};
		};
		class SentIncomingGrenade_3
		{
			speech[]=
			{
				"CS_IncomingFragE"
			};
		};
	};
	class SentEnemyContact
	{
		sentences[]=
		{
			"SentEnemyContactDefault",
			1
		};
	};
	class SentEnemyContactDefault
	{
		versions[]=
		{
			"SentEnemyContact_1",
			0.33000001,
			"SentEnemyContact_2",
			0.33000001,
			"SentEnemyContact_3",
			0.33000001
		};
		class SentEnemyContact_1
		{
			speech[]=
			{
				"CS_ContactE"
			};
		};
		class SentEnemyContact_2
		{
			speech[]=
			{
				"CS_HostilesE"
			};
		};
		class SentEnemyContact_3
		{
			speech[]=
			{
				"CS_EnemyE"
			};
		};
	};
	class SentCombatGeneric
	{
		sentences[]=
		{
			"SentCombatGenericDefault",
			1
		};
	};
	class SentCombatGenericDefault
	{
		versions[]=
		{
			"SentCombatGeneric_1",
			0.2,
			"SentCombatGeneric_2",
			0.2,
			"SentCombatGeneric_3",
			0.2,
			"SentCombatGeneric_4",
			0.2,
			"SentCombatGeneric_5",
			0.2
		};
		class SentCombatGeneric_1
		{
			speech[]=
			{
				"CS_DidYouSeeThatQ"
			};
		};
		class SentCombatGeneric_2
		{
			speech[]=
			{
				"CS_FocusE"
			};
		};
		class SentCombatGeneric_3
		{
			speech[]=
			{
				"CS_CheckThatOut"
			};
		};
		class SentCombatGeneric_4
		{
			speech[]=
			{
				"CS_MotherfuckerE"
			};
		};
		class SentCombatGeneric_5
		{
			speech[]=
			{
				"CS_SeeThatQE"
			};
		};
	};
	class SentScreaming
	{
		sentences[]=
		{
			"SentScreamingDefault",
			1
		};
	};
	class SentScreamingDefault
	{
		versions[]=
		{
			"SentScreaming_1",
			0.25,
			"SentScreaming_2",
			0.25,
			"SentScreaming_3",
			0.25,
			"SentScreaming_4",
			0.25
		};
		class SentScreaming_1
		{
			speech[]=
			{
				"CS_ARGHHE"
			};
		};
		class SentScreaming_2
		{
			speech[]=
			{
				"CS_OOFE"
			};
		};
		class SentScreaming_3
		{
			speech[]=
			{
				"CS_UGHE"
			};
		};
		class SentScreaming_4
		{
			speech[]=
			{
				"CS_NoE"
			};
		};
	};
	class SentCheering
	{
		sentences[]=
		{
			"SentCheeringDefault",
			1
		};
	};
	class SentCheeringDefault
	{
		versions[]=
		{
			"SentCheering_1",
			0.25,
			"SentCheering_2",
			0.25,
			"SentCheering_3",
			0.25,
			"SentCheering_4",
			0.25
		};
		class SentCheering_1
		{
			speech[]=
			{
				"CS_WoohooE"
			};
		};
		class SentCheering_2
		{
			speech[]=
			{
				"CS_YahooE"
			};
		};
		class SentCheering_3
		{
			speech[]=
			{
				"CS_HeeeyE"
			};
		};
		class SentCheering_4
		{
			speech[]=
			{
				"CS_YeehawEGreatE"
			};
		};
	};
	class SentCmdMoveToTarget
	{
		sentences[]=
		{
			"SentCmdMoveToTargetDefault",
			"(1-Stealth)",
			"SentCmdMoveToTargetStealth",
			"Stealth"
		};
	};
	class SentCmdMoveToTargetDefault
	{
		versions[]=
		{
			"SentCmdMoveToTarget_1",
			0.5,
			"SentCmdMoveToTarget_2",
			0.5
		};
		class SentCmdMoveToTarget_1
		{
			gesture="gestureGo";
			speech[]=
			{
				"%1.1",
				"MoveTo",
				"That",
				"%2"
			};
		};
		class SentCmdMoveToTarget_2
		{
			gesture="gestureGo";
			speech[]=
			{
				"%1.1",
				"GoTo",
				"That",
				"%2",
				"ToOur",
				"%4.2"
			};
		};
	};
	class SentCmdMoveToTargetStealth
	{
		versions[]=
		{
			"SentCmdMoveToTarget_1",
			0.5,
			"SentCmdMoveToTarget_2",
			0.5
		};
		class SentCmdMoveToTarget_1
		{
			wordsClass="StealthWords";
			gesture="gestureGo";
			speech[]=
			{
				"%1.1",
				"MoveTo",
				"That",
				"%2"
			};
		};
		class SentCmdMoveToTarget_2
		{
			wordsClass="StealthWords";
			gesture="gestureGo";
			speech[]=
			{
				"%1.1",
				"GoTo",
				"That",
				"%2",
				"ToOur",
				"%4.2"
			};
		};
	};
	class SentBehaviourCareless
	{
		sentences[]=
		{
			"SentBehaviourCarelessDefault",
			"(1-Stealth)",
			"SentBehaviourCarelessStealth",
			"Stealth"
		};
	};
	class SentBehaviourCarelessDefault
	{
		versions[]=
		{
			"SentBehaviourCareless_1",
			1
		};
		class SentBehaviourCareless_1
		{
			speech[]=
			{
				"NO_SPEECH"
			};
		};
	};
	class SentBehaviourCarelessStealth
	{
		versions[]=
		{
			"SentBehaviourCareless_1",
			1
		};
		class SentBehaviourCareless_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"NO_SPEECH"
			};
		};
	};
	class SentWitnessKilled
	{
		sentences[]=
		{
			"SentWitnessKilledDefault",
			"(1-Stealth)",
			"SentWitnessKilledStealth",
			"Stealth"
		};
	};
	class SentWitnessKilledDefault
	{
		versions[]=
		{
			"SentWitnessKilled_1",
			1
		};
		class SentWitnessKilled_1
		{
			speech[]=
			{
				"HesDownE"
			};
		};
	};
	class SentWitnessKilledStealth
	{
		versions[]=
		{
			"SentWitnessKilled_1",
			1
		};
		class SentWitnessKilled_1
		{
			speech[]=
			{
				"HesDownE"
			};
		};
	};
	class SentWitnessDeadBody
	{
		sentences[]=
		{
			"SentWitnessDeadBodyDefault",
			"(1-Stealth)",
			"SentWitnessDeadBodyStealth",
			"Stealth"
		};
	};
	class SentWitnessDeadBodyDefault
	{
		versions[]=
		{
			"SentWitnessDeadBody_1",
			0.5,
			"SentWitnessDeadBody_2",
			0.5
		};
		class SentWitnessDeadBody_1
		{
			speech[]=
			{
				"SonOfABitchE_EN"
			};
		};
		class SentWitnessDeadBody_2
		{
			speech[]=
			{
				"CS_MotherfuckerE"
			};
		};
	};
	class SentWitnessDeadBodyStealth
	{
		versions[]=
		{
			"SentWitnessDeadBody_1",
			0.5,
			"SentWitnessDeadBody_2",
			0.5
		};
		class SentWitnessDeadBody_1
		{
			speech[]=
			{
				"SonOfABitchE_EN"
			};
		};
		class SentWitnessDeadBody_2
		{
			speech[]=
			{
				"CS_MotherfuckerE"
			};
		};
	};
	class SentRouted
	{
		sentences[]=
		{
			"SentRoutedDefault",
			"(1-Stealth)",
			"SentRoutedStealth",
			"Stealth"
		};
	};
	class SentRoutedDefault
	{
		versions[]=
		{
			"SentRouted_1",
			0.5,
			"SentRouted_2",
			0.5
		};
		class SentRouted_1
		{
			speech[]=
			{
				"SonOfABitchE_EN"
			};
		};
		class SentRouted_2
		{
			speech[]=
			{
				"CS_MotherfuckerE"
			};
		};
	};
	class SentRoutedStealth
	{
		versions[]=
		{
			"SentRouted_1",
			0.5,
			"SentRouted_2",
			0.5
		};
		class SentRouted_1
		{
			speech[]=
			{
				"SonOfABitchE_EN"
			};
		};
		class SentRouted_2
		{
			speech[]=
			{
				"CS_MotherfuckerE"
			};
		};
	};
	class SentEndangered
	{
		sentences[]=
		{
			"SentEndangeredDefault",
			"(1-Stealth)",
			"SentEndangeredStealth",
			"Stealth"
		};
	};
	class SentEndangeredDefault
	{
		versions[]=
		{
			"SentEndangered_1",
			0.33000001,
			"SentEndangered_2",
			0.33000001,
			"SentEndangered_3",
			0.33000001
		};
		class SentEndangered_1
		{
			speech[]=
			{
				"FuckE"
			};
		};
		class SentEndangered_2
		{
			speech[]=
			{
				"CS_MotherfuckerE"
			};
		};
		class SentEndangered_3
		{
			speech[]=
			{
				"SonOfABitchE_EN"
			};
		};
	};
	class SentEndangeredStealth
	{
		versions[]=
		{
			"SentEndangered_1",
			0.33000001,
			"SentEndangered_2",
			0.33000001,
			"SentEndangered_3",
			0.33000001
		};
		class SentEndangered_1
		{
			speech[]=
			{
				"FuckE"
			};
		};
		class SentEndangered_2
		{
			speech[]=
			{
				"CS_MotherfuckerE"
			};
		};
		class SentEndangered_3
		{
			speech[]=
			{
				"SonOfABitchE_EN"
			};
		};
	};
	class SentARTYRoundsComplete
	{
		versions[]=
		{
			"SentARTYRoundsComplete_1",
			1
		};
		class SentARTYRoundsComplete_1
		{
			speech[]=
			{
				"RoundsComplete"
			};
		};
	};
	class SentARTYFireAt
	{
		versions[]=
		{
			"SentARTYFireAt_1",
			1
		};
		class SentARTYFireAt_1
		{
			speech[]=
			{
				"%1",
				"FireAt",
				"%2"
			};
		};
	};
	class SentARTYCannotExecuteThatsOutsideOurFiringEnvelope
	{
		versions[]=
		{
			"SentARTYCannotExecuteThatsOutsideOurFiringEnvelope_1",
			1
		};
		class SentARTYCannotExecuteThatsOutsideOurFiringEnvelope_1
		{
			speech[]=
			{
				"CannotExecuteThatsOutsideOurFiringEnvelope"
			};
		};
	};
	class SentARTYCannotExecuteAdjustCoordinates
	{
		versions[]=
		{
			"SentARTYCannotExecuteAdjustCoordinates_1",
			1
		};
		class SentARTYCannotExecuteAdjustCoordinates_1
		{
			speech[]=
			{
				"CannotExecuteAdjustCoordinates"
			};
		};
	};
	class SentRepairThat
	{
		versions[]=
		{
			"SentRepairThat_1",
			1
		};
		class SentRepairThat_1
		{
			speech[]=
			{
				"%1",
				"RepairThat",
				"%2"
			};
		};
	};
	class WordAdvance
	{
		sentences[]=
		{
			"WordAdvanceDefault",
			"(1-Stealth)",
			"WordAdvanceStealth",
			"Stealth"
		};
	};
	class WordAdvanceDefault
	{
		versions[]=
		{
			"WordAdvance_1",
			1
		};
		class WordAdvance_1
		{
			speech[]=
			{
				"Advance"
			};
		};
	};
	class WordAdvanceStealth
	{
		versions[]=
		{
			"WordAdvance_1",
			1
		};
		class WordAdvance_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Advance"
			};
		};
	};
	class WordAnd
	{
		sentences[]=
		{
			"WordAndDefault",
			"(1-Stealth)",
			"WordAndStealth",
			"Stealth"
		};
	};
	class WordAndDefault
	{
		versions[]=
		{
			"WordAnd_1",
			1
		};
		class WordAnd_1
		{
			speech[]=
			{
				"And"
			};
		};
	};
	class WordAndStealth
	{
		versions[]=
		{
			"WordAnd_1",
			1
		};
		class WordAnd_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"And"
			};
		};
	};
	class WordAre
	{
		sentences[]=
		{
			"WordAreDefault",
			"(1-Stealth)",
			"WordAreStealth",
			"Stealth"
		};
	};
	class WordAreDefault
	{
		versions[]=
		{
			"WordAre_1",
			1
		};
		class WordAre_1
		{
			speech[]=
			{
				"Are"
			};
		};
	};
	class WordAreStealth
	{
		versions[]=
		{
			"WordAre_1",
			1
		};
		class WordAre_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Are"
			};
		};
	};
	class WordAreaClear
	{
		sentences[]=
		{
			"WordAreaClearDefault",
			1
		};
	};
	class WordAreaClearDefault
	{
		versions[]=
		{
			"WordAreaClear_1",
			1
		};
		class WordAreaClear_1
		{
			speech[]=
			{
				"AreaClear"
			};
		};
	};
	class WordAt
	{
		sentences[]=
		{
			"WordAtDefault",
			1
		};
	};
	class WordAtDefault
	{
		versions[]=
		{
			"WordAt_1",
			1
		};
		class WordAt_1
		{
			speech[]=
			{
				"At"
			};
		};
	};
	class WordAtEase
	{
		sentences[]=
		{
			"WordAtEaseDefault",
			"(1-Stealth)",
			"WordAtEaseStealth",
			"Stealth"
		};
	};
	class WordAtEaseDefault
	{
		versions[]=
		{
			"WordAtEase_1",
			1
		};
		class WordAtEase_1
		{
			speech[]=
			{
				"AtEase"
			};
		};
	};
	class WordAtEaseStealth
	{
		versions[]=
		{
			"WordAtEase_1",
			1
		};
		class WordAtEase_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"AtEase"
			};
		};
	};
	class WordAttackE
	{
		sentences[]=
		{
			"WordAttackEDefault",
			"(1-Stealth)",
			"WordAttackEStealth",
			"Stealth"
		};
	};
	class WordAttackEDefault
	{
		versions[]=
		{
			"WordAttackE_1",
			1
		};
		class WordAttackE_1
		{
			speech[]=
			{
				"AttackE"
			};
		};
	};
	class WordAttackEStealth
	{
		versions[]=
		{
			"WordAttackE_1",
			1
		};
		class WordAttackE_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"AttackE"
			};
		};
	};
	class WordAttackingE
	{
		sentences[]=
		{
			"WordAttackingEDefault",
			1
		};
	};
	class WordAttackingEDefault
	{
		versions[]=
		{
			"WordAttackingE_1",
			1
		};
		class WordAttackingE_1
		{
			speech[]=
			{
				"AttackingE"
			};
		};
	};
	class WordAttackThat
	{
		sentences[]=
		{
			"WordAttackThatDefault",
			"(1-Stealth)",
			"WordAttackThatStealth",
			"Stealth"
		};
	};
	class WordAttackThatDefault
	{
		versions[]=
		{
			"WordAttackThat_1",
			1
		};
		class WordAttackThat_1
		{
			speech[]=
			{
				"AttackThat"
			};
		};
	};
	class WordAttackThatStealth
	{
		versions[]=
		{
			"WordAttackThat_1",
			1
		};
		class WordAttackThat_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"AttackThat"
			};
		};
	};
	class WordBailOutE
	{
		sentences[]=
		{
			"WordBailOutEDefault",
			1
		};
	};
	class WordBailOutEDefault
	{
		versions[]=
		{
			"WordBailOutE_1",
			1
		};
		class WordBailOutE_1
		{
			speech[]=
			{
				"BailOutE"
			};
		};
	};
	class WordBeAdvised
	{
		sentences[]=
		{
			"WordBeAdvisedDefault",
			"(1-Stealth)",
			"WordBeAdvisedStealth",
			"Stealth"
		};
	};
	class WordBeAdvisedDefault
	{
		versions[]=
		{
			"WordBeAdvised_1",
			1
		};
		class WordBeAdvised_1
		{
			speech[]=
			{
				"BeAdvised"
			};
		};
	};
	class WordBeAdvisedStealth
	{
		versions[]=
		{
			"WordBeAdvised_1",
			1
		};
		class WordBeAdvised_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"BeAdvised"
			};
		};
	};
	class WordBingoFuel
	{
		sentences[]=
		{
			"WordBingoFuelDefault",
			1
		};
	};
	class WordBingoFuelDefault
	{
		versions[]=
		{
			"WordBingoFuel_1",
			1
		};
		class WordBingoFuel_1
		{
			speech[]=
			{
				"BingoFuel"
			};
		};
	};
	class WordBlueOnBlueE
	{
		sentences[]=
		{
			"WordBlueOnBlueEDefault",
			1
		};
	};
	class WordBlueOnBlueEDefault
	{
		versions[]=
		{
			"WordBlueOnBlueE_1",
			1
		};
		class WordBlueOnBlueE_1
		{
			speech[]=
			{
				"BlueOnBlueE"
			};
		};
	};
	class WordBoardThat
	{
		sentences[]=
		{
			"WordBoardThatDefault",
			"(1-Stealth)",
			"WordBoardThatStealth",
			"Stealth"
		};
	};
	class WordBoardThatDefault
	{
		versions[]=
		{
			"WordBoardThat_1",
			1
		};
		class WordBoardThat_1
		{
			speech[]=
			{
				"BoardThat"
			};
		};
	};
	class WordBoardThatStealth
	{
		versions[]=
		{
			"WordBoardThat_1",
			1
		};
		class WordBoardThat_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"BoardThat"
			};
		};
	};
	class WordCancelManualFire
	{
		sentences[]=
		{
			"WordCancelManualFireDefault",
			1
		};
	};
	class WordCancelManualFireDefault
	{
		versions[]=
		{
			"WordCancelManualFire_1",
			1
		};
		class WordCancelManualFire_1
		{
			speech[]=
			{
				"CancelManualFire"
			};
		};
	};
	class WordCancelTarget
	{
		sentences[]=
		{
			"WordCancelTargetDefault",
			1
		};
	};
	class WordCancelTargetDefault
	{
		versions[]=
		{
			"WordCancelTarget_1",
			1
		};
		class WordCancelTarget_1
		{
			speech[]=
			{
				"CancelTarget"
			};
		};
	};
	class WordCannotFire
	{
		sentences[]=
		{
			"WordCannotFireDefault",
			"(1-Stealth)",
			"WordCannotFireStealth",
			"Stealth"
		};
	};
	class WordCannotFireDefault
	{
		versions[]=
		{
			"WordCannotFire_1",
			1
		};
		class WordCannotFire_1
		{
			speech[]=
			{
				"CannotFire"
			};
		};
	};
	class WordCannotFireStealth
	{
		versions[]=
		{
			"WordCannotFire_1",
			1
		};
		class WordCannotFire_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"CannotFire"
			};
		};
	};
	class WordCantGetThereE
	{
		sentences[]=
		{
			"WordCantGetThereEDefault",
			"(1-Stealth)",
			"WordCantGetThereEStealth",
			"Stealth"
		};
	};
	class WordCantGetThereEDefault
	{
		versions[]=
		{
			"WordCantGetThereE_1",
			1
		};
		class WordCantGetThereE_1
		{
			speech[]=
			{
				"CantGetThereE"
			};
		};
	};
	class WordCantGetThereEStealth
	{
		versions[]=
		{
			"WordCantGetThereE_1",
			1
		};
		class WordCantGetThereE_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"CantGetThereE"
			};
		};
	};
	class WordCantMakeItThere
	{
		sentences[]=
		{
			"WordCantMakeItThereDefault",
			1
		};
	};
	class WordCantMakeItThereDefault
	{
		versions[]=
		{
			"WordCantMakeItThere_1",
			1
		};
		class WordCantMakeItThere_1
		{
			speech[]=
			{
				"CantMakeItThere"
			};
		};
	};
	class WordCantShoot
	{
		sentences[]=
		{
			"WordCantShootDefault",
			1
		};
	};
	class WordCantShootDefault
	{
		versions[]=
		{
			"WordCantShoot_1",
			1
		};
		class WordCantShoot_1
		{
			speech[]=
			{
				"CantShoot"
			};
		};
	};
	class WordCeaseFireE
	{
		sentences[]=
		{
			"WordCeaseFireEDefault",
			1
		};
	};
	class WordCeaseFireEDefault
	{
		versions[]=
		{
			"WordCeaseFireE_1",
			1
		};
		class WordCeaseFireE_1
		{
			speech[]=
			{
				"CeaseFireE"
			};
		};
	};
	class WordClear
	{
		sentences[]=
		{
			"WordClearDefault",
			"(1-Stealth)",
			"WordClearStealth",
			"Stealth"
		};
	};
	class WordClearDefault
	{
		versions[]=
		{
			"WordClear_1",
			1
		};
		class WordClear_1
		{
			speech[]=
			{
				"Clear"
			};
		};
	};
	class WordClearStealth
	{
		versions[]=
		{
			"WordClear_1",
			1
		};
		class WordClear_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Clear"
			};
		};
	};
	class WordCloseThatDoor
	{
		sentences[]=
		{
			"WordCloseThatDoorDefault",
			"(1-Stealth)",
			"WordCloseThatDoorStealth",
			"Stealth"
		};
	};
	class WordCloseThatDoorDefault
	{
		versions[]=
		{
			"WordCloseThatDoor_1",
			1
		};
		class WordCloseThatDoor_1
		{
			speech[]=
			{
				"CloseThatDoor"
			};
		};
	};
	class WordCloseThatDoorStealth
	{
		versions[]=
		{
			"WordCloseThatDoor_1",
			1
		};
		class WordCloseThatDoor_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"CloseThatDoor"
			};
		};
	};
	class WordCommander
	{
		sentences[]=
		{
			"WordCommanderDefault",
			"(1-Stealth)",
			"WordCommanderStealth",
			"Stealth"
		};
	};
	class WordCommanderDefault
	{
		versions[]=
		{
			"WordCommander_1",
			1
		};
		class WordCommander_1
		{
			speech[]=
			{
				"Commander"
			};
		};
	};
	class WordCommanderStealth
	{
		versions[]=
		{
			"WordCommander_1",
			1
		};
		class WordCommander_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Commander"
			};
		};
	};
	class WordContactE
	{
		sentences[]=
		{
			"WordContactEDefault",
			"(1-Stealth)",
			"WordContactEStealth",
			"Stealth"
		};
	};
	class WordContactEDefault
	{
		versions[]=
		{
			"WordContactE_1",
			1
		};
		class WordContactE_1
		{
			speech[]=
			{
				"ContactE"
			};
		};
	};
	class WordContactEStealth
	{
		versions[]=
		{
			"WordContactE_1",
			1
		};
		class WordContactE_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"ContactE"
			};
		};
	};
	class WordCopy
	{
		sentences[]=
		{
			"WordCopyDefault",
			"(1-Stealth)",
			"WordCopyStealth",
			"Stealth"
		};
	};
	class WordCopyDefault
	{
		versions[]=
		{
			"WordCopy_1",
			1
		};
		class WordCopy_1
		{
			speech[]=
			{
				"Copy"
			};
		};
	};
	class WordCopyStealth
	{
		versions[]=
		{
			"WordCopy_1",
			1
		};
		class WordCopy_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Copy"
			};
		};
	};
	class WordCopyMyStance
	{
		sentences[]=
		{
			"WordCopyMyStanceDefault",
			"(1-Stealth)",
			"WordCopyMyStanceStealth",
			"Stealth"
		};
	};
	class WordCopyMyStanceDefault
	{
		versions[]=
		{
			"WordCopyMyStance_1",
			1
		};
		class WordCopyMyStance_1
		{
			speech[]=
			{
				"CopyMyStance"
			};
		};
	};
	class WordCopyMyStanceStealth
	{
		versions[]=
		{
			"WordCopyMyStance_1",
			1
		};
		class WordCopyMyStance_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"CopyMyStance"
			};
		};
	};
	class WordCriticalDamageE
	{
		sentences[]=
		{
			"WordCriticalDamageEDefault",
			1
		};
	};
	class WordCriticalDamageEDefault
	{
		versions[]=
		{
			"WordCriticalDamageE_1",
			1
		};
		class WordCriticalDamageE_1
		{
			speech[]=
			{
				"CriticalDamageE"
			};
		};
	};
	class WordDangerE
	{
		sentences[]=
		{
			"WordDangerEDefault",
			"(1-Stealth)",
			"WordDangerEStealth",
			"Stealth"
		};
	};
	class WordDangerEDefault
	{
		versions[]=
		{
			"WordDangerE_1",
			1
		};
		class WordDangerE_1
		{
			speech[]=
			{
				"DangerE"
			};
		};
	};
	class WordDangerEStealth
	{
		versions[]=
		{
			"WordDangerE_1",
			1
		};
		class WordDangerE_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"DangerE"
			};
		};
	};
	class WordDeactivateCharge
	{
		sentences[]=
		{
			"WordDeactivateChargeDefault",
			"(1-Stealth)",
			"WordDeactivateChargeStealth",
			"Stealth"
		};
	};
	class WordDeactivateChargeDefault
	{
		versions[]=
		{
			"WordDeactivateCharge_1",
			1
		};
		class WordDeactivateCharge_1
		{
			speech[]=
			{
				"DeactivateCharge"
			};
		};
	};
	class WordDeactivateChargeStealth
	{
		versions[]=
		{
			"WordDeactivateCharge_1",
			1
		};
		class WordDeactivateCharge_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"DeactivateCharge"
			};
		};
	};
	class WordDetonateCharge
	{
		sentences[]=
		{
			"WordDetonateChargeDefault",
			"(1-Stealth)",
			"WordDetonateChargeStealth",
			"Stealth"
		};
	};
	class WordDetonateChargeDefault
	{
		versions[]=
		{
			"WordDetonateCharge_1",
			1
		};
		class WordDetonateCharge_1
		{
			speech[]=
			{
				"DetonateCharge"
			};
		};
	};
	class WordDetonateChargeStealth
	{
		versions[]=
		{
			"WordDetonateCharge_1",
			1
		};
		class WordDetonateCharge_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"DetonateCharge"
			};
		};
	};
	class WordDisarmThatMine
	{
		sentences[]=
		{
			"WordDisarmThatMineDefault",
			"(1-Stealth)",
			"WordDisarmThatMineStealth",
			"Stealth"
		};
	};
	class WordDisarmThatMineDefault
	{
		versions[]=
		{
			"WordDisarmThatMine_1",
			1
		};
		class WordDisarmThatMine_1
		{
			speech[]=
			{
				"DisarmThatMine"
			};
		};
	};
	class WordDisarmThatMineStealth
	{
		versions[]=
		{
			"WordDisarmThatMine_1",
			1
		};
		class WordDisarmThatMine_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"DisarmThatMine"
			};
		};
	};
	class WordDisembark
	{
		sentences[]=
		{
			"WordDisembarkDefault",
			1
		};
	};
	class WordDisembarkDefault
	{
		versions[]=
		{
			"WordDisembark_1",
			1
		};
		class WordDisembark_1
		{
			speech[]=
			{
				"Disembark"
			};
		};
	};
	class WordDisengage
	{
		sentences[]=
		{
			"WordDisengageDefault",
			"(1-Stealth)",
			"WordDisengageStealth",
			"Stealth"
		};
	};
	class WordDisengageDefault
	{
		versions[]=
		{
			"WordDisengage_1",
			1
		};
		class WordDisengage_1
		{
			speech[]=
			{
				"Disengage"
			};
		};
	};
	class WordDisengageStealth
	{
		versions[]=
		{
			"WordDisengage_1",
			1
		};
		class WordDisengage_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Disengage"
			};
		};
	};
	class WordDismount
	{
		sentences[]=
		{
			"WordDismountDefault",
			"(1-Stealth)",
			"WordDismountStealth",
			"Stealth"
		};
	};
	class WordDismountDefault
	{
		versions[]=
		{
			"WordDismount_1",
			1
		};
		class WordDismount_1
		{
			speech[]=
			{
				"Dismount"
			};
		};
	};
	class WordDismountStealth
	{
		versions[]=
		{
			"WordDismount_1",
			1
		};
		class WordDismount_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Dismount"
			};
		};
	};
	class WordDoYouReadQ
	{
		sentences[]=
		{
			"WordDoYouReadQDefault",
			1
		};
	};
	class WordDoYouReadQDefault
	{
		versions[]=
		{
			"WordDoYouReadQ_1",
			1
		};
		class WordDoYouReadQ_1
		{
			speech[]=
			{
				"DoYouReadQ"
			};
		};
	};
	class WordDriver
	{
		sentences[]=
		{
			"WordDriverDefault",
			"(1-Stealth)",
			"WordDriverStealth",
			"Stealth"
		};
	};
	class WordDriverDefault
	{
		versions[]=
		{
			"WordDriver_1",
			1
		};
		class WordDriver_1
		{
			speech[]=
			{
				"Driver"
			};
		};
	};
	class WordDriverStealth
	{
		versions[]=
		{
			"WordDriver_1",
			1
		};
		class WordDriver_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Driver"
			};
		};
	};
	class WordDropThat
	{
		sentences[]=
		{
			"WordDropThatDefault",
			"(1-Stealth)",
			"WordDropThatStealth",
			"Stealth"
		};
	};
	class WordDropThatDefault
	{
		versions[]=
		{
			"WordDropThat_1",
			1
		};
		class WordDropThat_1
		{
			speech[]=
			{
				"DropThat"
			};
		};
	};
	class WordDropThatStealth
	{
		versions[]=
		{
			"WordDropThat_1",
			1
		};
		class WordDropThat_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"DropThat"
			};
		};
	};
	class WordEjectE
	{
		sentences[]=
		{
			"WordEjectEDefault",
			"(1-Stealth)",
			"WordEjectEStealth",
			"Stealth"
		};
	};
	class WordEjectEDefault
	{
		versions[]=
		{
			"WordEjectE_1",
			1
		};
		class WordEjectE_1
		{
			speech[]=
			{
				"EjectE"
			};
		};
	};
	class WordEjectEStealth
	{
		versions[]=
		{
			"WordEjectE_1",
			1
		};
		class WordEjectE_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"EjectE"
			};
		};
	};
	class WordEnemyFireE
	{
		sentences[]=
		{
			"WordEnemyFireEDefault",
			1
		};
	};
	class WordEnemyFireEDefault
	{
		versions[]=
		{
			"WordEnemyFireE_1",
			1
		};
		class WordEnemyFireE_1
		{
			speech[]=
			{
				"EnemyFireE"
			};
		};
	};
	class WordEngageAtWill
	{
		sentences[]=
		{
			"WordEngageAtWillDefault",
			"(1-Stealth)",
			"WordEngageAtWillStealth",
			"Stealth"
		};
	};
	class WordEngageAtWillDefault
	{
		versions[]=
		{
			"WordEngageAtWill_1",
			1
		};
		class WordEngageAtWill_1
		{
			speech[]=
			{
				"EngageAtWill"
			};
		};
	};
	class WordEngageAtWillStealth
	{
		versions[]=
		{
			"WordEngageAtWill_1",
			1
		};
		class WordEngageAtWill_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"EngageAtWill"
			};
		};
	};
	class WordEngageE
	{
		sentences[]=
		{
			"WordEngageEDefault",
			"(1-Stealth)",
			"WordEngageEStealth",
			"Stealth"
		};
	};
	class WordEngageEDefault
	{
		versions[]=
		{
			"WordEngageE_1",
			1
		};
		class WordEngageE_1
		{
			speech[]=
			{
				"EngageE"
			};
		};
	};
	class WordEngageEStealth
	{
		versions[]=
		{
			"WordEngageE_1",
			1
		};
		class WordEngageE_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"EngageE"
			};
		};
	};
	class WordEngageThat
	{
		sentences[]=
		{
			"WordEngageThatDefault",
			"(1-Stealth)",
			"WordEngageThatStealth",
			"Stealth"
		};
	};
	class WordEngageThatDefault
	{
		versions[]=
		{
			"WordEngageThat_1",
			1
		};
		class WordEngageThat_1
		{
			speech[]=
			{
				"EngageThat"
			};
		};
	};
	class WordEngageThatStealth
	{
		versions[]=
		{
			"WordEngageThat_1",
			1
		};
		class WordEngageThat_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"EngageThat"
			};
		};
	};
	class WordEngagingE
	{
		sentences[]=
		{
			"WordEngagingEDefault",
			"(1-Stealth)",
			"WordEngagingEStealth",
			"Stealth"
		};
	};
	class WordEngagingEDefault
	{
		versions[]=
		{
			"WordEngagingE_1",
			1
		};
		class WordEngagingE_1
		{
			speech[]=
			{
				"EngagingE"
			};
		};
	};
	class WordEngagingEStealth
	{
		versions[]=
		{
			"WordEngagingE_1",
			1
		};
		class WordEngagingE_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"EngagingE"
			};
		};
	};
	class WordEngagingTargetE
	{
		sentences[]=
		{
			"WordEngagingTargetEDefault",
			1
		};
	};
	class WordEngagingTargetEDefault
	{
		versions[]=
		{
			"WordEngagingTargetE_1",
			1
		};
		class WordEngagingTargetE_1
		{
			speech[]=
			{
				"EngagingTargetE"
			};
		};
	};
	class WordEyesOnTarget
	{
		sentences[]=
		{
			"WordEyesOnTargetDefault",
			"(1-Stealth)",
			"WordEyesOnTargetStealth",
			"Stealth"
		};
	};
	class WordEyesOnTargetDefault
	{
		versions[]=
		{
			"WordEyesOnTarget_1",
			1
		};
		class WordEyesOnTarget_1
		{
			speech[]=
			{
				"EyesOnTarget"
			};
		};
	};
	class WordEyesOnTargetStealth
	{
		versions[]=
		{
			"WordEyesOnTarget_1",
			1
		};
		class WordEyesOnTarget_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"EyesOnTarget"
			};
		};
	};
	class WordFallBackE
	{
		sentences[]=
		{
			"WordFallBackEDefault",
			"(1-Stealth)",
			"WordFallBackEStealth",
			"Stealth"
		};
	};
	class WordFallBackEDefault
	{
		versions[]=
		{
			"WordFallBackE_1",
			1
		};
		class WordFallBackE_1
		{
			speech[]=
			{
				"FallBackE"
			};
		};
	};
	class WordFallBackEStealth
	{
		versions[]=
		{
			"WordFallBackE_1",
			1
		};
		class WordFallBackE_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"FallBackE"
			};
		};
	};
	class WordFast
	{
		sentences[]=
		{
			"WordFastDefault",
			1
		};
	};
	class WordFastDefault
	{
		versions[]=
		{
			"WordFast_1",
			1
		};
		class WordFast_1
		{
			speech[]=
			{
				"Fast"
			};
		};
	};
	class WordFire
	{
		sentences[]=
		{
			"WordFireDefault",
			"(1-Stealth)",
			"WordFireStealth",
			"Stealth"
		};
	};
	class WordFireDefault
	{
		versions[]=
		{
			"WordFire_1",
			1
		};
		class WordFire_1
		{
			speech[]=
			{
				"Fire"
			};
		};
	};
	class WordFireStealth
	{
		versions[]=
		{
			"WordFire_1",
			1
		};
		class WordFire_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Fire"
			};
		};
	};
	class WordFireAtThat
	{
		sentences[]=
		{
			"WordFireAtThatDefault",
			"(1-Stealth)",
			"WordFireAtThatStealth",
			"Stealth"
		};
	};
	class WordFireAtThatDefault
	{
		versions[]=
		{
			"WordFireAtThat_1",
			1
		};
		class WordFireAtThat_1
		{
			speech[]=
			{
				"FireAtThat"
			};
		};
	};
	class WordFireAtThatStealth
	{
		versions[]=
		{
			"WordFireAtThat_1",
			1
		};
		class WordFireAtThat_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"FireAtThat"
			};
		};
	};
	class WordFireAtWill
	{
		sentences[]=
		{
			"WordFireAtWillDefault",
			"(1-Stealth)",
			"WordFireAtWillStealth",
			"Stealth"
		};
	};
	class WordFireAtWillDefault
	{
		versions[]=
		{
			"WordFireAtWill_1",
			1
		};
		class WordFireAtWill_1
		{
			speech[]=
			{
				"FireAtWill"
			};
		};
	};
	class WordFireAtWillStealth
	{
		versions[]=
		{
			"WordFireAtWill_1",
			1
		};
		class WordFireAtWill_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"FireAtWill"
			};
		};
	};
	class WordFireOnMyLead
	{
		sentences[]=
		{
			"WordFireOnMyLeadDefault",
			1
		};
	};
	class WordFireOnMyLeadDefault
	{
		versions[]=
		{
			"WordFireOnMyLead_1",
			1
		};
		class WordFireOnMyLead_1
		{
			speech[]=
			{
				"FireOnMyLead"
			};
		};
	};
	class WordFlankLeft
	{
		sentences[]=
		{
			"WordFlankLeftDefault",
			"(1-Stealth)",
			"WordFlankLeftStealth",
			"Stealth"
		};
	};
	class WordFlankLeftDefault
	{
		versions[]=
		{
			"WordFlankLeft_1",
			1
		};
		class WordFlankLeft_1
		{
			speech[]=
			{
				"FlankLeft"
			};
		};
	};
	class WordFlankLeftStealth
	{
		versions[]=
		{
			"WordFlankLeft_1",
			1
		};
		class WordFlankLeft_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"FlankLeft"
			};
		};
	};
	class WordFlankRight
	{
		sentences[]=
		{
			"WordFlankRightDefault",
			"(1-Stealth)",
			"WordFlankRightStealth",
			"Stealth"
		};
	};
	class WordFlankRightDefault
	{
		versions[]=
		{
			"WordFlankRight_1",
			1
		};
		class WordFlankRight_1
		{
			speech[]=
			{
				"FlankRight"
			};
		};
	};
	class WordFlankRightStealth
	{
		versions[]=
		{
			"WordFlankRight_1",
			1
		};
		class WordFlankRight_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"FlankRight"
			};
		};
	};
	class WordFollow
	{
		sentences[]=
		{
			"WordFollowDefault",
			"(1-Stealth)",
			"WordFollowStealth",
			"Stealth"
		};
	};
	class WordFollowDefault
	{
		versions[]=
		{
			"WordFollow_1",
			1
		};
		class WordFollow_1
		{
			speech[]=
			{
				"Follow"
			};
		};
	};
	class WordFollowStealth
	{
		versions[]=
		{
			"WordFollow_1",
			1
		};
		class WordFollow_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Follow"
			};
		};
	};
	class WordFormColumn
	{
		sentences[]=
		{
			"WordFormColumnDefault",
			"(1-Stealth)",
			"WordFormColumnStealth",
			"Stealth"
		};
	};
	class WordFormColumnDefault
	{
		versions[]=
		{
			"WordFormColumn_1",
			1
		};
		class WordFormColumn_1
		{
			speech[]=
			{
				"FormColumn"
			};
		};
	};
	class WordFormColumnStealth
	{
		versions[]=
		{
			"WordFormColumn_1",
			1
		};
		class WordFormColumn_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"FormColumn"
			};
		};
	};
	class WordFormDiamond
	{
		sentences[]=
		{
			"WordFormDiamondDefault",
			"(1-Stealth)",
			"WordFormDiamondStealth",
			"Stealth"
		};
	};
	class WordFormDiamondDefault
	{
		versions[]=
		{
			"WordFormDiamond_1",
			1
		};
		class WordFormDiamond_1
		{
			speech[]=
			{
				"FormDiamond"
			};
		};
	};
	class WordFormDiamondStealth
	{
		versions[]=
		{
			"WordFormDiamond_1",
			1
		};
		class WordFormDiamond_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"FormDiamond"
			};
		};
	};
	class WordFormEcholonLeft
	{
		sentences[]=
		{
			"WordFormEcholonLeftDefault",
			"(1-Stealth)",
			"WordFormEcholonLeftStealth",
			"Stealth"
		};
	};
	class WordFormEcholonLeftDefault
	{
		versions[]=
		{
			"WordFormEcholonLeft_1",
			1
		};
		class WordFormEcholonLeft_1
		{
			speech[]=
			{
				"FormEcholonLeft"
			};
		};
	};
	class WordFormEcholonLeftStealth
	{
		versions[]=
		{
			"WordFormEcholonLeft_1",
			1
		};
		class WordFormEcholonLeft_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"FormEcholonLeft"
			};
		};
	};
	class WordFormEcholonRight
	{
		sentences[]=
		{
			"WordFormEcholonRightDefault",
			"(1-Stealth)",
			"WordFormEcholonRightStealth",
			"Stealth"
		};
	};
	class WordFormEcholonRightDefault
	{
		versions[]=
		{
			"WordFormEcholonRight_1",
			1
		};
		class WordFormEcholonRight_1
		{
			speech[]=
			{
				"FormEcholonRight"
			};
		};
	};
	class WordFormEcholonRightStealth
	{
		versions[]=
		{
			"WordFormEcholonRight_1",
			1
		};
		class WordFormEcholonRight_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"FormEcholonRight"
			};
		};
	};
	class WordFormFile
	{
		sentences[]=
		{
			"WordFormFileDefault",
			"(1-Stealth)",
			"WordFormFileStealth",
			"Stealth"
		};
	};
	class WordFormFileDefault
	{
		versions[]=
		{
			"WordFormFile_1",
			1
		};
		class WordFormFile_1
		{
			speech[]=
			{
				"FormFile"
			};
		};
	};
	class WordFormFileStealth
	{
		versions[]=
		{
			"WordFormFile_1",
			1
		};
		class WordFormFile_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"FormFile"
			};
		};
	};
	class WordFormLine
	{
		sentences[]=
		{
			"WordFormLineDefault",
			"(1-Stealth)",
			"WordFormLineStealth",
			"Stealth"
		};
	};
	class WordFormLineDefault
	{
		versions[]=
		{
			"WordFormLine_1",
			1
		};
		class WordFormLine_1
		{
			speech[]=
			{
				"FormLine"
			};
		};
	};
	class WordFormLineStealth
	{
		versions[]=
		{
			"WordFormLine_1",
			1
		};
		class WordFormLine_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"FormLine"
			};
		};
	};
	class WordFormStaggeredColumn
	{
		sentences[]=
		{
			"WordFormStaggeredColumnDefault",
			"(1-Stealth)",
			"WordFormStaggeredColumnStealth",
			"Stealth"
		};
	};
	class WordFormStaggeredColumnDefault
	{
		versions[]=
		{
			"WordFormStaggeredColumn_1",
			1
		};
		class WordFormStaggeredColumn_1
		{
			speech[]=
			{
				"FormStaggeredColumn"
			};
		};
	};
	class WordFormStaggeredColumnStealth
	{
		versions[]=
		{
			"WordFormStaggeredColumn_1",
			1
		};
		class WordFormStaggeredColumn_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"FormStaggeredColumn"
			};
		};
	};
	class WordFormVee
	{
		sentences[]=
		{
			"WordFormVeeDefault",
			"(1-Stealth)",
			"WordFormVeeStealth",
			"Stealth"
		};
	};
	class WordFormVeeDefault
	{
		versions[]=
		{
			"WordFormVee_1",
			1
		};
		class WordFormVee_1
		{
			speech[]=
			{
				"FormVee"
			};
		};
	};
	class WordFormVeeStealth
	{
		versions[]=
		{
			"WordFormVee_1",
			1
		};
		class WordFormVee_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"FormVee"
			};
		};
	};
	class WordFormWedge
	{
		sentences[]=
		{
			"WordFormWedgeDefault",
			"(1-Stealth)",
			"WordFormWedgeStealth",
			"Stealth"
		};
	};
	class WordFormWedgeDefault
	{
		versions[]=
		{
			"WordFormWedge_1",
			1
		};
		class WordFormWedge_1
		{
			speech[]=
			{
				"FormWedge"
			};
		};
	};
	class WordFormWedgeStealth
	{
		versions[]=
		{
			"WordFormWedge_1",
			1
		};
		class WordFormWedge_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"FormWedge"
			};
		};
	};
	class WordFormOnMeE
	{
		sentences[]=
		{
			"WordFormOnMeEDefault",
			1
		};
	};
	class WordFormOnMeEDefault
	{
		versions[]=
		{
			"WordFormOnMeE_1",
			1
		};
		class WordFormOnMeE_1
		{
			speech[]=
			{
				"FormOnMeE"
			};
		};
	};
	class WordForward
	{
		sentences[]=
		{
			"WordForwardDefault",
			1
		};
	};
	class WordForwardDefault
	{
		versions[]=
		{
			"WordForward_1",
			1
		};
		class WordForward_1
		{
			speech[]=
			{
				"Forward"
			};
		};
	};
	class WordFreeToEngage
	{
		sentences[]=
		{
			"WordFreeToEngageDefault",
			1
		};
	};
	class WordFreeToEngageDefault
	{
		versions[]=
		{
			"WordFreeToEngage_1",
			1
		};
		class WordFreeToEngage_1
		{
			speech[]=
			{
				"FreeToEngage"
			};
		};
	};
	class WordGetBackE
	{
		sentences[]=
		{
			"WordGetBackEDefault",
			"(1-Stealth)",
			"WordGetBackEStealth",
			"Stealth"
		};
	};
	class WordGetBackEDefault
	{
		versions[]=
		{
			"WordGetBackE_1",
			1
		};
		class WordGetBackE_1
		{
			speech[]=
			{
				"GetBackE"
			};
		};
	};
	class WordGetBackEStealth
	{
		versions[]=
		{
			"WordGetBackE_1",
			1
		};
		class WordGetBackE_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"GetBackE"
			};
		};
	};
	class WordGetDownE
	{
		sentences[]=
		{
			"WordGetDownEDefault",
			"(1-Stealth)",
			"WordGetDownEStealth",
			"Stealth"
		};
	};
	class WordGetDownEDefault
	{
		versions[]=
		{
			"WordGetDownE_1",
			1
		};
		class WordGetDownE_1
		{
			speech[]=
			{
				"GetDownE"
			};
		};
	};
	class WordGetDownEStealth
	{
		versions[]=
		{
			"WordGetDownE_1",
			1
		};
		class WordGetDownE_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"GetDownE"
			};
		};
	};
	class WordGetInThat
	{
		sentences[]=
		{
			"WordGetInThatDefault",
			"(1-Stealth)",
			"WordGetInThatStealth",
			"Stealth"
		};
	};
	class WordGetInThatDefault
	{
		versions[]=
		{
			"WordGetInThat_1",
			1
		};
		class WordGetInThat_1
		{
			speech[]=
			{
				"GetInThat"
			};
		};
	};
	class WordGetInThatStealth
	{
		versions[]=
		{
			"WordGetInThat_1",
			1
		};
		class WordGetInThat_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"GetInThat"
			};
		};
	};
	class WordGetSupportAt
	{
		sentences[]=
		{
			"WordGetSupportAtDefault",
			"(1-Stealth)",
			"WordGetSupportAtStealth",
			"Stealth"
		};
	};
	class WordGetSupportAtDefault
	{
		versions[]=
		{
			"WordGetSupportAt_1",
			1
		};
		class WordGetSupportAt_1
		{
			speech[]=
			{
				"GetSupportAt"
			};
		};
	};
	class WordGetSupportAtStealth
	{
		versions[]=
		{
			"WordGetSupportAt_1",
			1
		};
		class WordGetSupportAt_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"GetSupportAt"
			};
		};
	};
	class WordGiveEmHellE
	{
		sentences[]=
		{
			"WordGiveEmHellEDefault",
			1
		};
	};
	class WordGiveEmHellEDefault
	{
		versions[]=
		{
			"WordGiveEmHellE_1",
			1
		};
		class WordGiveEmHellE_1
		{
			speech[]=
			{
				"GiveEmHellE"
			};
		};
	};
	class WordGoGoGoE
	{
		sentences[]=
		{
			"WordGoGoGoEDefault",
			1
		};
	};
	class WordGoGoGoEDefault
	{
		versions[]=
		{
			"WordGoGoGoE_1",
			1
		};
		class WordGoGoGoE_1
		{
			speech[]=
			{
				"GoGoGoE"
			};
		};
	};
	class WordGoProne
	{
		sentences[]=
		{
			"WordGoProneDefault",
			"(1-Stealth)",
			"WordGoProneStealth",
			"Stealth"
		};
	};
	class WordGoProneDefault
	{
		versions[]=
		{
			"WordGoProne_1",
			1
		};
		class WordGoProne_1
		{
			speech[]=
			{
				"GoProne"
			};
		};
	};
	class WordGoProneStealth
	{
		versions[]=
		{
			"WordGoProne_1",
			1
		};
		class WordGoProne_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"GoProne"
			};
		};
	};
	class WordGunner
	{
		sentences[]=
		{
			"WordGunnerDefault",
			"(1-Stealth)",
			"WordGunnerStealth",
			"Stealth"
		};
	};
	class WordGunnerDefault
	{
		versions[]=
		{
			"WordGunner_1",
			1
		};
		class WordGunner_1
		{
			speech[]=
			{
				"Gunner"
			};
		};
	};
	class WordGunnerStealth
	{
		versions[]=
		{
			"WordGunner_1",
			1
		};
		class WordGunner_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Gunner"
			};
		};
	};
	class WordHalt
	{
		sentences[]=
		{
			"WordHaltDefault",
			"(1-Stealth)",
			"WordHaltStealth",
			"Stealth"
		};
	};
	class WordHaltDefault
	{
		versions[]=
		{
			"WordHalt_1",
			1
		};
		class WordHalt_1
		{
			speech[]=
			{
				"Halt"
			};
		};
	};
	class WordHaltStealth
	{
		versions[]=
		{
			"WordHalt_1",
			1
		};
		class WordHalt_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Halt"
			};
		};
	};
	class WordHealThat
	{
		sentences[]=
		{
			"WordHealThatDefault",
			"(1-Stealth)",
			"WordHealThatStealth",
			"Stealth"
		};
	};
	class WordHealThatDefault
	{
		versions[]=
		{
			"WordHealThat_1",
			1
		};
		class WordHealThat_1
		{
			speech[]=
			{
				"HealThat"
			};
		};
	};
	class WordHealThatStealth
	{
		versions[]=
		{
			"WordHealThat_1",
			1
		};
		class WordHealThat_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HealThat"
			};
		};
	};
	class WordHealYourself
	{
		sentences[]=
		{
			"WordHealYourselfDefault",
			"(1-Stealth)",
			"WordHealYourselfStealth",
			"Stealth"
		};
	};
	class WordHealYourselfDefault
	{
		versions[]=
		{
			"WordHealYourself_1",
			1
		};
		class WordHealYourself_1
		{
			speech[]=
			{
				"HealYourself"
			};
		};
	};
	class WordHealYourselfStealth
	{
		versions[]=
		{
			"WordHealYourself_1",
			1
		};
		class WordHealYourself_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HealYourself"
			};
		};
	};
	class WordHesDownE
	{
		sentences[]=
		{
			"WordHesDownEDefault",
			"(1-Stealth)",
			"WordHesDownEStealth",
			"Stealth"
		};
	};
	class WordHesDownEDefault
	{
		versions[]=
		{
			"WordHesDownE_1",
			1
		};
		class WordHesDownE_1
		{
			speech[]=
			{
				"HesDownE"
			};
		};
	};
	class WordHesDownEStealth
	{
		versions[]=
		{
			"WordHesDownE_1",
			1
		};
		class WordHesDownE_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HesDownE"
			};
		};
	};
	class WordHitTheDirt
	{
		sentences[]=
		{
			"WordHitTheDirtDefault",
			"(1-Stealth)",
			"WordHitTheDirtStealth",
			"Stealth"
		};
	};
	class WordHitTheDirtDefault
	{
		versions[]=
		{
			"WordHitTheDirt_1",
			1
		};
		class WordHitTheDirt_1
		{
			speech[]=
			{
				"HitTheDirt"
			};
		};
	};
	class WordHitTheDirtStealth
	{
		versions[]=
		{
			"WordHitTheDirt_1",
			1
		};
		class WordHitTheDirt_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HitTheDirt"
			};
		};
	};
	class WordHoldFire
	{
		sentences[]=
		{
			"WordHoldFireDefault",
			"(1-Stealth)",
			"WordHoldFireStealth",
			"Stealth"
		};
	};
	class WordHoldFireDefault
	{
		versions[]=
		{
			"WordHoldFire_1",
			1
		};
		class WordHoldFire_1
		{
			speech[]=
			{
				"HoldFire"
			};
		};
	};
	class WordHoldFireStealth
	{
		versions[]=
		{
			"WordHoldFire_1",
			1
		};
		class WordHoldFire_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HoldFire"
			};
		};
	};
	class WordHostileDownE
	{
		sentences[]=
		{
			"WordHostileDownEDefault",
			1
		};
	};
	class WordHostileDownEDefault
	{
		versions[]=
		{
			"WordHostileDownE_1",
			1
		};
		class WordHostileDownE_1
		{
			speech[]=
			{
				"HostileDownE"
			};
		};
	};
	class WordHostilesE
	{
		sentences[]=
		{
			"WordHostilesEDefault",
			"(1-Stealth)",
			"WordHostilesEStealth",
			"Stealth"
		};
	};
	class WordHostilesEDefault
	{
		versions[]=
		{
			"WordHostilesE_1",
			1
		};
		class WordHostilesE_1
		{
			speech[]=
			{
				"HostilesE"
			};
		};
	};
	class WordHostilesEStealth
	{
		versions[]=
		{
			"WordHostilesE_1",
			1
		};
		class WordHostilesE_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HostilesE"
			};
		};
	};
	class WordCheckYourFireE
	{
		sentences[]=
		{
			"WordCheckYourFireEDefault",
			"(1-Stealth)",
			"WordCheckYourFireEStealth",
			"Stealth"
		};
	};
	class WordCheckYourFireEDefault
	{
		versions[]=
		{
			"WordCheckYourFireE_1",
			1
		};
		class WordCheckYourFireE_1
		{
			speech[]=
			{
				"CheckYourFireE"
			};
		};
	};
	class WordCheckYourFireEStealth
	{
		versions[]=
		{
			"WordCheckYourFireE_1",
			1
		};
		class WordCheckYourFireE_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"CheckYourFireE"
			};
		};
	};
	class WordImAtGrid
	{
		sentences[]=
		{
			"WordImAtGridDefault",
			"(1-Stealth)",
			"WordImAtGridStealth",
			"Stealth"
		};
	};
	class WordImAtGridDefault
	{
		versions[]=
		{
			"WordImAtGrid_1",
			1
		};
		class WordImAtGrid_1
		{
			speech[]=
			{
				"ImAtGrid"
			};
		};
	};
	class WordImAtGridStealth
	{
		versions[]=
		{
			"WordImAtGrid_1",
			1
		};
		class WordImAtGrid_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"ImAtGrid"
			};
		};
	};
	class WordGrid
	{
		sentences[]=
		{
			"WordGridDefault",
			"(1-Stealth)",
			"WordGridStealth",
			"Stealth"
		};
	};
	class WordGridDefault
	{
		versions[]=
		{
			"WordGrid_1",
			1
		};
		class WordGrid_1
		{
			speech[]=
			{
				"Grid"
			};
		};
	};
	class WordGridStealth
	{
		versions[]=
		{
			"WordGrid_1",
			1
		};
		class WordGrid_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Grid"
			};
		};
	};
	class WordImOnHim
	{
		sentences[]=
		{
			"WordImOnHimDefault",
			1
		};
	};
	class WordImOnHimDefault
	{
		versions[]=
		{
			"WordImOnHim_1",
			1
		};
		class WordImOnHim_1
		{
			speech[]=
			{
				"ImOnHim"
			};
		};
	};
	class WordImTheNewActual
	{
		sentences[]=
		{
			"WordImTheNewActualDefault",
			1
		};
	};
	class WordImTheNewActualDefault
	{
		versions[]=
		{
			"WordImTheNewActual_1",
			1
		};
		class WordImTheNewActual_1
		{
			speech[]=
			{
				"ImTheNewActual"
			};
		};
	};
	class WordIs
	{
		sentences[]=
		{
			"WordIsDefault",
			"(1-Stealth)",
			"WordIsStealth",
			"Stealth"
		};
	};
	class WordIsDefault
	{
		versions[]=
		{
			"WordIs_1",
			1
		};
		class WordIs_1
		{
			speech[]=
			{
				"Is"
			};
		};
	};
	class WordIsStealth
	{
		versions[]=
		{
			"WordIs_1",
			1
		};
		class WordIs_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Is"
			};
		};
	};
	class WordIsDownE
	{
		sentences[]=
		{
			"WordIsDownEDefault",
			"(1-Stealth)",
			"WordIsDownEStealth",
			"Stealth"
		};
	};
	class WordIsDownEDefault
	{
		versions[]=
		{
			"WordIsDownE_1",
			1
		};
		class WordIsDownE_1
		{
			speech[]=
			{
				"IsDownE"
			};
		};
	};
	class WordIsDownEStealth
	{
		versions[]=
		{
			"WordIsDownE_1",
			1
		};
		class WordIsDownE_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"IsDownE"
			};
		};
	};
	class WordIsDead
	{
		sentences[]=
		{
			"WordIsDeadDefault",
			1
		};
	};
	class WordIsDeadDefault
	{
		versions[]=
		{
			"WordIsDead_1",
			1
		};
		class WordIsDead_1
		{
			speech[]=
			{
				"IsDead"
			};
		};
	};
	class WordIsHistory
	{
		sentences[]=
		{
			"WordIsHistoryDefault",
			1
		};
	};
	class WordIsHistoryDefault
	{
		versions[]=
		{
			"WordIsHistory_1",
			1
		};
		class WordIsHistory_1
		{
			speech[]=
			{
				"IsHistory"
			};
		};
	};
	class WordInjured
	{
		sentences[]=
		{
			"WordInjuredDefault",
			"(1-Stealth)",
			"WordInjuredStealth",
			"Stealth"
		};
	};
	class WordInjuredDefault
	{
		versions[]=
		{
			"WordInjured_1",
			1
		};
		class WordInjured_1
		{
			speech[]=
			{
				"Injured"
			};
		};
	};
	class WordInjuredStealth
	{
		versions[]=
		{
			"WordInjured_1",
			1
		};
		class WordInjured_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Injured"
			};
		};
	};
	class WordIveGotHimE
	{
		sentences[]=
		{
			"WordIveGotHimEDefault",
			"(1-Stealth)",
			"WordIveGotHimEStealth",
			"Stealth"
		};
	};
	class WordIveGotHimEDefault
	{
		versions[]=
		{
			"WordIveGotHimE_1",
			1
		};
		class WordIveGotHimE_1
		{
			speech[]=
			{
				"IveGotHimE"
			};
		};
	};
	class WordIveGotHimEStealth
	{
		versions[]=
		{
			"WordIveGotHimE_1",
			1
		};
		class WordIveGotHimE_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"IveGotHimE"
			};
		};
	};
	class WordLeft
	{
		sentences[]=
		{
			"WordLeftDefault",
			1
		};
	};
	class WordLeftDefault
	{
		versions[]=
		{
			"WordLeft_1",
			1
		};
		class WordLeft_1
		{
			speech[]=
			{
				"Left"
			};
		};
	};
	class WordLightEmUpE
	{
		sentences[]=
		{
			"WordLightEmUpEDefault",
			1
		};
	};
	class WordLightEmUpEDefault
	{
		versions[]=
		{
			"WordLightEmUpE_1",
			1
		};
		class WordLightEmUpE_1
		{
			speech[]=
			{
				"LightEmUpE"
			};
		};
	};
	class WordLightThatFire
	{
		sentences[]=
		{
			"WordLightThatFireDefault",
			"(1-Stealth)",
			"WordLightThatFireStealth",
			"Stealth"
		};
	};
	class WordLightThatFireDefault
	{
		versions[]=
		{
			"WordLightThatFire_1",
			1
		};
		class WordLightThatFire_1
		{
			speech[]=
			{
				"LightThatFire"
			};
		};
	};
	class WordLightThatFireStealth
	{
		versions[]=
		{
			"WordLightThatFire_1",
			1
		};
		class WordLightThatFire_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"LightThatFire"
			};
		};
	};
	class WordMaintainFormation
	{
		sentences[]=
		{
			"WordMaintainFormationDefault",
			1
		};
	};
	class WordMaintainFormationDefault
	{
		versions[]=
		{
			"WordMaintainFormation_1",
			1
		};
		class WordMaintainFormation_1
		{
			speech[]=
			{
				"MaintainFormation"
			};
		};
	};
	class WordManualFire
	{
		sentences[]=
		{
			"WordManualFireDefault",
			1
		};
	};
	class WordManualFireDefault
	{
		versions[]=
		{
			"WordManualFire_1",
			1
		};
		class WordManualFire_1
		{
			speech[]=
			{
				"ManualFire"
			};
		};
	};
	class WordMedicE
	{
		sentences[]=
		{
			"WordMedicEDefault",
			"(1-Stealth)",
			"WordMedicEStealth",
			"Stealth"
		};
	};
	class WordMedicEDefault
	{
		versions[]=
		{
			"WordMedicE_1",
			1
		};
		class WordMedicE_1
		{
			speech[]=
			{
				"MedicE"
			};
		};
	};
	class WordMedicEStealth
	{
		versions[]=
		{
			"WordMedicE_1",
			1
		};
		class WordMedicE_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"MedicE"
			};
		};
	};
	class WordNeedHelpE
	{
		sentences[]=
		{
			"WordNeedHelpEDefault",
			"(1-Stealth)",
			"WordNeedHelpEStealth",
			"Stealth"
		};
	};
	class WordNeedHelpEDefault
	{
		versions[]=
		{
			"WordNeedHelpE_1",
			1
		};
		class WordNeedHelpE_1
		{
			speech[]=
			{
				"NeedHelpE"
			};
		};
	};
	class WordNeedHelpEStealth
	{
		versions[]=
		{
			"WordNeedHelpE_1",
			1
		};
		class WordNeedHelpE_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"NeedHelpE"
			};
		};
	};
	class WordNegative
	{
		sentences[]=
		{
			"WordNegativeDefault",
			"(1-Stealth)",
			"WordNegativeStealth",
			"Stealth"
		};
	};
	class WordNegativeDefault
	{
		versions[]=
		{
			"WordNegative_1",
			1
		};
		class WordNegative_1
		{
			speech[]=
			{
				"Negative"
			};
		};
	};
	class WordNegativeStealth
	{
		versions[]=
		{
			"WordNegative_1",
			1
		};
		class WordNegative_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Negative"
			};
		};
	};
	class WordNoCanDo
	{
		sentences[]=
		{
			"WordNoCanDoDefault",
			"(1-Stealth)",
			"WordNoCanDoStealth",
			"Stealth"
		};
	};
	class WordNoCanDoDefault
	{
		versions[]=
		{
			"WordNoCanDo_1",
			1
		};
		class WordNoCanDo_1
		{
			speech[]=
			{
				"NoCanDo"
			};
		};
	};
	class WordNoCanDoStealth
	{
		versions[]=
		{
			"WordNoCanDo_1",
			1
		};
		class WordNoCanDo_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"NoCanDo"
			};
		};
	};
	class WordNoMoreAmmoE
	{
		sentences[]=
		{
			"WordNoMoreAmmoEDefault",
			1
		};
	};
	class WordNoMoreAmmoEDefault
	{
		versions[]=
		{
			"WordNoMoreAmmoE_1",
			1
		};
		class WordNoMoreAmmoE_1
		{
			speech[]=
			{
				"NoMoreAmmoE"
			};
		};
	};
	class WordNoTarget
	{
		sentences[]=
		{
			"WordNoTargetDefault",
			"(1-Stealth)",
			"WordNoTargetStealth",
			"Stealth"
		};
	};
	class WordNoTargetDefault
	{
		versions[]=
		{
			"WordNoTarget_1",
			1
		};
		class WordNoTarget_1
		{
			speech[]=
			{
				"NoTarget"
			};
		};
	};
	class WordNoTargetStealth
	{
		versions[]=
		{
			"WordNoTarget_1",
			1
		};
		class WordNoTarget_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"NoTarget"
			};
		};
	};
	class WordObserveThat
	{
		sentences[]=
		{
			"WordObserveThatDefault",
			1
		};
	};
	class WordObserveThatDefault
	{
		versions[]=
		{
			"WordObserveThat_1",
			1
		};
		class WordObserveThat_1
		{
			speech[]=
			{
				"ObserveThat"
			};
		};
	};
	class WordObserveThatPosition
	{
		sentences[]=
		{
			"WordObserveThatPositionDefault",
			"(1-Stealth)",
			"WordObserveThatPositionStealth",
			"Stealth"
		};
	};
	class WordObserveThatPositionDefault
	{
		versions[]=
		{
			"WordObserveThatPosition_1",
			1
		};
		class WordObserveThatPosition_1
		{
			speech[]=
			{
				"ObserveThatPosition"
			};
		};
	};
	class WordObserveThatPositionStealth
	{
		versions[]=
		{
			"WordObserveThatPosition_1",
			1
		};
		class WordObserveThatPosition_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"ObserveThatPosition"
			};
		};
	};
	class WordOnTheWay
	{
		sentences[]=
		{
			"WordOnTheWayDefault",
			"(1-Stealth)",
			"WordOnTheWayStealth",
			"Stealth"
		};
	};
	class WordOnTheWayDefault
	{
		versions[]=
		{
			"WordOnTheWay_1",
			1
		};
		class WordOnTheWay_1
		{
			speech[]=
			{
				"OnTheWay"
			};
		};
	};
	class WordOnTheWayStealth
	{
		versions[]=
		{
			"WordOnTheWay_1",
			1
		};
		class WordOnTheWay_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"OnTheWay"
			};
		};
	};
	class WordOpenThatDoor
	{
		sentences[]=
		{
			"WordOpenThatDoorDefault",
			"(1-Stealth)",
			"WordOpenThatDoorStealth",
			"Stealth"
		};
	};
	class WordOpenThatDoorDefault
	{
		versions[]=
		{
			"WordOpenThatDoor_1",
			1
		};
		class WordOpenThatDoor_1
		{
			speech[]=
			{
				"OpenThatDoor"
			};
		};
	};
	class WordOpenThatDoorStealth
	{
		versions[]=
		{
			"WordOpenThatDoor_1",
			1
		};
		class WordOpenThatDoor_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"OpenThatDoor"
			};
		};
	};
	class WordOpenUpE
	{
		sentences[]=
		{
			"WordOpenUpEDefault",
			1
		};
	};
	class WordOpenUpEDefault
	{
		versions[]=
		{
			"WordOpenUpE_1",
			1
		};
		class WordOpenUpE_1
		{
			speech[]=
			{
				"OpenUpE"
			};
		};
	};
	class WordOscarMike
	{
		sentences[]=
		{
			"WordOscarMikeDefault",
			"(1-Stealth)",
			"WordOscarMikeStealth",
			"Stealth"
		};
	};
	class WordOscarMikeDefault
	{
		versions[]=
		{
			"WordOscarMike_1",
			1
		};
		class WordOscarMike_1
		{
			speech[]=
			{
				"OscarMike"
			};
		};
	};
	class WordOscarMikeStealth
	{
		versions[]=
		{
			"WordOscarMike_1",
			1
		};
		class WordOscarMike_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"OscarMike"
			};
		};
	};
	class WordOutOfAmmoE
	{
		sentences[]=
		{
			"WordOutOfAmmoEDefault",
			"(1-Stealth)",
			"WordOutOfAmmoEStealth",
			"Stealth"
		};
	};
	class WordOutOfAmmoEDefault
	{
		versions[]=
		{
			"WordOutOfAmmoE_1",
			1
		};
		class WordOutOfAmmoE_1
		{
			speech[]=
			{
				"OutOfAmmoE"
			};
		};
	};
	class WordOutOfAmmoEStealth
	{
		versions[]=
		{
			"WordOutOfAmmoE_1",
			1
		};
		class WordOutOfAmmoE_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"OutOfAmmoE"
			};
		};
	};
	class WordOutOfFuelE
	{
		sentences[]=
		{
			"WordOutOfFuelEDefault",
			1
		};
	};
	class WordOutOfFuelEDefault
	{
		versions[]=
		{
			"WordOutOfFuelE_1",
			1
		};
		class WordOutOfFuelE_1
		{
			speech[]=
			{
				"OutOfFuelE"
			};
		};
	};
	class WordOver
	{
		sentences[]=
		{
			"WordOverDefault",
			"(1-Stealth)",
			"WordOverStealth",
			"Stealth"
		};
	};
	class WordOverDefault
	{
		versions[]=
		{
			"WordOver_1",
			1
		};
		class WordOver_1
		{
			speech[]=
			{
				"Over"
			};
		};
	};
	class WordOverStealth
	{
		versions[]=
		{
			"WordOver_1",
			1
		};
		class WordOver_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Over"
			};
		};
	};
	class WordPilot
	{
		sentences[]=
		{
			"WordPilotDefault",
			"(1-Stealth)",
			"WordPilotStealth",
			"Stealth"
		};
	};
	class WordPilotDefault
	{
		versions[]=
		{
			"WordPilot_1",
			1
		};
		class WordPilot_1
		{
			speech[]=
			{
				"Pilot"
			};
		};
	};
	class WordPilotStealth
	{
		versions[]=
		{
			"WordPilot_1",
			1
		};
		class WordPilot_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Pilot"
			};
		};
	};
	class WordPutOutThatFire
	{
		sentences[]=
		{
			"WordPutOutThatFireDefault",
			"(1-Stealth)",
			"WordPutOutThatFireStealth",
			"Stealth"
		};
	};
	class WordPutOutThatFireDefault
	{
		versions[]=
		{
			"WordPutOutThatFire_1",
			1
		};
		class WordPutOutThatFire_1
		{
			speech[]=
			{
				"PutOutThatFire"
			};
		};
	};
	class WordPutOutThatFireStealth
	{
		versions[]=
		{
			"WordPutOutThatFire_1",
			1
		};
		class WordPutOutThatFire_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"PutOutThatFire"
			};
		};
	};
	class WordPlaceAMine
	{
		sentences[]=
		{
			"WordPlaceAMineDefault",
			1
		};
	};
	class WordPlaceAMineDefault
	{
		versions[]=
		{
			"WordPlaceAMine_1",
			1
		};
		class WordPlaceAMine_1
		{
			speech[]=
			{
				"PlaceAMine"
			};
		};
	};
	class WordReady
	{
		sentences[]=
		{
			"WordReadyDefault",
			"(1-Stealth)",
			"WordReadyStealth",
			"Stealth"
		};
	};
	class WordReadyDefault
	{
		versions[]=
		{
			"WordReady_1",
			1
		};
		class WordReady_1
		{
			speech[]=
			{
				"Ready"
			};
		};
	};
	class WordReadyStealth
	{
		versions[]=
		{
			"WordReady_1",
			1
		};
		class WordReady_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Ready"
			};
		};
	};
	class WordReadyToFire
	{
		sentences[]=
		{
			"WordReadyToFireDefault",
			"(1-Stealth)",
			"WordReadyToFireStealth",
			"Stealth"
		};
	};
	class WordReadyToFireDefault
	{
		versions[]=
		{
			"WordReadyToFire_1",
			1
		};
		class WordReadyToFire_1
		{
			speech[]=
			{
				"ReadyToFire"
			};
		};
	};
	class WordReadyToFireStealth
	{
		versions[]=
		{
			"WordReadyToFire_1",
			1
		};
		class WordReadyToFire_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"ReadyToFire"
			};
		};
	};
	class WordRegroupE
	{
		sentences[]=
		{
			"WordRegroupEDefault",
			1
		};
	};
	class WordRegroupEDefault
	{
		versions[]=
		{
			"WordRegroupE_1",
			1
		};
		class WordRegroupE_1
		{
			speech[]=
			{
				"RegroupE"
			};
		};
	};
	class WordRepeatLast
	{
		sentences[]=
		{
			"WordRepeatLastDefault",
			"(1-Stealth)",
			"WordRepeatLastStealth",
			"Stealth"
		};
	};
	class WordRepeatLastDefault
	{
		versions[]=
		{
			"WordRepeatLast_1",
			1
		};
		class WordRepeatLast_1
		{
			speech[]=
			{
				"RepeatLast"
			};
		};
	};
	class WordRepeatLastStealth
	{
		versions[]=
		{
			"WordRepeatLast_1",
			1
		};
		class WordRepeatLast_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"RepeatLast"
			};
		};
	};
	class WordReportPositionE
	{
		sentences[]=
		{
			"WordReportPositionEDefault",
			1
		};
	};
	class WordReportPositionEDefault
	{
		versions[]=
		{
			"WordReportPositionE_1",
			1
		};
		class WordReportPositionE_1
		{
			speech[]=
			{
				"ReportPositionE"
			};
		};
	};
	class WordPosition
	{
		sentences[]=
		{
			"WordPositionDefault",
			"(1-Stealth)",
			"WordPositionStealth",
			"Stealth"
		};
	};
	class WordPositionDefault
	{
		versions[]=
		{
			"WordPosition_1",
			1
		};
		class WordPosition_1
		{
			speech[]=
			{
				"Position"
			};
		};
	};
	class WordPositionStealth
	{
		versions[]=
		{
			"WordPosition_1",
			1
		};
		class WordPosition_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Position"
			};
		};
	};
	class WordReportStatus
	{
		sentences[]=
		{
			"WordReportStatusDefault",
			"(1-Stealth)",
			"WordReportStatusStealth",
			"Stealth"
		};
	};
	class WordReportStatusDefault
	{
		versions[]=
		{
			"WordReportStatus_1",
			1
		};
		class WordReportStatus_1
		{
			speech[]=
			{
				"ReportStatus"
			};
		};
	};
	class WordReportStatusStealth
	{
		versions[]=
		{
			"WordReportStatus_1",
			1
		};
		class WordReportStatus_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"ReportStatus"
			};
		};
	};
	class WordRequestingSupportTo
	{
		sentences[]=
		{
			"WordRequestingSupportToDefault",
			"(1-Stealth)",
			"WordRequestingSupportToStealth",
			"Stealth"
		};
	};
	class WordRequestingSupportToDefault
	{
		versions[]=
		{
			"WordRequestingSupportTo_1",
			1
		};
		class WordRequestingSupportTo_1
		{
			speech[]=
			{
				"RequestingSupportTo"
			};
		};
	};
	class WordRequestingSupportToStealth
	{
		versions[]=
		{
			"WordRequestingSupportTo_1",
			1
		};
		class WordRequestingSupportTo_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"RequestingSupportTo"
			};
		};
	};
	class WordReturnTheFlag
	{
		sentences[]=
		{
			"WordReturnTheFlagDefault",
			1
		};
	};
	class WordReturnTheFlagDefault
	{
		versions[]=
		{
			"WordReturnTheFlag_1",
			1
		};
		class WordReturnTheFlag_1
		{
			speech[]=
			{
				"ReturnTheFlag"
			};
		};
	};
	class WordReturnToFormationE
	{
		sentences[]=
		{
			"WordReturnToFormationEDefault",
			1
		};
	};
	class WordReturnToFormationEDefault
	{
		versions[]=
		{
			"WordReturnToFormationE_1",
			1
		};
		class WordReturnToFormationE_1
		{
			speech[]=
			{
				"ReturnToFormationE"
			};
		};
	};
	class WordReverse
	{
		sentences[]=
		{
			"WordReverseDefault",
			1
		};
	};
	class WordReverseDefault
	{
		versions[]=
		{
			"WordReverse_1",
			1
		};
		class WordReverse_1
		{
			speech[]=
			{
				"Reverse"
			};
		};
	};
	class WordRight
	{
		sentences[]=
		{
			"WordRightDefault",
			1
		};
	};
	class WordRightDefault
	{
		versions[]=
		{
			"WordRight_1",
			1
		};
		class WordRight_1
		{
			speech[]=
			{
				"Right"
			};
		};
	};
	class WordRoger
	{
		sentences[]=
		{
			"WordRogerDefault",
			"(1-Stealth)",
			"WordRogerStealth",
			"Stealth"
		};
	};
	class WordRogerDefault
	{
		versions[]=
		{
			"WordRoger_1",
			1
		};
		class WordRoger_1
		{
			speech[]=
			{
				"Roger"
			};
		};
	};
	class WordRogerStealth
	{
		versions[]=
		{
			"WordRoger_1",
			1
		};
		class WordRoger_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Roger"
			};
		};
	};
	class WordRunningOutOfAmmo
	{
		sentences[]=
		{
			"WordRunningOutOfAmmoDefault",
			"(1-Stealth)",
			"WordRunningOutOfAmmoStealth",
			"Stealth"
		};
	};
	class WordRunningOutOfAmmoDefault
	{
		versions[]=
		{
			"WordRunningOutOfAmmo_1",
			1
		};
		class WordRunningOutOfAmmo_1
		{
			speech[]=
			{
				"RunningOutOfAmmo"
			};
		};
	};
	class WordRunningOutOfAmmoStealth
	{
		versions[]=
		{
			"WordRunningOutOfAmmo_1",
			1
		};
		class WordRunningOutOfAmmo_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"RunningOutOfAmmo"
			};
		};
	};
	class WordRunningOutOfFuel
	{
		sentences[]=
		{
			"WordRunningOutOfFuelDefault",
			1
		};
	};
	class WordRunningOutOfFuelDefault
	{
		versions[]=
		{
			"WordRunningOutOfFuel_1",
			1
		};
		class WordRunningOutOfFuel_1
		{
			speech[]=
			{
				"RunningOutOfFuel"
			};
		};
	};
	class WordSayAgain
	{
		sentences[]=
		{
			"WordSayAgainDefault",
			"(1-Stealth)",
			"WordSayAgainStealth",
			"Stealth"
		};
	};
	class WordSayAgainDefault
	{
		versions[]=
		{
			"WordSayAgain_1",
			1
		};
		class WordSayAgain_1
		{
			speech[]=
			{
				"SayAgain"
			};
		};
	};
	class WordSayAgainStealth
	{
		versions[]=
		{
			"WordSayAgain_1",
			1
		};
		class WordSayAgain_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"SayAgain"
			};
		};
	};
	class WordScanHorizon
	{
		sentences[]=
		{
			"WordScanHorizonDefault",
			"(1-Stealth)",
			"WordScanHorizonStealth",
			"Stealth"
		};
	};
	class WordScanHorizonDefault
	{
		versions[]=
		{
			"WordScanHorizon_1",
			1
		};
		class WordScanHorizon_1
		{
			speech[]=
			{
				"ScanHorizon"
			};
		};
	};
	class WordScanHorizonStealth
	{
		versions[]=
		{
			"WordScanHorizon_1",
			1
		};
		class WordScanHorizon_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"ScanHorizon"
			};
		};
	};
	class WordScratchOneE
	{
		sentences[]=
		{
			"WordScratchOneEDefault",
			1
		};
	};
	class WordScratchOneEDefault
	{
		versions[]=
		{
			"WordScratchOneE_1",
			1
		};
		class WordScratchOneE_1
		{
			speech[]=
			{
				"ScratchOneE"
			};
		};
	};
	class WordSetACharge
	{
		sentences[]=
		{
			"WordSetAChargeDefault",
			"(1-Stealth)",
			"WordSetAChargeStealth",
			"Stealth"
		};
	};
	class WordSetAChargeDefault
	{
		versions[]=
		{
			"WordSetACharge_1",
			1
		};
		class WordSetACharge_1
		{
			speech[]=
			{
				"SetACharge"
			};
		};
	};
	class WordSetAChargeStealth
	{
		versions[]=
		{
			"WordSetACharge_1",
			1
		};
		class WordSetACharge_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"SetACharge"
			};
		};
	};
	class WordSetTheTimer
	{
		sentences[]=
		{
			"WordSetTheTimerDefault",
			"(1-Stealth)",
			"WordSetTheTimerStealth",
			"Stealth"
		};
	};
	class WordSetTheTimerDefault
	{
		versions[]=
		{
			"WordSetTheTimer_1",
			1
		};
		class WordSetTheTimer_1
		{
			speech[]=
			{
				"SetTheTimer"
			};
		};
	};
	class WordSetTheTimerStealth
	{
		versions[]=
		{
			"WordSetTheTimer_1",
			1
		};
		class WordSetTheTimer_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"SetTheTimer"
			};
		};
	};
	class WordSlow
	{
		sentences[]=
		{
			"WordSlowDefault",
			1
		};
	};
	class WordSlowDefault
	{
		versions[]=
		{
			"WordSlow_1",
			1
		};
		class WordSlow_1
		{
			speech[]=
			{
				"Slow"
			};
		};
	};
	class WordSolidCopy
	{
		sentences[]=
		{
			"WordSolidCopyDefault",
			"(1-Stealth)",
			"WordSolidCopyStealth",
			"Stealth"
		};
	};
	class WordSolidCopyDefault
	{
		versions[]=
		{
			"WordSolidCopy_1",
			1
		};
		class WordSolidCopy_1
		{
			speech[]=
			{
				"SolidCopy"
			};
		};
	};
	class WordSolidCopyStealth
	{
		versions[]=
		{
			"WordSolidCopy_1",
			1
		};
		class WordSolidCopy_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"SolidCopy"
			};
		};
	};
	class WordSomebodyHelpMeE
	{
		sentences[]=
		{
			"WordSomebodyHelpMeEDefault",
			1
		};
	};
	class WordSomebodyHelpMeEDefault
	{
		versions[]=
		{
			"WordSomebodyHelpMeE_1",
			1
		};
		class WordSomebodyHelpMeE_1
		{
			speech[]=
			{
				"SomebodyHelpMeE"
			};
		};
	};
	class WordStandingBy
	{
		sentences[]=
		{
			"WordStandingByDefault",
			"(1-Stealth)",
			"WordStandingByStealth",
			"Stealth"
		};
	};
	class WordStandingByDefault
	{
		versions[]=
		{
			"WordStandingBy_1",
			1
		};
		class WordStandingBy_1
		{
			speech[]=
			{
				"StandingBy"
			};
		};
	};
	class WordStandingByStealth
	{
		versions[]=
		{
			"WordStandingBy_1",
			1
		};
		class WordStandingBy_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"StandingBy"
			};
		};
	};
	class WordStandUp
	{
		sentences[]=
		{
			"WordStandUpDefault",
			"(1-Stealth)",
			"WordStandUpStealth",
			"Stealth"
		};
	};
	class WordStandUpDefault
	{
		versions[]=
		{
			"WordStandUp_1",
			1
		};
		class WordStandUp_1
		{
			speech[]=
			{
				"StandUp"
			};
		};
	};
	class WordStandUpStealth
	{
		versions[]=
		{
			"WordStandUp_1",
			1
		};
		class WordStandUp_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"StandUp"
			};
		};
	};
	class WordStatusRedE
	{
		sentences[]=
		{
			"WordStatusRedEDefault",
			"(1-Stealth)",
			"WordStatusRedEStealth",
			"Stealth"
		};
	};
	class WordStatusRedEDefault
	{
		versions[]=
		{
			"WordStatusRedE_1",
			1
		};
		class WordStatusRedE_1
		{
			speech[]=
			{
				"StatusRedE"
			};
		};
	};
	class WordStatusRedEStealth
	{
		versions[]=
		{
			"WordStatusRedE_1",
			1
		};
		class WordStatusRedE_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"StatusRedE"
			};
		};
	};
	class WordStayAlert
	{
		sentences[]=
		{
			"WordStayAlertDefault",
			"(1-Stealth)",
			"WordStayAlertStealth",
			"Stealth"
		};
	};
	class WordStayAlertDefault
	{
		versions[]=
		{
			"WordStayAlert_1",
			1
		};
		class WordStayAlert_1
		{
			speech[]=
			{
				"StayAlert"
			};
		};
	};
	class WordStayAlertStealth
	{
		versions[]=
		{
			"WordStayAlert_1",
			1
		};
		class WordStayAlert_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"StayAlert"
			};
		};
	};
	class WordStayBack
	{
		sentences[]=
		{
			"WordStayBackDefault",
			"(1-Stealth)",
			"WordStayBackStealth",
			"Stealth"
		};
	};
	class WordStayBackDefault
	{
		versions[]=
		{
			"WordStayBack_1",
			1
		};
		class WordStayBack_1
		{
			speech[]=
			{
				"StayBack"
			};
		};
	};
	class WordStayBackStealth
	{
		versions[]=
		{
			"WordStayBack_1",
			1
		};
		class WordStayBack_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"StayBack"
			};
		};
	};
	class WordStayCrouched
	{
		sentences[]=
		{
			"WordStayCrouchedDefault",
			"(1-Stealth)",
			"WordStayCrouchedStealth",
			"Stealth"
		};
	};
	class WordStayCrouchedDefault
	{
		versions[]=
		{
			"WordStayCrouched_1",
			1
		};
		class WordStayCrouched_1
		{
			speech[]=
			{
				"StayCrouched"
			};
		};
	};
	class WordStayCrouchedStealth
	{
		versions[]=
		{
			"WordStayCrouched_1",
			1
		};
		class WordStayCrouched_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"StayCrouched"
			};
		};
	};
	class WordStayInFormationE
	{
		sentences[]=
		{
			"WordStayInFormationEDefault",
			1
		};
	};
	class WordStayInFormationEDefault
	{
		versions[]=
		{
			"WordStayInFormationE_1",
			1
		};
		class WordStayInFormationE_1
		{
			speech[]=
			{
				"StayInFormationE"
			};
		};
	};
	class WordStealth
	{
		sentences[]=
		{
			"WordStealthDefault",
			"(1-Stealth)",
			"WordStealthStealth",
			"Stealth"
		};
	};
	class WordStealthDefault
	{
		versions[]=
		{
			"WordStealth_1",
			1
		};
		class WordStealth_1
		{
			speech[]=
			{
				"Stealth"
			};
		};
	};
	class WordStealthStealth
	{
		versions[]=
		{
			"WordStealth_1",
			1
		};
		class WordStealth_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Stealth"
			};
		};
	};
	class WordStopE
	{
		sentences[]=
		{
			"WordStopEDefault",
			"(1-Stealth)",
			"WordStopEStealth",
			"Stealth"
		};
	};
	class WordStopEDefault
	{
		versions[]=
		{
			"WordStopE_1",
			1
		};
		class WordStopE_1
		{
			speech[]=
			{
				"StopE"
			};
		};
	};
	class WordStopEStealth
	{
		versions[]=
		{
			"WordStopE_1",
			1
		};
		class WordStopE_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"StopE"
			};
		};
	};
	class WordSupporting
	{
		sentences[]=
		{
			"WordSupportingDefault",
			"(1-Stealth)",
			"WordSupportingStealth",
			"Stealth"
		};
	};
	class WordSupportingDefault
	{
		versions[]=
		{
			"WordSupporting_1",
			1
		};
		class WordSupporting_1
		{
			speech[]=
			{
				"Supporting"
			};
		};
	};
	class WordSupportingStealth
	{
		versions[]=
		{
			"WordSupporting_1",
			1
		};
		class WordSupporting_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Supporting"
			};
		};
	};
	class WordSuppressiveFireE
	{
		sentences[]=
		{
			"WordSuppressiveFireEDefault",
			1
		};
	};
	class WordSuppressiveFireEDefault
	{
		versions[]=
		{
			"WordSuppressiveFireE_1",
			1
		};
		class WordSuppressiveFireE_1
		{
			speech[]=
			{
				"SuppressiveFireE"
			};
		};
	};
	class WordTakeCoverE
	{
		sentences[]=
		{
			"WordTakeCoverEDefault",
			"(1-Stealth)",
			"WordTakeCoverEStealth",
			"Stealth"
		};
	};
	class WordTakeCoverEDefault
	{
		versions[]=
		{
			"WordTakeCoverE_1",
			1
		};
		class WordTakeCoverE_1
		{
			speech[]=
			{
				"TakeCoverE"
			};
		};
	};
	class WordTakeCoverEStealth
	{
		versions[]=
		{
			"WordTakeCoverE_1",
			1
		};
		class WordTakeCoverE_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"TakeCoverE"
			};
		};
	};
	class WordTakeThat
	{
		sentences[]=
		{
			"WordTakeThatDefault",
			"(1-Stealth)",
			"WordTakeThatStealth",
			"Stealth"
		};
	};
	class WordTakeThatDefault
	{
		versions[]=
		{
			"WordTakeThat_1",
			1
		};
		class WordTakeThat_1
		{
			speech[]=
			{
				"TakeThat"
			};
		};
	};
	class WordTakeThatStealth
	{
		versions[]=
		{
			"WordTakeThat_1",
			1
		};
		class WordTakeThat_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"TakeThat"
			};
		};
	};
	class WordTakeThatMine
	{
		sentences[]=
		{
			"WordTakeThatMineDefault",
			"(1-Stealth)",
			"WordTakeThatMineStealth",
			"Stealth"
		};
	};
	class WordTakeThatMineDefault
	{
		versions[]=
		{
			"WordTakeThatMine_1",
			1
		};
		class WordTakeThatMine_1
		{
			speech[]=
			{
				"TakeThatMine"
			};
		};
	};
	class WordTakeThatMineStealth
	{
		versions[]=
		{
			"WordTakeThatMine_1",
			1
		};
		class WordTakeThatMine_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"TakeThatMine"
			};
		};
	};
	class WordTakeTheFlag
	{
		sentences[]=
		{
			"WordTakeTheFlagDefault",
			"(1-Stealth)",
			"WordTakeTheFlagStealth",
			"Stealth"
		};
	};
	class WordTakeTheFlagDefault
	{
		versions[]=
		{
			"WordTakeTheFlag_1",
			1
		};
		class WordTakeTheFlag_1
		{
			speech[]=
			{
				"TakeTheFlag"
			};
		};
	};
	class WordTakeTheFlagStealth
	{
		versions[]=
		{
			"WordTakeTheFlag_1",
			1
		};
		class WordTakeTheFlag_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"TakeTheFlag"
			};
		};
	};
	class WordTakingCommand
	{
		sentences[]=
		{
			"WordTakingCommandDefault",
			"(1-Stealth)",
			"WordTakingCommandStealth",
			"Stealth"
		};
	};
	class WordTakingCommandDefault
	{
		versions[]=
		{
			"WordTakingCommand_1",
			1
		};
		class WordTakingCommand_1
		{
			speech[]=
			{
				"TakingCommand"
			};
		};
	};
	class WordTakingCommandStealth
	{
		versions[]=
		{
			"WordTakingCommand_1",
			1
		};
		class WordTakingCommand_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"TakingCommand"
			};
		};
	};
	class WordTakingFireE
	{
		sentences[]=
		{
			"WordTakingFireEDefault",
			"(1-Stealth)",
			"WordTakingFireEStealth",
			"Stealth"
		};
	};
	class WordTakingFireEDefault
	{
		versions[]=
		{
			"WordTakingFireE_1",
			1
		};
		class WordTakingFireE_1
		{
			speech[]=
			{
				"TakingFireE"
			};
		};
	};
	class WordTakingFireEStealth
	{
		versions[]=
		{
			"WordTakingFireE_1",
			1
		};
		class WordTakingFireE_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"TakingFireE"
			};
		};
	};
	class WordTargetAcquired
	{
		sentences[]=
		{
			"WordTargetAcquiredDefault",
			1
		};
	};
	class WordTargetAcquiredDefault
	{
		versions[]=
		{
			"WordTargetAcquired_1",
			1
		};
		class WordTargetAcquired_1
		{
			speech[]=
			{
				"TargetAcquired"
			};
		};
	};
	class WordTargetEliminated
	{
		sentences[]=
		{
			"WordTargetEliminatedDefault",
			"(1-Stealth)",
			"WordTargetEliminatedStealth",
			"Stealth"
		};
	};
	class WordTargetEliminatedDefault
	{
		versions[]=
		{
			"WordTargetEliminated_1",
			1
		};
		class WordTargetEliminated_1
		{
			speech[]=
			{
				"TargetEliminated"
			};
		};
	};
	class WordTargetEliminatedStealth
	{
		versions[]=
		{
			"WordTargetEliminated_1",
			1
		};
		class WordTargetEliminated_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"TargetEliminated"
			};
		};
	};
	class WordTargetInSight
	{
		sentences[]=
		{
			"WordTargetInSightDefault",
			"(1-Stealth)",
			"WordTargetInSightStealth",
			"Stealth"
		};
	};
	class WordTargetInSightDefault
	{
		versions[]=
		{
			"WordTargetInSight_1",
			1
		};
		class WordTargetInSight_1
		{
			speech[]=
			{
				"TargetInSight"
			};
		};
	};
	class WordTargetInSightStealth
	{
		versions[]=
		{
			"WordTargetInSight_1",
			1
		};
		class WordTargetInSight_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"TargetInSight"
			};
		};
	};
	class WordTargetThat
	{
		sentences[]=
		{
			"WordTargetThatDefault",
			"(1-Stealth)",
			"WordTargetThatStealth",
			"Stealth"
		};
	};
	class WordTargetThatDefault
	{
		versions[]=
		{
			"WordTargetThat_1",
			1
		};
		class WordTargetThat_1
		{
			speech[]=
			{
				"TargetThat"
			};
		};
	};
	class WordTargetThatStealth
	{
		versions[]=
		{
			"WordTargetThat_1",
			1
		};
		class WordTargetThat_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"TargetThat"
			};
		};
	};
	class WordUnderFireE
	{
		sentences[]=
		{
			"WordUnderFireEDefault",
			"(1-Stealth)",
			"WordUnderFireEStealth",
			"Stealth"
		};
	};
	class WordUnderFireEDefault
	{
		versions[]=
		{
			"WordUnderFireE_1",
			1
		};
		class WordUnderFireE_1
		{
			speech[]=
			{
				"UnderFireE"
			};
		};
	};
	class WordUnderFireEStealth
	{
		versions[]=
		{
			"WordUnderFireE_1",
			1
		};
		class WordUnderFireE_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"UnderFireE"
			};
		};
	};
	class WordUnderstood
	{
		sentences[]=
		{
			"WordUnderstoodDefault",
			"(1-Stealth)",
			"WordUnderstoodStealth",
			"Stealth"
		};
	};
	class WordUnderstoodDefault
	{
		versions[]=
		{
			"WordUnderstood_1",
			1
		};
		class WordUnderstood_1
		{
			speech[]=
			{
				"Understood"
			};
		};
	};
	class WordUnderstoodStealth
	{
		versions[]=
		{
			"WordUnderstood_1",
			1
		};
		class WordUnderstood_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Understood"
			};
		};
	};
	class WordWaiting
	{
		sentences[]=
		{
			"WordWaitingDefault",
			"(1-Stealth)",
			"WordWaitingStealth",
			"Stealth"
		};
	};
	class WordWaitingDefault
	{
		versions[]=
		{
			"WordWaiting_1",
			1
		};
		class WordWaiting_1
		{
			speech[]=
			{
				"Waiting"
			};
		};
	};
	class WordWaitingStealth
	{
		versions[]=
		{
			"WordWaiting_1",
			1
		};
		class WordWaiting_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Waiting"
			};
		};
	};
	class WordWaitForMe
	{
		sentences[]=
		{
			"WordWaitForMeDefault",
			"(1-Stealth)",
			"WordWaitForMeStealth",
			"Stealth"
		};
	};
	class WordWaitForMeDefault
	{
		versions[]=
		{
			"WordWaitForMe_1",
			1
		};
		class WordWaitForMe_1
		{
			speech[]=
			{
				"WaitForMe"
			};
		};
	};
	class WordWaitForMeStealth
	{
		versions[]=
		{
			"WordWaitForMe_1",
			1
		};
		class WordWaitForMe_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"WaitForMe"
			};
		};
	};
	class WordWatch
	{
		sentences[]=
		{
			"WordWatchDefault",
			"(1-Stealth)",
			"WordWatchStealth",
			"Stealth"
		};
	};
	class WordWatchDefault
	{
		versions[]=
		{
			"WordWatch_1",
			1
		};
		class WordWatch_1
		{
			speech[]=
			{
				"Watch"
			};
		};
	};
	class WordWatchStealth
	{
		versions[]=
		{
			"WordWatch_1",
			1
		};
		class WordWatch_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Watch"
			};
		};
	};
	class WordWatchThat
	{
		sentences[]=
		{
			"WordWatchThatDefault",
			"(1-Stealth)",
			"WordWatchThatStealth",
			"Stealth"
		};
	};
	class WordWatchThatDefault
	{
		versions[]=
		{
			"WordWatchThat_1",
			1
		};
		class WordWatchThat_1
		{
			speech[]=
			{
				"WatchThat"
			};
		};
	};
	class WordWatchThatStealth
	{
		versions[]=
		{
			"WordWatchThat_1",
			1
		};
		class WordWatchThat_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"WatchThat"
			};
		};
	};
	class WordWeaponsFree
	{
		sentences[]=
		{
			"WordWeaponsFreeDefault",
			"(1-Stealth)",
			"WordWeaponsFreeStealth",
			"Stealth"
		};
	};
	class WordWeaponsFreeDefault
	{
		versions[]=
		{
			"WordWeaponsFree_1",
			1
		};
		class WordWeaponsFree_1
		{
			speech[]=
			{
				"WeaponsFree"
			};
		};
	};
	class WordWeaponsFreeStealth
	{
		versions[]=
		{
			"WordWeaponsFree_1",
			1
		};
		class WordWeaponsFree_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"WeaponsFree"
			};
		};
	};
	class WordWeaponsHot
	{
		sentences[]=
		{
			"WordWeaponsHotDefault",
			1
		};
	};
	class WordWeaponsHotDefault
	{
		versions[]=
		{
			"WordWeaponsHot_1",
			1
		};
		class WordWeaponsHot_1
		{
			speech[]=
			{
				"WeaponsHot"
			};
		};
	};
	class WordWeLost
	{
		sentences[]=
		{
			"WordWeLostDefault",
			"(1-Stealth)",
			"WordWeLostStealth",
			"Stealth"
		};
	};
	class WordWeLostDefault
	{
		versions[]=
		{
			"WordWeLost_1",
			1
		};
		class WordWeLost_1
		{
			speech[]=
			{
				"WeLost"
			};
		};
	};
	class WordWeLostStealth
	{
		versions[]=
		{
			"WordWeLost_1",
			1
		};
		class WordWeLost_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"WeLost"
			};
		};
	};
	class WordWhereAreYouQ
	{
		sentences[]=
		{
			"WordWhereAreYouQDefault",
			"(1-Stealth)",
			"WordWhereAreYouQStealth",
			"Stealth"
		};
	};
	class WordWhereAreYouQDefault
	{
		versions[]=
		{
			"WordWhereAreYouQ_1",
			1
		};
		class WordWhereAreYouQ_1
		{
			speech[]=
			{
				"WhereAreYouQ"
			};
		};
	};
	class WordWhereAreYouQStealth
	{
		versions[]=
		{
			"WordWhereAreYouQ_1",
			1
		};
		class WordWhereAreYouQ_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"WhereAreYouQ"
			};
		};
	};
	class WordWoundedE
	{
		sentences[]=
		{
			"WordWoundedEDefault",
			"(1-Stealth)",
			"WordWoundedEStealth",
			"Stealth"
		};
	};
	class WordWoundedEDefault
	{
		versions[]=
		{
			"WordWoundedE_1",
			1
		};
		class WordWoundedE_1
		{
			speech[]=
			{
				"WoundedE"
			};
		};
	};
	class WordWoundedEStealth
	{
		versions[]=
		{
			"WordWoundedE_1",
			1
		};
		class WordWoundedE_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"WoundedE"
			};
		};
	};
	class WordAssembleThat
	{
		sentences[]=
		{
			"WordAssembleThatDefault",
			"(1-Stealth)",
			"WordAssembleThatStealth",
			"Stealth"
		};
	};
	class WordAssembleThatDefault
	{
		versions[]=
		{
			"WordAssembleThat_1",
			1
		};
		class WordAssembleThat_1
		{
			speech[]=
			{
				"AssembleThat"
			};
		};
	};
	class WordAssembleThatStealth
	{
		versions[]=
		{
			"WordAssembleThat_1",
			1
		};
		class WordAssembleThat_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"AssembleThat"
			};
		};
	};
	class WordDisassembleThat
	{
		sentences[]=
		{
			"WordDisassembleThatDefault",
			"(1-Stealth)",
			"WordDisassembleThatStealth",
			"Stealth"
		};
	};
	class WordDisassembleThatDefault
	{
		versions[]=
		{
			"WordDisassembleThat_1",
			1
		};
		class WordDisassembleThat_1
		{
			speech[]=
			{
				"DisassembleThat"
			};
		};
	};
	class WordDisassembleThatStealth
	{
		versions[]=
		{
			"WordDisassembleThat_1",
			1
		};
		class WordDisassembleThat_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"DisassembleThat"
			};
		};
	};
	class WordFlashlightsOn
	{
		sentences[]=
		{
			"WordFlashlightsOnDefault",
			"(1-Stealth)",
			"WordFlashlightsOnStealth",
			"Stealth"
		};
	};
	class WordFlashlightsOnDefault
	{
		versions[]=
		{
			"WordFlashlightsOn_1",
			1
		};
		class WordFlashlightsOn_1
		{
			speech[]=
			{
				"FlashlightsOn"
			};
		};
	};
	class WordFlashlightsOnStealth
	{
		versions[]=
		{
			"WordFlashlightsOn_1",
			1
		};
		class WordFlashlightsOn_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"FlashlightsOn"
			};
		};
	};
	class WordFlashlightsOff
	{
		sentences[]=
		{
			"WordFlashlightsOffDefault",
			"(1-Stealth)",
			"WordFlashlightsOffStealth",
			"Stealth"
		};
	};
	class WordFlashlightsOffDefault
	{
		versions[]=
		{
			"WordFlashlightsOff_1",
			1
		};
		class WordFlashlightsOff_1
		{
			speech[]=
			{
				"FlashlightsOff"
			};
		};
	};
	class WordFlashlightsOffStealth
	{
		versions[]=
		{
			"WordFlashlightsOff_1",
			1
		};
		class WordFlashlightsOff_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"FlashlightsOff"
			};
		};
	};
	class WordLasersOn
	{
		sentences[]=
		{
			"WordLasersOnDefault",
			"(1-Stealth)",
			"WordLasersOnStealth",
			"Stealth"
		};
	};
	class WordLasersOnDefault
	{
		versions[]=
		{
			"WordLasersOn_1",
			1
		};
		class WordLasersOn_1
		{
			speech[]=
			{
				"LasersOn"
			};
		};
	};
	class WordLasersOnStealth
	{
		versions[]=
		{
			"WordLasersOn_1",
			1
		};
		class WordLasersOn_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"LasersOn"
			};
		};
	};
	class WordLasersOff
	{
		sentences[]=
		{
			"WordLasersOffDefault",
			"(1-Stealth)",
			"WordLasersOffStealth",
			"Stealth"
		};
	};
	class WordLasersOffDefault
	{
		versions[]=
		{
			"WordLasersOff_1",
			1
		};
		class WordLasersOff_1
		{
			speech[]=
			{
				"LasersOff"
			};
		};
	};
	class WordLasersOffStealth
	{
		versions[]=
		{
			"WordLasersOff_1",
			1
		};
		class WordLasersOff_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"LasersOff"
			};
		};
	};
	class WordFuckE
	{
		sentences[]=
		{
			"WordFuckEDefault",
			"(1-Stealth)",
			"WordFuckEStealth",
			"Stealth"
		};
	};
	class WordFuckEDefault
	{
		versions[]=
		{
			"WordFuckE_1",
			1
		};
		class WordFuckE_1
		{
			speech[]=
			{
				"FuckE"
			};
		};
	};
	class WordFuckEStealth
	{
		versions[]=
		{
			"WordFuckE_1",
			1
		};
		class WordFuckE_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"FuckE"
			};
		};
	};
	class WordEnemy
	{
		sentences[]=
		{
			"WordEnemyDefault",
			"(1-Stealth)",
			"WordEnemyStealth",
			"Stealth"
		};
	};
	class WordEnemyDefault
	{
		versions[]=
		{
			"WordEnemy_1",
			1
		};
		class WordEnemy_1
		{
			speech[]=
			{
				"Enemy"
			};
		};
	};
	class WordEnemyStealth
	{
		versions[]=
		{
			"WordEnemy_1",
			1
		};
		class WordEnemy_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Enemy"
			};
		};
	};
	class WordUnknown
	{
		sentences[]=
		{
			"WordUnknownDefault",
			"(1-Stealth)",
			"WordUnknownStealth",
			"Stealth"
		};
	};
	class WordUnknownDefault
	{
		versions[]=
		{
			"WordUnknown_1",
			1
		};
		class WordUnknown_1
		{
			speech[]=
			{
				"Unknown"
			};
		};
	};
	class WordUnknownStealth
	{
		versions[]=
		{
			"WordUnknown_1",
			1
		};
		class WordUnknown_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Unknown"
			};
		};
	};
	class WordFriendly
	{
		sentences[]=
		{
			"WordFriendlyDefault",
			"(1-Stealth)",
			"WordFriendlyStealth",
			"Stealth"
		};
	};
	class WordFriendlyDefault
	{
		versions[]=
		{
			"WordFriendly_1",
			1
		};
		class WordFriendly_1
		{
			speech[]=
			{
				"Friendly"
			};
		};
	};
	class WordFriendlyStealth
	{
		versions[]=
		{
			"WordFriendly_1",
			1
		};
		class WordFriendly_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Friendly"
			};
		};
	};
	class WordNeutral
	{
		sentences[]=
		{
			"WordNeutralDefault",
			"(1-Stealth)",
			"WordNeutralStealth",
			"Stealth"
		};
	};
	class WordNeutralDefault
	{
		versions[]=
		{
			"WordNeutral_1",
			1
		};
		class WordNeutral_1
		{
			speech[]=
			{
				"Neutral"
			};
		};
	};
	class WordNeutralStealth
	{
		versions[]=
		{
			"WordNeutral_1",
			1
		};
		class WordNeutral_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Neutral"
			};
		};
	};
	class WordOf
	{
		sentences[]=
		{
			"WordOfDefault",
			"(1-Stealth)",
			"WordOfStealth",
			"Stealth"
		};
	};
	class WordOfDefault
	{
		versions[]=
		{
			"WordOf_1",
			1
		};
		class WordOf_1
		{
			speech[]=
			{
				"Of"
			};
		};
	};
	class WordOfStealth
	{
		versions[]=
		{
			"WordOf_1",
			1
		};
		class WordOf_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Of"
			};
		};
	};
	class WordOfYou
	{
		sentences[]=
		{
			"WordOfYouDefault",
			"(1-Stealth)",
			"WordOfYouStealth",
			"Stealth"
		};
	};
	class WordOfYouDefault
	{
		versions[]=
		{
			"WordOfYou_1",
			1
		};
		class WordOfYou_1
		{
			speech[]=
			{
				"OfYou"
			};
		};
	};
	class WordOfYouStealth
	{
		versions[]=
		{
			"WordOfYou_1",
			1
		};
		class WordOfYou_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"OfYou"
			};
		};
	};
	class WordOfMe
	{
		sentences[]=
		{
			"WordOfMeDefault",
			"(1-Stealth)",
			"WordOfMeStealth",
			"Stealth"
		};
	};
	class WordOfMeDefault
	{
		versions[]=
		{
			"WordOfMe_1",
			1
		};
		class WordOfMe_1
		{
			speech[]=
			{
				"OfMe"
			};
		};
	};
	class WordOfMeStealth
	{
		versions[]=
		{
			"WordOfMe_1",
			1
		};
		class WordOfMe_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"OfMe"
			};
		};
	};
	class WordMove
	{
		sentences[]=
		{
			"WordMoveDefault",
			"(1-Stealth)",
			"WordMoveStealth",
			"Stealth"
		};
	};
	class WordMoveDefault
	{
		versions[]=
		{
			"WordMove_1",
			1
		};
		class WordMove_1
		{
			speech[]=
			{
				"Move"
			};
		};
	};
	class WordMoveStealth
	{
		versions[]=
		{
			"WordMove_1",
			1
		};
		class WordMove_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Move"
			};
		};
	};
	class WordMoveTo
	{
		sentences[]=
		{
			"WordMoveToDefault",
			"(1-Stealth)",
			"WordMoveToStealth",
			"Stealth"
		};
	};
	class WordMoveToDefault
	{
		versions[]=
		{
			"WordMoveTo_1",
			1
		};
		class WordMoveTo_1
		{
			speech[]=
			{
				"MoveTo"
			};
		};
	};
	class WordMoveToStealth
	{
		versions[]=
		{
			"WordMoveTo_1",
			1
		};
		class WordMoveTo_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"MoveTo"
			};
		};
	};
	class WordMoveToThat
	{
		sentences[]=
		{
			"WordMoveToThatDefault",
			"(1-Stealth)",
			"WordMoveToThatStealth",
			"Stealth"
		};
	};
	class WordMoveToThatDefault
	{
		versions[]=
		{
			"WordMoveToThat_1",
			1
		};
		class WordMoveToThat_1
		{
			speech[]=
			{
				"MoveToThat"
			};
		};
	};
	class WordMoveToThatStealth
	{
		versions[]=
		{
			"WordMoveToThat_1",
			1
		};
		class WordMoveToThat_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"MoveToThat"
			};
		};
	};
	class WordGoTo
	{
		sentences[]=
		{
			"WordGoToDefault",
			"(1-Stealth)",
			"WordGoToStealth",
			"Stealth"
		};
	};
	class WordGoToDefault
	{
		versions[]=
		{
			"WordGoTo_1",
			1
		};
		class WordGoTo_1
		{
			speech[]=
			{
				"GoTo"
			};
		};
	};
	class WordGoToStealth
	{
		versions[]=
		{
			"WordGoTo_1",
			1
		};
		class WordGoTo_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"GoTo"
			};
		};
	};
	class WordGoToThat
	{
		sentences[]=
		{
			"WordGoToThatDefault",
			"(1-Stealth)",
			"WordGoToThatStealth",
			"Stealth"
		};
	};
	class WordGoToThatDefault
	{
		versions[]=
		{
			"WordGoToThat_1",
			1
		};
		class WordGoToThat_1
		{
			speech[]=
			{
				"GoToThat"
			};
		};
	};
	class WordGoToThatStealth
	{
		versions[]=
		{
			"WordGoToThat_1",
			1
		};
		class WordGoToThat_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"GoToThat"
			};
		};
	};
	class WordThat
	{
		sentences[]=
		{
			"WordThatDefault",
			"(1-Stealth)",
			"WordThatStealth",
			"Stealth"
		};
	};
	class WordThatDefault
	{
		versions[]=
		{
			"WordThat_1",
			1
		};
		class WordThat_1
		{
			speech[]=
			{
				"That"
			};
		};
	};
	class WordThatStealth
	{
		versions[]=
		{
			"WordThat_1",
			1
		};
		class WordThat_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"That"
			};
		};
	};
	class WordToOur
	{
		sentences[]=
		{
			"WordToOurDefault",
			"(1-Stealth)",
			"WordToOurStealth",
			"Stealth"
		};
	};
	class WordToOurDefault
	{
		versions[]=
		{
			"WordToOur_1",
			1
		};
		class WordToOur_1
		{
			speech[]=
			{
				"ToOur"
			};
		};
	};
	class WordToOurStealth
	{
		versions[]=
		{
			"WordToOur_1",
			1
		};
		class WordToOur_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"ToOur"
			};
		};
	};
	class WordToThe
	{
		sentences[]=
		{
			"WordToTheDefault",
			"(1-Stealth)",
			"WordToTheStealth",
			"Stealth"
		};
	};
	class WordToTheDefault
	{
		versions[]=
		{
			"WordToThe_1",
			1
		};
		class WordToThe_1
		{
			speech[]=
			{
				"ToThe"
			};
		};
	};
	class WordToTheStealth
	{
		versions[]=
		{
			"WordToThe_1",
			1
		};
		class WordToThe_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"ToThe"
			};
		};
	};
	class WordFromMe
	{
		sentences[]=
		{
			"WordFromMeDefault",
			"(1-Stealth)",
			"WordFromMeStealth",
			"Stealth"
		};
	};
	class WordFromMeDefault
	{
		versions[]=
		{
			"WordFromMe_1",
			1
		};
		class WordFromMe_1
		{
			speech[]=
			{
				"FromMe"
			};
		};
	};
	class WordFromMeStealth
	{
		versions[]=
		{
			"WordFromMe_1",
			1
		};
		class WordFromMe_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"FromMe"
			};
		};
	};
	class WordOfYourPosition
	{
		sentences[]=
		{
			"WordOfYourPositionDefault",
			"(1-Stealth)",
			"WordOfYourPositionStealth",
			"Stealth"
		};
	};
	class WordOfYourPositionDefault
	{
		versions[]=
		{
			"WordOfYourPosition_1",
			1
		};
		class WordOfYourPosition_1
		{
			speech[]=
			{
				"OfYourPosition"
			};
		};
	};
	class WordOfYourPositionStealth
	{
		versions[]=
		{
			"WordOfYourPosition_1",
			1
		};
		class WordOfYourPosition_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"OfYourPosition"
			};
		};
	};
	class WordIn
	{
		sentences[]=
		{
			"WordInDefault",
			"(1-Stealth)",
			"WordInStealth",
			"Stealth"
		};
	};
	class WordInDefault
	{
		versions[]=
		{
			"WordIn_1",
			1
		};
		class WordIn_1
		{
			speech[]=
			{
				"In"
			};
		};
	};
	class WordInStealth
	{
		versions[]=
		{
			"WordIn_1",
			1
		};
		class WordIn_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"In"
			};
		};
	};
	class WordUs
	{
		sentences[]=
		{
			"WordUsDefault",
			"(1-Stealth)",
			"WordUsStealth",
			"Stealth"
		};
	};
	class WordUsDefault
	{
		versions[]=
		{
			"WordUs_1",
			1
		};
		class WordUs_1
		{
			speech[]=
			{
				"Us"
			};
		};
	};
	class WordUsStealth
	{
		versions[]=
		{
			"WordUs_1",
			1
		};
		class WordUs_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Us"
			};
		};
	};
	class WordinFrontOf
	{
		sentences[]=
		{
			"WordinFrontOfDefault",
			"(1-Stealth)",
			"WordinFrontOfStealth",
			"Stealth"
		};
	};
	class WordinFrontOfDefault
	{
		versions[]=
		{
			"WordinFrontOf_1",
			1
		};
		class WordinFrontOf_1
		{
			speech[]=
			{
				"inFrontOf"
			};
		};
	};
	class WordinFrontOfStealth
	{
		versions[]=
		{
			"WordinFrontOf_1",
			1
		};
		class WordinFrontOf_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"inFrontOf"
			};
		};
	};
	class WordrightOf
	{
		sentences[]=
		{
			"WordrightOfDefault",
			"(1-Stealth)",
			"WordrightOfStealth",
			"Stealth"
		};
	};
	class WordrightOfDefault
	{
		versions[]=
		{
			"WordrightOf_1",
			1
		};
		class WordrightOf_1
		{
			speech[]=
			{
				"rightOf"
			};
		};
	};
	class WordrightOfStealth
	{
		versions[]=
		{
			"WordrightOf_1",
			1
		};
		class WordrightOf_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"rightOf"
			};
		};
	};
	class Wordbehind
	{
		sentences[]=
		{
			"WordbehindDefault",
			"(1-Stealth)",
			"WordbehindStealth",
			"Stealth"
		};
	};
	class WordbehindDefault
	{
		versions[]=
		{
			"Wordbehind_1",
			1
		};
		class Wordbehind_1
		{
			speech[]=
			{
				"behind"
			};
		};
	};
	class WordbehindStealth
	{
		versions[]=
		{
			"Wordbehind_1",
			1
		};
		class Wordbehind_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"behind"
			};
		};
	};
	class WordleftOf
	{
		sentences[]=
		{
			"WordleftOfDefault",
			"(1-Stealth)",
			"WordleftOfStealth",
			"Stealth"
		};
	};
	class WordleftOfDefault
	{
		versions[]=
		{
			"WordleftOf_1",
			1
		};
		class WordleftOf_1
		{
			speech[]=
			{
				"leftOf"
			};
		};
	};
	class WordleftOfStealth
	{
		versions[]=
		{
			"WordleftOf_1",
			1
		};
		class WordleftOf_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"leftOf"
			};
		};
	};
	class WordrightFlank
	{
		sentences[]=
		{
			"WordrightFlankDefault",
			"(1-Stealth)",
			"WordrightFlankStealth",
			"Stealth"
		};
	};
	class WordrightFlankDefault
	{
		versions[]=
		{
			"WordrightFlank_1",
			1
		};
		class WordrightFlank_1
		{
			speech[]=
			{
				"rightFlank"
			};
		};
	};
	class WordrightFlankStealth
	{
		versions[]=
		{
			"WordrightFlank_1",
			1
		};
		class WordrightFlank_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"rightFlank"
			};
		};
	};
	class WordleftFlank
	{
		sentences[]=
		{
			"WordleftFlankDefault",
			"(1-Stealth)",
			"WordleftFlankStealth",
			"Stealth"
		};
	};
	class WordleftFlankDefault
	{
		versions[]=
		{
			"WordleftFlank_1",
			1
		};
		class WordleftFlank_1
		{
			speech[]=
			{
				"leftFlank"
			};
		};
	};
	class WordleftFlankStealth
	{
		versions[]=
		{
			"WordleftFlank_1",
			1
		};
		class WordleftFlank_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"leftFlank"
			};
		};
	};
	class WorddangerCloseTo
	{
		sentences[]=
		{
			"WorddangerCloseToDefault",
			"(1-Stealth)",
			"WorddangerCloseToStealth",
			"Stealth"
		};
	};
	class WorddangerCloseToDefault
	{
		versions[]=
		{
			"WorddangerCloseTo_1",
			1
		};
		class WorddangerCloseTo_1
		{
			speech[]=
			{
				"dangerCloseTo"
			};
		};
	};
	class WorddangerCloseToStealth
	{
		versions[]=
		{
			"WorddangerCloseTo_1",
			1
		};
		class WorddangerCloseTo_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"dangerCloseTo"
			};
		};
	};
	class WordcloseTo
	{
		sentences[]=
		{
			"WordcloseToDefault",
			"(1-Stealth)",
			"WordcloseToStealth",
			"Stealth"
		};
	};
	class WordcloseToDefault
	{
		versions[]=
		{
			"WordcloseTo_1",
			1
		};
		class WordcloseTo_1
		{
			speech[]=
			{
				"closeTo"
			};
		};
	};
	class WordcloseToStealth
	{
		versions[]=
		{
			"WordcloseTo_1",
			1
		};
		class WordcloseTo_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"closeTo"
			};
		};
	};
	class WordnotFarFrom
	{
		sentences[]=
		{
			"WordnotFarFromDefault",
			"(1-Stealth)",
			"WordnotFarFromStealth",
			"Stealth"
		};
	};
	class WordnotFarFromDefault
	{
		versions[]=
		{
			"WordnotFarFrom_1",
			1
		};
		class WordnotFarFrom_1
		{
			speech[]=
			{
				"notFarFrom"
			};
		};
	};
	class WordnotFarFromStealth
	{
		versions[]=
		{
			"WordnotFarFrom_1",
			1
		};
		class WordnotFarFrom_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"notFarFrom"
			};
		};
	};
	class WordfarFrom
	{
		sentences[]=
		{
			"WordfarFromDefault",
			"(1-Stealth)",
			"WordfarFromStealth",
			"Stealth"
		};
	};
	class WordfarFromDefault
	{
		versions[]=
		{
			"WordfarFrom_1",
			1
		};
		class WordfarFrom_1
		{
			speech[]=
			{
				"farFrom"
			};
		};
	};
	class WordfarFromStealth
	{
		versions[]=
		{
			"WordfarFrom_1",
			1
		};
		class WordfarFrom_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"farFrom"
			};
		};
	};
	class WordJust
	{
		sentences[]=
		{
			"WordJustDefault",
			"(1-Stealth)",
			"WordJustStealth",
			"Stealth"
		};
	};
	class WordJustDefault
	{
		versions[]=
		{
			"WordJust_1",
			1
		};
		class WordJust_1
		{
			speech[]=
			{
				"Just"
			};
		};
	};
	class WordJustStealth
	{
		versions[]=
		{
			"WordJust_1",
			1
		};
		class WordJust_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Just"
			};
		};
	};
	class WordWay
	{
		sentences[]=
		{
			"WordWayDefault",
			"(1-Stealth)",
			"WordWayStealth",
			"Stealth"
		};
	};
	class WordWayDefault
	{
		versions[]=
		{
			"WordWay_1",
			1
		};
		class WordWay_1
		{
			speech[]=
			{
				"Way"
			};
		};
	};
	class WordWayStealth
	{
		versions[]=
		{
			"WordWay_1",
			1
		};
		class WordWay_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Way"
			};
		};
	};
	class WorddamnClose
	{
		sentences[]=
		{
			"WorddamnCloseDefault",
			"(1-Stealth)",
			"WorddamnCloseStealth",
			"Stealth"
		};
	};
	class WorddamnCloseDefault
	{
		versions[]=
		{
			"WorddamnClose_1",
			1
		};
		class WorddamnClose_1
		{
			speech[]=
			{
				"damnClose"
			};
		};
	};
	class WorddamnCloseStealth
	{
		versions[]=
		{
			"WorddamnClose_1",
			1
		};
		class WorddamnClose_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"damnClose"
			};
		};
	};
	class WordAll
	{
		sentences[]=
		{
			"WordAllDefault",
			"(1-Stealth)",
			"WordAllStealth",
			"Stealth"
		};
	};
	class WordAllDefault
	{
		versions[]=
		{
			"WordAll_1",
			1
		};
		class WordAll_1
		{
			speech[]=
			{
				"All"
			};
		};
	};
	class WordAllStealth
	{
		versions[]=
		{
			"WordAll_1",
			1
		};
		class WordAll_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"All"
			};
		};
	};
	class WordZero
	{
		sentences[]=
		{
			"WordZeroDefault",
			"(1-Stealth)",
			"WordZeroStealth",
			"Stealth"
		};
	};
	class WordZeroDefault
	{
		versions[]=
		{
			"WordZero_1",
			1
		};
		class WordZero_1
		{
			speech[]=
			{
				"Zero"
			};
		};
	};
	class WordZeroStealth
	{
		versions[]=
		{
			"WordZero_1",
			1
		};
		class WordZero_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Zero"
			};
		};
	};
	class WordOne
	{
		sentences[]=
		{
			"WordOneDefault",
			"(1-Stealth)",
			"WordOneStealth",
			"Stealth"
		};
	};
	class WordOneDefault
	{
		versions[]=
		{
			"WordOne_1",
			1
		};
		class WordOne_1
		{
			speech[]=
			{
				"One"
			};
		};
	};
	class WordOneStealth
	{
		versions[]=
		{
			"WordOne_1",
			1
		};
		class WordOne_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"One"
			};
		};
	};
	class WordTwo
	{
		sentences[]=
		{
			"WordTwoDefault",
			"(1-Stealth)",
			"WordTwoStealth",
			"Stealth"
		};
	};
	class WordTwoDefault
	{
		versions[]=
		{
			"WordTwo_1",
			1
		};
		class WordTwo_1
		{
			speech[]=
			{
				"Two"
			};
		};
	};
	class WordTwoStealth
	{
		versions[]=
		{
			"WordTwo_1",
			1
		};
		class WordTwo_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Two"
			};
		};
	};
	class WordThree
	{
		sentences[]=
		{
			"WordThreeDefault",
			"(1-Stealth)",
			"WordThreeStealth",
			"Stealth"
		};
	};
	class WordThreeDefault
	{
		versions[]=
		{
			"WordThree_1",
			1
		};
		class WordThree_1
		{
			speech[]=
			{
				"Three"
			};
		};
	};
	class WordThreeStealth
	{
		versions[]=
		{
			"WordThree_1",
			1
		};
		class WordThree_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Three"
			};
		};
	};
	class WordFour
	{
		sentences[]=
		{
			"WordFourDefault",
			"(1-Stealth)",
			"WordFourStealth",
			"Stealth"
		};
	};
	class WordFourDefault
	{
		versions[]=
		{
			"WordFour_1",
			1
		};
		class WordFour_1
		{
			speech[]=
			{
				"Four"
			};
		};
	};
	class WordFourStealth
	{
		versions[]=
		{
			"WordFour_1",
			1
		};
		class WordFour_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Four"
			};
		};
	};
	class WordFive
	{
		sentences[]=
		{
			"WordFiveDefault",
			"(1-Stealth)",
			"WordFiveStealth",
			"Stealth"
		};
	};
	class WordFiveDefault
	{
		versions[]=
		{
			"WordFive_1",
			1
		};
		class WordFive_1
		{
			speech[]=
			{
				"Five"
			};
		};
	};
	class WordFiveStealth
	{
		versions[]=
		{
			"WordFive_1",
			1
		};
		class WordFive_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Five"
			};
		};
	};
	class WordSix
	{
		sentences[]=
		{
			"WordSixDefault",
			"(1-Stealth)",
			"WordSixStealth",
			"Stealth"
		};
	};
	class WordSixDefault
	{
		versions[]=
		{
			"WordSix_1",
			1
		};
		class WordSix_1
		{
			speech[]=
			{
				"Six"
			};
		};
	};
	class WordSixStealth
	{
		versions[]=
		{
			"WordSix_1",
			1
		};
		class WordSix_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Six"
			};
		};
	};
	class WordSeven
	{
		sentences[]=
		{
			"WordSevenDefault",
			"(1-Stealth)",
			"WordSevenStealth",
			"Stealth"
		};
	};
	class WordSevenDefault
	{
		versions[]=
		{
			"WordSeven_1",
			1
		};
		class WordSeven_1
		{
			speech[]=
			{
				"Seven"
			};
		};
	};
	class WordSevenStealth
	{
		versions[]=
		{
			"WordSeven_1",
			1
		};
		class WordSeven_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Seven"
			};
		};
	};
	class WordEight
	{
		sentences[]=
		{
			"WordEightDefault",
			"(1-Stealth)",
			"WordEightStealth",
			"Stealth"
		};
	};
	class WordEightDefault
	{
		versions[]=
		{
			"WordEight_1",
			1
		};
		class WordEight_1
		{
			speech[]=
			{
				"Eight"
			};
		};
	};
	class WordEightStealth
	{
		versions[]=
		{
			"WordEight_1",
			1
		};
		class WordEight_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Eight"
			};
		};
	};
	class Wordnine
	{
		sentences[]=
		{
			"WordnineDefault",
			"(1-Stealth)",
			"WordnineStealth",
			"Stealth"
		};
	};
	class WordnineDefault
	{
		versions[]=
		{
			"Wordnine_1",
			1
		};
		class Wordnine_1
		{
			speech[]=
			{
				"nine"
			};
		};
	};
	class WordnineStealth
	{
		versions[]=
		{
			"Wordnine_1",
			1
		};
		class Wordnine_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"nine"
			};
		};
	};
	class WordTen
	{
		sentences[]=
		{
			"WordTenDefault",
			"(1-Stealth)",
			"WordTenStealth",
			"Stealth"
		};
	};
	class WordTenDefault
	{
		versions[]=
		{
			"WordTen_1",
			1
		};
		class WordTen_1
		{
			speech[]=
			{
				"Ten"
			};
		};
	};
	class WordTenStealth
	{
		versions[]=
		{
			"WordTen_1",
			1
		};
		class WordTen_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Ten"
			};
		};
	};
	class WordEleven
	{
		sentences[]=
		{
			"WordElevenDefault",
			"(1-Stealth)",
			"WordElevenStealth",
			"Stealth"
		};
	};
	class WordElevenDefault
	{
		versions[]=
		{
			"WordEleven_1",
			1
		};
		class WordEleven_1
		{
			speech[]=
			{
				"Eleven"
			};
		};
	};
	class WordElevenStealth
	{
		versions[]=
		{
			"WordEleven_1",
			1
		};
		class WordEleven_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Eleven"
			};
		};
	};
	class WordTwelve
	{
		sentences[]=
		{
			"WordTwelveDefault",
			"(1-Stealth)",
			"WordTwelveStealth",
			"Stealth"
		};
	};
	class WordTwelveDefault
	{
		versions[]=
		{
			"WordTwelve_1",
			1
		};
		class WordTwelve_1
		{
			speech[]=
			{
				"Twelve"
			};
		};
	};
	class WordTwelveStealth
	{
		versions[]=
		{
			"WordTwelve_1",
			1
		};
		class WordTwelve_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Twelve"
			};
		};
	};
	class WordThirteen
	{
		sentences[]=
		{
			"WordThirteenDefault",
			"(1-Stealth)",
			"WordThirteenStealth",
			"Stealth"
		};
	};
	class WordThirteenDefault
	{
		versions[]=
		{
			"WordThirteen_1",
			1
		};
		class WordThirteen_1
		{
			speech[]=
			{
				"Thirteen"
			};
		};
	};
	class WordThirteenStealth
	{
		versions[]=
		{
			"WordThirteen_1",
			1
		};
		class WordThirteen_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Thirteen"
			};
		};
	};
	class WordFourteen
	{
		sentences[]=
		{
			"WordFourteenDefault",
			"(1-Stealth)",
			"WordFourteenStealth",
			"Stealth"
		};
	};
	class WordFourteenDefault
	{
		versions[]=
		{
			"WordFourteen_1",
			1
		};
		class WordFourteen_1
		{
			speech[]=
			{
				"Fourteen"
			};
		};
	};
	class WordFourteenStealth
	{
		versions[]=
		{
			"WordFourteen_1",
			1
		};
		class WordFourteen_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Fourteen"
			};
		};
	};
	class WordFifteen
	{
		sentences[]=
		{
			"WordFifteenDefault",
			"(1-Stealth)",
			"WordFifteenStealth",
			"Stealth"
		};
	};
	class WordFifteenDefault
	{
		versions[]=
		{
			"WordFifteen_1",
			1
		};
		class WordFifteen_1
		{
			speech[]=
			{
				"Fifteen"
			};
		};
	};
	class WordFifteenStealth
	{
		versions[]=
		{
			"WordFifteen_1",
			1
		};
		class WordFifteen_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Fifteen"
			};
		};
	};
	class WordSixteen
	{
		sentences[]=
		{
			"WordSixteenDefault",
			"(1-Stealth)",
			"WordSixteenStealth",
			"Stealth"
		};
	};
	class WordSixteenDefault
	{
		versions[]=
		{
			"WordSixteen_1",
			1
		};
		class WordSixteen_1
		{
			speech[]=
			{
				"Sixteen"
			};
		};
	};
	class WordSixteenStealth
	{
		versions[]=
		{
			"WordSixteen_1",
			1
		};
		class WordSixteen_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Sixteen"
			};
		};
	};
	class WordSeventeen
	{
		sentences[]=
		{
			"WordSeventeenDefault",
			"(1-Stealth)",
			"WordSeventeenStealth",
			"Stealth"
		};
	};
	class WordSeventeenDefault
	{
		versions[]=
		{
			"WordSeventeen_1",
			1
		};
		class WordSeventeen_1
		{
			speech[]=
			{
				"Seventeen"
			};
		};
	};
	class WordSeventeenStealth
	{
		versions[]=
		{
			"WordSeventeen_1",
			1
		};
		class WordSeventeen_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Seventeen"
			};
		};
	};
	class WordEighteen
	{
		sentences[]=
		{
			"WordEighteenDefault",
			"(1-Stealth)",
			"WordEighteenStealth",
			"Stealth"
		};
	};
	class WordEighteenDefault
	{
		versions[]=
		{
			"WordEighteen_1",
			1
		};
		class WordEighteen_1
		{
			speech[]=
			{
				"Eighteen"
			};
		};
	};
	class WordEighteenStealth
	{
		versions[]=
		{
			"WordEighteen_1",
			1
		};
		class WordEighteen_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Eighteen"
			};
		};
	};
	class WordNineteen
	{
		sentences[]=
		{
			"WordNineteenDefault",
			"(1-Stealth)",
			"WordNineteenStealth",
			"Stealth"
		};
	};
	class WordNineteenDefault
	{
		versions[]=
		{
			"WordNineteen_1",
			1
		};
		class WordNineteen_1
		{
			speech[]=
			{
				"Nineteen"
			};
		};
	};
	class WordNineteenStealth
	{
		versions[]=
		{
			"WordNineteen_1",
			1
		};
		class WordNineteen_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Nineteen"
			};
		};
	};
	class WordTwenty
	{
		sentences[]=
		{
			"WordTwentyDefault",
			"(1-Stealth)",
			"WordTwentyStealth",
			"Stealth"
		};
	};
	class WordTwentyDefault
	{
		versions[]=
		{
			"WordTwenty_1",
			1
		};
		class WordTwenty_1
		{
			speech[]=
			{
				"Twenty"
			};
		};
	};
	class WordTwentyStealth
	{
		versions[]=
		{
			"WordTwenty_1",
			1
		};
		class WordTwenty_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Twenty"
			};
		};
	};
	class WordThirty
	{
		sentences[]=
		{
			"WordThirtyDefault",
			"(1-Stealth)",
			"WordThirtyStealth",
			"Stealth"
		};
	};
	class WordThirtyDefault
	{
		versions[]=
		{
			"WordThirty_1",
			1
		};
		class WordThirty_1
		{
			speech[]=
			{
				"Thirty"
			};
		};
	};
	class WordThirtyStealth
	{
		versions[]=
		{
			"WordThirty_1",
			1
		};
		class WordThirty_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Thirty"
			};
		};
	};
	class WordForty
	{
		sentences[]=
		{
			"WordFortyDefault",
			"(1-Stealth)",
			"WordFortyStealth",
			"Stealth"
		};
	};
	class WordFortyDefault
	{
		versions[]=
		{
			"WordForty_1",
			1
		};
		class WordForty_1
		{
			speech[]=
			{
				"Forty"
			};
		};
	};
	class WordFortyStealth
	{
		versions[]=
		{
			"WordForty_1",
			1
		};
		class WordForty_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Forty"
			};
		};
	};
	class WordFifty
	{
		sentences[]=
		{
			"WordFiftyDefault",
			"(1-Stealth)",
			"WordFiftyStealth",
			"Stealth"
		};
	};
	class WordFiftyDefault
	{
		versions[]=
		{
			"WordFifty_1",
			1
		};
		class WordFifty_1
		{
			speech[]=
			{
				"Fifty"
			};
		};
	};
	class WordFiftyStealth
	{
		versions[]=
		{
			"WordFifty_1",
			1
		};
		class WordFifty_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Fifty"
			};
		};
	};
	class WordSixty
	{
		sentences[]=
		{
			"WordSixtyDefault",
			"(1-Stealth)",
			"WordSixtyStealth",
			"Stealth"
		};
	};
	class WordSixtyDefault
	{
		versions[]=
		{
			"WordSixty_1",
			1
		};
		class WordSixty_1
		{
			speech[]=
			{
				"Sixty"
			};
		};
	};
	class WordSixtyStealth
	{
		versions[]=
		{
			"WordSixty_1",
			1
		};
		class WordSixty_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Sixty"
			};
		};
	};
	class WordSeventy
	{
		sentences[]=
		{
			"WordSeventyDefault",
			"(1-Stealth)",
			"WordSeventyStealth",
			"Stealth"
		};
	};
	class WordSeventyDefault
	{
		versions[]=
		{
			"WordSeventy_1",
			1
		};
		class WordSeventy_1
		{
			speech[]=
			{
				"Seventy"
			};
		};
	};
	class WordSeventyStealth
	{
		versions[]=
		{
			"WordSeventy_1",
			1
		};
		class WordSeventy_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Seventy"
			};
		};
	};
	class WordEighty
	{
		sentences[]=
		{
			"WordEightyDefault",
			"(1-Stealth)",
			"WordEightyStealth",
			"Stealth"
		};
	};
	class WordEightyDefault
	{
		versions[]=
		{
			"WordEighty_1",
			1
		};
		class WordEighty_1
		{
			speech[]=
			{
				"Eighty"
			};
		};
	};
	class WordEightyStealth
	{
		versions[]=
		{
			"WordEighty_1",
			1
		};
		class WordEighty_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Eighty"
			};
		};
	};
	class WordNinety
	{
		sentences[]=
		{
			"WordNinetyDefault",
			"(1-Stealth)",
			"WordNinetyStealth",
			"Stealth"
		};
	};
	class WordNinetyDefault
	{
		versions[]=
		{
			"WordNinety_1",
			1
		};
		class WordNinety_1
		{
			speech[]=
			{
				"Ninety"
			};
		};
	};
	class WordNinetyStealth
	{
		versions[]=
		{
			"WordNinety_1",
			1
		};
		class WordNinety_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Ninety"
			};
		};
	};
	class WordHundred
	{
		sentences[]=
		{
			"WordHundredDefault",
			"(1-Stealth)",
			"WordHundredStealth",
			"Stealth"
		};
	};
	class WordHundredDefault
	{
		versions[]=
		{
			"WordHundred_1",
			1
		};
		class WordHundred_1
		{
			speech[]=
			{
				"Hundred"
			};
		};
	};
	class WordHundredStealth
	{
		versions[]=
		{
			"WordHundred_1",
			1
		};
		class WordHundred_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Hundred"
			};
		};
	};
	class Wordzero2
	{
		sentences[]=
		{
			"Wordzero2Default",
			"(1-Stealth)",
			"Wordzero2Stealth",
			"Stealth"
		};
	};
	class Wordzero2Default
	{
		versions[]=
		{
			"Wordzero2_1",
			1
		};
		class Wordzero2_1
		{
			speech[]=
			{
				"zero2"
			};
		};
	};
	class Wordzero2Stealth
	{
		versions[]=
		{
			"Wordzero2_1",
			1
		};
		class Wordzero2_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"zero2"
			};
		};
	};
	class Wordone2
	{
		sentences[]=
		{
			"Wordone2Default",
			"(1-Stealth)",
			"Wordone2Stealth",
			"Stealth"
		};
	};
	class Wordone2Default
	{
		versions[]=
		{
			"Wordone2_1",
			1
		};
		class Wordone2_1
		{
			speech[]=
			{
				"one2"
			};
		};
	};
	class Wordone2Stealth
	{
		versions[]=
		{
			"Wordone2_1",
			1
		};
		class Wordone2_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"one2"
			};
		};
	};
	class Wordtwo2
	{
		sentences[]=
		{
			"Wordtwo2Default",
			"(1-Stealth)",
			"Wordtwo2Stealth",
			"Stealth"
		};
	};
	class Wordtwo2Default
	{
		versions[]=
		{
			"Wordtwo2_1",
			1
		};
		class Wordtwo2_1
		{
			speech[]=
			{
				"two2"
			};
		};
	};
	class Wordtwo2Stealth
	{
		versions[]=
		{
			"Wordtwo2_1",
			1
		};
		class Wordtwo2_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"two2"
			};
		};
	};
	class Wordthree2
	{
		sentences[]=
		{
			"Wordthree2Default",
			"(1-Stealth)",
			"Wordthree2Stealth",
			"Stealth"
		};
	};
	class Wordthree2Default
	{
		versions[]=
		{
			"Wordthree2_1",
			1
		};
		class Wordthree2_1
		{
			speech[]=
			{
				"three2"
			};
		};
	};
	class Wordthree2Stealth
	{
		versions[]=
		{
			"Wordthree2_1",
			1
		};
		class Wordthree2_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"three2"
			};
		};
	};
	class Wordfour2
	{
		sentences[]=
		{
			"Wordfour2Default",
			"(1-Stealth)",
			"Wordfour2Stealth",
			"Stealth"
		};
	};
	class Wordfour2Default
	{
		versions[]=
		{
			"Wordfour2_1",
			1
		};
		class Wordfour2_1
		{
			speech[]=
			{
				"four2"
			};
		};
	};
	class Wordfour2Stealth
	{
		versions[]=
		{
			"Wordfour2_1",
			1
		};
		class Wordfour2_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"four2"
			};
		};
	};
	class Wordfive2
	{
		sentences[]=
		{
			"Wordfive2Default",
			"(1-Stealth)",
			"Wordfive2Stealth",
			"Stealth"
		};
	};
	class Wordfive2Default
	{
		versions[]=
		{
			"Wordfive2_1",
			1
		};
		class Wordfive2_1
		{
			speech[]=
			{
				"five2"
			};
		};
	};
	class Wordfive2Stealth
	{
		versions[]=
		{
			"Wordfive2_1",
			1
		};
		class Wordfive2_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"five2"
			};
		};
	};
	class Wordsix2
	{
		sentences[]=
		{
			"Wordsix2Default",
			"(1-Stealth)",
			"Wordsix2Stealth",
			"Stealth"
		};
	};
	class Wordsix2Default
	{
		versions[]=
		{
			"Wordsix2_1",
			1
		};
		class Wordsix2_1
		{
			speech[]=
			{
				"six2"
			};
		};
	};
	class Wordsix2Stealth
	{
		versions[]=
		{
			"Wordsix2_1",
			1
		};
		class Wordsix2_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"six2"
			};
		};
	};
	class Wordseven2
	{
		sentences[]=
		{
			"Wordseven2Default",
			"(1-Stealth)",
			"Wordseven2Stealth",
			"Stealth"
		};
	};
	class Wordseven2Default
	{
		versions[]=
		{
			"Wordseven2_1",
			1
		};
		class Wordseven2_1
		{
			speech[]=
			{
				"seven2"
			};
		};
	};
	class Wordseven2Stealth
	{
		versions[]=
		{
			"Wordseven2_1",
			1
		};
		class Wordseven2_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"seven2"
			};
		};
	};
	class Wordeight2
	{
		sentences[]=
		{
			"Wordeight2Default",
			"(1-Stealth)",
			"Wordeight2Stealth",
			"Stealth"
		};
	};
	class Wordeight2Default
	{
		versions[]=
		{
			"Wordeight2_1",
			1
		};
		class Wordeight2_1
		{
			speech[]=
			{
				"eight2"
			};
		};
	};
	class Wordeight2Stealth
	{
		versions[]=
		{
			"Wordeight2_1",
			1
		};
		class Wordeight2_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"eight2"
			};
		};
	};
	class Wordnine2
	{
		sentences[]=
		{
			"Wordnine2Default",
			"(1-Stealth)",
			"Wordnine2Stealth",
			"Stealth"
		};
	};
	class Wordnine2Default
	{
		versions[]=
		{
			"Wordnine2_1",
			1
		};
		class Wordnine2_1
		{
			speech[]=
			{
				"nine2"
			};
		};
	};
	class Wordnine2Stealth
	{
		versions[]=
		{
			"Wordnine2_1",
			1
		};
		class Wordnine2_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"nine2"
			};
		};
	};
	class WordAlpha
	{
		sentences[]=
		{
			"WordAlphaDefault",
			"(1-Stealth)",
			"WordAlphaStealth",
			"Stealth"
		};
	};
	class WordAlphaDefault
	{
		versions[]=
		{
			"WordAlpha_1",
			1
		};
		class WordAlpha_1
		{
			speech[]=
			{
				"Alpha"
			};
		};
	};
	class WordAlphaStealth
	{
		versions[]=
		{
			"WordAlpha_1",
			1
		};
		class WordAlpha_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Alpha"
			};
		};
	};
	class WordBravo
	{
		sentences[]=
		{
			"WordBravoDefault",
			"(1-Stealth)",
			"WordBravoStealth",
			"Stealth"
		};
	};
	class WordBravoDefault
	{
		versions[]=
		{
			"WordBravo_1",
			1
		};
		class WordBravo_1
		{
			speech[]=
			{
				"Bravo"
			};
		};
	};
	class WordBravoStealth
	{
		versions[]=
		{
			"WordBravo_1",
			1
		};
		class WordBravo_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Bravo"
			};
		};
	};
	class WordCharlie
	{
		sentences[]=
		{
			"WordCharlieDefault",
			"(1-Stealth)",
			"WordCharlieStealth",
			"Stealth"
		};
	};
	class WordCharlieDefault
	{
		versions[]=
		{
			"WordCharlie_1",
			1
		};
		class WordCharlie_1
		{
			speech[]=
			{
				"Charlie"
			};
		};
	};
	class WordCharlieStealth
	{
		versions[]=
		{
			"WordCharlie_1",
			1
		};
		class WordCharlie_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Charlie"
			};
		};
	};
	class WordDelta
	{
		sentences[]=
		{
			"WordDeltaDefault",
			"(1-Stealth)",
			"WordDeltaStealth",
			"Stealth"
		};
	};
	class WordDeltaDefault
	{
		versions[]=
		{
			"WordDelta_1",
			1
		};
		class WordDelta_1
		{
			speech[]=
			{
				"Delta"
			};
		};
	};
	class WordDeltaStealth
	{
		versions[]=
		{
			"WordDelta_1",
			1
		};
		class WordDelta_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Delta"
			};
		};
	};
	class WordEcho
	{
		sentences[]=
		{
			"WordEchoDefault",
			"(1-Stealth)",
			"WordEchoStealth",
			"Stealth"
		};
	};
	class WordEchoDefault
	{
		versions[]=
		{
			"WordEcho_1",
			1
		};
		class WordEcho_1
		{
			speech[]=
			{
				"Echo"
			};
		};
	};
	class WordEchoStealth
	{
		versions[]=
		{
			"WordEcho_1",
			1
		};
		class WordEcho_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Echo"
			};
		};
	};
	class WordFotxtrot
	{
		sentences[]=
		{
			"WordFotxtrotDefault",
			"(1-Stealth)",
			"WordFotxtrotStealth",
			"Stealth"
		};
	};
	class WordFotxtrotDefault
	{
		versions[]=
		{
			"WordFotxtrot_1",
			1
		};
		class WordFotxtrot_1
		{
			speech[]=
			{
				"Fotxtrot"
			};
		};
	};
	class WordFotxtrotStealth
	{
		versions[]=
		{
			"WordFotxtrot_1",
			1
		};
		class WordFotxtrot_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Fotxtrot"
			};
		};
	};
	class WordGolf
	{
		sentences[]=
		{
			"WordGolfDefault",
			"(1-Stealth)",
			"WordGolfStealth",
			"Stealth"
		};
	};
	class WordGolfDefault
	{
		versions[]=
		{
			"WordGolf_1",
			1
		};
		class WordGolf_1
		{
			speech[]=
			{
				"Golf"
			};
		};
	};
	class WordGolfStealth
	{
		versions[]=
		{
			"WordGolf_1",
			1
		};
		class WordGolf_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Golf"
			};
		};
	};
	class WordHotel
	{
		sentences[]=
		{
			"WordHotelDefault",
			"(1-Stealth)",
			"WordHotelStealth",
			"Stealth"
		};
	};
	class WordHotelDefault
	{
		versions[]=
		{
			"WordHotel_1",
			1
		};
		class WordHotel_1
		{
			speech[]=
			{
				"Hotel"
			};
		};
	};
	class WordHotelStealth
	{
		versions[]=
		{
			"WordHotel_1",
			1
		};
		class WordHotel_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Hotel"
			};
		};
	};
	class WordIndia
	{
		sentences[]=
		{
			"WordIndiaDefault",
			"(1-Stealth)",
			"WordIndiaStealth",
			"Stealth"
		};
	};
	class WordIndiaDefault
	{
		versions[]=
		{
			"WordIndia_1",
			1
		};
		class WordIndia_1
		{
			speech[]=
			{
				"India"
			};
		};
	};
	class WordIndiaStealth
	{
		versions[]=
		{
			"WordIndia_1",
			1
		};
		class WordIndia_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"India"
			};
		};
	};
	class WordJuliet
	{
		sentences[]=
		{
			"WordJulietDefault",
			"(1-Stealth)",
			"WordJulietStealth",
			"Stealth"
		};
	};
	class WordJulietDefault
	{
		versions[]=
		{
			"WordJuliet_1",
			1
		};
		class WordJuliet_1
		{
			speech[]=
			{
				"Juliet"
			};
		};
	};
	class WordJulietStealth
	{
		versions[]=
		{
			"WordJuliet_1",
			1
		};
		class WordJuliet_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Juliet"
			};
		};
	};
	class WordKilo
	{
		sentences[]=
		{
			"WordKiloDefault",
			"(1-Stealth)",
			"WordKiloStealth",
			"Stealth"
		};
	};
	class WordKiloDefault
	{
		versions[]=
		{
			"WordKilo_1",
			1
		};
		class WordKilo_1
		{
			speech[]=
			{
				"Kilo"
			};
		};
	};
	class WordKiloStealth
	{
		versions[]=
		{
			"WordKilo_1",
			1
		};
		class WordKilo_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Kilo"
			};
		};
	};
	class WordLima
	{
		sentences[]=
		{
			"WordLimaDefault",
			"(1-Stealth)",
			"WordLimaStealth",
			"Stealth"
		};
	};
	class WordLimaDefault
	{
		versions[]=
		{
			"WordLima_1",
			1
		};
		class WordLima_1
		{
			speech[]=
			{
				"Lima"
			};
		};
	};
	class WordLimaStealth
	{
		versions[]=
		{
			"WordLima_1",
			1
		};
		class WordLima_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Lima"
			};
		};
	};
	class WordMike
	{
		sentences[]=
		{
			"WordMikeDefault",
			"(1-Stealth)",
			"WordMikeStealth",
			"Stealth"
		};
	};
	class WordMikeDefault
	{
		versions[]=
		{
			"WordMike_1",
			1
		};
		class WordMike_1
		{
			speech[]=
			{
				"Mike"
			};
		};
	};
	class WordMikeStealth
	{
		versions[]=
		{
			"WordMike_1",
			1
		};
		class WordMike_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Mike"
			};
		};
	};
	class WordNovember
	{
		sentences[]=
		{
			"WordNovemberDefault",
			"(1-Stealth)",
			"WordNovemberStealth",
			"Stealth"
		};
	};
	class WordNovemberDefault
	{
		versions[]=
		{
			"WordNovember_1",
			1
		};
		class WordNovember_1
		{
			speech[]=
			{
				"November"
			};
		};
	};
	class WordNovemberStealth
	{
		versions[]=
		{
			"WordNovember_1",
			1
		};
		class WordNovember_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"November"
			};
		};
	};
	class WordOscar
	{
		sentences[]=
		{
			"WordOscarDefault",
			"(1-Stealth)",
			"WordOscarStealth",
			"Stealth"
		};
	};
	class WordOscarDefault
	{
		versions[]=
		{
			"WordOscar_1",
			1
		};
		class WordOscar_1
		{
			speech[]=
			{
				"Oscar"
			};
		};
	};
	class WordOscarStealth
	{
		versions[]=
		{
			"WordOscar_1",
			1
		};
		class WordOscar_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Oscar"
			};
		};
	};
	class WordPapa
	{
		sentences[]=
		{
			"WordPapaDefault",
			"(1-Stealth)",
			"WordPapaStealth",
			"Stealth"
		};
	};
	class WordPapaDefault
	{
		versions[]=
		{
			"WordPapa_1",
			1
		};
		class WordPapa_1
		{
			speech[]=
			{
				"Papa"
			};
		};
	};
	class WordPapaStealth
	{
		versions[]=
		{
			"WordPapa_1",
			1
		};
		class WordPapa_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Papa"
			};
		};
	};
	class WordQuebec
	{
		sentences[]=
		{
			"WordQuebecDefault",
			"(1-Stealth)",
			"WordQuebecStealth",
			"Stealth"
		};
	};
	class WordQuebecDefault
	{
		versions[]=
		{
			"WordQuebec_1",
			1
		};
		class WordQuebec_1
		{
			speech[]=
			{
				"Quebec"
			};
		};
	};
	class WordQuebecStealth
	{
		versions[]=
		{
			"WordQuebec_1",
			1
		};
		class WordQuebec_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Quebec"
			};
		};
	};
	class WordRomeo
	{
		sentences[]=
		{
			"WordRomeoDefault",
			"(1-Stealth)",
			"WordRomeoStealth",
			"Stealth"
		};
	};
	class WordRomeoDefault
	{
		versions[]=
		{
			"WordRomeo_1",
			1
		};
		class WordRomeo_1
		{
			speech[]=
			{
				"Romeo"
			};
		};
	};
	class WordRomeoStealth
	{
		versions[]=
		{
			"WordRomeo_1",
			1
		};
		class WordRomeo_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Romeo"
			};
		};
	};
	class WordSierra
	{
		sentences[]=
		{
			"WordSierraDefault",
			"(1-Stealth)",
			"WordSierraStealth",
			"Stealth"
		};
	};
	class WordSierraDefault
	{
		versions[]=
		{
			"WordSierra_1",
			1
		};
		class WordSierra_1
		{
			speech[]=
			{
				"Sierra"
			};
		};
	};
	class WordSierraStealth
	{
		versions[]=
		{
			"WordSierra_1",
			1
		};
		class WordSierra_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Sierra"
			};
		};
	};
	class WordTango
	{
		sentences[]=
		{
			"WordTangoDefault",
			"(1-Stealth)",
			"WordTangoStealth",
			"Stealth"
		};
	};
	class WordTangoDefault
	{
		versions[]=
		{
			"WordTango_1",
			1
		};
		class WordTango_1
		{
			speech[]=
			{
				"Tango"
			};
		};
	};
	class WordTangoStealth
	{
		versions[]=
		{
			"WordTango_1",
			1
		};
		class WordTango_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Tango"
			};
		};
	};
	class WordUniform
	{
		sentences[]=
		{
			"WordUniformDefault",
			"(1-Stealth)",
			"WordUniformStealth",
			"Stealth"
		};
	};
	class WordUniformDefault
	{
		versions[]=
		{
			"WordUniform_1",
			1
		};
		class WordUniform_1
		{
			speech[]=
			{
				"Uniform"
			};
		};
	};
	class WordUniformStealth
	{
		versions[]=
		{
			"WordUniform_1",
			1
		};
		class WordUniform_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Uniform"
			};
		};
	};
	class WordVictor
	{
		sentences[]=
		{
			"WordVictorDefault",
			"(1-Stealth)",
			"WordVictorStealth",
			"Stealth"
		};
	};
	class WordVictorDefault
	{
		versions[]=
		{
			"WordVictor_1",
			1
		};
		class WordVictor_1
		{
			speech[]=
			{
				"Victor"
			};
		};
	};
	class WordVictorStealth
	{
		versions[]=
		{
			"WordVictor_1",
			1
		};
		class WordVictor_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Victor"
			};
		};
	};
	class WordWhiskey
	{
		sentences[]=
		{
			"WordWhiskeyDefault",
			"(1-Stealth)",
			"WordWhiskeyStealth",
			"Stealth"
		};
	};
	class WordWhiskeyDefault
	{
		versions[]=
		{
			"WordWhiskey_1",
			1
		};
		class WordWhiskey_1
		{
			speech[]=
			{
				"Whiskey"
			};
		};
	};
	class WordWhiskeyStealth
	{
		versions[]=
		{
			"WordWhiskey_1",
			1
		};
		class WordWhiskey_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Whiskey"
			};
		};
	};
	class WordXray
	{
		sentences[]=
		{
			"WordXrayDefault",
			"(1-Stealth)",
			"WordXrayStealth",
			"Stealth"
		};
	};
	class WordXrayDefault
	{
		versions[]=
		{
			"WordXray_1",
			1
		};
		class WordXray_1
		{
			speech[]=
			{
				"Xray"
			};
		};
	};
	class WordXrayStealth
	{
		versions[]=
		{
			"WordXray_1",
			1
		};
		class WordXray_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Xray"
			};
		};
	};
	class WordYankee
	{
		sentences[]=
		{
			"WordYankeeDefault",
			"(1-Stealth)",
			"WordYankeeStealth",
			"Stealth"
		};
	};
	class WordYankeeDefault
	{
		versions[]=
		{
			"WordYankee_1",
			1
		};
		class WordYankee_1
		{
			speech[]=
			{
				"Yankee"
			};
		};
	};
	class WordYankeeStealth
	{
		versions[]=
		{
			"WordYankee_1",
			1
		};
		class WordYankee_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Yankee"
			};
		};
	};
	class WordZulu
	{
		sentences[]=
		{
			"WordZuluDefault",
			"(1-Stealth)",
			"WordZuluStealth",
			"Stealth"
		};
	};
	class WordZuluDefault
	{
		versions[]=
		{
			"WordZulu_1",
			1
		};
		class WordZulu_1
		{
			speech[]=
			{
				"Zulu"
			};
		};
	};
	class WordZuluStealth
	{
		versions[]=
		{
			"WordZulu_1",
			1
		};
		class WordZulu_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Zulu"
			};
		};
	};
	class WordAngel
	{
		sentences[]=
		{
			"WordAngelDefault",
			1
		};
	};
	class WordAngelDefault
	{
		versions[]=
		{
			"WordAngel_1",
			1
		};
		class WordAngel_1
		{
			speech[]=
			{
				"Angel"
			};
		};
	};
	class WordBride
	{
		sentences[]=
		{
			"WordBrideDefault",
			1
		};
	};
	class WordBrideDefault
	{
		versions[]=
		{
			"WordBride_1",
			1
		};
		class WordBride_1
		{
			speech[]=
			{
				"Bride"
			};
		};
	};
	class WordChocolate
	{
		sentences[]=
		{
			"WordChocolateDefault",
			1
		};
	};
	class WordChocolateDefault
	{
		versions[]=
		{
			"WordChocolate_1",
			1
		};
		class WordChocolate_1
		{
			speech[]=
			{
				"Chocolate"
			};
		};
	};
	class WordDad
	{
		sentences[]=
		{
			"WordDadDefault",
			1
		};
	};
	class WordDadDefault
	{
		versions[]=
		{
			"WordDad_1",
			1
		};
		class WordDad_1
		{
			speech[]=
			{
				"Dad"
			};
		};
	};
	class WordHQ
	{
		sentences[]=
		{
			"WordHQDefault",
			1
		};
	};
	class WordHQDefault
	{
		versions[]=
		{
			"WordHQ_1",
			1
		};
		class WordHQ_1
		{
			speech[]=
			{
				"HQ"
			};
		};
	};
	class WordFrostbite
	{
		sentences[]=
		{
			"WordFrostbiteDefault",
			1
		};
	};
	class WordFrostbiteDefault
	{
		versions[]=
		{
			"WordFrostbite_1",
			1
		};
		class WordFrostbite_1
		{
			speech[]=
			{
				"Frostbite"
			};
		};
	};
	class WordBase
	{
		sentences[]=
		{
			"WordBaseDefault",
			1
		};
	};
	class WordBaseDefault
	{
		versions[]=
		{
			"WordBase_1",
			1
		};
		class WordBase_1
		{
			speech[]=
			{
				"Base"
			};
		};
	};
	class WordCommand
	{
		sentences[]=
		{
			"WordCommandDefault",
			1
		};
	};
	class WordCommandDefault
	{
		versions[]=
		{
			"WordCommand_1",
			1
		};
		class WordCommand_1
		{
			speech[]=
			{
				"Command"
			};
		};
	};
	class WordBattlemage
	{
		sentences[]=
		{
			"WordBattlemageDefault",
			1
		};
	};
	class WordBattlemageDefault
	{
		versions[]=
		{
			"WordBattlemage_1",
			1
		};
		class WordBattlemage_1
		{
			speech[]=
			{
				"Battlemage"
			};
		};
	};
	class WordManhattan
	{
		sentences[]=
		{
			"WordManhattanDefault",
			1
		};
	};
	class WordManhattanDefault
	{
		versions[]=
		{
			"WordManhattan_1",
			1
		};
		class WordManhattan_1
		{
			speech[]=
			{
				"Manhattan"
			};
		};
	};
	class WordFirefly
	{
		sentences[]=
		{
			"WordFireflyDefault",
			1
		};
	};
	class WordFireflyDefault
	{
		versions[]=
		{
			"WordFirefly_1",
			1
		};
		class WordFirefly_1
		{
			speech[]=
			{
				"Firefly"
			};
		};
	};
	class WordRazor
	{
		sentences[]=
		{
			"WordRazorDefault",
			1
		};
	};
	class WordRazorDefault
	{
		versions[]=
		{
			"WordRazor_1",
			1
		};
		class WordRazor_1
		{
			speech[]=
			{
				"Razor"
			};
		};
	};
	class WordSwordsman
	{
		sentences[]=
		{
			"WordSwordsmanDefault",
			1
		};
	};
	class WordSwordsmanDefault
	{
		versions[]=
		{
			"WordSwordsman_1",
			1
		};
		class WordSwordsman_1
		{
			speech[]=
			{
				"Swordsman"
			};
		};
	};
	class WordSabre
	{
		sentences[]=
		{
			"WordSabreDefault",
			1
		};
	};
	class WordSabreDefault
	{
		versions[]=
		{
			"WordSabre_1",
			1
		};
		class WordSabre_1
		{
			speech[]=
			{
				"Sabre"
			};
		};
	};
	class WordStarForce
	{
		sentences[]=
		{
			"WordStarForceDefault",
			1
		};
	};
	class WordStarForceDefault
	{
		versions[]=
		{
			"WordStarForce_1",
			1
		};
		class WordStarForce_1
		{
			speech[]=
			{
				"StarForce"
			};
		};
	};
	class WordSuper
	{
		sentences[]=
		{
			"WordSuperDefault",
			1
		};
	};
	class WordSuperDefault
	{
		versions[]=
		{
			"WordSuper_1",
			1
		};
		class WordSuper_1
		{
			speech[]=
			{
				"Super"
			};
		};
	};
	class WordHammer
	{
		sentences[]=
		{
			"WordHammerDefault",
			1
		};
	};
	class WordHammerDefault
	{
		versions[]=
		{
			"WordHammer_1",
			1
		};
		class WordHammer_1
		{
			speech[]=
			{
				"Hammer"
			};
		};
	};
	class WordReaper
	{
		sentences[]=
		{
			"WordReaperDefault",
			1
		};
	};
	class WordReaperDefault
	{
		versions[]=
		{
			"WordReaper_1",
			1
		};
		class WordReaper_1
		{
			speech[]=
			{
				"Reaper"
			};
		};
	};
	class WordFatman
	{
		sentences[]=
		{
			"WordFatmanDefault",
			1
		};
	};
	class WordFatmanDefault
	{
		versions[]=
		{
			"WordFatman_1",
			1
		};
		class WordFatman_1
		{
			speech[]=
			{
				"Fatman"
			};
		};
	};
	class WordFortune
	{
		sentences[]=
		{
			"WordFortuneDefault",
			1
		};
	};
	class WordFortuneDefault
	{
		versions[]=
		{
			"WordFortune_1",
			1
		};
		class WordFortune_1
		{
			speech[]=
			{
				"Fortune"
			};
		};
	};
	class WordAnvil
	{
		sentences[]=
		{
			"WordAnvilDefault",
			1
		};
	};
	class WordAnvilDefault
	{
		versions[]=
		{
			"WordAnvil_1",
			1
		};
		class WordAnvil_1
		{
			speech[]=
			{
				"Anvil"
			};
		};
	};
	class WordRevolver
	{
		sentences[]=
		{
			"WordRevolverDefault",
			1
		};
	};
	class WordRevolverDefault
	{
		versions[]=
		{
			"WordRevolver_1",
			1
		};
		class WordRevolver_1
		{
			speech[]=
			{
				"Revolver"
			};
		};
	};
	class WordWinchester
	{
		sentences[]=
		{
			"WordWinchesterDefault",
			1
		};
	};
	class WordWinchesterDefault
	{
		versions[]=
		{
			"WordWinchester_1",
			1
		};
		class WordWinchester_1
		{
			speech[]=
			{
				"Winchester"
			};
		};
	};
	class WordArizona
	{
		sentences[]=
		{
			"WordArizonaDefault",
			1
		};
	};
	class WordArizonaDefault
	{
		versions[]=
		{
			"WordArizona_1",
			1
		};
		class WordArizona_1
		{
			speech[]=
			{
				"Arizona"
			};
		};
	};
	class WordWarmonger
	{
		sentences[]=
		{
			"WordWarmongerDefault",
			1
		};
	};
	class WordWarmongerDefault
	{
		versions[]=
		{
			"WordWarmonger_1",
			1
		};
		class WordWarmonger_1
		{
			speech[]=
			{
				"Warmonger"
			};
		};
	};
	class WordCitizen
	{
		sentences[]=
		{
			"WordCitizenDefault",
			1
		};
	};
	class WordCitizenDefault
	{
		versions[]=
		{
			"WordCitizen_1",
			1
		};
		class WordCitizen_1
		{
			speech[]=
			{
				"Citizen"
			};
		};
	};
	class WordUtah
	{
		sentences[]=
		{
			"WordUtahDefault",
			1
		};
	};
	class WordUtahDefault
	{
		versions[]=
		{
			"WordUtah_1",
			1
		};
		class WordUtah_1
		{
			speech[]=
			{
				"Utah"
			};
		};
	};
	class WordDemon
	{
		sentences[]=
		{
			"WordDemonDefault",
			1
		};
	};
	class WordDemonDefault
	{
		versions[]=
		{
			"WordDemon_1",
			1
		};
		class WordDemon_1
		{
			speech[]=
			{
				"Demon"
			};
		};
	};
	class WordBandit
	{
		sentences[]=
		{
			"WordBanditDefault",
			1
		};
	};
	class WordBanditDefault
	{
		versions[]=
		{
			"WordBandit_1",
			1
		};
		class WordBandit_1
		{
			speech[]=
			{
				"Bandit"
			};
		};
	};
	class WordMohican
	{
		sentences[]=
		{
			"WordMohicanDefault",
			1
		};
	};
	class WordMohicanDefault
	{
		versions[]=
		{
			"WordMohican_1",
			1
		};
		class WordMohican_1
		{
			speech[]=
			{
				"Mohican"
			};
		};
	};
	class WordDustoff
	{
		sentences[]=
		{
			"WordDustoffDefault",
			1
		};
	};
	class WordDustoffDefault
	{
		versions[]=
		{
			"WordDustoff_1",
			1
		};
		class WordDustoff_1
		{
			speech[]=
			{
				"Dustoff"
			};
		};
	};
	class WordwhiteTeam
	{
		sentences[]=
		{
			"WordwhiteTeamDefault",
			"(1-Stealth)",
			"WordwhiteTeamStealth",
			"Stealth"
		};
	};
	class WordwhiteTeamDefault
	{
		versions[]=
		{
			"WordwhiteTeam_1",
			1
		};
		class WordwhiteTeam_1
		{
			speech[]=
			{
				"whiteTeam"
			};
		};
	};
	class WordwhiteTeamStealth
	{
		versions[]=
		{
			"WordwhiteTeam_1",
			1
		};
		class WordwhiteTeam_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"whiteTeam"
			};
		};
	};
	class WordredTeam
	{
		sentences[]=
		{
			"WordredTeamDefault",
			"(1-Stealth)",
			"WordredTeamStealth",
			"Stealth"
		};
	};
	class WordredTeamDefault
	{
		versions[]=
		{
			"WordredTeam_1",
			1
		};
		class WordredTeam_1
		{
			speech[]=
			{
				"redTeam"
			};
		};
	};
	class WordredTeamStealth
	{
		versions[]=
		{
			"WordredTeam_1",
			1
		};
		class WordredTeam_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"redTeam"
			};
		};
	};
	class WordgreenTeam
	{
		sentences[]=
		{
			"WordgreenTeamDefault",
			"(1-Stealth)",
			"WordgreenTeamStealth",
			"Stealth"
		};
	};
	class WordgreenTeamDefault
	{
		versions[]=
		{
			"WordgreenTeam_1",
			1
		};
		class WordgreenTeam_1
		{
			speech[]=
			{
				"greenTeam"
			};
		};
	};
	class WordgreenTeamStealth
	{
		versions[]=
		{
			"WordgreenTeam_1",
			1
		};
		class WordgreenTeam_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"greenTeam"
			};
		};
	};
	class WordblueTeam
	{
		sentences[]=
		{
			"WordblueTeamDefault",
			"(1-Stealth)",
			"WordblueTeamStealth",
			"Stealth"
		};
	};
	class WordblueTeamDefault
	{
		versions[]=
		{
			"WordblueTeam_1",
			1
		};
		class WordblueTeam_1
		{
			speech[]=
			{
				"blueTeam"
			};
		};
	};
	class WordblueTeamStealth
	{
		versions[]=
		{
			"WordblueTeam_1",
			1
		};
		class WordblueTeam_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"blueTeam"
			};
		};
	};
	class WordyellowTeam
	{
		sentences[]=
		{
			"WordyellowTeamDefault",
			"(1-Stealth)",
			"WordyellowTeamStealth",
			"Stealth"
		};
	};
	class WordyellowTeamDefault
	{
		versions[]=
		{
			"WordyellowTeam_1",
			1
		};
		class WordyellowTeam_1
		{
			speech[]=
			{
				"yellowTeam"
			};
		};
	};
	class WordyellowTeamStealth
	{
		versions[]=
		{
			"WordyellowTeam_1",
			1
		};
		class WordyellowTeam_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"yellowTeam"
			};
		};
	};
	class WordallGroup
	{
		sentences[]=
		{
			"WordallGroupDefault",
			"(1-Stealth)",
			"WordallGroupStealth",
			"Stealth"
		};
	};
	class WordallGroupDefault
	{
		versions[]=
		{
			"WordallGroup_1",
			1
		};
		class WordallGroup_1
		{
			speech[]=
			{
				"allGroup"
			};
		};
	};
	class WordallGroupStealth
	{
		versions[]=
		{
			"WordallGroup_1",
			1
		};
		class WordallGroup_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"allGroup"
			};
		};
	};
	class Wordat1
	{
		sentences[]=
		{
			"Wordat1Default",
			"(1-Stealth)",
			"Wordat1Stealth",
			"Stealth"
		};
	};
	class Wordat1Default
	{
		versions[]=
		{
			"Wordat1_1",
			1
		};
		class Wordat1_1
		{
			speech[]=
			{
				"at1"
			};
		};
	};
	class Wordat1Stealth
	{
		versions[]=
		{
			"Wordat1_1",
			1
		};
		class Wordat1_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"at1"
			};
		};
	};
	class Wordat2
	{
		sentences[]=
		{
			"Wordat2Default",
			"(1-Stealth)",
			"Wordat2Stealth",
			"Stealth"
		};
	};
	class Wordat2Default
	{
		versions[]=
		{
			"Wordat2_1",
			1
		};
		class Wordat2_1
		{
			speech[]=
			{
				"at2"
			};
		};
	};
	class Wordat2Stealth
	{
		versions[]=
		{
			"Wordat2_1",
			1
		};
		class Wordat2_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"at2"
			};
		};
	};
	class Wordat3
	{
		sentences[]=
		{
			"Wordat3Default",
			"(1-Stealth)",
			"Wordat3Stealth",
			"Stealth"
		};
	};
	class Wordat3Default
	{
		versions[]=
		{
			"Wordat3_1",
			1
		};
		class Wordat3_1
		{
			speech[]=
			{
				"at3"
			};
		};
	};
	class Wordat3Stealth
	{
		versions[]=
		{
			"Wordat3_1",
			1
		};
		class Wordat3_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"at3"
			};
		};
	};
	class Wordat4
	{
		sentences[]=
		{
			"Wordat4Default",
			"(1-Stealth)",
			"Wordat4Stealth",
			"Stealth"
		};
	};
	class Wordat4Default
	{
		versions[]=
		{
			"Wordat4_1",
			1
		};
		class Wordat4_1
		{
			speech[]=
			{
				"at4"
			};
		};
	};
	class Wordat4Stealth
	{
		versions[]=
		{
			"Wordat4_1",
			1
		};
		class Wordat4_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"at4"
			};
		};
	};
	class Wordat5
	{
		sentences[]=
		{
			"Wordat5Default",
			"(1-Stealth)",
			"Wordat5Stealth",
			"Stealth"
		};
	};
	class Wordat5Default
	{
		versions[]=
		{
			"Wordat5_1",
			1
		};
		class Wordat5_1
		{
			speech[]=
			{
				"at5"
			};
		};
	};
	class Wordat5Stealth
	{
		versions[]=
		{
			"Wordat5_1",
			1
		};
		class Wordat5_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"at5"
			};
		};
	};
	class Wordat6
	{
		sentences[]=
		{
			"Wordat6Default",
			"(1-Stealth)",
			"Wordat6Stealth",
			"Stealth"
		};
	};
	class Wordat6Default
	{
		versions[]=
		{
			"Wordat6_1",
			1
		};
		class Wordat6_1
		{
			speech[]=
			{
				"at6"
			};
		};
	};
	class Wordat6Stealth
	{
		versions[]=
		{
			"Wordat6_1",
			1
		};
		class Wordat6_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"at6"
			};
		};
	};
	class Wordat7
	{
		sentences[]=
		{
			"Wordat7Default",
			"(1-Stealth)",
			"Wordat7Stealth",
			"Stealth"
		};
	};
	class Wordat7Default
	{
		versions[]=
		{
			"Wordat7_1",
			1
		};
		class Wordat7_1
		{
			speech[]=
			{
				"at7"
			};
		};
	};
	class Wordat7Stealth
	{
		versions[]=
		{
			"Wordat7_1",
			1
		};
		class Wordat7_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"at7"
			};
		};
	};
	class Wordat8
	{
		sentences[]=
		{
			"Wordat8Default",
			"(1-Stealth)",
			"Wordat8Stealth",
			"Stealth"
		};
	};
	class Wordat8Default
	{
		versions[]=
		{
			"Wordat8_1",
			1
		};
		class Wordat8_1
		{
			speech[]=
			{
				"at8"
			};
		};
	};
	class Wordat8Stealth
	{
		versions[]=
		{
			"Wordat8_1",
			1
		};
		class Wordat8_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"at8"
			};
		};
	};
	class Wordat9
	{
		sentences[]=
		{
			"Wordat9Default",
			"(1-Stealth)",
			"Wordat9Stealth",
			"Stealth"
		};
	};
	class Wordat9Default
	{
		versions[]=
		{
			"Wordat9_1",
			1
		};
		class Wordat9_1
		{
			speech[]=
			{
				"at9"
			};
		};
	};
	class Wordat9Stealth
	{
		versions[]=
		{
			"Wordat9_1",
			1
		};
		class Wordat9_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"at9"
			};
		};
	};
	class Wordat10
	{
		sentences[]=
		{
			"Wordat10Default",
			"(1-Stealth)",
			"Wordat10Stealth",
			"Stealth"
		};
	};
	class Wordat10Default
	{
		versions[]=
		{
			"Wordat10_1",
			1
		};
		class Wordat10_1
		{
			speech[]=
			{
				"at10"
			};
		};
	};
	class Wordat10Stealth
	{
		versions[]=
		{
			"Wordat10_1",
			1
		};
		class Wordat10_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"at10"
			};
		};
	};
	class Wordat11
	{
		sentences[]=
		{
			"Wordat11Default",
			"(1-Stealth)",
			"Wordat11Stealth",
			"Stealth"
		};
	};
	class Wordat11Default
	{
		versions[]=
		{
			"Wordat11_1",
			1
		};
		class Wordat11_1
		{
			speech[]=
			{
				"at11"
			};
		};
	};
	class Wordat11Stealth
	{
		versions[]=
		{
			"Wordat11_1",
			1
		};
		class Wordat11_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"at11"
			};
		};
	};
	class Wordat12
	{
		sentences[]=
		{
			"Wordat12Default",
			"(1-Stealth)",
			"Wordat12Stealth",
			"Stealth"
		};
	};
	class Wordat12Default
	{
		versions[]=
		{
			"Wordat12_1",
			1
		};
		class Wordat12_1
		{
			speech[]=
			{
				"at12"
			};
		};
	};
	class Wordat12Stealth
	{
		versions[]=
		{
			"Wordat12_1",
			1
		};
		class Wordat12_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"at12"
			};
		};
	};
	class Worddist50
	{
		sentences[]=
		{
			"Worddist50Default",
			"(1-Stealth)",
			"Worddist50Stealth",
			"Stealth"
		};
	};
	class Worddist50Default
	{
		versions[]=
		{
			"Worddist50_1",
			1
		};
		class Worddist50_1
		{
			speech[]=
			{
				"dist50"
			};
		};
	};
	class Worddist50Stealth
	{
		versions[]=
		{
			"Worddist50_1",
			1
		};
		class Worddist50_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"dist50"
			};
		};
	};
	class Worddist100
	{
		sentences[]=
		{
			"Worddist100Default",
			"(1-Stealth)",
			"Worddist100Stealth",
			"Stealth"
		};
	};
	class Worddist100Default
	{
		versions[]=
		{
			"Worddist100_1",
			1
		};
		class Worddist100_1
		{
			speech[]=
			{
				"dist100"
			};
		};
	};
	class Worddist100Stealth
	{
		versions[]=
		{
			"Worddist100_1",
			1
		};
		class Worddist100_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"dist100"
			};
		};
	};
	class Worddist200
	{
		sentences[]=
		{
			"Worddist200Default",
			"(1-Stealth)",
			"Worddist200Stealth",
			"Stealth"
		};
	};
	class Worddist200Default
	{
		versions[]=
		{
			"Worddist200_1",
			1
		};
		class Worddist200_1
		{
			speech[]=
			{
				"dist200"
			};
		};
	};
	class Worddist200Stealth
	{
		versions[]=
		{
			"Worddist200_1",
			1
		};
		class Worddist200_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"dist200"
			};
		};
	};
	class Worddist500
	{
		sentences[]=
		{
			"Worddist500Default",
			"(1-Stealth)",
			"Worddist500Stealth",
			"Stealth"
		};
	};
	class Worddist500Default
	{
		versions[]=
		{
			"Worddist500_1",
			1
		};
		class Worddist500_1
		{
			speech[]=
			{
				"dist500"
			};
		};
	};
	class Worddist500Stealth
	{
		versions[]=
		{
			"Worddist500_1",
			1
		};
		class Worddist500_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"dist500"
			};
		};
	};
	class Worddist1000
	{
		sentences[]=
		{
			"Worddist1000Default",
			"(1-Stealth)",
			"Worddist1000Stealth",
			"Stealth"
		};
	};
	class Worddist1000Default
	{
		versions[]=
		{
			"Worddist1000_1",
			1
		};
		class Worddist1000_1
		{
			speech[]=
			{
				"dist1000"
			};
		};
	};
	class Worddist1000Stealth
	{
		versions[]=
		{
			"Worddist1000_1",
			1
		};
		class Worddist1000_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"dist1000"
			};
		};
	};
	class Worddist2000
	{
		sentences[]=
		{
			"Worddist2000Default",
			"(1-Stealth)",
			"Worddist2000Stealth",
			"Stealth"
		};
	};
	class Worddist2000Default
	{
		versions[]=
		{
			"Worddist2000_1",
			1
		};
		class Worddist2000_1
		{
			speech[]=
			{
				"dist2000"
			};
		};
	};
	class Worddist2000Stealth
	{
		versions[]=
		{
			"Worddist2000_1",
			1
		};
		class Worddist2000_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"dist2000"
			};
		};
	};
	class WorddistFar
	{
		sentences[]=
		{
			"WorddistFarDefault",
			"(1-Stealth)",
			"WorddistFarStealth",
			"Stealth"
		};
	};
	class WorddistFarDefault
	{
		versions[]=
		{
			"WorddistFar_1",
			1
		};
		class WorddistFar_1
		{
			speech[]=
			{
				"distFar"
			};
		};
	};
	class WorddistFarStealth
	{
		versions[]=
		{
			"WorddistFar_1",
			1
		};
		class WorddistFar_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"distFar"
			};
		};
	};
	class WordMeters
	{
		sentences[]=
		{
			"WordMetersDefault",
			"(1-Stealth)",
			"WordMetersStealth",
			"Stealth"
		};
	};
	class WordMetersDefault
	{
		versions[]=
		{
			"WordMeters_1",
			1
		};
		class WordMeters_1
		{
			speech[]=
			{
				"Meters"
			};
		};
	};
	class WordMetersStealth
	{
		versions[]=
		{
			"WordMeters_1",
			1
		};
		class WordMeters_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Meters"
			};
		};
	};
	class WordNorth
	{
		sentences[]=
		{
			"WordNorthDefault",
			"(1-Stealth)",
			"WordNorthStealth",
			"Stealth"
		};
	};
	class WordNorthDefault
	{
		versions[]=
		{
			"WordNorth_1",
			1
		};
		class WordNorth_1
		{
			speech[]=
			{
				"North"
			};
		};
	};
	class WordNorthStealth
	{
		versions[]=
		{
			"WordNorth_1",
			1
		};
		class WordNorth_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"North"
			};
		};
	};
	class WordSouth
	{
		sentences[]=
		{
			"WordSouthDefault",
			"(1-Stealth)",
			"WordSouthStealth",
			"Stealth"
		};
	};
	class WordSouthDefault
	{
		versions[]=
		{
			"WordSouth_1",
			1
		};
		class WordSouth_1
		{
			speech[]=
			{
				"South"
			};
		};
	};
	class WordSouthStealth
	{
		versions[]=
		{
			"WordSouth_1",
			1
		};
		class WordSouth_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"South"
			};
		};
	};
	class WordWest
	{
		sentences[]=
		{
			"WordWestDefault",
			"(1-Stealth)",
			"WordWestStealth",
			"Stealth"
		};
	};
	class WordWestDefault
	{
		versions[]=
		{
			"WordWest_1",
			1
		};
		class WordWest_1
		{
			speech[]=
			{
				"West"
			};
		};
	};
	class WordWestStealth
	{
		versions[]=
		{
			"WordWest_1",
			1
		};
		class WordWest_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"West"
			};
		};
	};
	class WordEast
	{
		sentences[]=
		{
			"WordEastDefault",
			"(1-Stealth)",
			"WordEastStealth",
			"Stealth"
		};
	};
	class WordEastDefault
	{
		versions[]=
		{
			"WordEast_1",
			1
		};
		class WordEast_1
		{
			speech[]=
			{
				"East"
			};
		};
	};
	class WordEastStealth
	{
		versions[]=
		{
			"WordEast_1",
			1
		};
		class WordEast_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"East"
			};
		};
	};
	class WordNorthwest
	{
		sentences[]=
		{
			"WordNorthwestDefault",
			"(1-Stealth)",
			"WordNorthwestStealth",
			"Stealth"
		};
	};
	class WordNorthwestDefault
	{
		versions[]=
		{
			"WordNorthwest_1",
			1
		};
		class WordNorthwest_1
		{
			speech[]=
			{
				"Northwest"
			};
		};
	};
	class WordNorthwestStealth
	{
		versions[]=
		{
			"WordNorthwest_1",
			1
		};
		class WordNorthwest_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Northwest"
			};
		};
	};
	class WordSouthwest
	{
		sentences[]=
		{
			"WordSouthwestDefault",
			"(1-Stealth)",
			"WordSouthwestStealth",
			"Stealth"
		};
	};
	class WordSouthwestDefault
	{
		versions[]=
		{
			"WordSouthwest_1",
			1
		};
		class WordSouthwest_1
		{
			speech[]=
			{
				"Southwest"
			};
		};
	};
	class WordSouthwestStealth
	{
		versions[]=
		{
			"WordSouthwest_1",
			1
		};
		class WordSouthwest_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Southwest"
			};
		};
	};
	class WordNortheast
	{
		sentences[]=
		{
			"WordNortheastDefault",
			"(1-Stealth)",
			"WordNortheastStealth",
			"Stealth"
		};
	};
	class WordNortheastDefault
	{
		versions[]=
		{
			"WordNortheast_1",
			1
		};
		class WordNortheast_1
		{
			speech[]=
			{
				"Northeast"
			};
		};
	};
	class WordNortheastStealth
	{
		versions[]=
		{
			"WordNortheast_1",
			1
		};
		class WordNortheast_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Northeast"
			};
		};
	};
	class WordSoutheast
	{
		sentences[]=
		{
			"WordSoutheastDefault",
			"(1-Stealth)",
			"WordSoutheastStealth",
			"Stealth"
		};
	};
	class WordSoutheastDefault
	{
		versions[]=
		{
			"WordSoutheast_1",
			1
		};
		class WordSoutheast_1
		{
			speech[]=
			{
				"Southeast"
			};
		};
	};
	class WordSoutheastStealth
	{
		versions[]=
		{
			"WordSoutheast_1",
			1
		};
		class WordSoutheast_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Southeast"
			};
		};
	};
	class WordNorthOf
	{
		sentences[]=
		{
			"WordNorthOfDefault",
			"(1-Stealth)",
			"WordNorthOfStealth",
			"Stealth"
		};
	};
	class WordNorthOfDefault
	{
		versions[]=
		{
			"WordNorthOf_1",
			1
		};
		class WordNorthOf_1
		{
			speech[]=
			{
				"NorthOf"
			};
		};
	};
	class WordNorthOfStealth
	{
		versions[]=
		{
			"WordNorthOf_1",
			1
		};
		class WordNorthOf_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"NorthOf"
			};
		};
	};
	class WordSouthOf
	{
		sentences[]=
		{
			"WordSouthOfDefault",
			"(1-Stealth)",
			"WordSouthOfStealth",
			"Stealth"
		};
	};
	class WordSouthOfDefault
	{
		versions[]=
		{
			"WordSouthOf_1",
			1
		};
		class WordSouthOf_1
		{
			speech[]=
			{
				"SouthOf"
			};
		};
	};
	class WordSouthOfStealth
	{
		versions[]=
		{
			"WordSouthOf_1",
			1
		};
		class WordSouthOf_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"SouthOf"
			};
		};
	};
	class WordWestOf
	{
		sentences[]=
		{
			"WordWestOfDefault",
			"(1-Stealth)",
			"WordWestOfStealth",
			"Stealth"
		};
	};
	class WordWestOfDefault
	{
		versions[]=
		{
			"WordWestOf_1",
			1
		};
		class WordWestOf_1
		{
			speech[]=
			{
				"WestOf"
			};
		};
	};
	class WordWestOfStealth
	{
		versions[]=
		{
			"WordWestOf_1",
			1
		};
		class WordWestOf_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"WestOf"
			};
		};
	};
	class WordEastOf
	{
		sentences[]=
		{
			"WordEastOfDefault",
			"(1-Stealth)",
			"WordEastOfStealth",
			"Stealth"
		};
	};
	class WordEastOfDefault
	{
		versions[]=
		{
			"WordEastOf_1",
			1
		};
		class WordEastOf_1
		{
			speech[]=
			{
				"EastOf"
			};
		};
	};
	class WordEastOfStealth
	{
		versions[]=
		{
			"WordEastOf_1",
			1
		};
		class WordEastOf_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"EastOf"
			};
		};
	};
	class WordNorthEastOf
	{
		sentences[]=
		{
			"WordNorthEastOfDefault",
			"(1-Stealth)",
			"WordNorthEastOfStealth",
			"Stealth"
		};
	};
	class WordNorthEastOfDefault
	{
		versions[]=
		{
			"WordNorthEastOf_1",
			1
		};
		class WordNorthEastOf_1
		{
			speech[]=
			{
				"NorthEastOf"
			};
		};
	};
	class WordNorthEastOfStealth
	{
		versions[]=
		{
			"WordNorthEastOf_1",
			1
		};
		class WordNorthEastOf_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"NorthEastOf"
			};
		};
	};
	class WordSouthEastOf
	{
		sentences[]=
		{
			"WordSouthEastOfDefault",
			"(1-Stealth)",
			"WordSouthEastOfStealth",
			"Stealth"
		};
	};
	class WordSouthEastOfDefault
	{
		versions[]=
		{
			"WordSouthEastOf_1",
			1
		};
		class WordSouthEastOf_1
		{
			speech[]=
			{
				"SouthEastOf"
			};
		};
	};
	class WordSouthEastOfStealth
	{
		versions[]=
		{
			"WordSouthEastOf_1",
			1
		};
		class WordSouthEastOf_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"SouthEastOf"
			};
		};
	};
	class WordNorthWestOf
	{
		sentences[]=
		{
			"WordNorthWestOfDefault",
			"(1-Stealth)",
			"WordNorthWestOfStealth",
			"Stealth"
		};
	};
	class WordNorthWestOfDefault
	{
		versions[]=
		{
			"WordNorthWestOf_1",
			1
		};
		class WordNorthWestOf_1
		{
			speech[]=
			{
				"NorthWestOf"
			};
		};
	};
	class WordNorthWestOfStealth
	{
		versions[]=
		{
			"WordNorthWestOf_1",
			1
		};
		class WordNorthWestOf_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"NorthWestOf"
			};
		};
	};
	class WordSouthWestOf
	{
		sentences[]=
		{
			"WordSouthWestOfDefault",
			"(1-Stealth)",
			"WordSouthWestOfStealth",
			"Stealth"
		};
	};
	class WordSouthWestOfDefault
	{
		versions[]=
		{
			"WordSouthWestOf_1",
			1
		};
		class WordSouthWestOf_1
		{
			speech[]=
			{
				"SouthWestOf"
			};
		};
	};
	class WordSouthWestOfStealth
	{
		versions[]=
		{
			"WordSouthWestOf_1",
			1
		};
		class WordSouthWestOf_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"SouthWestOf"
			};
		};
	};
	class Wordfront
	{
		sentences[]=
		{
			"WordfrontDefault",
			"(1-Stealth)",
			"WordfrontStealth",
			"Stealth"
		};
	};
	class WordfrontDefault
	{
		versions[]=
		{
			"Wordfront_1",
			1
		};
		class Wordfront_1
		{
			speech[]=
			{
				"front"
			};
		};
	};
	class WordfrontStealth
	{
		versions[]=
		{
			"Wordfront_1",
			1
		};
		class Wordfront_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"front"
			};
		};
	};
	class Wordrear
	{
		sentences[]=
		{
			"WordrearDefault",
			"(1-Stealth)",
			"WordrearStealth",
			"Stealth"
		};
	};
	class WordrearDefault
	{
		versions[]=
		{
			"Wordrear_1",
			1
		};
		class Wordrear_1
		{
			speech[]=
			{
				"rear"
			};
		};
	};
	class WordrearStealth
	{
		versions[]=
		{
			"Wordrear_1",
			1
		};
		class Wordrear_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"rear"
			};
		};
	};
	class WordClose
	{
		sentences[]=
		{
			"WordCloseDefault",
			"(1-Stealth)",
			"WordCloseStealth",
			"Stealth"
		};
	};
	class WordCloseDefault
	{
		versions[]=
		{
			"WordClose_1",
			1
		};
		class WordClose_1
		{
			speech[]=
			{
				"Close"
			};
		};
	};
	class WordCloseStealth
	{
		versions[]=
		{
			"WordClose_1",
			1
		};
		class WordClose_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Close"
			};
		};
	};
	class WordMediumRange
	{
		sentences[]=
		{
			"WordMediumRangeDefault",
			"(1-Stealth)",
			"WordMediumRangeStealth",
			"Stealth"
		};
	};
	class WordMediumRangeDefault
	{
		versions[]=
		{
			"WordMediumRange_1",
			1
		};
		class WordMediumRange_1
		{
			speech[]=
			{
				"MediumRange"
			};
		};
	};
	class WordMediumRangeStealth
	{
		versions[]=
		{
			"WordMediumRange_1",
			1
		};
		class WordMediumRange_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"MediumRange"
			};
		};
	};
	class WordFar
	{
		sentences[]=
		{
			"WordFarDefault",
			"(1-Stealth)",
			"WordFarStealth",
			"Stealth"
		};
	};
	class WordFarDefault
	{
		versions[]=
		{
			"WordFar_1",
			1
		};
		class WordFar_1
		{
			speech[]=
			{
				"Far"
			};
		};
	};
	class WordFarStealth
	{
		versions[]=
		{
			"WordFar_1",
			1
		};
		class WordFar_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Far"
			};
		};
	};
	class WordBombs
	{
		sentences[]=
		{
			"WordBombsDefault",
			"(1-Stealth)",
			"WordBombsStealth",
			"Stealth"
		};
	};
	class WordBombsDefault
	{
		versions[]=
		{
			"WordBombs_1",
			1
		};
		class WordBombs_1
		{
			speech[]=
			{
				"Bombs"
			};
		};
	};
	class WordBombsStealth
	{
		versions[]=
		{
			"WordBombs_1",
			1
		};
		class WordBombs_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Bombs"
			};
		};
	};
	class WordcannonHigh
	{
		sentences[]=
		{
			"WordcannonHighDefault",
			"(1-Stealth)",
			"WordcannonHighStealth",
			"Stealth"
		};
	};
	class WordcannonHighDefault
	{
		versions[]=
		{
			"WordcannonHigh_1",
			1
		};
		class WordcannonHigh_1
		{
			speech[]=
			{
				"cannonHigh"
			};
		};
	};
	class WordcannonHighStealth
	{
		versions[]=
		{
			"WordcannonHigh_1",
			1
		};
		class WordcannonHigh_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"cannonHigh"
			};
		};
	};
	class WordcannonLow
	{
		sentences[]=
		{
			"WordcannonLowDefault",
			"(1-Stealth)",
			"WordcannonLowStealth",
			"Stealth"
		};
	};
	class WordcannonLowDefault
	{
		versions[]=
		{
			"WordcannonLow_1",
			1
		};
		class WordcannonLow_1
		{
			speech[]=
			{
				"cannonLow"
			};
		};
	};
	class WordcannonLowStealth
	{
		versions[]=
		{
			"WordcannonLow_1",
			1
		};
		class WordcannonLow_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"cannonLow"
			};
		};
	};
	class WordFlares
	{
		sentences[]=
		{
			"WordFlaresDefault",
			"(1-Stealth)",
			"WordFlaresStealth",
			"Stealth"
		};
	};
	class WordFlaresDefault
	{
		versions[]=
		{
			"WordFlares_1",
			1
		};
		class WordFlares_1
		{
			speech[]=
			{
				"Flares"
			};
		};
	};
	class WordFlaresStealth
	{
		versions[]=
		{
			"WordFlares_1",
			1
		};
		class WordFlares_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Flares"
			};
		};
	};
	class WordMissiles
	{
		sentences[]=
		{
			"WordMissilesDefault",
			"(1-Stealth)",
			"WordMissilesStealth",
			"Stealth"
		};
	};
	class WordMissilesDefault
	{
		versions[]=
		{
			"WordMissiles_1",
			1
		};
		class WordMissiles_1
		{
			speech[]=
			{
				"Missiles"
			};
		};
	};
	class WordMissilesStealth
	{
		versions[]=
		{
			"WordMissiles_1",
			1
		};
		class WordMissiles_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Missiles"
			};
		};
	};
	class WordRockets
	{
		sentences[]=
		{
			"WordRocketsDefault",
			"(1-Stealth)",
			"WordRocketsStealth",
			"Stealth"
		};
	};
	class WordRocketsDefault
	{
		versions[]=
		{
			"WordRockets_1",
			1
		};
		class WordRockets_1
		{
			speech[]=
			{
				"Rockets"
			};
		};
	};
	class WordRocketsStealth
	{
		versions[]=
		{
			"WordRockets_1",
			1
		};
		class WordRockets_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Rockets"
			};
		};
	};
	class WordSmoke
	{
		sentences[]=
		{
			"WordSmokeDefault",
			"(1-Stealth)",
			"WordSmokeStealth",
			"Stealth"
		};
	};
	class WordSmokeDefault
	{
		versions[]=
		{
			"WordSmoke_1",
			1
		};
		class WordSmoke_1
		{
			speech[]=
			{
				"Smoke"
			};
		};
	};
	class WordSmokeStealth
	{
		versions[]=
		{
			"WordSmoke_1",
			1
		};
		class WordSmoke_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Smoke"
			};
		};
	};
	class WordAALauncher
	{
		sentences[]=
		{
			"WordAALauncherDefault",
			"(1-Stealth)",
			"WordAALauncherStealth",
			"Stealth"
		};
	};
	class WordAALauncherDefault
	{
		versions[]=
		{
			"WordAALauncher_1",
			1
		};
		class WordAALauncher_1
		{
			speech[]=
			{
				"AALauncher"
			};
		};
	};
	class WordAALauncherStealth
	{
		versions[]=
		{
			"WordAALauncher_1",
			1
		};
		class WordAALauncher_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"AALauncher"
			};
		};
	};
	class WordATLauncher
	{
		sentences[]=
		{
			"WordATLauncherDefault",
			"(1-Stealth)",
			"WordATLauncherStealth",
			"Stealth"
		};
	};
	class WordATLauncherDefault
	{
		versions[]=
		{
			"WordATLauncher_1",
			1
		};
		class WordATLauncher_1
		{
			speech[]=
			{
				"ATLauncher"
			};
		};
	};
	class WordATLauncherStealth
	{
		versions[]=
		{
			"WordATLauncher_1",
			1
		};
		class WordATLauncher_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"ATLauncher"
			};
		};
	};
	class WordBackpack
	{
		sentences[]=
		{
			"WordBackpackDefault",
			"(1-Stealth)",
			"WordBackpackStealth",
			"Stealth"
		};
	};
	class WordBackpackDefault
	{
		versions[]=
		{
			"WordBackpack_1",
			1
		};
		class WordBackpack_1
		{
			speech[]=
			{
				"Backpack"
			};
		};
	};
	class WordBackpackStealth
	{
		versions[]=
		{
			"WordBackpack_1",
			1
		};
		class WordBackpack_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Backpack"
			};
		};
	};
	class WordBinocular
	{
		sentences[]=
		{
			"WordBinocularDefault",
			"(1-Stealth)",
			"WordBinocularStealth",
			"Stealth"
		};
	};
	class WordBinocularDefault
	{
		versions[]=
		{
			"WordBinocular_1",
			1
		};
		class WordBinocular_1
		{
			speech[]=
			{
				"Binocular"
			};
		};
	};
	class WordBinocularStealth
	{
		versions[]=
		{
			"WordBinocular_1",
			1
		};
		class WordBinocular_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Binocular"
			};
		};
	};
	class WordFlare
	{
		sentences[]=
		{
			"WordFlareDefault",
			"(1-Stealth)",
			"WordFlareStealth",
			"Stealth"
		};
	};
	class WordFlareDefault
	{
		versions[]=
		{
			"WordFlare_1",
			1
		};
		class WordFlare_1
		{
			speech[]=
			{
				"Flare"
			};
		};
	};
	class WordFlareStealth
	{
		versions[]=
		{
			"WordFlare_1",
			1
		};
		class WordFlare_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Flare"
			};
		};
	};
	class WordGrenade
	{
		sentences[]=
		{
			"WordGrenadeDefault",
			"(1-Stealth)",
			"WordGrenadeStealth",
			"Stealth"
		};
	};
	class WordGrenadeDefault
	{
		versions[]=
		{
			"WordGrenade_1",
			1
		};
		class WordGrenade_1
		{
			speech[]=
			{
				"Grenade"
			};
		};
	};
	class WordGrenadeStealth
	{
		versions[]=
		{
			"WordGrenade_1",
			1
		};
		class WordGrenade_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Grenade"
			};
		};
	};
	class WordGrenadeLauncher
	{
		sentences[]=
		{
			"WordGrenadeLauncherDefault",
			"(1-Stealth)",
			"WordGrenadeLauncherStealth",
			"Stealth"
		};
	};
	class WordGrenadeLauncherDefault
	{
		versions[]=
		{
			"WordGrenadeLauncher_1",
			1
		};
		class WordGrenadeLauncher_1
		{
			speech[]=
			{
				"GrenadeLauncher"
			};
		};
	};
	class WordGrenadeLauncherStealth
	{
		versions[]=
		{
			"WordGrenadeLauncher_1",
			1
		};
		class WordGrenadeLauncher_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"GrenadeLauncher"
			};
		};
	};
	class WordHandGrenade
	{
		sentences[]=
		{
			"WordHandGrenadeDefault",
			"(1-Stealth)",
			"WordHandGrenadeStealth",
			"Stealth"
		};
	};
	class WordHandGrenadeDefault
	{
		versions[]=
		{
			"WordHandGrenade_1",
			1
		};
		class WordHandGrenade_1
		{
			speech[]=
			{
				"HandGrenade"
			};
		};
	};
	class WordHandGrenadeStealth
	{
		versions[]=
		{
			"WordHandGrenade_1",
			1
		};
		class WordHandGrenade_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HandGrenade"
			};
		};
	};
	class WordLaserDesignator
	{
		sentences[]=
		{
			"WordLaserDesignatorDefault",
			"(1-Stealth)",
			"WordLaserDesignatorStealth",
			"Stealth"
		};
	};
	class WordLaserDesignatorDefault
	{
		versions[]=
		{
			"WordLaserDesignator_1",
			1
		};
		class WordLaserDesignator_1
		{
			speech[]=
			{
				"LaserDesignator"
			};
		};
	};
	class WordLaserDesignatorStealth
	{
		versions[]=
		{
			"WordLaserDesignator_1",
			1
		};
		class WordLaserDesignator_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"LaserDesignator"
			};
		};
	};
	class WordMagazine
	{
		sentences[]=
		{
			"WordMagazineDefault",
			"(1-Stealth)",
			"WordMagazineStealth",
			"Stealth"
		};
	};
	class WordMagazineDefault
	{
		versions[]=
		{
			"WordMagazine_1",
			1
		};
		class WordMagazine_1
		{
			speech[]=
			{
				"Magazine"
			};
		};
	};
	class WordMagazineStealth
	{
		versions[]=
		{
			"WordMagazine_1",
			1
		};
		class WordMagazine_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Magazine"
			};
		};
	};
	class WordMachineGun
	{
		sentences[]=
		{
			"WordMachineGunDefault",
			"(1-Stealth)",
			"WordMachineGunStealth",
			"Stealth"
		};
	};
	class WordMachineGunDefault
	{
		versions[]=
		{
			"WordMachineGun_1",
			1
		};
		class WordMachineGun_1
		{
			speech[]=
			{
				"MachineGun"
			};
		};
	};
	class WordMachineGunStealth
	{
		versions[]=
		{
			"WordMachineGun_1",
			1
		};
		class WordMachineGun_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"MachineGun"
			};
		};
	};
	class WordMine
	{
		sentences[]=
		{
			"WordMineDefault",
			"(1-Stealth)",
			"WordMineStealth",
			"Stealth"
		};
	};
	class WordMineDefault
	{
		versions[]=
		{
			"WordMine_1",
			1
		};
		class WordMine_1
		{
			speech[]=
			{
				"Mine"
			};
		};
	};
	class WordMineStealth
	{
		versions[]=
		{
			"WordMine_1",
			1
		};
		class WordMine_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Mine"
			};
		};
	};
	class WordNVG
	{
		sentences[]=
		{
			"WordNVGDefault",
			"(1-Stealth)",
			"WordNVGStealth",
			"Stealth"
		};
	};
	class WordNVGDefault
	{
		versions[]=
		{
			"WordNVG_1",
			1
		};
		class WordNVG_1
		{
			speech[]=
			{
				"NVG"
			};
		};
	};
	class WordNVGStealth
	{
		versions[]=
		{
			"WordNVG_1",
			1
		};
		class WordNVG_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"NVG"
			};
		};
	};
	class WordRifle
	{
		sentences[]=
		{
			"WordRifleDefault",
			"(1-Stealth)",
			"WordRifleStealth",
			"Stealth"
		};
	};
	class WordRifleDefault
	{
		versions[]=
		{
			"WordRifle_1",
			1
		};
		class WordRifle_1
		{
			speech[]=
			{
				"Rifle"
			};
		};
	};
	class WordRifleStealth
	{
		versions[]=
		{
			"WordRifle_1",
			1
		};
		class WordRifle_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Rifle"
			};
		};
	};
	class WordCharge
	{
		sentences[]=
		{
			"WordChargeDefault",
			"(1-Stealth)",
			"WordChargeStealth",
			"Stealth"
		};
	};
	class WordChargeDefault
	{
		versions[]=
		{
			"WordCharge_1",
			1
		};
		class WordCharge_1
		{
			speech[]=
			{
				"Charge"
			};
		};
	};
	class WordChargeStealth
	{
		versions[]=
		{
			"WordCharge_1",
			1
		};
		class WordCharge_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Charge"
			};
		};
	};
	class WordHandgun
	{
		sentences[]=
		{
			"WordHandgunDefault",
			"(1-Stealth)",
			"WordHandgunStealth",
			"Stealth"
		};
	};
	class WordHandgunDefault
	{
		versions[]=
		{
			"WordHandgun_1",
			1
		};
		class WordHandgun_1
		{
			speech[]=
			{
				"Handgun"
			};
		};
	};
	class WordHandgunStealth
	{
		versions[]=
		{
			"WordHandgun_1",
			1
		};
		class WordHandgun_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Handgun"
			};
		};
	};
	class WordSmokeShell
	{
		sentences[]=
		{
			"WordSmokeShellDefault",
			"(1-Stealth)",
			"WordSmokeShellStealth",
			"Stealth"
		};
	};
	class WordSmokeShellDefault
	{
		versions[]=
		{
			"WordSmokeShell_1",
			1
		};
		class WordSmokeShell_1
		{
			speech[]=
			{
				"SmokeShell"
			};
		};
	};
	class WordSmokeShellStealth
	{
		versions[]=
		{
			"WordSmokeShell_1",
			1
		};
		class WordSmokeShell_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"SmokeShell"
			};
		};
	};
	class WordSniperRifle
	{
		sentences[]=
		{
			"WordSniperRifleDefault",
			"(1-Stealth)",
			"WordSniperRifleStealth",
			"Stealth"
		};
	};
	class WordSniperRifleDefault
	{
		versions[]=
		{
			"WordSniperRifle_1",
			1
		};
		class WordSniperRifle_1
		{
			speech[]=
			{
				"SniperRifle"
			};
		};
	};
	class WordSniperRifleStealth
	{
		versions[]=
		{
			"WordSniperRifle_1",
			1
		};
		class WordSniperRifle_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"SniperRifle"
			};
		};
	};
	class Wordman
	{
		sentences[]=
		{
			"WordmanDefault",
			"(1-Stealth)",
			"WordmanStealth",
			"Stealth"
		};
	};
	class WordmanDefault
	{
		versions[]=
		{
			"Wordman_1",
			1
		};
		class Wordman_1
		{
			speech[]=
			{
				"man"
			};
		};
	};
	class WordmanStealth
	{
		versions[]=
		{
			"Wordman_1",
			1
		};
		class Wordman_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"man"
			};
		};
	};
	class Wordwoman
	{
		sentences[]=
		{
			"WordwomanDefault",
			"(1-Stealth)",
			"WordwomanStealth",
			"Stealth"
		};
	};
	class WordwomanDefault
	{
		versions[]=
		{
			"Wordwoman_1",
			1
		};
		class Wordwoman_1
		{
			speech[]=
			{
				"woman"
			};
		};
	};
	class WordwomanStealth
	{
		versions[]=
		{
			"Wordwoman_1",
			1
		};
		class Wordwoman_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"woman"
			};
		};
	};
	class Wordsoldier
	{
		sentences[]=
		{
			"WordsoldierDefault",
			"(1-Stealth)",
			"WordsoldierStealth",
			"Stealth"
		};
	};
	class WordsoldierDefault
	{
		versions[]=
		{
			"Wordsoldier_1",
			1
		};
		class Wordsoldier_1
		{
			speech[]=
			{
				"soldier"
			};
		};
	};
	class WordsoldierStealth
	{
		versions[]=
		{
			"Wordsoldier_1",
			1
		};
		class Wordsoldier_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"soldier"
			};
		};
	};
	class WordlauncherSoldier
	{
		sentences[]=
		{
			"WordlauncherSoldierDefault",
			"(1-Stealth)",
			"WordlauncherSoldierStealth",
			"Stealth"
		};
	};
	class WordlauncherSoldierDefault
	{
		versions[]=
		{
			"WordlauncherSoldier_1",
			1
		};
		class WordlauncherSoldier_1
		{
			speech[]=
			{
				"launcherSoldier"
			};
		};
	};
	class WordlauncherSoldierStealth
	{
		versions[]=
		{
			"WordlauncherSoldier_1",
			1
		};
		class WordlauncherSoldier_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"launcherSoldier"
			};
		};
	};
	class WordSniper
	{
		sentences[]=
		{
			"WordSniperDefault",
			"(1-Stealth)",
			"WordSniperStealth",
			"Stealth"
		};
	};
	class WordSniperDefault
	{
		versions[]=
		{
			"WordSniper_1",
			1
		};
		class WordSniper_1
		{
			speech[]=
			{
				"Sniper"
			};
		};
	};
	class WordSniperStealth
	{
		versions[]=
		{
			"WordSniper_1",
			1
		};
		class WordSniper_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Sniper"
			};
		};
	};
	class WordMedic
	{
		sentences[]=
		{
			"WordMedicDefault",
			"(1-Stealth)",
			"WordMedicStealth",
			"Stealth"
		};
	};
	class WordMedicDefault
	{
		versions[]=
		{
			"WordMedic_1",
			1
		};
		class WordMedic_1
		{
			speech[]=
			{
				"Medic"
			};
		};
	};
	class WordMedicStealth
	{
		versions[]=
		{
			"WordMedic_1",
			1
		};
		class WordMedic_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Medic"
			};
		};
	};
	class WordSpecialForce
	{
		sentences[]=
		{
			"WordSpecialForceDefault",
			"(1-Stealth)",
			"WordSpecialForceStealth",
			"Stealth"
		};
	};
	class WordSpecialForceDefault
	{
		versions[]=
		{
			"WordSpecialForce_1",
			1
		};
		class WordSpecialForce_1
		{
			speech[]=
			{
				"SpecialForce"
			};
		};
	};
	class WordSpecialForceStealth
	{
		versions[]=
		{
			"WordSpecialForce_1",
			1
		};
		class WordSpecialForce_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"SpecialForce"
			};
		};
	};
	class WordMGunner
	{
		sentences[]=
		{
			"WordMGunnerDefault",
			"(1-Stealth)",
			"WordMGunnerStealth",
			"Stealth"
		};
	};
	class WordMGunnerDefault
	{
		versions[]=
		{
			"WordMGunner_1",
			1
		};
		class WordMGunner_1
		{
			speech[]=
			{
				"MGunner"
			};
		};
	};
	class WordMGunnerStealth
	{
		versions[]=
		{
			"WordMGunner_1",
			1
		};
		class WordMGunner_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"MGunner"
			};
		};
	};
	class Wordofficer
	{
		sentences[]=
		{
			"WordofficerDefault",
			"(1-Stealth)",
			"WordofficerStealth",
			"Stealth"
		};
	};
	class WordofficerDefault
	{
		versions[]=
		{
			"Wordofficer_1",
			1
		};
		class Wordofficer_1
		{
			speech[]=
			{
				"officer"
			};
		};
	};
	class WordofficerStealth
	{
		versions[]=
		{
			"Wordofficer_1",
			1
		};
		class Wordofficer_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"officer"
			};
		};
	};
	class Wordcrew
	{
		sentences[]=
		{
			"WordcrewDefault",
			"(1-Stealth)",
			"WordcrewStealth",
			"Stealth"
		};
	};
	class WordcrewDefault
	{
		versions[]=
		{
			"Wordcrew_1",
			1
		};
		class Wordcrew_1
		{
			speech[]=
			{
				"crew"
			};
		};
	};
	class WordcrewStealth
	{
		versions[]=
		{
			"Wordcrew_1",
			1
		};
		class Wordcrew_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"crew"
			};
		};
	};
	class Wordvehicle
	{
		sentences[]=
		{
			"WordvehicleDefault",
			"(1-Stealth)",
			"WordvehicleStealth",
			"Stealth"
		};
	};
	class WordvehicleDefault
	{
		versions[]=
		{
			"Wordvehicle_1",
			1
		};
		class Wordvehicle_1
		{
			speech[]=
			{
				"vehicle"
			};
		};
	};
	class WordvehicleStealth
	{
		versions[]=
		{
			"Wordvehicle_1",
			1
		};
		class Wordvehicle_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"vehicle"
			};
		};
	};
	class Wordbike
	{
		sentences[]=
		{
			"WordbikeDefault",
			"(1-Stealth)",
			"WordbikeStealth",
			"Stealth"
		};
	};
	class WordbikeDefault
	{
		versions[]=
		{
			"Wordbike_1",
			1
		};
		class Wordbike_1
		{
			speech[]=
			{
				"bike"
			};
		};
	};
	class WordbikeStealth
	{
		versions[]=
		{
			"Wordbike_1",
			1
		};
		class Wordbike_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"bike"
			};
		};
	};
	class Wordmotorcycle
	{
		sentences[]=
		{
			"WordmotorcycleDefault",
			"(1-Stealth)",
			"WordmotorcycleStealth",
			"Stealth"
		};
	};
	class WordmotorcycleDefault
	{
		versions[]=
		{
			"Wordmotorcycle_1",
			1
		};
		class Wordmotorcycle_1
		{
			speech[]=
			{
				"motorcycle"
			};
		};
	};
	class WordmotorcycleStealth
	{
		versions[]=
		{
			"Wordmotorcycle_1",
			1
		};
		class Wordmotorcycle_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"motorcycle"
			};
		};
	};
	class Wordcar
	{
		sentences[]=
		{
			"WordcarDefault",
			"(1-Stealth)",
			"WordcarStealth",
			"Stealth"
		};
	};
	class WordcarDefault
	{
		versions[]=
		{
			"Wordcar_1",
			1
		};
		class Wordcar_1
		{
			speech[]=
			{
				"car"
			};
		};
	};
	class WordcarStealth
	{
		versions[]=
		{
			"Wordcar_1",
			1
		};
		class Wordcar_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"car"
			};
		};
	};
	class Wordtechnical
	{
		sentences[]=
		{
			"WordtechnicalDefault",
			"(1-Stealth)",
			"WordtechnicalStealth",
			"Stealth"
		};
	};
	class WordtechnicalDefault
	{
		versions[]=
		{
			"Wordtechnical_1",
			1
		};
		class Wordtechnical_1
		{
			speech[]=
			{
				"technical"
			};
		};
	};
	class WordtechnicalStealth
	{
		versions[]=
		{
			"Wordtechnical_1",
			1
		};
		class Wordtechnical_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"technical"
			};
		};
	};
	class WordsupportTruck
	{
		sentences[]=
		{
			"WordsupportTruckDefault",
			"(1-Stealth)",
			"WordsupportTruckStealth",
			"Stealth"
		};
	};
	class WordsupportTruckDefault
	{
		versions[]=
		{
			"WordsupportTruck_1",
			1
		};
		class WordsupportTruck_1
		{
			speech[]=
			{
				"supportTruck"
			};
		};
	};
	class WordsupportTruckStealth
	{
		versions[]=
		{
			"WordsupportTruck_1",
			1
		};
		class WordsupportTruck_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"supportTruck"
			};
		};
	};
	class Wordtruck
	{
		sentences[]=
		{
			"WordtruckDefault",
			"(1-Stealth)",
			"WordtruckStealth",
			"Stealth"
		};
	};
	class WordtruckDefault
	{
		versions[]=
		{
			"Wordtruck_1",
			1
		};
		class Wordtruck_1
		{
			speech[]=
			{
				"truck"
			};
		};
	};
	class WordtruckStealth
	{
		versions[]=
		{
			"Wordtruck_1",
			1
		};
		class Wordtruck_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"truck"
			};
		};
	};
	class WordAPC
	{
		sentences[]=
		{
			"WordAPCDefault",
			"(1-Stealth)",
			"WordAPCStealth",
			"Stealth"
		};
	};
	class WordAPCDefault
	{
		versions[]=
		{
			"WordAPC_1",
			1
		};
		class WordAPC_1
		{
			speech[]=
			{
				"APC"
			};
		};
	};
	class WordAPCStealth
	{
		versions[]=
		{
			"WordAPC_1",
			1
		};
		class WordAPC_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"APC"
			};
		};
	};
	class Wordtractor
	{
		sentences[]=
		{
			"WordtractorDefault",
			"(1-Stealth)",
			"WordtractorStealth",
			"Stealth"
		};
	};
	class WordtractorDefault
	{
		versions[]=
		{
			"Wordtractor_1",
			1
		};
		class Wordtractor_1
		{
			speech[]=
			{
				"tractor"
			};
		};
	};
	class WordtractorStealth
	{
		versions[]=
		{
			"Wordtractor_1",
			1
		};
		class Wordtractor_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"tractor"
			};
		};
	};
	class Wordbus
	{
		sentences[]=
		{
			"WordbusDefault",
			"(1-Stealth)",
			"WordbusStealth",
			"Stealth"
		};
	};
	class WordbusDefault
	{
		versions[]=
		{
			"Wordbus_1",
			1
		};
		class Wordbus_1
		{
			speech[]=
			{
				"bus"
			};
		};
	};
	class WordbusStealth
	{
		versions[]=
		{
			"Wordbus_1",
			1
		};
		class Wordbus_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"bus"
			};
		};
	};
	class Wordtank
	{
		sentences[]=
		{
			"WordtankDefault",
			"(1-Stealth)",
			"WordtankStealth",
			"Stealth"
		};
	};
	class WordtankDefault
	{
		versions[]=
		{
			"Wordtank_1",
			1
		};
		class Wordtank_1
		{
			speech[]=
			{
				"tank"
			};
		};
	};
	class WordtankStealth
	{
		versions[]=
		{
			"Wordtank_1",
			1
		};
		class Wordtank_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"tank"
			};
		};
	};
	class WordMobileHQ
	{
		sentences[]=
		{
			"WordMobileHQDefault",
			"(1-Stealth)",
			"WordMobileHQStealth",
			"Stealth"
		};
	};
	class WordMobileHQDefault
	{
		versions[]=
		{
			"WordMobileHQ_1",
			1
		};
		class WordMobileHQ_1
		{
			speech[]=
			{
				"MobileHQ"
			};
		};
	};
	class WordMobileHQStealth
	{
		versions[]=
		{
			"WordMobileHQ_1",
			1
		};
		class WordMobileHQ_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"MobileHQ"
			};
		};
	};
	class Wordship
	{
		sentences[]=
		{
			"WordshipDefault",
			"(1-Stealth)",
			"WordshipStealth",
			"Stealth"
		};
	};
	class WordshipDefault
	{
		versions[]=
		{
			"Wordship_1",
			1
		};
		class Wordship_1
		{
			speech[]=
			{
				"ship"
			};
		};
	};
	class WordshipStealth
	{
		versions[]=
		{
			"Wordship_1",
			1
		};
		class Wordship_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"ship"
			};
		};
	};
	class WordmobileArtillery
	{
		sentences[]=
		{
			"WordmobileArtilleryDefault",
			"(1-Stealth)",
			"WordmobileArtilleryStealth",
			"Stealth"
		};
	};
	class WordmobileArtilleryDefault
	{
		versions[]=
		{
			"WordmobileArtillery_1",
			1
		};
		class WordmobileArtillery_1
		{
			speech[]=
			{
				"mobileArtillery"
			};
		};
	};
	class WordmobileArtilleryStealth
	{
		versions[]=
		{
			"WordmobileArtillery_1",
			1
		};
		class WordmobileArtillery_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"mobileArtillery"
			};
		};
	};
	class WordStaticMGWeapon
	{
		sentences[]=
		{
			"WordStaticMGWeaponDefault",
			"(1-Stealth)",
			"WordStaticMGWeaponStealth",
			"Stealth"
		};
	};
	class WordStaticMGWeaponDefault
	{
		versions[]=
		{
			"WordStaticMGWeapon_1",
			1
		};
		class WordStaticMGWeapon_1
		{
			speech[]=
			{
				"StaticMGWeapon"
			};
		};
	};
	class WordStaticMGWeaponStealth
	{
		versions[]=
		{
			"WordStaticMGWeapon_1",
			1
		};
		class WordStaticMGWeapon_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"StaticMGWeapon"
			};
		};
	};
	class WordStaticMortar
	{
		sentences[]=
		{
			"WordStaticMortarDefault",
			"(1-Stealth)",
			"WordStaticMortarStealth",
			"Stealth"
		};
	};
	class WordStaticMortarDefault
	{
		versions[]=
		{
			"WordStaticMortar_1",
			1
		};
		class WordStaticMortar_1
		{
			speech[]=
			{
				"StaticMortar"
			};
		};
	};
	class WordStaticMortarStealth
	{
		versions[]=
		{
			"WordStaticMortar_1",
			1
		};
		class WordStaticMortar_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"StaticMortar"
			};
		};
	};
	class WordsearchLight
	{
		sentences[]=
		{
			"WordsearchLightDefault",
			"(1-Stealth)",
			"WordsearchLightStealth",
			"Stealth"
		};
	};
	class WordsearchLightDefault
	{
		versions[]=
		{
			"WordsearchLight_1",
			1
		};
		class WordsearchLight_1
		{
			speech[]=
			{
				"searchLight"
			};
		};
	};
	class WordsearchLightStealth
	{
		versions[]=
		{
			"WordsearchLight_1",
			1
		};
		class WordsearchLight_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"searchLight"
			};
		};
	};
	class Wordstaticgrenadelauncher
	{
		sentences[]=
		{
			"WordstaticgrenadelauncherDefault",
			"(1-Stealth)",
			"WordstaticgrenadelauncherStealth",
			"Stealth"
		};
	};
	class WordstaticgrenadelauncherDefault
	{
		versions[]=
		{
			"Wordstaticgrenadelauncher_1",
			1
		};
		class Wordstaticgrenadelauncher_1
		{
			speech[]=
			{
				"staticgrenadelauncher"
			};
		};
	};
	class WordstaticgrenadelauncherStealth
	{
		versions[]=
		{
			"Wordstaticgrenadelauncher_1",
			1
		};
		class Wordstaticgrenadelauncher_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"staticgrenadelauncher"
			};
		};
	};
	class WordstaticCannon
	{
		sentences[]=
		{
			"WordstaticCannonDefault",
			"(1-Stealth)",
			"WordstaticCannonStealth",
			"Stealth"
		};
	};
	class WordstaticCannonDefault
	{
		versions[]=
		{
			"WordstaticCannon_1",
			1
		};
		class WordstaticCannon_1
		{
			speech[]=
			{
				"staticCannon"
			};
		};
	};
	class WordstaticCannonStealth
	{
		versions[]=
		{
			"WordstaticCannon_1",
			1
		};
		class WordstaticCannon_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"staticCannon"
			};
		};
	};
	class WordstaticATLauncher
	{
		sentences[]=
		{
			"WordstaticATLauncherDefault",
			"(1-Stealth)",
			"WordstaticATLauncherStealth",
			"Stealth"
		};
	};
	class WordstaticATLauncherDefault
	{
		versions[]=
		{
			"WordstaticATLauncher_1",
			1
		};
		class WordstaticATLauncher_1
		{
			speech[]=
			{
				"staticATLauncher"
			};
		};
	};
	class WordstaticATLauncherStealth
	{
		versions[]=
		{
			"WordstaticATLauncher_1",
			1
		};
		class WordstaticATLauncher_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"staticATLauncher"
			};
		};
	};
	class WordstaticAALauncher
	{
		sentences[]=
		{
			"WordstaticAALauncherDefault",
			"(1-Stealth)",
			"WordstaticAALauncherStealth",
			"Stealth"
		};
	};
	class WordstaticAALauncherDefault
	{
		versions[]=
		{
			"WordstaticAALauncher_1",
			1
		};
		class WordstaticAALauncher_1
		{
			speech[]=
			{
				"staticAALauncher"
			};
		};
	};
	class WordstaticAALauncherStealth
	{
		versions[]=
		{
			"WordstaticAALauncher_1",
			1
		};
		class WordstaticAALauncher_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"staticAALauncher"
			};
		};
	};
	class Wordaircraft
	{
		sentences[]=
		{
			"WordaircraftDefault",
			"(1-Stealth)",
			"WordaircraftStealth",
			"Stealth"
		};
	};
	class WordaircraftDefault
	{
		versions[]=
		{
			"Wordaircraft_1",
			1
		};
		class Wordaircraft_1
		{
			speech[]=
			{
				"aircraft"
			};
		};
	};
	class WordaircraftStealth
	{
		versions[]=
		{
			"Wordaircraft_1",
			1
		};
		class Wordaircraft_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"aircraft"
			};
		};
	};
	class Wordparachute
	{
		sentences[]=
		{
			"WordparachuteDefault",
			"(1-Stealth)",
			"WordparachuteStealth",
			"Stealth"
		};
	};
	class WordparachuteDefault
	{
		versions[]=
		{
			"Wordparachute_1",
			1
		};
		class Wordparachute_1
		{
			speech[]=
			{
				"parachute"
			};
		};
	};
	class WordparachuteStealth
	{
		versions[]=
		{
			"Wordparachute_1",
			1
		};
		class Wordparachute_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"parachute"
			};
		};
	};
	class Wordairplane
	{
		sentences[]=
		{
			"WordairplaneDefault",
			"(1-Stealth)",
			"WordairplaneStealth",
			"Stealth"
		};
	};
	class WordairplaneDefault
	{
		versions[]=
		{
			"Wordairplane_1",
			1
		};
		class Wordairplane_1
		{
			speech[]=
			{
				"airplane"
			};
		};
	};
	class WordairplaneStealth
	{
		versions[]=
		{
			"Wordairplane_1",
			1
		};
		class Wordairplane_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"airplane"
			};
		};
	};
	class WordcargoAirplane
	{
		sentences[]=
		{
			"WordcargoAirplaneDefault",
			"(1-Stealth)",
			"WordcargoAirplaneStealth",
			"Stealth"
		};
	};
	class WordcargoAirplaneDefault
	{
		versions[]=
		{
			"WordcargoAirplane_1",
			1
		};
		class WordcargoAirplane_1
		{
			speech[]=
			{
				"cargoAirplane"
			};
		};
	};
	class WordcargoAirplaneStealth
	{
		versions[]=
		{
			"WordcargoAirplane_1",
			1
		};
		class WordcargoAirplane_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"cargoAirplane"
			};
		};
	};
	class WordattackAirplane
	{
		sentences[]=
		{
			"WordattackAirplaneDefault",
			"(1-Stealth)",
			"WordattackAirplaneStealth",
			"Stealth"
		};
	};
	class WordattackAirplaneDefault
	{
		versions[]=
		{
			"WordattackAirplane_1",
			1
		};
		class WordattackAirplane_1
		{
			speech[]=
			{
				"attackAirplane"
			};
		};
	};
	class WordattackAirplaneStealth
	{
		versions[]=
		{
			"WordattackAirplane_1",
			1
		};
		class WordattackAirplane_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"attackAirplane"
			};
		};
	};
	class WordUAV
	{
		sentences[]=
		{
			"WordUAVDefault",
			"(1-Stealth)",
			"WordUAVStealth",
			"Stealth"
		};
	};
	class WordUAVDefault
	{
		versions[]=
		{
			"WordUAV_1",
			1
		};
		class WordUAV_1
		{
			speech[]=
			{
				"UAV"
			};
		};
	};
	class WordUAVStealth
	{
		versions[]=
		{
			"WordUAV_1",
			1
		};
		class WordUAV_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"UAV"
			};
		};
	};
	class Wordhelicopter
	{
		sentences[]=
		{
			"WordhelicopterDefault",
			"(1-Stealth)",
			"WordhelicopterStealth",
			"Stealth"
		};
	};
	class WordhelicopterDefault
	{
		versions[]=
		{
			"Wordhelicopter_1",
			1
		};
		class Wordhelicopter_1
		{
			speech[]=
			{
				"helicopter"
			};
		};
	};
	class WordhelicopterStealth
	{
		versions[]=
		{
			"Wordhelicopter_1",
			1
		};
		class Wordhelicopter_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"helicopter"
			};
		};
	};
	class Wordgunship
	{
		sentences[]=
		{
			"WordgunshipDefault",
			"(1-Stealth)",
			"WordgunshipStealth",
			"Stealth"
		};
	};
	class WordgunshipDefault
	{
		versions[]=
		{
			"Wordgunship_1",
			1
		};
		class Wordgunship_1
		{
			speech[]=
			{
				"gunship"
			};
		};
	};
	class WordgunshipStealth
	{
		versions[]=
		{
			"Wordgunship_1",
			1
		};
		class Wordgunship_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"gunship"
			};
		};
	};
	class Wordanimal
	{
		sentences[]=
		{
			"WordanimalDefault",
			"(1-Stealth)",
			"WordanimalStealth",
			"Stealth"
		};
	};
	class WordanimalDefault
	{
		versions[]=
		{
			"Wordanimal_1",
			1
		};
		class Wordanimal_1
		{
			speech[]=
			{
				"animal"
			};
		};
	};
	class WordanimalStealth
	{
		versions[]=
		{
			"Wordanimal_1",
			1
		};
		class Wordanimal_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"animal"
			};
		};
	};
	class Wordboat
	{
		sentences[]=
		{
			"WordboatDefault",
			"(1-Stealth)",
			"WordboatStealth",
			"Stealth"
		};
	};
	class WordboatDefault
	{
		versions[]=
		{
			"Wordboat_1",
			1
		};
		class Wordboat_1
		{
			speech[]=
			{
				"boat"
			};
		};
	};
	class WordboatStealth
	{
		versions[]=
		{
			"Wordboat_1",
			1
		};
		class Wordboat_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"boat"
			};
		};
	};
	class Wordmen
	{
		sentences[]=
		{
			"WordmenDefault",
			"(1-Stealth)",
			"WordmenStealth",
			"Stealth"
		};
	};
	class WordmenDefault
	{
		versions[]=
		{
			"Wordmen_1",
			1
		};
		class Wordmen_1
		{
			speech[]=
			{
				"men"
			};
		};
	};
	class WordmenStealth
	{
		versions[]=
		{
			"Wordmen_1",
			1
		};
		class Wordmen_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"men"
			};
		};
	};
	class Wordwomen
	{
		sentences[]=
		{
			"WordwomenDefault",
			"(1-Stealth)",
			"WordwomenStealth",
			"Stealth"
		};
	};
	class WordwomenDefault
	{
		versions[]=
		{
			"Wordwomen_1",
			1
		};
		class Wordwomen_1
		{
			speech[]=
			{
				"women"
			};
		};
	};
	class WordwomenStealth
	{
		versions[]=
		{
			"Wordwomen_1",
			1
		};
		class Wordwomen_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"women"
			};
		};
	};
	class Wordsoldiers
	{
		sentences[]=
		{
			"WordsoldiersDefault",
			"(1-Stealth)",
			"WordsoldiersStealth",
			"Stealth"
		};
	};
	class WordsoldiersDefault
	{
		versions[]=
		{
			"Wordsoldiers_1",
			1
		};
		class Wordsoldiers_1
		{
			speech[]=
			{
				"soldiers"
			};
		};
	};
	class WordsoldiersStealth
	{
		versions[]=
		{
			"Wordsoldiers_1",
			1
		};
		class Wordsoldiers_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"soldiers"
			};
		};
	};
	class WordlauncherSoldiers
	{
		sentences[]=
		{
			"WordlauncherSoldiersDefault",
			"(1-Stealth)",
			"WordlauncherSoldiersStealth",
			"Stealth"
		};
	};
	class WordlauncherSoldiersDefault
	{
		versions[]=
		{
			"WordlauncherSoldiers_1",
			1
		};
		class WordlauncherSoldiers_1
		{
			speech[]=
			{
				"launcherSoldiers"
			};
		};
	};
	class WordlauncherSoldiersStealth
	{
		versions[]=
		{
			"WordlauncherSoldiers_1",
			1
		};
		class WordlauncherSoldiers_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"launcherSoldiers"
			};
		};
	};
	class WordSnipers
	{
		sentences[]=
		{
			"WordSnipersDefault",
			"(1-Stealth)",
			"WordSnipersStealth",
			"Stealth"
		};
	};
	class WordSnipersDefault
	{
		versions[]=
		{
			"WordSnipers_1",
			1
		};
		class WordSnipers_1
		{
			speech[]=
			{
				"Snipers"
			};
		};
	};
	class WordSnipersStealth
	{
		versions[]=
		{
			"WordSnipers_1",
			1
		};
		class WordSnipers_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Snipers"
			};
		};
	};
	class WordMedics
	{
		sentences[]=
		{
			"WordMedicsDefault",
			"(1-Stealth)",
			"WordMedicsStealth",
			"Stealth"
		};
	};
	class WordMedicsDefault
	{
		versions[]=
		{
			"WordMedics_1",
			1
		};
		class WordMedics_1
		{
			speech[]=
			{
				"Medics"
			};
		};
	};
	class WordMedicsStealth
	{
		versions[]=
		{
			"WordMedics_1",
			1
		};
		class WordMedics_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Medics"
			};
		};
	};
	class WordSpecialForces
	{
		sentences[]=
		{
			"WordSpecialForcesDefault",
			"(1-Stealth)",
			"WordSpecialForcesStealth",
			"Stealth"
		};
	};
	class WordSpecialForcesDefault
	{
		versions[]=
		{
			"WordSpecialForces_1",
			1
		};
		class WordSpecialForces_1
		{
			speech[]=
			{
				"SpecialForces"
			};
		};
	};
	class WordSpecialForcesStealth
	{
		versions[]=
		{
			"WordSpecialForces_1",
			1
		};
		class WordSpecialForces_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"SpecialForces"
			};
		};
	};
	class WordMgunners
	{
		sentences[]=
		{
			"WordMgunnersDefault",
			"(1-Stealth)",
			"WordMgunnersStealth",
			"Stealth"
		};
	};
	class WordMgunnersDefault
	{
		versions[]=
		{
			"WordMgunners_1",
			1
		};
		class WordMgunners_1
		{
			speech[]=
			{
				"Mgunners"
			};
		};
	};
	class WordMgunnersStealth
	{
		versions[]=
		{
			"WordMgunners_1",
			1
		};
		class WordMgunners_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Mgunners"
			};
		};
	};
	class Wordofficers
	{
		sentences[]=
		{
			"WordofficersDefault",
			"(1-Stealth)",
			"WordofficersStealth",
			"Stealth"
		};
	};
	class WordofficersDefault
	{
		versions[]=
		{
			"Wordofficers_1",
			1
		};
		class Wordofficers_1
		{
			speech[]=
			{
				"officers"
			};
		};
	};
	class WordofficersStealth
	{
		versions[]=
		{
			"Wordofficers_1",
			1
		};
		class Wordofficers_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"officers"
			};
		};
	};
	class Wordcrews
	{
		sentences[]=
		{
			"WordcrewsDefault",
			"(1-Stealth)",
			"WordcrewsStealth",
			"Stealth"
		};
	};
	class WordcrewsDefault
	{
		versions[]=
		{
			"Wordcrews_1",
			1
		};
		class Wordcrews_1
		{
			speech[]=
			{
				"crews"
			};
		};
	};
	class WordcrewsStealth
	{
		versions[]=
		{
			"Wordcrews_1",
			1
		};
		class Wordcrews_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"crews"
			};
		};
	};
	class Wordpilots
	{
		sentences[]=
		{
			"WordpilotsDefault",
			"(1-Stealth)",
			"WordpilotsStealth",
			"Stealth"
		};
	};
	class WordpilotsDefault
	{
		versions[]=
		{
			"Wordpilots_1",
			1
		};
		class Wordpilots_1
		{
			speech[]=
			{
				"pilots"
			};
		};
	};
	class WordpilotsStealth
	{
		versions[]=
		{
			"Wordpilots_1",
			1
		};
		class Wordpilots_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"pilots"
			};
		};
	};
	class Wordvehicles
	{
		sentences[]=
		{
			"WordvehiclesDefault",
			"(1-Stealth)",
			"WordvehiclesStealth",
			"Stealth"
		};
	};
	class WordvehiclesDefault
	{
		versions[]=
		{
			"Wordvehicles_1",
			1
		};
		class Wordvehicles_1
		{
			speech[]=
			{
				"vehicles"
			};
		};
	};
	class WordvehiclesStealth
	{
		versions[]=
		{
			"Wordvehicles_1",
			1
		};
		class Wordvehicles_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"vehicles"
			};
		};
	};
	class Wordbikes
	{
		sentences[]=
		{
			"WordbikesDefault",
			"(1-Stealth)",
			"WordbikesStealth",
			"Stealth"
		};
	};
	class WordbikesDefault
	{
		versions[]=
		{
			"Wordbikes_1",
			1
		};
		class Wordbikes_1
		{
			speech[]=
			{
				"bikes"
			};
		};
	};
	class WordbikesStealth
	{
		versions[]=
		{
			"Wordbikes_1",
			1
		};
		class Wordbikes_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"bikes"
			};
		};
	};
	class Wordmotorcycles
	{
		sentences[]=
		{
			"WordmotorcyclesDefault",
			"(1-Stealth)",
			"WordmotorcyclesStealth",
			"Stealth"
		};
	};
	class WordmotorcyclesDefault
	{
		versions[]=
		{
			"Wordmotorcycles_1",
			1
		};
		class Wordmotorcycles_1
		{
			speech[]=
			{
				"motorcycles"
			};
		};
	};
	class WordmotorcyclesStealth
	{
		versions[]=
		{
			"Wordmotorcycles_1",
			1
		};
		class Wordmotorcycles_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"motorcycles"
			};
		};
	};
	class Wordcars
	{
		sentences[]=
		{
			"WordcarsDefault",
			"(1-Stealth)",
			"WordcarsStealth",
			"Stealth"
		};
	};
	class WordcarsDefault
	{
		versions[]=
		{
			"Wordcars_1",
			1
		};
		class Wordcars_1
		{
			speech[]=
			{
				"cars"
			};
		};
	};
	class WordcarsStealth
	{
		versions[]=
		{
			"Wordcars_1",
			1
		};
		class Wordcars_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"cars"
			};
		};
	};
	class Wordtechnicals
	{
		sentences[]=
		{
			"WordtechnicalsDefault",
			"(1-Stealth)",
			"WordtechnicalsStealth",
			"Stealth"
		};
	};
	class WordtechnicalsDefault
	{
		versions[]=
		{
			"Wordtechnicals_1",
			1
		};
		class Wordtechnicals_1
		{
			speech[]=
			{
				"technicals"
			};
		};
	};
	class WordtechnicalsStealth
	{
		versions[]=
		{
			"Wordtechnicals_1",
			1
		};
		class Wordtechnicals_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"technicals"
			};
		};
	};
	class WordsupportTrucks
	{
		sentences[]=
		{
			"WordsupportTrucksDefault",
			"(1-Stealth)",
			"WordsupportTrucksStealth",
			"Stealth"
		};
	};
	class WordsupportTrucksDefault
	{
		versions[]=
		{
			"WordsupportTrucks_1",
			1
		};
		class WordsupportTrucks_1
		{
			speech[]=
			{
				"supportTrucks"
			};
		};
	};
	class WordsupportTrucksStealth
	{
		versions[]=
		{
			"WordsupportTrucks_1",
			1
		};
		class WordsupportTrucks_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"supportTrucks"
			};
		};
	};
	class Wordtrucks
	{
		sentences[]=
		{
			"WordtrucksDefault",
			"(1-Stealth)",
			"WordtrucksStealth",
			"Stealth"
		};
	};
	class WordtrucksDefault
	{
		versions[]=
		{
			"Wordtrucks_1",
			1
		};
		class Wordtrucks_1
		{
			speech[]=
			{
				"trucks"
			};
		};
	};
	class WordtrucksStealth
	{
		versions[]=
		{
			"Wordtrucks_1",
			1
		};
		class Wordtrucks_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"trucks"
			};
		};
	};
	class WordAPCs
	{
		sentences[]=
		{
			"WordAPCsDefault",
			"(1-Stealth)",
			"WordAPCsStealth",
			"Stealth"
		};
	};
	class WordAPCsDefault
	{
		versions[]=
		{
			"WordAPCs_1",
			1
		};
		class WordAPCs_1
		{
			speech[]=
			{
				"APCs"
			};
		};
	};
	class WordAPCsStealth
	{
		versions[]=
		{
			"WordAPCs_1",
			1
		};
		class WordAPCs_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"APCs"
			};
		};
	};
	class Wordtractors
	{
		sentences[]=
		{
			"WordtractorsDefault",
			"(1-Stealth)",
			"WordtractorsStealth",
			"Stealth"
		};
	};
	class WordtractorsDefault
	{
		versions[]=
		{
			"Wordtractors_1",
			1
		};
		class Wordtractors_1
		{
			speech[]=
			{
				"tractors"
			};
		};
	};
	class WordtractorsStealth
	{
		versions[]=
		{
			"Wordtractors_1",
			1
		};
		class Wordtractors_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"tractors"
			};
		};
	};
	class Wordbuses
	{
		sentences[]=
		{
			"WordbusesDefault",
			"(1-Stealth)",
			"WordbusesStealth",
			"Stealth"
		};
	};
	class WordbusesDefault
	{
		versions[]=
		{
			"Wordbuses_1",
			1
		};
		class Wordbuses_1
		{
			speech[]=
			{
				"buses"
			};
		};
	};
	class WordbusesStealth
	{
		versions[]=
		{
			"Wordbuses_1",
			1
		};
		class Wordbuses_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"buses"
			};
		};
	};
	class Wordtanks
	{
		sentences[]=
		{
			"WordtanksDefault",
			"(1-Stealth)",
			"WordtanksStealth",
			"Stealth"
		};
	};
	class WordtanksDefault
	{
		versions[]=
		{
			"Wordtanks_1",
			1
		};
		class Wordtanks_1
		{
			speech[]=
			{
				"tanks"
			};
		};
	};
	class WordtanksStealth
	{
		versions[]=
		{
			"Wordtanks_1",
			1
		};
		class Wordtanks_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"tanks"
			};
		};
	};
	class WordMobileHQs
	{
		sentences[]=
		{
			"WordMobileHQsDefault",
			"(1-Stealth)",
			"WordMobileHQsStealth",
			"Stealth"
		};
	};
	class WordMobileHQsDefault
	{
		versions[]=
		{
			"WordMobileHQs_1",
			1
		};
		class WordMobileHQs_1
		{
			speech[]=
			{
				"MobileHQs"
			};
		};
	};
	class WordMobileHQsStealth
	{
		versions[]=
		{
			"WordMobileHQs_1",
			1
		};
		class WordMobileHQs_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"MobileHQs"
			};
		};
	};
	class Wordships
	{
		sentences[]=
		{
			"WordshipsDefault",
			"(1-Stealth)",
			"WordshipsStealth",
			"Stealth"
		};
	};
	class WordshipsDefault
	{
		versions[]=
		{
			"Wordships_1",
			1
		};
		class Wordships_1
		{
			speech[]=
			{
				"ships"
			};
		};
	};
	class WordshipsStealth
	{
		versions[]=
		{
			"Wordships_1",
			1
		};
		class Wordships_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"ships"
			};
		};
	};
	class WordmobileArtilleryUnits
	{
		sentences[]=
		{
			"WordmobileArtilleryUnitsDefault",
			"(1-Stealth)",
			"WordmobileArtilleryUnitsStealth",
			"Stealth"
		};
	};
	class WordmobileArtilleryUnitsDefault
	{
		versions[]=
		{
			"WordmobileArtilleryUnits_1",
			1
		};
		class WordmobileArtilleryUnits_1
		{
			speech[]=
			{
				"mobileArtilleryUnits"
			};
		};
	};
	class WordmobileArtilleryUnitsStealth
	{
		versions[]=
		{
			"WordmobileArtilleryUnits_1",
			1
		};
		class WordmobileArtilleryUnits_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"mobileArtilleryUnits"
			};
		};
	};
	class WordStaticMGWeapons
	{
		sentences[]=
		{
			"WordStaticMGWeaponsDefault",
			"(1-Stealth)",
			"WordStaticMGWeaponsStealth",
			"Stealth"
		};
	};
	class WordStaticMGWeaponsDefault
	{
		versions[]=
		{
			"WordStaticMGWeapons_1",
			1
		};
		class WordStaticMGWeapons_1
		{
			speech[]=
			{
				"StaticMGWeapons"
			};
		};
	};
	class WordStaticMGWeaponsStealth
	{
		versions[]=
		{
			"WordStaticMGWeapons_1",
			1
		};
		class WordStaticMGWeapons_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"StaticMGWeapons"
			};
		};
	};
	class WordStaticMortars
	{
		sentences[]=
		{
			"WordStaticMortarsDefault",
			"(1-Stealth)",
			"WordStaticMortarsStealth",
			"Stealth"
		};
	};
	class WordStaticMortarsDefault
	{
		versions[]=
		{
			"WordStaticMortars_1",
			1
		};
		class WordStaticMortars_1
		{
			speech[]=
			{
				"StaticMortars"
			};
		};
	};
	class WordStaticMortarsStealth
	{
		versions[]=
		{
			"WordStaticMortars_1",
			1
		};
		class WordStaticMortars_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"StaticMortars"
			};
		};
	};
	class WordsearchLights
	{
		sentences[]=
		{
			"WordsearchLightsDefault",
			"(1-Stealth)",
			"WordsearchLightsStealth",
			"Stealth"
		};
	};
	class WordsearchLightsDefault
	{
		versions[]=
		{
			"WordsearchLights_1",
			1
		};
		class WordsearchLights_1
		{
			speech[]=
			{
				"searchLights"
			};
		};
	};
	class WordsearchLightsStealth
	{
		versions[]=
		{
			"WordsearchLights_1",
			1
		};
		class WordsearchLights_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"searchLights"
			};
		};
	};
	class Wordstaticgrenadelaunchers
	{
		sentences[]=
		{
			"WordstaticgrenadelaunchersDefault",
			"(1-Stealth)",
			"WordstaticgrenadelaunchersStealth",
			"Stealth"
		};
	};
	class WordstaticgrenadelaunchersDefault
	{
		versions[]=
		{
			"Wordstaticgrenadelaunchers_1",
			1
		};
		class Wordstaticgrenadelaunchers_1
		{
			speech[]=
			{
				"staticgrenadelaunchers"
			};
		};
	};
	class WordstaticgrenadelaunchersStealth
	{
		versions[]=
		{
			"Wordstaticgrenadelaunchers_1",
			1
		};
		class Wordstaticgrenadelaunchers_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"staticgrenadelaunchers"
			};
		};
	};
	class WordstaticCannons
	{
		sentences[]=
		{
			"WordstaticCannonsDefault",
			"(1-Stealth)",
			"WordstaticCannonsStealth",
			"Stealth"
		};
	};
	class WordstaticCannonsDefault
	{
		versions[]=
		{
			"WordstaticCannons_1",
			1
		};
		class WordstaticCannons_1
		{
			speech[]=
			{
				"staticCannons"
			};
		};
	};
	class WordstaticCannonsStealth
	{
		versions[]=
		{
			"WordstaticCannons_1",
			1
		};
		class WordstaticCannons_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"staticCannons"
			};
		};
	};
	class WordstaticATLaunchers
	{
		sentences[]=
		{
			"WordstaticATLaunchersDefault",
			"(1-Stealth)",
			"WordstaticATLaunchersStealth",
			"Stealth"
		};
	};
	class WordstaticATLaunchersDefault
	{
		versions[]=
		{
			"WordstaticATLaunchers_1",
			1
		};
		class WordstaticATLaunchers_1
		{
			speech[]=
			{
				"staticATLaunchers"
			};
		};
	};
	class WordstaticATLaunchersStealth
	{
		versions[]=
		{
			"WordstaticATLaunchers_1",
			1
		};
		class WordstaticATLaunchers_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"staticATLaunchers"
			};
		};
	};
	class WordstaticAALaunchers
	{
		sentences[]=
		{
			"WordstaticAALaunchersDefault",
			"(1-Stealth)",
			"WordstaticAALaunchersStealth",
			"Stealth"
		};
	};
	class WordstaticAALaunchersDefault
	{
		versions[]=
		{
			"WordstaticAALaunchers_1",
			1
		};
		class WordstaticAALaunchers_1
		{
			speech[]=
			{
				"staticAALaunchers"
			};
		};
	};
	class WordstaticAALaunchersStealth
	{
		versions[]=
		{
			"WordstaticAALaunchers_1",
			1
		};
		class WordstaticAALaunchers_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"staticAALaunchers"
			};
		};
	};
	class Wordaircrafts
	{
		sentences[]=
		{
			"WordaircraftsDefault",
			"(1-Stealth)",
			"WordaircraftsStealth",
			"Stealth"
		};
	};
	class WordaircraftsDefault
	{
		versions[]=
		{
			"Wordaircrafts_1",
			1
		};
		class Wordaircrafts_1
		{
			speech[]=
			{
				"aircrafts"
			};
		};
	};
	class WordaircraftsStealth
	{
		versions[]=
		{
			"Wordaircrafts_1",
			1
		};
		class Wordaircrafts_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"aircrafts"
			};
		};
	};
	class Wordparachutes
	{
		sentences[]=
		{
			"WordparachutesDefault",
			"(1-Stealth)",
			"WordparachutesStealth",
			"Stealth"
		};
	};
	class WordparachutesDefault
	{
		versions[]=
		{
			"Wordparachutes_1",
			1
		};
		class Wordparachutes_1
		{
			speech[]=
			{
				"parachutes"
			};
		};
	};
	class WordparachutesStealth
	{
		versions[]=
		{
			"Wordparachutes_1",
			1
		};
		class Wordparachutes_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"parachutes"
			};
		};
	};
	class Wordairplanes
	{
		sentences[]=
		{
			"WordairplanesDefault",
			"(1-Stealth)",
			"WordairplanesStealth",
			"Stealth"
		};
	};
	class WordairplanesDefault
	{
		versions[]=
		{
			"Wordairplanes_1",
			1
		};
		class Wordairplanes_1
		{
			speech[]=
			{
				"airplanes"
			};
		};
	};
	class WordairplanesStealth
	{
		versions[]=
		{
			"Wordairplanes_1",
			1
		};
		class Wordairplanes_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"airplanes"
			};
		};
	};
	class WordcargoAirplanes
	{
		sentences[]=
		{
			"WordcargoAirplanesDefault",
			"(1-Stealth)",
			"WordcargoAirplanesStealth",
			"Stealth"
		};
	};
	class WordcargoAirplanesDefault
	{
		versions[]=
		{
			"WordcargoAirplanes_1",
			1
		};
		class WordcargoAirplanes_1
		{
			speech[]=
			{
				"cargoAirplanes"
			};
		};
	};
	class WordcargoAirplanesStealth
	{
		versions[]=
		{
			"WordcargoAirplanes_1",
			1
		};
		class WordcargoAirplanes_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"cargoAirplanes"
			};
		};
	};
	class WordattackAirplanes
	{
		sentences[]=
		{
			"WordattackAirplanesDefault",
			"(1-Stealth)",
			"WordattackAirplanesStealth",
			"Stealth"
		};
	};
	class WordattackAirplanesDefault
	{
		versions[]=
		{
			"WordattackAirplanes_1",
			1
		};
		class WordattackAirplanes_1
		{
			speech[]=
			{
				"attackAirplanes"
			};
		};
	};
	class WordattackAirplanesStealth
	{
		versions[]=
		{
			"WordattackAirplanes_1",
			1
		};
		class WordattackAirplanes_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"attackAirplanes"
			};
		};
	};
	class WordUAVs
	{
		sentences[]=
		{
			"WordUAVsDefault",
			"(1-Stealth)",
			"WordUAVsStealth",
			"Stealth"
		};
	};
	class WordUAVsDefault
	{
		versions[]=
		{
			"WordUAVs_1",
			1
		};
		class WordUAVs_1
		{
			speech[]=
			{
				"UAVs"
			};
		};
	};
	class WordUAVsStealth
	{
		versions[]=
		{
			"WordUAVs_1",
			1
		};
		class WordUAVs_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"UAVs"
			};
		};
	};
	class Wordhelicopters
	{
		sentences[]=
		{
			"WordhelicoptersDefault",
			"(1-Stealth)",
			"WordhelicoptersStealth",
			"Stealth"
		};
	};
	class WordhelicoptersDefault
	{
		versions[]=
		{
			"Wordhelicopters_1",
			1
		};
		class Wordhelicopters_1
		{
			speech[]=
			{
				"helicopters"
			};
		};
	};
	class WordhelicoptersStealth
	{
		versions[]=
		{
			"Wordhelicopters_1",
			1
		};
		class Wordhelicopters_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"helicopters"
			};
		};
	};
	class Wordgunships
	{
		sentences[]=
		{
			"WordgunshipsDefault",
			"(1-Stealth)",
			"WordgunshipsStealth",
			"Stealth"
		};
	};
	class WordgunshipsDefault
	{
		versions[]=
		{
			"Wordgunships_1",
			1
		};
		class Wordgunships_1
		{
			speech[]=
			{
				"gunships"
			};
		};
	};
	class WordgunshipsStealth
	{
		versions[]=
		{
			"Wordgunships_1",
			1
		};
		class Wordgunships_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"gunships"
			};
		};
	};
	class Wordanimals
	{
		sentences[]=
		{
			"WordanimalsDefault",
			"(1-Stealth)",
			"WordanimalsStealth",
			"Stealth"
		};
	};
	class WordanimalsDefault
	{
		versions[]=
		{
			"Wordanimals_1",
			1
		};
		class Wordanimals_1
		{
			speech[]=
			{
				"animals"
			};
		};
	};
	class WordanimalsStealth
	{
		versions[]=
		{
			"Wordanimals_1",
			1
		};
		class Wordanimals_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"animals"
			};
		};
	};
	class Wordboats
	{
		sentences[]=
		{
			"WordboatsDefault",
			"(1-Stealth)",
			"WordboatsStealth",
			"Stealth"
		};
	};
	class WordboatsDefault
	{
		versions[]=
		{
			"Wordboats_1",
			1
		};
		class Wordboats_1
		{
			speech[]=
			{
				"boats"
			};
		};
	};
	class WordboatsStealth
	{
		versions[]=
		{
			"Wordboats_1",
			1
		};
		class Wordboats_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"boats"
			};
		};
	};
	class Wordammocrate
	{
		sentences[]=
		{
			"WordammocrateDefault",
			"(1-Stealth)",
			"WordammocrateStealth",
			"Stealth"
		};
	};
	class WordammocrateDefault
	{
		versions[]=
		{
			"Wordammocrate_1",
			1
		};
		class Wordammocrate_1
		{
			speech[]=
			{
				"ammocrate"
			};
		};
	};
	class WordammocrateStealth
	{
		versions[]=
		{
			"Wordammocrate_1",
			1
		};
		class Wordammocrate_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"ammocrate"
			};
		};
	};
	class Wordbuilding
	{
		sentences[]=
		{
			"WordbuildingDefault",
			"(1-Stealth)",
			"WordbuildingStealth",
			"Stealth"
		};
	};
	class WordbuildingDefault
	{
		versions[]=
		{
			"Wordbuilding_1",
			1
		};
		class Wordbuilding_1
		{
			speech[]=
			{
				"building"
			};
		};
	};
	class WordbuildingStealth
	{
		versions[]=
		{
			"Wordbuilding_1",
			1
		};
		class Wordbuilding_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"building"
			};
		};
	};
	class Wordbunker
	{
		sentences[]=
		{
			"WordbunkerDefault",
			"(1-Stealth)",
			"WordbunkerStealth",
			"Stealth"
		};
	};
	class WordbunkerDefault
	{
		versions[]=
		{
			"Wordbunker_1",
			1
		};
		class Wordbunker_1
		{
			speech[]=
			{
				"bunker"
			};
		};
	};
	class WordbunkerStealth
	{
		versions[]=
		{
			"Wordbunker_1",
			1
		};
		class Wordbunker_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"bunker"
			};
		};
	};
	class Wordbush
	{
		sentences[]=
		{
			"WordbushDefault",
			"(1-Stealth)",
			"WordbushStealth",
			"Stealth"
		};
	};
	class WordbushDefault
	{
		versions[]=
		{
			"Wordbush_1",
			1
		};
		class Wordbush_1
		{
			speech[]=
			{
				"bush"
			};
		};
	};
	class WordbushStealth
	{
		versions[]=
		{
			"Wordbush_1",
			1
		};
		class Wordbush_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"bush"
			};
		};
	};
	class WordcargoContainer
	{
		sentences[]=
		{
			"WordcargoContainerDefault",
			"(1-Stealth)",
			"WordcargoContainerStealth",
			"Stealth"
		};
	};
	class WordcargoContainerDefault
	{
		versions[]=
		{
			"WordcargoContainer_1",
			1
		};
		class WordcargoContainer_1
		{
			speech[]=
			{
				"cargoContainer"
			};
		};
	};
	class WordcargoContainerStealth
	{
		versions[]=
		{
			"WordcargoContainer_1",
			1
		};
		class WordcargoContainer_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"cargoContainer"
			};
		};
	};
	class Wordcross
	{
		sentences[]=
		{
			"WordcrossDefault",
			"(1-Stealth)",
			"WordcrossStealth",
			"Stealth"
		};
	};
	class WordcrossDefault
	{
		versions[]=
		{
			"Wordcross_1",
			1
		};
		class Wordcross_1
		{
			speech[]=
			{
				"cross"
			};
		};
	};
	class WordcrossStealth
	{
		versions[]=
		{
			"Wordcross_1",
			1
		};
		class Wordcross_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"cross"
			};
		};
	};
	class Wordfence
	{
		sentences[]=
		{
			"WordfenceDefault",
			"(1-Stealth)",
			"WordfenceStealth",
			"Stealth"
		};
	};
	class WordfenceDefault
	{
		versions[]=
		{
			"Wordfence_1",
			1
		};
		class Wordfence_1
		{
			speech[]=
			{
				"fence"
			};
		};
	};
	class WordfenceStealth
	{
		versions[]=
		{
			"Wordfence_1",
			1
		};
		class Wordfence_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"fence"
			};
		};
	};
	class Wordflag
	{
		sentences[]=
		{
			"WordflagDefault",
			"(1-Stealth)",
			"WordflagStealth",
			"Stealth"
		};
	};
	class WordflagDefault
	{
		versions[]=
		{
			"Wordflag_1",
			1
		};
		class Wordflag_1
		{
			speech[]=
			{
				"flag"
			};
		};
	};
	class WordflagStealth
	{
		versions[]=
		{
			"Wordflag_1",
			1
		};
		class Wordflag_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"flag"
			};
		};
	};
	class Wordhouse
	{
		sentences[]=
		{
			"WordhouseDefault",
			"(1-Stealth)",
			"WordhouseStealth",
			"Stealth"
		};
	};
	class WordhouseDefault
	{
		versions[]=
		{
			"Wordhouse_1",
			1
		};
		class Wordhouse_1
		{
			speech[]=
			{
				"house"
			};
		};
	};
	class WordhouseStealth
	{
		versions[]=
		{
			"Wordhouse_1",
			1
		};
		class Wordhouse_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"house"
			};
		};
	};
	class Wordchurch
	{
		sentences[]=
		{
			"WordchurchDefault",
			"(1-Stealth)",
			"WordchurchStealth",
			"Stealth"
		};
	};
	class WordchurchDefault
	{
		versions[]=
		{
			"Wordchurch_1",
			1
		};
		class Wordchurch_1
		{
			speech[]=
			{
				"church"
			};
		};
	};
	class WordchurchStealth
	{
		versions[]=
		{
			"Wordchurch_1",
			1
		};
		class Wordchurch_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"church"
			};
		};
	};
	class WordLaserTarget
	{
		sentences[]=
		{
			"WordLaserTargetDefault",
			"(1-Stealth)",
			"WordLaserTargetStealth",
			"Stealth"
		};
	};
	class WordLaserTargetDefault
	{
		versions[]=
		{
			"WordLaserTarget_1",
			1
		};
		class WordLaserTarget_1
		{
			speech[]=
			{
				"LaserTarget"
			};
		};
	};
	class WordLaserTargetStealth
	{
		versions[]=
		{
			"WordLaserTarget_1",
			1
		};
		class WordLaserTarget_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"LaserTarget"
			};
		};
	};
	class Wordobject
	{
		sentences[]=
		{
			"WordobjectDefault",
			"(1-Stealth)",
			"WordobjectStealth",
			"Stealth"
		};
	};
	class WordobjectDefault
	{
		versions[]=
		{
			"Wordobject_1",
			1
		};
		class Wordobject_1
		{
			speech[]=
			{
				"object"
			};
		};
	};
	class WordobjectStealth
	{
		versions[]=
		{
			"Wordobject_1",
			1
		};
		class Wordobject_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"object"
			};
		};
	};
	class Wordrock
	{
		sentences[]=
		{
			"WordrockDefault",
			"(1-Stealth)",
			"WordrockStealth",
			"Stealth"
		};
	};
	class WordrockDefault
	{
		versions[]=
		{
			"Wordrock_1",
			1
		};
		class Wordrock_1
		{
			speech[]=
			{
				"rock"
			};
		};
	};
	class WordrockStealth
	{
		versions[]=
		{
			"Wordrock_1",
			1
		};
		class Wordrock_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"rock"
			};
		};
	};
	class Wordruin
	{
		sentences[]=
		{
			"WordruinDefault",
			"(1-Stealth)",
			"WordruinStealth",
			"Stealth"
		};
	};
	class WordruinDefault
	{
		versions[]=
		{
			"Wordruin_1",
			1
		};
		class Wordruin_1
		{
			speech[]=
			{
				"ruin"
			};
		};
	};
	class WordruinStealth
	{
		versions[]=
		{
			"Wordruin_1",
			1
		};
		class Wordruin_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"ruin"
			};
		};
	};
	class Wordstructure
	{
		sentences[]=
		{
			"WordstructureDefault",
			"(1-Stealth)",
			"WordstructureStealth",
			"Stealth"
		};
	};
	class WordstructureDefault
	{
		versions[]=
		{
			"Wordstructure_1",
			1
		};
		class Wordstructure_1
		{
			speech[]=
			{
				"structure"
			};
		};
	};
	class WordstructureStealth
	{
		versions[]=
		{
			"Wordstructure_1",
			1
		};
		class Wordstructure_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"structure"
			};
		};
	};
	class Wordtarget
	{
		sentences[]=
		{
			"WordtargetDefault",
			"(1-Stealth)",
			"WordtargetStealth",
			"Stealth"
		};
	};
	class WordtargetDefault
	{
		versions[]=
		{
			"Wordtarget_1",
			1
		};
		class Wordtarget_1
		{
			speech[]=
			{
				"target"
			};
		};
	};
	class WordtargetStealth
	{
		versions[]=
		{
			"Wordtarget_1",
			1
		};
		class Wordtarget_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"target"
			};
		};
	};
	class Wordtent
	{
		sentences[]=
		{
			"WordtentDefault",
			"(1-Stealth)",
			"WordtentStealth",
			"Stealth"
		};
	};
	class WordtentDefault
	{
		versions[]=
		{
			"Wordtent_1",
			1
		};
		class Wordtent_1
		{
			speech[]=
			{
				"tent"
			};
		};
	};
	class WordtentStealth
	{
		versions[]=
		{
			"Wordtent_1",
			1
		};
		class Wordtent_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"tent"
			};
		};
	};
	class Wordtower
	{
		sentences[]=
		{
			"WordtowerDefault",
			"(1-Stealth)",
			"WordtowerStealth",
			"Stealth"
		};
	};
	class WordtowerDefault
	{
		versions[]=
		{
			"Wordtower_1",
			1
		};
		class Wordtower_1
		{
			speech[]=
			{
				"tower"
			};
		};
	};
	class WordtowerStealth
	{
		versions[]=
		{
			"Wordtower_1",
			1
		};
		class Wordtower_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"tower"
			};
		};
	};
	class Wordtree
	{
		sentences[]=
		{
			"WordtreeDefault",
			"(1-Stealth)",
			"WordtreeStealth",
			"Stealth"
		};
	};
	class WordtreeDefault
	{
		versions[]=
		{
			"Wordtree_1",
			1
		};
		class Wordtree_1
		{
			speech[]=
			{
				"tree"
			};
		};
	};
	class WordtreeStealth
	{
		versions[]=
		{
			"Wordtree_1",
			1
		};
		class Wordtree_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"tree"
			};
		};
	};
	class Wordwall
	{
		sentences[]=
		{
			"WordwallDefault",
			"(1-Stealth)",
			"WordwallStealth",
			"Stealth"
		};
	};
	class WordwallDefault
	{
		versions[]=
		{
			"Wordwall_1",
			1
		};
		class Wordwall_1
		{
			speech[]=
			{
				"wall"
			};
		};
	};
	class WordwallStealth
	{
		versions[]=
		{
			"Wordwall_1",
			1
		};
		class Wordwall_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"wall"
			};
		};
	};
	class Wordwreck
	{
		sentences[]=
		{
			"WordwreckDefault",
			"(1-Stealth)",
			"WordwreckStealth",
			"Stealth"
		};
	};
	class WordwreckDefault
	{
		versions[]=
		{
			"Wordwreck_1",
			1
		};
		class Wordwreck_1
		{
			speech[]=
			{
				"wreck"
			};
		};
	};
	class WordwreckStealth
	{
		versions[]=
		{
			"Wordwreck_1",
			1
		};
		class Wordwreck_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"wreck"
			};
		};
	};
	class WordKamenyy
	{
		sentences[]=
		{
			"WordKamenyyDefault",
			"(1-Stealth)",
			"WordKamenyyStealth",
			"Stealth"
		};
	};
	class WordKamenyyDefault
	{
		versions[]=
		{
			"WordKamenyy_1",
			1
		};
		class WordKamenyy_1
		{
			speech[]=
			{
				"Kamenyy"
			};
		};
	};
	class WordKamenyyStealth
	{
		versions[]=
		{
			"WordKamenyy_1",
			1
		};
		class WordKamenyy_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Kamenyy"
			};
		};
	};
	class WordStrelka
	{
		sentences[]=
		{
			"WordStrelkaDefault",
			"(1-Stealth)",
			"WordStrelkaStealth",
			"Stealth"
		};
	};
	class WordStrelkaDefault
	{
		versions[]=
		{
			"WordStrelka_1",
			1
		};
		class WordStrelka_1
		{
			speech[]=
			{
				"Strelka"
			};
		};
	};
	class WordStrelkaStealth
	{
		versions[]=
		{
			"WordStrelka_1",
			1
		};
		class WordStrelka_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Strelka"
			};
		};
	};
	class WordElektrozavodsk
	{
		sentences[]=
		{
			"WordElektrozavodskDefault",
			"(1-Stealth)",
			"WordElektrozavodskStealth",
			"Stealth"
		};
	};
	class WordElektrozavodskDefault
	{
		versions[]=
		{
			"WordElektrozavodsk_1",
			1
		};
		class WordElektrozavodsk_1
		{
			speech[]=
			{
				"Elektrozavodsk"
			};
		};
	};
	class WordElektrozavodskStealth
	{
		versions[]=
		{
			"WordElektrozavodsk_1",
			1
		};
		class WordElektrozavodsk_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Elektrozavodsk"
			};
		};
	};
	class WordGorka
	{
		sentences[]=
		{
			"WordGorkaDefault",
			"(1-Stealth)",
			"WordGorkaStealth",
			"Stealth"
		};
	};
	class WordGorkaDefault
	{
		versions[]=
		{
			"WordGorka_1",
			1
		};
		class WordGorka_1
		{
			speech[]=
			{
				"Gorka"
			};
		};
	};
	class WordGorkaStealth
	{
		versions[]=
		{
			"WordGorka_1",
			1
		};
		class WordGorka_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Gorka"
			};
		};
	};
	class WordChernogorsk
	{
		sentences[]=
		{
			"WordChernogorskDefault",
			"(1-Stealth)",
			"WordChernogorskStealth",
			"Stealth"
		};
	};
	class WordChernogorskDefault
	{
		versions[]=
		{
			"WordChernogorsk_1",
			1
		};
		class WordChernogorsk_1
		{
			speech[]=
			{
				"Chernogorsk"
			};
		};
	};
	class WordChernogorskStealth
	{
		versions[]=
		{
			"WordChernogorsk_1",
			1
		};
		class WordChernogorsk_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Chernogorsk"
			};
		};
	};
	class WordKrasnostav
	{
		sentences[]=
		{
			"WordKrasnostavDefault",
			"(1-Stealth)",
			"WordKrasnostavStealth",
			"Stealth"
		};
	};
	class WordKrasnostavDefault
	{
		versions[]=
		{
			"WordKrasnostav_1",
			1
		};
		class WordKrasnostav_1
		{
			speech[]=
			{
				"Krasnostav"
			};
		};
	};
	class WordKrasnostavStealth
	{
		versions[]=
		{
			"WordKrasnostav_1",
			1
		};
		class WordKrasnostav_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Krasnostav"
			};
		};
	};
	class WordSolnichniy
	{
		sentences[]=
		{
			"WordSolnichniyDefault",
			"(1-Stealth)",
			"WordSolnichniyStealth",
			"Stealth"
		};
	};
	class WordSolnichniyDefault
	{
		versions[]=
		{
			"WordSolnichniy_1",
			1
		};
		class WordSolnichniy_1
		{
			speech[]=
			{
				"Solnichniy"
			};
		};
	};
	class WordSolnichniyStealth
	{
		versions[]=
		{
			"WordSolnichniy_1",
			1
		};
		class WordSolnichniy_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Solnichniy"
			};
		};
	};
	class WordStarySobor
	{
		sentences[]=
		{
			"WordStarySoborDefault",
			"(1-Stealth)",
			"WordStarySoborStealth",
			"Stealth"
		};
	};
	class WordStarySoborDefault
	{
		versions[]=
		{
			"WordStarySobor_1",
			1
		};
		class WordStarySobor_1
		{
			speech[]=
			{
				"StarySobor"
			};
		};
	};
	class WordStarySoborStealth
	{
		versions[]=
		{
			"WordStarySobor_1",
			1
		};
		class WordStarySobor_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"StarySobor"
			};
		};
	};
	class WordVybor
	{
		sentences[]=
		{
			"WordVyborDefault",
			"(1-Stealth)",
			"WordVyborStealth",
			"Stealth"
		};
	};
	class WordVyborDefault
	{
		versions[]=
		{
			"WordVybor_1",
			1
		};
		class WordVybor_1
		{
			speech[]=
			{
				"Vybor"
			};
		};
	};
	class WordVyborStealth
	{
		versions[]=
		{
			"WordVybor_1",
			1
		};
		class WordVybor_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Vybor"
			};
		};
	};
	class WordZelenogorsk
	{
		sentences[]=
		{
			"WordZelenogorskDefault",
			"(1-Stealth)",
			"WordZelenogorskStealth",
			"Stealth"
		};
	};
	class WordZelenogorskDefault
	{
		versions[]=
		{
			"WordZelenogorsk_1",
			1
		};
		class WordZelenogorsk_1
		{
			speech[]=
			{
				"Zelenogorsk"
			};
		};
	};
	class WordZelenogorskStealth
	{
		versions[]=
		{
			"WordZelenogorsk_1",
			1
		};
		class WordZelenogorsk_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Zelenogorsk"
			};
		};
	};
	class WordPusta
	{
		sentences[]=
		{
			"WordPustaDefault",
			"(1-Stealth)",
			"WordPustaStealth",
			"Stealth"
		};
	};
	class WordPustaDefault
	{
		versions[]=
		{
			"WordPusta_1",
			1
		};
		class WordPusta_1
		{
			speech[]=
			{
				"Pusta"
			};
		};
	};
	class WordPustaStealth
	{
		versions[]=
		{
			"WordPusta_1",
			1
		};
		class WordPusta_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Pusta"
			};
		};
	};
	class WordVyshnoe
	{
		sentences[]=
		{
			"WordVyshnoeDefault",
			"(1-Stealth)",
			"WordVyshnoeStealth",
			"Stealth"
		};
	};
	class WordVyshnoeDefault
	{
		versions[]=
		{
			"WordVyshnoe_1",
			1
		};
		class WordVyshnoe_1
		{
			speech[]=
			{
				"Vyshnoe"
			};
		};
	};
	class WordVyshnoeStealth
	{
		versions[]=
		{
			"WordVyshnoe_1",
			1
		};
		class WordVyshnoe_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Vyshnoe"
			};
		};
	};
	class WordBalota
	{
		sentences[]=
		{
			"WordBalotaDefault",
			"(1-Stealth)",
			"WordBalotaStealth",
			"Stealth"
		};
	};
	class WordBalotaDefault
	{
		versions[]=
		{
			"WordBalota_1",
			1
		};
		class WordBalota_1
		{
			speech[]=
			{
				"Balota"
			};
		};
	};
	class WordBalotaStealth
	{
		versions[]=
		{
			"WordBalota_1",
			1
		};
		class WordBalota_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Balota"
			};
		};
	};
	class WordBor
	{
		sentences[]=
		{
			"WordBorDefault",
			"(1-Stealth)",
			"WordBorStealth",
			"Stealth"
		};
	};
	class WordBorDefault
	{
		versions[]=
		{
			"WordBor_1",
			1
		};
		class WordBor_1
		{
			speech[]=
			{
				"Bor"
			};
		};
	};
	class WordBorStealth
	{
		versions[]=
		{
			"WordBor_1",
			1
		};
		class WordBor_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Bor"
			};
		};
	};
	class WordDolina
	{
		sentences[]=
		{
			"WordDolinaDefault",
			"(1-Stealth)",
			"WordDolinaStealth",
			"Stealth"
		};
	};
	class WordDolinaDefault
	{
		versions[]=
		{
			"WordDolina_1",
			1
		};
		class WordDolina_1
		{
			speech[]=
			{
				"Dolina"
			};
		};
	};
	class WordDolinaStealth
	{
		versions[]=
		{
			"WordDolina_1",
			1
		};
		class WordDolina_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Dolina"
			};
		};
	};
	class WordDrozhino
	{
		sentences[]=
		{
			"WordDrozhinoDefault",
			"(1-Stealth)",
			"WordDrozhinoStealth",
			"Stealth"
		};
	};
	class WordDrozhinoDefault
	{
		versions[]=
		{
			"WordDrozhino_1",
			1
		};
		class WordDrozhino_1
		{
			speech[]=
			{
				"Drozhino"
			};
		};
	};
	class WordDrozhinoStealth
	{
		versions[]=
		{
			"WordDrozhino_1",
			1
		};
		class WordDrozhino_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Drozhino"
			};
		};
	};
	class WordDubrovka
	{
		sentences[]=
		{
			"WordDubrovkaDefault",
			"(1-Stealth)",
			"WordDubrovkaStealth",
			"Stealth"
		};
	};
	class WordDubrovkaDefault
	{
		versions[]=
		{
			"WordDubrovka_1",
			1
		};
		class WordDubrovka_1
		{
			speech[]=
			{
				"Dubrovka"
			};
		};
	};
	class WordDubrovkaStealth
	{
		versions[]=
		{
			"WordDubrovka_1",
			1
		};
		class WordDubrovka_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Dubrovka"
			};
		};
	};
	class WordGrishino
	{
		sentences[]=
		{
			"WordGrishinoDefault",
			"(1-Stealth)",
			"WordGrishinoStealth",
			"Stealth"
		};
	};
	class WordGrishinoDefault
	{
		versions[]=
		{
			"WordGrishino_1",
			1
		};
		class WordGrishino_1
		{
			speech[]=
			{
				"Grishino"
			};
		};
	};
	class WordGrishinoStealth
	{
		versions[]=
		{
			"WordGrishino_1",
			1
		};
		class WordGrishino_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Grishino"
			};
		};
	};
	class WordGuglovo
	{
		sentences[]=
		{
			"WordGuglovoDefault",
			"(1-Stealth)",
			"WordGuglovoStealth",
			"Stealth"
		};
	};
	class WordGuglovoDefault
	{
		versions[]=
		{
			"WordGuglovo_1",
			1
		};
		class WordGuglovo_1
		{
			speech[]=
			{
				"Guglovo"
			};
		};
	};
	class WordGuglovoStealth
	{
		versions[]=
		{
			"WordGuglovo_1",
			1
		};
		class WordGuglovo_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Guglovo"
			};
		};
	};
	class WordGvozdno
	{
		sentences[]=
		{
			"WordGvozdnoDefault",
			"(1-Stealth)",
			"WordGvozdnoStealth",
			"Stealth"
		};
	};
	class WordGvozdnoDefault
	{
		versions[]=
		{
			"WordGvozdno_1",
			1
		};
		class WordGvozdno_1
		{
			speech[]=
			{
				"Gvozdno"
			};
		};
	};
	class WordGvozdnoStealth
	{
		versions[]=
		{
			"WordGvozdno_1",
			1
		};
		class WordGvozdno_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Gvozdno"
			};
		};
	};
	class WordKabanino
	{
		sentences[]=
		{
			"WordKabaninoDefault",
			"(1-Stealth)",
			"WordKabaninoStealth",
			"Stealth"
		};
	};
	class WordKabaninoDefault
	{
		versions[]=
		{
			"WordKabanino_1",
			1
		};
		class WordKabanino_1
		{
			speech[]=
			{
				"Kabanino"
			};
		};
	};
	class WordKabaninoStealth
	{
		versions[]=
		{
			"WordKabanino_1",
			1
		};
		class WordKabanino_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Kabanino"
			};
		};
	};
	class WordKamenka
	{
		sentences[]=
		{
			"WordKamenkaDefault",
			"(1-Stealth)",
			"WordKamenkaStealth",
			"Stealth"
		};
	};
	class WordKamenkaDefault
	{
		versions[]=
		{
			"WordKamenka_1",
			1
		};
		class WordKamenka_1
		{
			speech[]=
			{
				"Kamenka"
			};
		};
	};
	class WordKamenkaStealth
	{
		versions[]=
		{
			"WordKamenka_1",
			1
		};
		class WordKamenka_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Kamenka"
			};
		};
	};
	class WordKamyshovo
	{
		sentences[]=
		{
			"WordKamyshovoDefault",
			"(1-Stealth)",
			"WordKamyshovoStealth",
			"Stealth"
		};
	};
	class WordKamyshovoDefault
	{
		versions[]=
		{
			"WordKamyshovo_1",
			1
		};
		class WordKamyshovo_1
		{
			speech[]=
			{
				"Kamyshovo"
			};
		};
	};
	class WordKamyshovoStealth
	{
		versions[]=
		{
			"WordKamyshovo_1",
			1
		};
		class WordKamyshovo_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Kamyshovo"
			};
		};
	};
	class WordKhelm
	{
		sentences[]=
		{
			"WordKhelmDefault",
			"(1-Stealth)",
			"WordKhelmStealth",
			"Stealth"
		};
	};
	class WordKhelmDefault
	{
		versions[]=
		{
			"WordKhelm_1",
			1
		};
		class WordKhelm_1
		{
			speech[]=
			{
				"Khelm"
			};
		};
	};
	class WordKhelmStealth
	{
		versions[]=
		{
			"WordKhelm_1",
			1
		};
		class WordKhelm_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Khelm"
			};
		};
	};
	class WordKomarovo
	{
		sentences[]=
		{
			"WordKomarovoDefault",
			"(1-Stealth)",
			"WordKomarovoStealth",
			"Stealth"
		};
	};
	class WordKomarovoDefault
	{
		versions[]=
		{
			"WordKomarovo_1",
			1
		};
		class WordKomarovo_1
		{
			speech[]=
			{
				"Komarovo"
			};
		};
	};
	class WordKomarovoStealth
	{
		versions[]=
		{
			"WordKomarovo_1",
			1
		};
		class WordKomarovo_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Komarovo"
			};
		};
	};
	class WordKozlovka
	{
		sentences[]=
		{
			"WordKozlovkaDefault",
			"(1-Stealth)",
			"WordKozlovkaStealth",
			"Stealth"
		};
	};
	class WordKozlovkaDefault
	{
		versions[]=
		{
			"WordKozlovka_1",
			1
		};
		class WordKozlovka_1
		{
			speech[]=
			{
				"Kozlovka"
			};
		};
	};
	class WordKozlovkaStealth
	{
		versions[]=
		{
			"WordKozlovka_1",
			1
		};
		class WordKozlovka_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Kozlovka"
			};
		};
	};
	class WordLopatino
	{
		sentences[]=
		{
			"WordLopatinoDefault",
			"(1-Stealth)",
			"WordLopatinoStealth",
			"Stealth"
		};
	};
	class WordLopatinoDefault
	{
		versions[]=
		{
			"WordLopatino_1",
			1
		};
		class WordLopatino_1
		{
			speech[]=
			{
				"Lopatino"
			};
		};
	};
	class WordLopatinoStealth
	{
		versions[]=
		{
			"WordLopatino_1",
			1
		};
		class WordLopatino_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Lopatino"
			};
		};
	};
	class WordMogilevka
	{
		sentences[]=
		{
			"WordMogilevkaDefault",
			"(1-Stealth)",
			"WordMogilevkaStealth",
			"Stealth"
		};
	};
	class WordMogilevkaDefault
	{
		versions[]=
		{
			"WordMogilevka_1",
			1
		};
		class WordMogilevka_1
		{
			speech[]=
			{
				"Mogilevka"
			};
		};
	};
	class WordMogilevkaStealth
	{
		versions[]=
		{
			"WordMogilevka_1",
			1
		};
		class WordMogilevka_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Mogilevka"
			};
		};
	};
	class WordMsta
	{
		sentences[]=
		{
			"WordMstaDefault",
			"(1-Stealth)",
			"WordMstaStealth",
			"Stealth"
		};
	};
	class WordMstaDefault
	{
		versions[]=
		{
			"WordMsta_1",
			1
		};
		class WordMsta_1
		{
			speech[]=
			{
				"Msta"
			};
		};
	};
	class WordMstaStealth
	{
		versions[]=
		{
			"WordMsta_1",
			1
		};
		class WordMsta_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Msta"
			};
		};
	};
	class WordMyshkino
	{
		sentences[]=
		{
			"WordMyshkinoDefault",
			"(1-Stealth)",
			"WordMyshkinoStealth",
			"Stealth"
		};
	};
	class WordMyshkinoDefault
	{
		versions[]=
		{
			"WordMyshkino_1",
			1
		};
		class WordMyshkino_1
		{
			speech[]=
			{
				"Myshkino"
			};
		};
	};
	class WordMyshkinoStealth
	{
		versions[]=
		{
			"WordMyshkino_1",
			1
		};
		class WordMyshkino_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Myshkino"
			};
		};
	};
	class WordNadezhdino
	{
		sentences[]=
		{
			"WordNadezhdinoDefault",
			"(1-Stealth)",
			"WordNadezhdinoStealth",
			"Stealth"
		};
	};
	class WordNadezhdinoDefault
	{
		versions[]=
		{
			"WordNadezhdino_1",
			1
		};
		class WordNadezhdino_1
		{
			speech[]=
			{
				"Nadezhdino"
			};
		};
	};
	class WordNadezhdinoStealth
	{
		versions[]=
		{
			"WordNadezhdino_1",
			1
		};
		class WordNadezhdino_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Nadezhdino"
			};
		};
	};
	class WordNizhnoye
	{
		sentences[]=
		{
			"WordNizhnoyeDefault",
			"(1-Stealth)",
			"WordNizhnoyeStealth",
			"Stealth"
		};
	};
	class WordNizhnoyeDefault
	{
		versions[]=
		{
			"WordNizhnoye_1",
			1
		};
		class WordNizhnoye_1
		{
			speech[]=
			{
				"Nizhnoye"
			};
		};
	};
	class WordNizhnoyeStealth
	{
		versions[]=
		{
			"WordNizhnoye_1",
			1
		};
		class WordNizhnoye_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Nizhnoye"
			};
		};
	};
	class WordNovySobor
	{
		sentences[]=
		{
			"WordNovySoborDefault",
			"(1-Stealth)",
			"WordNovySoborStealth",
			"Stealth"
		};
	};
	class WordNovySoborDefault
	{
		versions[]=
		{
			"WordNovySobor_1",
			1
		};
		class WordNovySobor_1
		{
			speech[]=
			{
				"NovySobor"
			};
		};
	};
	class WordNovySoborStealth
	{
		versions[]=
		{
			"WordNovySobor_1",
			1
		};
		class WordNovySobor_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"NovySobor"
			};
		};
	};
	class WordOlsha
	{
		sentences[]=
		{
			"WordOlshaDefault",
			"(1-Stealth)",
			"WordOlshaStealth",
			"Stealth"
		};
	};
	class WordOlshaDefault
	{
		versions[]=
		{
			"WordOlsha_1",
			1
		};
		class WordOlsha_1
		{
			speech[]=
			{
				"Olsha"
			};
		};
	};
	class WordOlshaStealth
	{
		versions[]=
		{
			"WordOlsha_1",
			1
		};
		class WordOlsha_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Olsha"
			};
		};
	};
	class WordOrlovets
	{
		sentences[]=
		{
			"WordOrlovetsDefault",
			"(1-Stealth)",
			"WordOrlovetsStealth",
			"Stealth"
		};
	};
	class WordOrlovetsDefault
	{
		versions[]=
		{
			"WordOrlovets_1",
			1
		};
		class WordOrlovets_1
		{
			speech[]=
			{
				"Orlovets"
			};
		};
	};
	class WordOrlovetsStealth
	{
		versions[]=
		{
			"WordOrlovets_1",
			1
		};
		class WordOrlovets_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Orlovets"
			};
		};
	};
	class WordPavlovo
	{
		sentences[]=
		{
			"WordPavlovoDefault",
			"(1-Stealth)",
			"WordPavlovoStealth",
			"Stealth"
		};
	};
	class WordPavlovoDefault
	{
		versions[]=
		{
			"WordPavlovo_1",
			1
		};
		class WordPavlovo_1
		{
			speech[]=
			{
				"Pavlovo"
			};
		};
	};
	class WordPavlovoStealth
	{
		versions[]=
		{
			"WordPavlovo_1",
			1
		};
		class WordPavlovo_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Pavlovo"
			};
		};
	};
	class WordPetrovka
	{
		sentences[]=
		{
			"WordPetrovkaDefault",
			"(1-Stealth)",
			"WordPetrovkaStealth",
			"Stealth"
		};
	};
	class WordPetrovkaDefault
	{
		versions[]=
		{
			"WordPetrovka_1",
			1
		};
		class WordPetrovka_1
		{
			speech[]=
			{
				"Petrovka"
			};
		};
	};
	class WordPetrovkaStealth
	{
		versions[]=
		{
			"WordPetrovka_1",
			1
		};
		class WordPetrovka_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Petrovka"
			};
		};
	};
	class WordPogorevka
	{
		sentences[]=
		{
			"WordPogorevkaDefault",
			"(1-Stealth)",
			"WordPogorevkaStealth",
			"Stealth"
		};
	};
	class WordPogorevkaDefault
	{
		versions[]=
		{
			"WordPogorevka_1",
			1
		};
		class WordPogorevka_1
		{
			speech[]=
			{
				"Pogorevka"
			};
		};
	};
	class WordPogorevkaStealth
	{
		versions[]=
		{
			"WordPogorevka_1",
			1
		};
		class WordPogorevka_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Pogorevka"
			};
		};
	};
	class WordPolana
	{
		sentences[]=
		{
			"WordPolanaDefault",
			"(1-Stealth)",
			"WordPolanaStealth",
			"Stealth"
		};
	};
	class WordPolanaDefault
	{
		versions[]=
		{
			"WordPolana_1",
			1
		};
		class WordPolana_1
		{
			speech[]=
			{
				"Polana"
			};
		};
	};
	class WordPolanaStealth
	{
		versions[]=
		{
			"WordPolana_1",
			1
		};
		class WordPolana_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Polana"
			};
		};
	};
	class WordPrigorodki
	{
		sentences[]=
		{
			"WordPrigorodkiDefault",
			"(1-Stealth)",
			"WordPrigorodkiStealth",
			"Stealth"
		};
	};
	class WordPrigorodkiDefault
	{
		versions[]=
		{
			"WordPrigorodki_1",
			1
		};
		class WordPrigorodki_1
		{
			speech[]=
			{
				"Prigorodki"
			};
		};
	};
	class WordPrigorodkiStealth
	{
		versions[]=
		{
			"WordPrigorodki_1",
			1
		};
		class WordPrigorodki_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Prigorodki"
			};
		};
	};
	class WordPulkovo
	{
		sentences[]=
		{
			"WordPulkovoDefault",
			"(1-Stealth)",
			"WordPulkovoStealth",
			"Stealth"
		};
	};
	class WordPulkovoDefault
	{
		versions[]=
		{
			"WordPulkovo_1",
			1
		};
		class WordPulkovo_1
		{
			speech[]=
			{
				"Pulkovo"
			};
		};
	};
	class WordPulkovoStealth
	{
		versions[]=
		{
			"WordPulkovo_1",
			1
		};
		class WordPulkovo_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Pulkovo"
			};
		};
	};
	class WordPustoshka
	{
		sentences[]=
		{
			"WordPustoshkaDefault",
			"(1-Stealth)",
			"WordPustoshkaStealth",
			"Stealth"
		};
	};
	class WordPustoshkaDefault
	{
		versions[]=
		{
			"WordPustoshka_1",
			1
		};
		class WordPustoshka_1
		{
			speech[]=
			{
				"Pustoshka"
			};
		};
	};
	class WordPustoshkaStealth
	{
		versions[]=
		{
			"WordPustoshka_1",
			1
		};
		class WordPustoshka_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Pustoshka"
			};
		};
	};
	class WordRogovo
	{
		sentences[]=
		{
			"WordRogovoDefault",
			"(1-Stealth)",
			"WordRogovoStealth",
			"Stealth"
		};
	};
	class WordRogovoDefault
	{
		versions[]=
		{
			"WordRogovo_1",
			1
		};
		class WordRogovo_1
		{
			speech[]=
			{
				"Rogovo"
			};
		};
	};
	class WordRogovoStealth
	{
		versions[]=
		{
			"WordRogovo_1",
			1
		};
		class WordRogovo_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Rogovo"
			};
		};
	};
	class WordShakhovka
	{
		sentences[]=
		{
			"WordShakhovkaDefault",
			"(1-Stealth)",
			"WordShakhovkaStealth",
			"Stealth"
		};
	};
	class WordShakhovkaDefault
	{
		versions[]=
		{
			"WordShakhovka_1",
			1
		};
		class WordShakhovka_1
		{
			speech[]=
			{
				"Shakhovka"
			};
		};
	};
	class WordShakhovkaStealth
	{
		versions[]=
		{
			"WordShakhovka_1",
			1
		};
		class WordShakhovka_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Shakhovka"
			};
		};
	};
	class WordSosnovka
	{
		sentences[]=
		{
			"WordSosnovkaDefault",
			"(1-Stealth)",
			"WordSosnovkaStealth",
			"Stealth"
		};
	};
	class WordSosnovkaDefault
	{
		versions[]=
		{
			"WordSosnovka_1",
			1
		};
		class WordSosnovka_1
		{
			speech[]=
			{
				"Sosnovka"
			};
		};
	};
	class WordSosnovkaStealth
	{
		versions[]=
		{
			"WordSosnovka_1",
			1
		};
		class WordSosnovka_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Sosnovka"
			};
		};
	};
	class WordStaroye
	{
		sentences[]=
		{
			"WordStaroyeDefault",
			"(1-Stealth)",
			"WordStaroyeStealth",
			"Stealth"
		};
	};
	class WordStaroyeDefault
	{
		versions[]=
		{
			"WordStaroye_1",
			1
		};
		class WordStaroye_1
		{
			speech[]=
			{
				"Staroye"
			};
		};
	};
	class WordStaroyeStealth
	{
		versions[]=
		{
			"WordStaroye_1",
			1
		};
		class WordStaroye_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Staroye"
			};
		};
	};
	class WordTulga
	{
		sentences[]=
		{
			"WordTulgaDefault",
			"(1-Stealth)",
			"WordTulgaStealth",
			"Stealth"
		};
	};
	class WordTulgaDefault
	{
		versions[]=
		{
			"WordTulga_1",
			1
		};
		class WordTulga_1
		{
			speech[]=
			{
				"Tulga"
			};
		};
	};
	class WordTulgaStealth
	{
		versions[]=
		{
			"WordTulga_1",
			1
		};
		class WordTulga_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Tulga"
			};
		};
	};
	class WordTown
	{
		sentences[]=
		{
			"WordTownDefault",
			"(1-Stealth)",
			"WordTownStealth",
			"Stealth"
		};
	};
	class WordTownDefault
	{
		versions[]=
		{
			"WordTown_1",
			1
		};
		class WordTown_1
		{
			speech[]=
			{
				"Town"
			};
		};
	};
	class WordTownStealth
	{
		versions[]=
		{
			"WordTown_1",
			1
		};
		class WordTown_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Town"
			};
		};
	};
	class WordVillage
	{
		sentences[]=
		{
			"WordVillageDefault",
			"(1-Stealth)",
			"WordVillageStealth",
			"Stealth"
		};
	};
	class WordVillageDefault
	{
		versions[]=
		{
			"WordVillage_1",
			1
		};
		class WordVillage_1
		{
			speech[]=
			{
				"Village"
			};
		};
	};
	class WordVillageStealth
	{
		versions[]=
		{
			"WordVillage_1",
			1
		};
		class WordVillage_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Village"
			};
		};
	};
	class WordAirfield
	{
		sentences[]=
		{
			"WordAirfieldDefault",
			"(1-Stealth)",
			"WordAirfieldStealth",
			"Stealth"
		};
	};
	class WordAirfieldDefault
	{
		versions[]=
		{
			"WordAirfield_1",
			1
		};
		class WordAirfield_1
		{
			speech[]=
			{
				"Airfield"
			};
		};
	};
	class WordAirfieldStealth
	{
		versions[]=
		{
			"WordAirfield_1",
			1
		};
		class WordAirfield_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Airfield"
			};
		};
	};
	class WordFactory
	{
		sentences[]=
		{
			"WordFactoryDefault",
			"(1-Stealth)",
			"WordFactoryStealth",
			"Stealth"
		};
	};
	class WordFactoryDefault
	{
		versions[]=
		{
			"WordFactory_1",
			1
		};
		class WordFactory_1
		{
			speech[]=
			{
				"Factory"
			};
		};
	};
	class WordFactoryStealth
	{
		versions[]=
		{
			"WordFactory_1",
			1
		};
		class WordFactory_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Factory"
			};
		};
	};
	class WordCrossroad
	{
		sentences[]=
		{
			"WordCrossroadDefault",
			"(1-Stealth)",
			"WordCrossroadStealth",
			"Stealth"
		};
	};
	class WordCrossroadDefault
	{
		versions[]=
		{
			"WordCrossroad_1",
			1
		};
		class WordCrossroad_1
		{
			speech[]=
			{
				"Crossroad"
			};
		};
	};
	class WordCrossroadStealth
	{
		versions[]=
		{
			"WordCrossroad_1",
			1
		};
		class WordCrossroad_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Crossroad"
			};
		};
	};
	class WordOilfield
	{
		sentences[]=
		{
			"WordOilfieldDefault",
			"(1-Stealth)",
			"WordOilfieldStealth",
			"Stealth"
		};
	};
	class WordOilfieldDefault
	{
		versions[]=
		{
			"WordOilfield_1",
			1
		};
		class WordOilfield_1
		{
			speech[]=
			{
				"Oilfield"
			};
		};
	};
	class WordOilfieldStealth
	{
		versions[]=
		{
			"WordOilfield_1",
			1
		};
		class WordOilfield_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Oilfield"
			};
		};
	};
	class Wordmineplace
	{
		sentences[]=
		{
			"WordmineplaceDefault",
			"(1-Stealth)",
			"WordmineplaceStealth",
			"Stealth"
		};
	};
	class WordmineplaceDefault
	{
		versions[]=
		{
			"Wordmineplace_1",
			1
		};
		class Wordmineplace_1
		{
			speech[]=
			{
				"mineplace"
			};
		};
	};
	class WordmineplaceStealth
	{
		versions[]=
		{
			"Wordmineplace_1",
			1
		};
		class Wordmineplace_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"mineplace"
			};
		};
	};
	class WordHarbor
	{
		sentences[]=
		{
			"WordHarborDefault",
			"(1-Stealth)",
			"WordHarborStealth",
			"Stealth"
		};
	};
	class WordHarborDefault
	{
		versions[]=
		{
			"WordHarbor_1",
			1
		};
		class WordHarbor_1
		{
			speech[]=
			{
				"Harbor"
			};
		};
	};
	class WordHarborStealth
	{
		versions[]=
		{
			"WordHarbor_1",
			1
		};
		class WordHarbor_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Harbor"
			};
		};
	};
	class WordZargabad
	{
		sentences[]=
		{
			"WordZargabadDefault",
			"(1-Stealth)",
			"WordZargabadStealth",
			"Stealth"
		};
	};
	class WordZargabadDefault
	{
		versions[]=
		{
			"WordZargabad_1",
			1
		};
		class WordZargabad_1
		{
			speech[]=
			{
				"Zargabad"
			};
		};
	};
	class WordZargabadStealth
	{
		versions[]=
		{
			"WordZargabad_1",
			1
		};
		class WordZargabad_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Zargabad"
			};
		};
	};
	class WordAzizajt
	{
		sentences[]=
		{
			"WordAzizajtDefault",
			"(1-Stealth)",
			"WordAzizajtStealth",
			"Stealth"
		};
	};
	class WordAzizajtDefault
	{
		versions[]=
		{
			"WordAzizajt_1",
			1
		};
		class WordAzizajt_1
		{
			speech[]=
			{
				"Azizajt"
			};
		};
	};
	class WordAzizajtStealth
	{
		versions[]=
		{
			"WordAzizajt_1",
			1
		};
		class WordAzizajt_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Azizajt"
			};
		};
	};
	class WordNango
	{
		sentences[]=
		{
			"WordNangoDefault",
			"(1-Stealth)",
			"WordNangoStealth",
			"Stealth"
		};
	};
	class WordNangoDefault
	{
		versions[]=
		{
			"WordNango_1",
			1
		};
		class WordNango_1
		{
			speech[]=
			{
				"Nango"
			};
		};
	};
	class WordNangoStealth
	{
		versions[]=
		{
			"WordNango_1",
			1
		};
		class WordNango_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Nango"
			};
		};
	};
	class WordYarum
	{
		sentences[]=
		{
			"WordYarumDefault",
			"(1-Stealth)",
			"WordYarumStealth",
			"Stealth"
		};
	};
	class WordYarumDefault
	{
		versions[]=
		{
			"WordYarum_1",
			1
		};
		class WordYarum_1
		{
			speech[]=
			{
				"Yarum"
			};
		};
	};
	class WordYarumStealth
	{
		versions[]=
		{
			"WordYarum_1",
			1
		};
		class WordYarum_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Yarum"
			};
		};
	};
	class WordHazarBagh
	{
		sentences[]=
		{
			"WordHazarBaghDefault",
			"(1-Stealth)",
			"WordHazarBaghStealth",
			"Stealth"
		};
	};
	class WordHazarBaghDefault
	{
		versions[]=
		{
			"WordHazarBagh_1",
			1
		};
		class WordHazarBagh_1
		{
			speech[]=
			{
				"HazarBagh"
			};
		};
	};
	class WordHazarBaghStealth
	{
		versions[]=
		{
			"WordHazarBagh_1",
			1
		};
		class WordHazarBagh_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HazarBagh"
			};
		};
	};
	class WordAnar
	{
		sentences[]=
		{
			"WordAnarDefault",
			"(1-Stealth)",
			"WordAnarStealth",
			"Stealth"
		};
	};
	class WordAnarDefault
	{
		versions[]=
		{
			"WordAnar_1",
			1
		};
		class WordAnar_1
		{
			speech[]=
			{
				"Anar"
			};
		};
	};
	class WordAnarStealth
	{
		versions[]=
		{
			"WordAnar_1",
			1
		};
		class WordAnar_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Anar"
			};
		};
	};
	class WordKakaru
	{
		sentences[]=
		{
			"WordKakaruDefault",
			"(1-Stealth)",
			"WordKakaruStealth",
			"Stealth"
		};
	};
	class WordKakaruDefault
	{
		versions[]=
		{
			"WordKakaru_1",
			1
		};
		class WordKakaru_1
		{
			speech[]=
			{
				"Kakaru"
			};
		};
	};
	class WordKakaruStealth
	{
		versions[]=
		{
			"WordKakaru_1",
			1
		};
		class WordKakaru_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Kakaru"
			};
		};
	};
	class WordBastam
	{
		sentences[]=
		{
			"WordBastamDefault",
			"(1-Stealth)",
			"WordBastamStealth",
			"Stealth"
		};
	};
	class WordBastamDefault
	{
		versions[]=
		{
			"WordBastam_1",
			1
		};
		class WordBastam_1
		{
			speech[]=
			{
				"Bastam"
			};
		};
	};
	class WordBastamStealth
	{
		versions[]=
		{
			"WordBastam_1",
			1
		};
		class WordBastam_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Bastam"
			};
		};
	};
	class WordFalar
	{
		sentences[]=
		{
			"WordFalarDefault",
			"(1-Stealth)",
			"WordFalarStealth",
			"Stealth"
		};
	};
	class WordFalarDefault
	{
		versions[]=
		{
			"WordFalar_1",
			1
		};
		class WordFalar_1
		{
			speech[]=
			{
				"Falar"
			};
		};
	};
	class WordFalarStealth
	{
		versions[]=
		{
			"WordFalar_1",
			1
		};
		class WordFalar_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Falar"
			};
		};
	};
	class WordFeeruzAbad
	{
		sentences[]=
		{
			"WordFeeruzAbadDefault",
			"(1-Stealth)",
			"WordFeeruzAbadStealth",
			"Stealth"
		};
	};
	class WordFeeruzAbadDefault
	{
		versions[]=
		{
			"WordFeeruzAbad_1",
			1
		};
		class WordFeeruzAbad_1
		{
			speech[]=
			{
				"FeeruzAbad"
			};
		};
	};
	class WordFeeruzAbadStealth
	{
		versions[]=
		{
			"WordFeeruzAbad_1",
			1
		};
		class WordFeeruzAbad_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"FeeruzAbad"
			};
		};
	};
	class WordGarmarud
	{
		sentences[]=
		{
			"WordGarmarudDefault",
			"(1-Stealth)",
			"WordGarmarudStealth",
			"Stealth"
		};
	};
	class WordGarmarudDefault
	{
		versions[]=
		{
			"WordGarmarud_1",
			1
		};
		class WordGarmarud_1
		{
			speech[]=
			{
				"Garmarud"
			};
		};
	};
	class WordGarmarudStealth
	{
		versions[]=
		{
			"WordGarmarud_1",
			1
		};
		class WordGarmarud_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Garmarud"
			};
		};
	};
	class WordGarmsar
	{
		sentences[]=
		{
			"WordGarmsarDefault",
			"(1-Stealth)",
			"WordGarmsarStealth",
			"Stealth"
		};
	};
	class WordGarmsarDefault
	{
		versions[]=
		{
			"WordGarmsar_1",
			1
		};
		class WordGarmsar_1
		{
			speech[]=
			{
				"Garmsar"
			};
		};
	};
	class WordGarmsarStealth
	{
		versions[]=
		{
			"WordGarmsar_1",
			1
		};
		class WordGarmsar_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Garmsar"
			};
		};
	};
	class WordGospandi
	{
		sentences[]=
		{
			"WordGospandiDefault",
			"(1-Stealth)",
			"WordGospandiStealth",
			"Stealth"
		};
	};
	class WordGospandiDefault
	{
		versions[]=
		{
			"WordGospandi_1",
			1
		};
		class WordGospandi_1
		{
			speech[]=
			{
				"Gospandi"
			};
		};
	};
	class WordGospandiStealth
	{
		versions[]=
		{
			"WordGospandi_1",
			1
		};
		class WordGospandi_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Gospandi"
			};
		};
	};
	class WordChakChak
	{
		sentences[]=
		{
			"WordChakChakDefault",
			"(1-Stealth)",
			"WordChakChakStealth",
			"Stealth"
		};
	};
	class WordChakChakDefault
	{
		versions[]=
		{
			"WordChakChak_1",
			1
		};
		class WordChakChak_1
		{
			speech[]=
			{
				"ChakChak"
			};
		};
	};
	class WordChakChakStealth
	{
		versions[]=
		{
			"WordChakChak_1",
			1
		};
		class WordChakChak_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"ChakChak"
			};
		};
	};
	class WordChaman
	{
		sentences[]=
		{
			"WordChamanDefault",
			"(1-Stealth)",
			"WordChamanStealth",
			"Stealth"
		};
	};
	class WordChamanDefault
	{
		versions[]=
		{
			"WordChaman_1",
			1
		};
		class WordChaman_1
		{
			speech[]=
			{
				"Chaman"
			};
		};
	};
	class WordChamanStealth
	{
		versions[]=
		{
			"WordChaman_1",
			1
		};
		class WordChaman_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Chaman"
			};
		};
	};
	class WordLoyManara
	{
		sentences[]=
		{
			"WordLoyManaraDefault",
			"(1-Stealth)",
			"WordLoyManaraStealth",
			"Stealth"
		};
	};
	class WordLoyManaraDefault
	{
		versions[]=
		{
			"WordLoyManara_1",
			1
		};
		class WordLoyManara_1
		{
			speech[]=
			{
				"LoyManara"
			};
		};
	};
	class WordLoyManaraStealth
	{
		versions[]=
		{
			"WordLoyManara_1",
			1
		};
		class WordLoyManara_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"LoyManara"
			};
		};
	};
	class WordNagara
	{
		sentences[]=
		{
			"WordNagaraDefault",
			"(1-Stealth)",
			"WordNagaraStealth",
			"Stealth"
		};
	};
	class WordNagaraDefault
	{
		versions[]=
		{
			"WordNagara_1",
			1
		};
		class WordNagara_1
		{
			speech[]=
			{
				"Nagara"
			};
		};
	};
	class WordNagaraStealth
	{
		versions[]=
		{
			"WordNagara_1",
			1
		};
		class WordNagara_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Nagara"
			};
		};
	};
	class WordNur
	{
		sentences[]=
		{
			"WordNurDefault",
			"(1-Stealth)",
			"WordNurStealth",
			"Stealth"
		};
	};
	class WordNurDefault
	{
		versions[]=
		{
			"WordNur_1",
			1
		};
		class WordNur_1
		{
			speech[]=
			{
				"Nur"
			};
		};
	};
	class WordNurStealth
	{
		versions[]=
		{
			"WordNur_1",
			1
		};
		class WordNur_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Nur"
			};
		};
	};
	class WordRasman
	{
		sentences[]=
		{
			"WordRasmanDefault",
			"(1-Stealth)",
			"WordRasmanStealth",
			"Stealth"
		};
	};
	class WordRasmanDefault
	{
		versions[]=
		{
			"WordRasman_1",
			1
		};
		class WordRasman_1
		{
			speech[]=
			{
				"Rasman"
			};
		};
	};
	class WordRasmanStealth
	{
		versions[]=
		{
			"WordRasman_1",
			1
		};
		class WordRasman_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Rasman"
			};
		};
	};
	class WordSakhee
	{
		sentences[]=
		{
			"WordSakheeDefault",
			"(1-Stealth)",
			"WordSakheeStealth",
			"Stealth"
		};
	};
	class WordSakheeDefault
	{
		versions[]=
		{
			"WordSakhee_1",
			1
		};
		class WordSakhee_1
		{
			speech[]=
			{
				"Sakhee"
			};
		};
	};
	class WordSakheeStealth
	{
		versions[]=
		{
			"WordSakhee_1",
			1
		};
		class WordSakhee_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Sakhee"
			};
		};
	};
	class WordZavarak
	{
		sentences[]=
		{
			"WordZavarakDefault",
			"(1-Stealth)",
			"WordZavarakStealth",
			"Stealth"
		};
	};
	class WordZavarakDefault
	{
		versions[]=
		{
			"WordZavarak_1",
			1
		};
		class WordZavarak_1
		{
			speech[]=
			{
				"Zavarak"
			};
		};
	};
	class WordZavarakStealth
	{
		versions[]=
		{
			"WordZavarak_1",
			1
		};
		class WordZavarak_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Zavarak"
			};
		};
	};
	class WordKarachinar
	{
		sentences[]=
		{
			"WordKarachinarDefault",
			"(1-Stealth)",
			"WordKarachinarStealth",
			"Stealth"
		};
	};
	class WordKarachinarDefault
	{
		versions[]=
		{
			"WordKarachinar_1",
			1
		};
		class WordKarachinar_1
		{
			speech[]=
			{
				"Karachinar"
			};
		};
	};
	class WordKarachinarStealth
	{
		versions[]=
		{
			"WordKarachinar_1",
			1
		};
		class WordKarachinar_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Karachinar"
			};
		};
	};
	class WordShamali
	{
		sentences[]=
		{
			"WordShamaliDefault",
			"(1-Stealth)",
			"WordShamaliStealth",
			"Stealth"
		};
	};
	class WordShamaliDefault
	{
		versions[]=
		{
			"WordShamali_1",
			1
		};
		class WordShamali_1
		{
			speech[]=
			{
				"Shamali"
			};
		};
	};
	class WordShamaliStealth
	{
		versions[]=
		{
			"WordShamali_1",
			1
		};
		class WordShamali_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Shamali"
			};
		};
	};
	class WordMulladoost
	{
		sentences[]=
		{
			"WordMulladoostDefault",
			"(1-Stealth)",
			"WordMulladoostStealth",
			"Stealth"
		};
	};
	class WordMulladoostDefault
	{
		versions[]=
		{
			"WordMulladoost_1",
			1
		};
		class WordMulladoost_1
		{
			speech[]=
			{
				"Mulladoost"
			};
		};
	};
	class WordMulladoostStealth
	{
		versions[]=
		{
			"WordMulladoost_1",
			1
		};
		class WordMulladoost_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Mulladoost"
			};
		};
	};
	class WordKhushab
	{
		sentences[]=
		{
			"WordKhushabDefault",
			"(1-Stealth)",
			"WordKhushabStealth",
			"Stealth"
		};
	};
	class WordKhushabDefault
	{
		versions[]=
		{
			"WordKhushab_1",
			1
		};
		class WordKhushab_1
		{
			speech[]=
			{
				"Khushab"
			};
		};
	};
	class WordKhushabStealth
	{
		versions[]=
		{
			"WordKhushab_1",
			1
		};
		class WordKhushab_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Khushab"
			};
		};
	};
	class WordShukurkalay
	{
		sentences[]=
		{
			"WordShukurkalayDefault",
			"(1-Stealth)",
			"WordShukurkalayStealth",
			"Stealth"
		};
	};
	class WordShukurkalayDefault
	{
		versions[]=
		{
			"WordShukurkalay_1",
			1
		};
		class WordShukurkalay_1
		{
			speech[]=
			{
				"Shukurkalay"
			};
		};
	};
	class WordShukurkalayStealth
	{
		versions[]=
		{
			"WordShukurkalay_1",
			1
		};
		class WordShukurkalay_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Shukurkalay"
			};
		};
	};
	class WordJilavur
	{
		sentences[]=
		{
			"WordJilavurDefault",
			"(1-Stealth)",
			"WordJilavurStealth",
			"Stealth"
		};
	};
	class WordJilavurDefault
	{
		versions[]=
		{
			"WordJilavur_1",
			1
		};
		class WordJilavur_1
		{
			speech[]=
			{
				"Jilavur"
			};
		};
	};
	class WordJilavurStealth
	{
		versions[]=
		{
			"WordJilavur_1",
			1
		};
		class WordJilavur_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Jilavur"
			};
		};
	};
	class WordLanday
	{
		sentences[]=
		{
			"WordLandayDefault",
			"(1-Stealth)",
			"WordLandayStealth",
			"Stealth"
		};
	};
	class WordLandayDefault
	{
		versions[]=
		{
			"WordLanday_1",
			1
		};
		class WordLanday_1
		{
			speech[]=
			{
				"Landay"
			};
		};
	};
	class WordLandayStealth
	{
		versions[]=
		{
			"WordLanday_1",
			1
		};
		class WordLanday_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Landay"
			};
		};
	};
	class WordSultansafee
	{
		sentences[]=
		{
			"WordSultansafeeDefault",
			"(1-Stealth)",
			"WordSultansafeeStealth",
			"Stealth"
		};
	};
	class WordSultansafeeDefault
	{
		versions[]=
		{
			"WordSultansafee_1",
			1
		};
		class WordSultansafee_1
		{
			speech[]=
			{
				"Sultansafee"
			};
		};
	};
	class WordSultansafeeStealth
	{
		versions[]=
		{
			"WordSultansafee_1",
			1
		};
		class WordSultansafee_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Sultansafee"
			};
		};
	};
	class WordJaza
	{
		sentences[]=
		{
			"WordJazaDefault",
			"(1-Stealth)",
			"WordJazaStealth",
			"Stealth"
		};
	};
	class WordJazaDefault
	{
		versions[]=
		{
			"WordJaza_1",
			1
		};
		class WordJaza_1
		{
			speech[]=
			{
				"Jaza"
			};
		};
	};
	class WordJazaStealth
	{
		versions[]=
		{
			"WordJaza_1",
			1
		};
		class WordJaza_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Jaza"
			};
		};
	};
	class WordHuzrutimam
	{
		sentences[]=
		{
			"WordHuzrutimamDefault",
			"(1-Stealth)",
			"WordHuzrutimamStealth",
			"Stealth"
		};
	};
	class WordHuzrutimamDefault
	{
		versions[]=
		{
			"WordHuzrutimam_1",
			1
		};
		class WordHuzrutimam_1
		{
			speech[]=
			{
				"Huzrutimam"
			};
		};
	};
	class WordHuzrutimamStealth
	{
		versions[]=
		{
			"WordHuzrutimam_1",
			1
		};
		class WordHuzrutimam_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Huzrutimam"
			};
		};
	};
	class WordChardarakht
	{
		sentences[]=
		{
			"WordChardarakhtDefault",
			"(1-Stealth)",
			"WordChardarakhtStealth",
			"Stealth"
		};
	};
	class WordChardarakhtDefault
	{
		versions[]=
		{
			"WordChardarakht_1",
			1
		};
		class WordChardarakht_1
		{
			speech[]=
			{
				"Chardarakht"
			};
		};
	};
	class WordChardarakhtStealth
	{
		versions[]=
		{
			"WordChardarakht_1",
			1
		};
		class WordChardarakht_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Chardarakht"
			};
		};
	};
	class WordTimurkalay
	{
		sentences[]=
		{
			"WordTimurkalayDefault",
			"(1-Stealth)",
			"WordTimurkalayStealth",
			"Stealth"
		};
	};
	class WordTimurkalayDefault
	{
		versions[]=
		{
			"WordTimurkalay_1",
			1
		};
		class WordTimurkalay_1
		{
			speech[]=
			{
				"Timurkalay"
			};
		};
	};
	class WordTimurkalayStealth
	{
		versions[]=
		{
			"WordTimurkalay_1",
			1
		};
		class WordTimurkalay_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Timurkalay"
			};
		};
	};
	class WordImarat
	{
		sentences[]=
		{
			"WordImaratDefault",
			"(1-Stealth)",
			"WordImaratStealth",
			"Stealth"
		};
	};
	class WordImaratDefault
	{
		versions[]=
		{
			"WordImarat_1",
			1
		};
		class WordImarat_1
		{
			speech[]=
			{
				"Imarat"
			};
		};
	};
	class WordImaratStealth
	{
		versions[]=
		{
			"WordImarat_1",
			1
		};
		class WordImarat_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Imarat"
			};
		};
	};
	class WordRavanay
	{
		sentences[]=
		{
			"WordRavanayDefault",
			"(1-Stealth)",
			"WordRavanayStealth",
			"Stealth"
		};
	};
	class WordRavanayDefault
	{
		versions[]=
		{
			"WordRavanay_1",
			1
		};
		class WordRavanay_1
		{
			speech[]=
			{
				"Ravanay"
			};
		};
	};
	class WordRavanayStealth
	{
		versions[]=
		{
			"WordRavanay_1",
			1
		};
		class WordRavanay_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"Ravanay"
			};
		};
	};
	class WordCS_SuppressiveFireE
	{
		sentences[]=
		{
			"WordCS_SuppressiveFireEDefault",
			1
		};
	};
	class WordCS_SuppressiveFireEDefault
	{
		versions[]=
		{
			"WordCS_SuppressiveFireE_1",
			1
		};
		class WordCS_SuppressiveFireE_1
		{
			speech[]=
			{
				"CS_SuppressiveFireE"
			};
		};
	};
	class WordCS_HangOnIllSuppressEmE
	{
		sentences[]=
		{
			"WordCS_HangOnIllSuppressEmEDefault",
			1
		};
	};
	class WordCS_HangOnIllSuppressEmEDefault
	{
		versions[]=
		{
			"WordCS_HangOnIllSuppressEmE_1",
			1
		};
		class WordCS_HangOnIllSuppressEmE_1
		{
			speech[]=
			{
				"CS_HangOnIllSuppressEmE"
			};
		};
	};
	class WordCS_SuppressingE
	{
		sentences[]=
		{
			"WordCS_SuppressingEDefault",
			1
		};
	};
	class WordCS_SuppressingEDefault
	{
		versions[]=
		{
			"WordCS_SuppressingE_1",
			1
		};
		class WordCS_SuppressingE_1
		{
			speech[]=
			{
				"CS_SuppressingE"
			};
		};
	};
	class WordCS_CoveringFireE
	{
		sentences[]=
		{
			"WordCS_CoveringFireEDefault",
			1
		};
	};
	class WordCS_CoveringFireEDefault
	{
		versions[]=
		{
			"WordCS_CoveringFireE_1",
			1
		};
		class WordCS_CoveringFireE_1
		{
			speech[]=
			{
				"CS_CoveringFireE"
			};
		};
	};
	class WordCS_GoImCoveringE
	{
		sentences[]=
		{
			"WordCS_GoImCoveringEDefault",
			1
		};
	};
	class WordCS_GoImCoveringEDefault
	{
		versions[]=
		{
			"WordCS_GoImCoveringE_1",
			1
		};
		class WordCS_GoImCoveringE_1
		{
			speech[]=
			{
				"CS_GoImCoveringE"
			};
		};
	};
	class WordCS_GoIllCoverE
	{
		sentences[]=
		{
			"WordCS_GoIllCoverEDefault",
			1
		};
	};
	class WordCS_GoIllCoverEDefault
	{
		versions[]=
		{
			"WordCS_GoIllCoverE_1",
			1
		};
		class WordCS_GoIllCoverE_1
		{
			speech[]=
			{
				"CS_GoIllCoverE"
			};
		};
	};
	class WordCS_CoveringFire2E
	{
		sentences[]=
		{
			"WordCS_CoveringFire2EDefault",
			1
		};
	};
	class WordCS_CoveringFire2EDefault
	{
		versions[]=
		{
			"WordCS_CoveringFire2E_1",
			1
		};
		class WordCS_CoveringFire2E_1
		{
			speech[]=
			{
				"CS_CoveringFire2E"
			};
		};
	};
	class WordCS_CoveringGoE
	{
		sentences[]=
		{
			"WordCS_CoveringGoEDefault",
			1
		};
	};
	class WordCS_CoveringGoEDefault
	{
		versions[]=
		{
			"WordCS_CoveringGoE_1",
			1
		};
		class WordCS_CoveringGoE_1
		{
			speech[]=
			{
				"CS_CoveringGoE"
			};
		};
	};
	class WordCS_MoveOutE
	{
		sentences[]=
		{
			"WordCS_MoveOutEDefault",
			1
		};
	};
	class WordCS_MoveOutEDefault
	{
		versions[]=
		{
			"WordCS_MoveOutE_1",
			1
		};
		class WordCS_MoveOutE_1
		{
			speech[]=
			{
				"CS_MoveOutE"
			};
		};
	};
	class WordCS_GoE
	{
		sentences[]=
		{
			"WordCS_GoEDefault",
			1
		};
	};
	class WordCS_GoEDefault
	{
		versions[]=
		{
			"WordCS_GoE_1",
			1
		};
		class WordCS_GoE_1
		{
			speech[]=
			{
				"CS_GoE"
			};
		};
	};
	class WordCS_MoveE
	{
		sentences[]=
		{
			"WordCS_MoveEDefault",
			1
		};
	};
	class WordCS_MoveEDefault
	{
		versions[]=
		{
			"WordCS_MoveE_1",
			1
		};
		class WordCS_MoveE_1
		{
			speech[]=
			{
				"CS_MoveE"
			};
		};
	};
	class WordCS_EngagingE
	{
		sentences[]=
		{
			"WordCS_EngagingEDefault",
			1
		};
	};
	class WordCS_EngagingEDefault
	{
		versions[]=
		{
			"WordCS_EngagingE_1",
			1
		};
		class WordCS_EngagingE_1
		{
			speech[]=
			{
				"CS_EngagingE"
			};
		};
	};
	class WordCS_CoverMeE
	{
		sentences[]=
		{
			"WordCS_CoverMeEDefault",
			1
		};
	};
	class WordCS_CoverMeEDefault
	{
		versions[]=
		{
			"WordCS_CoverMeE_1",
			1
		};
		class WordCS_CoverMeE_1
		{
			speech[]=
			{
				"CS_CoverMeE"
			};
		};
	};
	class WordCS_OKLetsGo
	{
		sentences[]=
		{
			"WordCS_OKLetsGoDefault",
			1
		};
	};
	class WordCS_OKLetsGoDefault
	{
		versions[]=
		{
			"WordCS_OKLetsGo_1",
			1
		};
		class WordCS_OKLetsGo_1
		{
			speech[]=
			{
				"CS_OKLetsGo"
			};
		};
	};
	class WordCS_MovingE
	{
		sentences[]=
		{
			"WordCS_MovingEDefault",
			1
		};
	};
	class WordCS_MovingEDefault
	{
		versions[]=
		{
			"WordCS_MovingE_1",
			1
		};
		class WordCS_MovingE_1
		{
			speech[]=
			{
				"CS_MovingE"
			};
		};
	};
	class WordCS_MovinOutE
	{
		sentences[]=
		{
			"WordCS_MovinOutEDefault",
			1
		};
	};
	class WordCS_MovinOutEDefault
	{
		versions[]=
		{
			"WordCS_MovinOutE_1",
			1
		};
		class WordCS_MovinOutE_1
		{
			speech[]=
			{
				"CS_MovinOutE"
			};
		};
	};
	class WordCS_ReloadingE
	{
		sentences[]=
		{
			"WordCS_ReloadingEDefault",
			1
		};
	};
	class WordCS_ReloadingEDefault
	{
		versions[]=
		{
			"WordCS_ReloadingE_1",
			1
		};
		class WordCS_ReloadingE_1
		{
			speech[]=
			{
				"CS_ReloadingE"
			};
		};
	};
	class WordCS_GottaReloadE
	{
		sentences[]=
		{
			"WordCS_GottaReloadEDefault",
			1
		};
	};
	class WordCS_GottaReloadEDefault
	{
		versions[]=
		{
			"WordCS_GottaReloadE_1",
			1
		};
		class WordCS_GottaReloadE_1
		{
			speech[]=
			{
				"CS_GottaReloadE"
			};
		};
	};
	class WordCS_CoverMeReloadingE
	{
		sentences[]=
		{
			"WordCS_CoverMeReloadingEDefault",
			1
		};
	};
	class WordCS_CoverMeReloadingEDefault
	{
		versions[]=
		{
			"WordCS_CoverMeReloadingE_1",
			1
		};
		class WordCS_CoverMeReloadingE_1
		{
			speech[]=
			{
				"CS_CoverMeReloadingE"
			};
		};
	};
	class WordCS_ChangingMagsE
	{
		sentences[]=
		{
			"WordCS_ChangingMagsEDefault",
			1
		};
	};
	class WordCS_ChangingMagsEDefault
	{
		versions[]=
		{
			"WordCS_ChangingMagsE_1",
			1
		};
		class WordCS_ChangingMagsE_1
		{
			speech[]=
			{
				"CS_ChangingMagsE"
			};
		};
	};
	class WordCS_FireInTheHoleE
	{
		sentences[]=
		{
			"WordCS_FireInTheHoleEDefault",
			1
		};
	};
	class WordCS_FireInTheHoleEDefault
	{
		versions[]=
		{
			"WordCS_FireInTheHoleE_1",
			1
		};
		class WordCS_FireInTheHoleE_1
		{
			speech[]=
			{
				"CS_FireInTheHoleE"
			};
		};
	};
	class WordCS_ThrowingFragE
	{
		sentences[]=
		{
			"WordCS_ThrowingFragEDefault",
			1
		};
	};
	class WordCS_ThrowingFragEDefault
	{
		versions[]=
		{
			"WordCS_ThrowingFragE_1",
			1
		};
		class WordCS_ThrowingFragE_1
		{
			speech[]=
			{
				"CS_ThrowingFragE"
			};
		};
	};
	class WordCS_ThrowingSmokeE
	{
		sentences[]=
		{
			"WordCS_ThrowingSmokeEDefault",
			1
		};
	};
	class WordCS_ThrowingSmokeEDefault
	{
		versions[]=
		{
			"WordCS_ThrowingSmokeE_1",
			1
		};
		class WordCS_ThrowingSmokeE_1
		{
			speech[]=
			{
				"CS_ThrowingSmokeE"
			};
		};
	};
	class WordCS_SmokeOutE
	{
		sentences[]=
		{
			"WordCS_SmokeOutEDefault",
			1
		};
	};
	class WordCS_SmokeOutEDefault
	{
		versions[]=
		{
			"WordCS_SmokeOutE_1",
			1
		};
		class WordCS_SmokeOutE_1
		{
			speech[]=
			{
				"CS_SmokeOutE"
			};
		};
	};
	class WordCS_FragOutE
	{
		sentences[]=
		{
			"WordCS_FragOutEDefault",
			1
		};
	};
	class WordCS_FragOutEDefault
	{
		versions[]=
		{
			"WordCS_FragOutE_1",
			1
		};
		class WordCS_FragOutE_1
		{
			speech[]=
			{
				"CS_FragOutE"
			};
		};
	};
	class WordCS_GrenadeE
	{
		sentences[]=
		{
			"WordCS_GrenadeEDefault",
			1
		};
	};
	class WordCS_GrenadeEDefault
	{
		versions[]=
		{
			"WordCS_GrenadeE_1",
			1
		};
		class WordCS_GrenadeE_1
		{
			speech[]=
			{
				"CS_GrenadeE"
			};
		};
	};
	class WordCS_WatchTheGrenadeE
	{
		sentences[]=
		{
			"WordCS_WatchTheGrenadeEDefault",
			1
		};
	};
	class WordCS_WatchTheGrenadeEDefault
	{
		versions[]=
		{
			"WordCS_WatchTheGrenadeE_1",
			1
		};
		class WordCS_WatchTheGrenadeE_1
		{
			speech[]=
			{
				"CS_WatchTheGrenadeE"
			};
		};
	};
	class WordCS_IncomingFragE
	{
		sentences[]=
		{
			"WordCS_IncomingFragEDefault",
			1
		};
	};
	class WordCS_IncomingFragEDefault
	{
		versions[]=
		{
			"WordCS_IncomingFragE_1",
			1
		};
		class WordCS_IncomingFragE_1
		{
			speech[]=
			{
				"CS_IncomingFragE"
			};
		};
	};
	class WordCS_ContactE
	{
		sentences[]=
		{
			"WordCS_ContactEDefault",
			1
		};
	};
	class WordCS_ContactEDefault
	{
		versions[]=
		{
			"WordCS_ContactE_1",
			1
		};
		class WordCS_ContactE_1
		{
			speech[]=
			{
				"CS_ContactE"
			};
		};
	};
	class WordCS_HostilesE
	{
		sentences[]=
		{
			"WordCS_HostilesEDefault",
			1
		};
	};
	class WordCS_HostilesEDefault
	{
		versions[]=
		{
			"WordCS_HostilesE_1",
			1
		};
		class WordCS_HostilesE_1
		{
			speech[]=
			{
				"CS_HostilesE"
			};
		};
	};
	class WordCS_EnemyE
	{
		sentences[]=
		{
			"WordCS_EnemyEDefault",
			1
		};
	};
	class WordCS_EnemyEDefault
	{
		versions[]=
		{
			"WordCS_EnemyE_1",
			1
		};
		class WordCS_EnemyE_1
		{
			speech[]=
			{
				"CS_EnemyE"
			};
		};
	};
	class WordCS_DidYouSeeThatQ
	{
		sentences[]=
		{
			"WordCS_DidYouSeeThatQDefault",
			1
		};
	};
	class WordCS_DidYouSeeThatQDefault
	{
		versions[]=
		{
			"WordCS_DidYouSeeThatQ_1",
			1
		};
		class WordCS_DidYouSeeThatQ_1
		{
			speech[]=
			{
				"CS_DidYouSeeThatQ"
			};
		};
	};
	class WordCS_FocusE
	{
		sentences[]=
		{
			"WordCS_FocusEDefault",
			1
		};
	};
	class WordCS_FocusEDefault
	{
		versions[]=
		{
			"WordCS_FocusE_1",
			1
		};
		class WordCS_FocusE_1
		{
			speech[]=
			{
				"CS_FocusE"
			};
		};
	};
	class WordCS_CheckThatOut
	{
		sentences[]=
		{
			"WordCS_CheckThatOutDefault",
			1
		};
	};
	class WordCS_CheckThatOutDefault
	{
		versions[]=
		{
			"WordCS_CheckThatOut_1",
			1
		};
		class WordCS_CheckThatOut_1
		{
			speech[]=
			{
				"CS_CheckThatOut"
			};
		};
	};
	class WordCS_MotherfuckerE
	{
		sentences[]=
		{
			"WordCS_MotherfuckerEDefault",
			1
		};
	};
	class WordCS_MotherfuckerEDefault
	{
		versions[]=
		{
			"WordCS_MotherfuckerE_1",
			1
		};
		class WordCS_MotherfuckerE_1
		{
			speech[]=
			{
				"CS_MotherfuckerE"
			};
		};
	};
	class WordCS_SeeThatQE
	{
		sentences[]=
		{
			"WordCS_SeeThatQEDefault",
			1
		};
	};
	class WordCS_SeeThatQEDefault
	{
		versions[]=
		{
			"WordCS_SeeThatQE_1",
			1
		};
		class WordCS_SeeThatQE_1
		{
			speech[]=
			{
				"CS_SeeThatQE"
			};
		};
	};
	class WordCS_ARGHHE
	{
		sentences[]=
		{
			"WordCS_ARGHHEDefault",
			1
		};
	};
	class WordCS_ARGHHEDefault
	{
		versions[]=
		{
			"WordCS_ARGHHE_1",
			1
		};
		class WordCS_ARGHHE_1
		{
			speech[]=
			{
				"CS_ARGHHE"
			};
		};
	};
	class WordCS_OOFE
	{
		sentences[]=
		{
			"WordCS_OOFEDefault",
			1
		};
	};
	class WordCS_OOFEDefault
	{
		versions[]=
		{
			"WordCS_OOFE_1",
			1
		};
		class WordCS_OOFE_1
		{
			speech[]=
			{
				"CS_OOFE"
			};
		};
	};
	class WordCS_UGHE
	{
		sentences[]=
		{
			"WordCS_UGHEDefault",
			1
		};
	};
	class WordCS_UGHEDefault
	{
		versions[]=
		{
			"WordCS_UGHE_1",
			1
		};
		class WordCS_UGHE_1
		{
			speech[]=
			{
				"CS_UGHE"
			};
		};
	};
	class WordCS_NoE
	{
		sentences[]=
		{
			"WordCS_NoEDefault",
			1
		};
	};
	class WordCS_NoEDefault
	{
		versions[]=
		{
			"WordCS_NoE_1",
			1
		};
		class WordCS_NoE_1
		{
			speech[]=
			{
				"CS_NoE"
			};
		};
	};
	class WordCS_WoohooE
	{
		sentences[]=
		{
			"WordCS_WoohooEDefault",
			1
		};
	};
	class WordCS_WoohooEDefault
	{
		versions[]=
		{
			"WordCS_WoohooE_1",
			1
		};
		class WordCS_WoohooE_1
		{
			speech[]=
			{
				"CS_WoohooE"
			};
		};
	};
	class WordCS_YahooE
	{
		sentences[]=
		{
			"WordCS_YahooEDefault",
			1
		};
	};
	class WordCS_YahooEDefault
	{
		versions[]=
		{
			"WordCS_YahooE_1",
			1
		};
		class WordCS_YahooE_1
		{
			speech[]=
			{
				"CS_YahooE"
			};
		};
	};
	class WordCS_HeeeyE
	{
		sentences[]=
		{
			"WordCS_HeeeyEDefault",
			1
		};
	};
	class WordCS_HeeeyEDefault
	{
		versions[]=
		{
			"WordCS_HeeeyE_1",
			1
		};
		class WordCS_HeeeyE_1
		{
			speech[]=
			{
				"CS_HeeeyE"
			};
		};
	};
	class WordCS_YeehawEGreatE
	{
		sentences[]=
		{
			"WordCS_YeehawEGreatEDefault",
			1
		};
	};
	class WordCS_YeehawEGreatEDefault
	{
		versions[]=
		{
			"WordCS_YeehawEGreatE_1",
			1
		};
		class WordCS_YeehawEGreatE_1
		{
			speech[]=
			{
				"CS_YeehawEGreatE"
			};
		};
	};
	class WordBaseUnderAttackE
	{
		sentences[]=
		{
			"WordBaseUnderAttackEDefault",
			1
		};
	};
	class WordBaseUnderAttackEDefault
	{
		versions[]=
		{
			"WordBaseUnderAttackE_1",
			1
		};
		class WordBaseUnderAttackE_1
		{
			speech[]=
			{
				"BaseUnderAttackE"
			};
		};
	};
	class WordUnderAttackE
	{
		sentences[]=
		{
			"WordUnderAttackEDefault",
			1
		};
	};
	class WordUnderAttackEDefault
	{
		versions[]=
		{
			"WordUnderAttackE_1",
			1
		};
		class WordUnderAttackE_1
		{
			speech[]=
			{
				"UnderAttackE"
			};
		};
	};
	class WordInsufficientFunds
	{
		sentences[]=
		{
			"WordInsufficientFundsDefault",
			1
		};
	};
	class WordInsufficientFundsDefault
	{
		versions[]=
		{
			"WordInsufficientFunds_1",
			1
		};
		class WordInsufficientFunds_1
		{
			speech[]=
			{
				"InsufficientFunds"
			};
		};
	};
	class WordInsufficientSupplies
	{
		sentences[]=
		{
			"WordInsufficientSuppliesDefault",
			1
		};
	};
	class WordInsufficientSuppliesDefault
	{
		versions[]=
		{
			"WordInsufficientSupplies_1",
			1
		};
		class WordInsufficientSupplies_1
		{
			speech[]=
			{
				"InsufficientSupplies"
			};
		};
	};
	class WordInsufficientResources
	{
		sentences[]=
		{
			"WordInsufficientResourcesDefault",
			1
		};
	};
	class WordInsufficientResourcesDefault
	{
		versions[]=
		{
			"WordInsufficientResources_1",
			1
		};
		class WordInsufficientResources_1
		{
			speech[]=
			{
				"InsufficientResources"
			};
		};
	};
	class WordVotingForANewCommander
	{
		sentences[]=
		{
			"WordVotingForANewCommanderDefault",
			1
		};
	};
	class WordVotingForANewCommanderDefault
	{
		versions[]=
		{
			"WordVotingForANewCommander_1",
			1
		};
		class WordVotingForANewCommander_1
		{
			speech[]=
			{
				"VotingForANewCommander"
			};
		};
	};
	class WordEnemyBaseLocated
	{
		sentences[]=
		{
			"WordEnemyBaseLocatedDefault",
			1
		};
	};
	class WordEnemyBaseLocatedDefault
	{
		versions[]=
		{
			"WordEnemyBaseLocated_1",
			1
		};
		class WordEnemyBaseLocated_1
		{
			speech[]=
			{
				"EnemyBaseLocated"
			};
		};
	};
	class WordEnemyForcesDetected
	{
		sentences[]=
		{
			"WordEnemyForcesDetectedDefault",
			1
		};
	};
	class WordEnemyForcesDetectedDefault
	{
		versions[]=
		{
			"WordEnemyForcesDetected_1",
			1
		};
		class WordEnemyForcesDetected_1
		{
			speech[]=
			{
				"EnemyForcesDetected"
			};
		};
	};
	class WordHostilesDetectedNear
	{
		sentences[]=
		{
			"WordHostilesDetectedNearDefault",
			1
		};
	};
	class WordHostilesDetectedNearDefault
	{
		versions[]=
		{
			"WordHostilesDetectedNear_1",
			1
		};
		class WordHostilesDetectedNear_1
		{
			speech[]=
			{
				"HostilesDetectedNear"
			};
		};
	};
	class WordNewIntelAvailable
	{
		sentences[]=
		{
			"WordNewIntelAvailableDefault",
			1
		};
	};
	class WordNewIntelAvailableDefault
	{
		versions[]=
		{
			"WordNewIntelAvailable_1",
			1
		};
		class WordNewIntelAvailable_1
		{
			speech[]=
			{
				"NewIntelAvailable"
			};
		};
	};
	class WordNewSupportAvailable
	{
		sentences[]=
		{
			"WordNewSupportAvailableDefault",
			1
		};
	};
	class WordNewSupportAvailableDefault
	{
		versions[]=
		{
			"WordNewSupportAvailable_1",
			1
		};
		class WordNewSupportAvailable_1
		{
			speech[]=
			{
				"NewSupportAvailable"
			};
		};
	};
	class WordStrongpointCapturedNear
	{
		sentences[]=
		{
			"WordStrongpointCapturedNearDefault",
			1
		};
	};
	class WordStrongpointCapturedNearDefault
	{
		versions[]=
		{
			"WordStrongpointCapturedNear_1",
			1
		};
		class WordStrongpointCapturedNear_1
		{
			speech[]=
			{
				"StrongpointCapturedNear"
			};
		};
	};
	class WordStrongpointLostAt
	{
		sentences[]=
		{
			"WordStrongpointLostAtDefault",
			1
		};
	};
	class WordStrongpointLostAtDefault
	{
		versions[]=
		{
			"WordStrongpointLostAt_1",
			1
		};
		class WordStrongpointLostAt_1
		{
			speech[]=
			{
				"StrongpointLostAt"
			};
		};
	};
	class WordCaptured
	{
		sentences[]=
		{
			"WordCapturedDefault",
			1
		};
	};
	class WordCapturedDefault
	{
		versions[]=
		{
			"WordCaptured_1",
			1
		};
		class WordCaptured_1
		{
			speech[]=
			{
				"Captured"
			};
		};
	};
	class WordCapturedNear
	{
		sentences[]=
		{
			"WordCapturedNearDefault",
			1
		};
	};
	class WordCapturedNearDefault
	{
		versions[]=
		{
			"WordCapturedNear_1",
			1
		};
		class WordCapturedNear_1
		{
			speech[]=
			{
				"CapturedNear"
			};
		};
	};
	class WordLost
	{
		sentences[]=
		{
			"WordLostDefault",
			1
		};
	};
	class WordLostDefault
	{
		versions[]=
		{
			"WordLost_1",
			1
		};
		class WordLost_1
		{
			speech[]=
			{
				"Lost"
			};
		};
	};
	class WordLostAt
	{
		sentences[]=
		{
			"WordLostAtDefault",
			1
		};
	};
	class WordLostAtDefault
	{
		versions[]=
		{
			"WordLostAt_1",
			1
		};
		class WordLostAt_1
		{
			speech[]=
			{
				"LostAt"
			};
		};
	};
	class WordIsUnderAttack
	{
		sentences[]=
		{
			"WordIsUnderAttackDefault",
			1
		};
	};
	class WordIsUnderAttackDefault
	{
		versions[]=
		{
			"WordIsUnderAttack_1",
			1
		};
		class WordIsUnderAttack_1
		{
			speech[]=
			{
				"IsUnderAttack"
			};
		};
	};
	class WordFunds
	{
		sentences[]=
		{
			"WordFundsDefault",
			1
		};
	};
	class WordFundsDefault
	{
		versions[]=
		{
			"WordFunds_1",
			1
		};
		class WordFunds_1
		{
			speech[]=
			{
				"Funds"
			};
		};
	};
	class WordResources
	{
		sentences[]=
		{
			"WordResourcesDefault",
			1
		};
	};
	class WordResourcesDefault
	{
		versions[]=
		{
			"WordResources_1",
			1
		};
		class WordResources_1
		{
			speech[]=
			{
				"Resources"
			};
		};
	};
	class WordSupplys
	{
		sentences[]=
		{
			"WordSupplysDefault",
			1
		};
	};
	class WordSupplysDefault
	{
		versions[]=
		{
			"WordSupplys_1",
			1
		};
		class WordSupplys_1
		{
			speech[]=
			{
				"Supplys"
			};
		};
	};
	class WordStrongPoint
	{
		sentences[]=
		{
			"WordStrongPointDefault",
			1
		};
	};
	class WordStrongPointDefault
	{
		versions[]=
		{
			"WordStrongPoint_1",
			1
		};
		class WordStrongPoint_1
		{
			speech[]=
			{
				"StrongPoint"
			};
		};
	};
	class WordOperationTerminatesIn20Minutes
	{
		sentences[]=
		{
			"WordOperationTerminatesIn20MinutesDefault",
			1
		};
	};
	class WordOperationTerminatesIn20MinutesDefault
	{
		versions[]=
		{
			"WordOperationTerminatesIn20Minutes_1",
			1
		};
		class WordOperationTerminatesIn20Minutes_1
		{
			speech[]=
			{
				"OperationTerminatesIn20Minutes"
			};
		};
	};
	class WordOperationTerminatesIn10Minutes
	{
		sentences[]=
		{
			"WordOperationTerminatesIn10MinutesDefault",
			1
		};
	};
	class WordOperationTerminatesIn10MinutesDefault
	{
		versions[]=
		{
			"WordOperationTerminatesIn10Minutes_1",
			1
		};
		class WordOperationTerminatesIn10Minutes_1
		{
			speech[]=
			{
				"OperationTerminatesIn10Minutes"
			};
		};
	};
	class WordOperationTerminatesIn5Minutes
	{
		sentences[]=
		{
			"WordOperationTerminatesIn5MinutesDefault",
			1
		};
	};
	class WordOperationTerminatesIn5MinutesDefault
	{
		versions[]=
		{
			"WordOperationTerminatesIn5Minutes_1",
			1
		};
		class WordOperationTerminatesIn5Minutes_1
		{
			speech[]=
			{
				"OperationTerminatesIn5Minutes"
			};
		};
	};
	class WordMissionAccomplished
	{
		sentences[]=
		{
			"WordMissionAccomplishedDefault",
			1
		};
	};
	class WordMissionAccomplishedDefault
	{
		versions[]=
		{
			"WordMissionAccomplished_1",
			1
		};
		class WordMissionAccomplished_1
		{
			speech[]=
			{
				"MissionAccomplished"
			};
		};
	};
	class WordMissionFailed
	{
		sentences[]=
		{
			"WordMissionFailedDefault",
			1
		};
	};
	class WordMissionFailedDefault
	{
		versions[]=
		{
			"WordMissionFailed_1",
			1
		};
		class WordMissionFailed_1
		{
			speech[]=
			{
				"MissionFailed"
			};
		};
	};
	class WordMissionCanceled
	{
		sentences[]=
		{
			"WordMissionCanceledDefault",
			1
		};
	};
	class WordMissionCanceledDefault
	{
		versions[]=
		{
			"WordMissionCanceled_1",
			1
		};
		class WordMissionCanceled_1
		{
			speech[]=
			{
				"MissionCanceled"
			};
		};
	};
	class WordNewMissionAvailable
	{
		sentences[]=
		{
			"WordNewMissionAvailableDefault",
			1
		};
	};
	class WordNewMissionAvailableDefault
	{
		versions[]=
		{
			"WordNewMissionAvailable_1",
			1
		};
		class WordNewMissionAvailable_1
		{
			speech[]=
			{
				"NewMissionAvailable"
			};
		};
	};
	class WordMission
	{
		sentences[]=
		{
			"WordMissionDefault",
			1
		};
	};
	class WordMissionDefault
	{
		versions[]=
		{
			"WordMission_1",
			1
		};
		class WordMission_1
		{
			speech[]=
			{
				"Mission"
			};
		};
	};
	class WordMobilized
	{
		sentences[]=
		{
			"WordMobilizedDefault",
			1
		};
	};
	class WordMobilizedDefault
	{
		versions[]=
		{
			"WordMobilized_1",
			1
		};
		class WordMobilized_1
		{
			speech[]=
			{
				"Mobilized"
			};
		};
	};
	class WordDeployed
	{
		sentences[]=
		{
			"WordDeployedDefault",
			1
		};
	};
	class WordDeployedDefault
	{
		versions[]=
		{
			"WordDeployed_1",
			1
		};
		class WordDeployed_1
		{
			speech[]=
			{
				"Deployed"
			};
		};
	};
	class WordConstructed
	{
		sentences[]=
		{
			"WordConstructedDefault",
			1
		};
	};
	class WordConstructedDefault
	{
		versions[]=
		{
			"WordConstructed_1",
			1
		};
		class WordConstructed_1
		{
			speech[]=
			{
				"Constructed"
			};
		};
	};
	class WordDestroyed
	{
		sentences[]=
		{
			"WordDestroyedDefault",
			1
		};
	};
	class WordDestroyedDefault
	{
		versions[]=
		{
			"WordDestroyed_1",
			1
		};
		class WordDestroyed_1
		{
			speech[]=
			{
				"Destroyed"
			};
		};
	};
	class WordCommandPost
	{
		sentences[]=
		{
			"WordCommandPostDefault",
			1
		};
	};
	class WordCommandPostDefault
	{
		versions[]=
		{
			"WordCommandPost_1",
			1
		};
		class WordCommandPost_1
		{
			speech[]=
			{
				"CommandPost"
			};
		};
	};
	class WordHeadquarters
	{
		sentences[]=
		{
			"WordHeadquartersDefault",
			1
		};
	};
	class WordHeadquartersDefault
	{
		versions[]=
		{
			"WordHeadquarters_1",
			1
		};
		class WordHeadquarters_1
		{
			speech[]=
			{
				"Headquarters"
			};
		};
	};
	class WordBarracks
	{
		sentences[]=
		{
			"WordBarracksDefault",
			1
		};
	};
	class WordBarracksDefault
	{
		versions[]=
		{
			"WordBarracks_1",
			1
		};
		class WordBarracks_1
		{
			speech[]=
			{
				"Barracks"
			};
		};
	};
	class WordLightVehicleSupplyPoint
	{
		sentences[]=
		{
			"WordLightVehicleSupplyPointDefault",
			1
		};
	};
	class WordLightVehicleSupplyPointDefault
	{
		versions[]=
		{
			"WordLightVehicleSupplyPoint_1",
			1
		};
		class WordLightVehicleSupplyPoint_1
		{
			speech[]=
			{
				"LightVehicleSupplyPoint"
			};
		};
	};
	class WordHeavyVehicleSupplyPoint
	{
		sentences[]=
		{
			"WordHeavyVehicleSupplyPointDefault",
			1
		};
	};
	class WordHeavyVehicleSupplyPointDefault
	{
		versions[]=
		{
			"WordHeavyVehicleSupplyPoint_1",
			1
		};
		class WordHeavyVehicleSupplyPoint_1
		{
			speech[]=
			{
				"HeavyVehicleSupplyPoint"
			};
		};
	};
	class WordHelipad
	{
		sentences[]=
		{
			"WordHelipadDefault",
			1
		};
	};
	class WordHelipadDefault
	{
		versions[]=
		{
			"WordHelipad_1",
			1
		};
		class WordHelipad_1
		{
			speech[]=
			{
				"Helipad"
			};
		};
	};
	class WordArtilleryBattery
	{
		sentences[]=
		{
			"WordArtilleryBatteryDefault",
			1
		};
	};
	class WordArtilleryBatteryDefault
	{
		versions[]=
		{
			"WordArtilleryBattery_1",
			1
		};
		class WordArtilleryBattery_1
		{
			speech[]=
			{
				"ArtilleryBattery"
			};
		};
	};
	class WordAntiAirRadar
	{
		sentences[]=
		{
			"WordAntiAirRadarDefault",
			1
		};
	};
	class WordAntiAirRadarDefault
	{
		versions[]=
		{
			"WordAntiAirRadar_1",
			1
		};
		class WordAntiAirRadar_1
		{
			speech[]=
			{
				"AntiAirRadar"
			};
		};
	};
	class WordArtilleryRadar
	{
		sentences[]=
		{
			"WordArtilleryRadarDefault",
			1
		};
	};
	class WordArtilleryRadarDefault
	{
		versions[]=
		{
			"WordArtilleryRadar_1",
			1
		};
		class WordArtilleryRadar_1
		{
			speech[]=
			{
				"ArtilleryRadar"
			};
		};
	};
	class WordUAVTerminal
	{
		sentences[]=
		{
			"WordUAVTerminalDefault",
			1
		};
	};
	class WordUAVTerminalDefault
	{
		versions[]=
		{
			"WordUAVTerminal_1",
			1
		};
		class WordUAVTerminal_1
		{
			speech[]=
			{
				"UAVTerminal"
			};
		};
	};
	class WordServicePoint
	{
		sentences[]=
		{
			"WordServicePointDefault",
			1
		};
	};
	class WordServicePointDefault
	{
		versions[]=
		{
			"WordServicePoint_1",
			1
		};
		class WordServicePoint_1
		{
			speech[]=
			{
				"ServicePoint"
			};
		};
	};
	class WordCiviliansUnderEnemyFireIn
	{
		sentences[]=
		{
			"WordCiviliansUnderEnemyFireInDefault",
			1
		};
	};
	class WordCiviliansUnderEnemyFireInDefault
	{
		versions[]=
		{
			"WordCiviliansUnderEnemyFireIn_1",
			1
		};
		class WordCiviliansUnderEnemyFireIn_1
		{
			speech[]=
			{
				"CiviliansUnderEnemyFireIn"
			};
		};
	};
	class WordRequestingAssistance
	{
		sentences[]=
		{
			"WordRequestingAssistanceDefault",
			1
		};
	};
	class WordRequestingAssistanceDefault
	{
		versions[]=
		{
			"WordRequestingAssistance_1",
			1
		};
		class WordRequestingAssistance_1
		{
			speech[]=
			{
				"RequestingAssistance"
			};
		};
	};
	class WordNegativeWeCannotDivertAtThisTime
	{
		sentences[]=
		{
			"WordNegativeWeCannotDivertAtThisTimeDefault",
			1
		};
	};
	class WordNegativeWeCannotDivertAtThisTimeDefault
	{
		versions[]=
		{
			"WordNegativeWeCannotDivertAtThisTime_1",
			1
		};
		class WordNegativeWeCannotDivertAtThisTime_1
		{
			speech[]=
			{
				"NegativeWeCannotDivertAtThisTime"
			};
		};
	};
	class WordCanDoWereOnIt
	{
		sentences[]=
		{
			"WordCanDoWereOnItDefault",
			1
		};
	};
	class WordCanDoWereOnItDefault
	{
		versions[]=
		{
			"WordCanDoWereOnIt_1",
			1
		};
		class WordCanDoWereOnIt_1
		{
			speech[]=
			{
				"CanDoWereOnIt"
			};
		};
	};
	class WordRequestingPermissionToJoinYourTeam
	{
		sentences[]=
		{
			"WordRequestingPermissionToJoinYourTeamDefault",
			1
		};
	};
	class WordRequestingPermissionToJoinYourTeamDefault
	{
		versions[]=
		{
			"WordRequestingPermissionToJoinYourTeam_1",
			1
		};
		class WordRequestingPermissionToJoinYourTeam_1
		{
			speech[]=
			{
				"RequestingPermissionToJoinYourTeam"
			};
		};
	};
	class WordPermissionGranted
	{
		sentences[]=
		{
			"WordPermissionGrantedDefault",
			1
		};
	};
	class WordPermissionGrantedDefault
	{
		versions[]=
		{
			"WordPermissionGranted_1",
			1
		};
		class WordPermissionGranted_1
		{
			speech[]=
			{
				"PermissionGranted"
			};
		};
	};
	class WordRequestRejected
	{
		sentences[]=
		{
			"WordRequestRejectedDefault",
			1
		};
	};
	class WordRequestRejectedDefault
	{
		versions[]=
		{
			"WordRequestRejected_1",
			1
		};
		class WordRequestRejected_1
		{
			speech[]=
			{
				"RequestRejected"
			};
		};
	};
	class WordRequestingPermissionToLeaveYourTeam
	{
		sentences[]=
		{
			"WordRequestingPermissionToLeaveYourTeamDefault",
			1
		};
	};
	class WordRequestingPermissionToLeaveYourTeamDefault
	{
		versions[]=
		{
			"WordRequestingPermissionToLeaveYourTeam_1",
			1
		};
		class WordRequestingPermissionToLeaveYourTeam_1
		{
			speech[]=
			{
				"RequestingPermissionToLeaveYourTeam"
			};
		};
	};
	class WordBLUFORCommanderRequestsAnAlliance
	{
		sentences[]=
		{
			"WordBLUFORCommanderRequestsAnAllianceDefault",
			1
		};
	};
	class WordBLUFORCommanderRequestsAnAllianceDefault
	{
		versions[]=
		{
			"WordBLUFORCommanderRequestsAnAlliance_1",
			1
		};
		class WordBLUFORCommanderRequestsAnAlliance_1
		{
			speech[]=
			{
				"BLUFORCommanderRequestsAnAlliance"
			};
		};
	};
	class WordOPFORCommanderRequestsAnAlliance
	{
		sentences[]=
		{
			"WordOPFORCommanderRequestsAnAllianceDefault",
			1
		};
	};
	class WordOPFORCommanderRequestsAnAllianceDefault
	{
		versions[]=
		{
			"WordOPFORCommanderRequestsAnAlliance_1",
			1
		};
		class WordOPFORCommanderRequestsAnAlliance_1
		{
			speech[]=
			{
				"OPFORCommanderRequestsAnAlliance"
			};
		};
	};
	class WordNeutralCommanderRequestsAnAlliance
	{
		sentences[]=
		{
			"WordNeutralCommanderRequestsAnAllianceDefault",
			1
		};
	};
	class WordNeutralCommanderRequestsAnAllianceDefault
	{
		versions[]=
		{
			"WordNeutralCommanderRequestsAnAlliance_1",
			1
		};
		class WordNeutralCommanderRequestsAnAlliance_1
		{
			speech[]=
			{
				"NeutralCommanderRequestsAnAlliance"
			};
		};
	};
	class WordBLUFORCommanderRequestsACeaseFire
	{
		sentences[]=
		{
			"WordBLUFORCommanderRequestsACeaseFireDefault",
			1
		};
	};
	class WordBLUFORCommanderRequestsACeaseFireDefault
	{
		versions[]=
		{
			"WordBLUFORCommanderRequestsACeaseFire_1",
			1
		};
		class WordBLUFORCommanderRequestsACeaseFire_1
		{
			speech[]=
			{
				"BLUFORCommanderRequestsACeaseFire"
			};
		};
	};
	class WordOPFORCommanderRequestsACeaseFire
	{
		sentences[]=
		{
			"WordOPFORCommanderRequestsACeaseFireDefault",
			1
		};
	};
	class WordOPFORCommanderRequestsACeaseFireDefault
	{
		versions[]=
		{
			"WordOPFORCommanderRequestsACeaseFire_1",
			1
		};
		class WordOPFORCommanderRequestsACeaseFire_1
		{
			speech[]=
			{
				"OPFORCommanderRequestsACeaseFire"
			};
		};
	};
	class WordNeutralCommanderRequestsACeaseFire
	{
		sentences[]=
		{
			"WordNeutralCommanderRequestsACeaseFireDefault",
			1
		};
	};
	class WordNeutralCommanderRequestsACeaseFireDefault
	{
		versions[]=
		{
			"WordNeutralCommanderRequestsACeaseFire_1",
			1
		};
		class WordNeutralCommanderRequestsACeaseFire_1
		{
			speech[]=
			{
				"NeutralCommanderRequestsACeaseFire"
			};
		};
	};
	class WordAllianceFormed
	{
		sentences[]=
		{
			"WordAllianceFormedDefault",
			1
		};
	};
	class WordAllianceFormedDefault
	{
		versions[]=
		{
			"WordAllianceFormed_1",
			1
		};
		class WordAllianceFormed_1
		{
			speech[]=
			{
				"AllianceFormed"
			};
		};
	};
	class WordAllianceHasEnded
	{
		sentences[]=
		{
			"WordAllianceHasEndedDefault",
			1
		};
	};
	class WordAllianceHasEndedDefault
	{
		versions[]=
		{
			"WordAllianceHasEnded_1",
			1
		};
		class WordAllianceHasEnded_1
		{
			speech[]=
			{
				"AllianceHasEnded"
			};
		};
	};
	class WordCeaseFireInEffect
	{
		sentences[]=
		{
			"WordCeaseFireInEffectDefault",
			1
		};
	};
	class WordCeaseFireInEffectDefault
	{
		versions[]=
		{
			"WordCeaseFireInEffect_1",
			1
		};
		class WordCeaseFireInEffect_1
		{
			speech[]=
			{
				"CeaseFireInEffect"
			};
		};
	};
	class WordCeaseFireHasEnded
	{
		sentences[]=
		{
			"WordCeaseFireHasEndedDefault",
			1
		};
	};
	class WordCeaseFireHasEndedDefault
	{
		versions[]=
		{
			"WordCeaseFireHasEnded_1",
			1
		};
		class WordCeaseFireHasEnded_1
		{
			speech[]=
			{
				"CeaseFireHasEnded"
			};
		};
	};
	class WordAnotherTeamHasTransferredFundsToYou
	{
		sentences[]=
		{
			"WordAnotherTeamHasTransferredFundsToYouDefault",
			1
		};
	};
	class WordAnotherTeamHasTransferredFundsToYouDefault
	{
		versions[]=
		{
			"WordAnotherTeamHasTransferredFundsToYou_1",
			1
		};
		class WordAnotherTeamHasTransferredFundsToYou_1
		{
			speech[]=
			{
				"AnotherTeamHasTransferredFundsToYou"
			};
		};
	};
	class WordHC_ReportingIn
	{
		sentences[]=
		{
			"WordHC_ReportingInDefault",
			"(1-Stealth)",
			"WordHC_ReportingInStealth",
			"Stealth"
		};
	};
	class WordHC_ReportingInDefault
	{
		versions[]=
		{
			"WordHC_ReportingIn_1",
			1
		};
		class WordHC_ReportingIn_1
		{
			speech[]=
			{
				"HC_ReportingIn"
			};
		};
	};
	class WordHC_ReportingInStealth
	{
		versions[]=
		{
			"WordHC_ReportingIn_1",
			1
		};
		class WordHC_ReportingIn_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HC_ReportingIn"
			};
		};
	};
	class WordHC_StandingByForOrders
	{
		sentences[]=
		{
			"WordHC_StandingByForOrdersDefault",
			"(1-Stealth)",
			"WordHC_StandingByForOrdersStealth",
			"Stealth"
		};
	};
	class WordHC_StandingByForOrdersDefault
	{
		versions[]=
		{
			"WordHC_StandingByForOrders_1",
			1
		};
		class WordHC_StandingByForOrders_1
		{
			speech[]=
			{
				"HC_StandingByForOrders"
			};
		};
	};
	class WordHC_StandingByForOrdersStealth
	{
		versions[]=
		{
			"WordHC_StandingByForOrders_1",
			1
		};
		class WordHC_StandingByForOrders_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HC_StandingByForOrders"
			};
		};
	};
	class WordHC_CombatReady
	{
		sentences[]=
		{
			"WordHC_CombatReadyDefault",
			"(1-Stealth)",
			"WordHC_CombatReadyStealth",
			"Stealth"
		};
	};
	class WordHC_CombatReadyDefault
	{
		versions[]=
		{
			"WordHC_CombatReady_1",
			1
		};
		class WordHC_CombatReady_1
		{
			speech[]=
			{
				"HC_CombatReady"
			};
		};
	};
	class WordHC_CombatReadyStealth
	{
		versions[]=
		{
			"WordHC_CombatReady_1",
			1
		};
		class WordHC_CombatReady_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HC_CombatReady"
			};
		};
	};
	class WordHC_WaitingForOrders
	{
		sentences[]=
		{
			"WordHC_WaitingForOrdersDefault",
			"(1-Stealth)",
			"WordHC_WaitingForOrdersStealth",
			"Stealth"
		};
	};
	class WordHC_WaitingForOrdersDefault
	{
		versions[]=
		{
			"WordHC_WaitingForOrders_1",
			1
		};
		class WordHC_WaitingForOrders_1
		{
			speech[]=
			{
				"HC_WaitingForOrders"
			};
		};
	};
	class WordHC_WaitingForOrdersStealth
	{
		versions[]=
		{
			"WordHC_WaitingForOrders_1",
			1
		};
		class WordHC_WaitingForOrders_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HC_WaitingForOrders"
			};
		};
	};
	class WordHC_Advancing
	{
		sentences[]=
		{
			"WordHC_AdvancingDefault",
			"(1-Stealth)",
			"WordHC_AdvancingStealth",
			"Stealth"
		};
	};
	class WordHC_AdvancingDefault
	{
		versions[]=
		{
			"WordHC_Advancing_1",
			1
		};
		class WordHC_Advancing_1
		{
			speech[]=
			{
				"HC_Advancing"
			};
		};
	};
	class WordHC_AdvancingStealth
	{
		versions[]=
		{
			"WordHC_Advancing_1",
			1
		};
		class WordHC_Advancing_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HC_Advancing"
			};
		};
	};
	class WordHC_Affirmative
	{
		sentences[]=
		{
			"WordHC_AffirmativeDefault",
			"(1-Stealth)",
			"WordHC_AffirmativeStealth",
			"Stealth"
		};
	};
	class WordHC_AffirmativeDefault
	{
		versions[]=
		{
			"WordHC_Affirmative_1",
			1
		};
		class WordHC_Affirmative_1
		{
			speech[]=
			{
				"HC_Affirmative"
			};
		};
	};
	class WordHC_AffirmativeStealth
	{
		versions[]=
		{
			"WordHC_Affirmative_1",
			1
		};
		class WordHC_Affirmative_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HC_Affirmative"
			};
		};
	};
	class WordHC_MovingToPosition
	{
		sentences[]=
		{
			"WordHC_MovingToPositionDefault",
			"(1-Stealth)",
			"WordHC_MovingToPositionStealth",
			"Stealth"
		};
	};
	class WordHC_MovingToPositionDefault
	{
		versions[]=
		{
			"WordHC_MovingToPosition_1",
			1
		};
		class WordHC_MovingToPosition_1
		{
			speech[]=
			{
				"HC_MovingToPosition"
			};
		};
	};
	class WordHC_MovingToPositionStealth
	{
		versions[]=
		{
			"WordHC_MovingToPosition_1",
			1
		};
		class WordHC_MovingToPosition_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HC_MovingToPosition"
			};
		};
	};
	class WordHC_OrderReceived
	{
		sentences[]=
		{
			"WordHC_OrderReceivedDefault",
			"(1-Stealth)",
			"WordHC_OrderReceivedStealth",
			"Stealth"
		};
	};
	class WordHC_OrderReceivedDefault
	{
		versions[]=
		{
			"WordHC_OrderReceived_1",
			1
		};
		class WordHC_OrderReceived_1
		{
			speech[]=
			{
				"HC_OrderReceived"
			};
		};
	};
	class WordHC_OrderReceivedStealth
	{
		versions[]=
		{
			"WordHC_OrderReceived_1",
			1
		};
		class WordHC_OrderReceived_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HC_OrderReceived"
			};
		};
	};
	class WordHC_EngagingE
	{
		sentences[]=
		{
			"WordHC_EngagingEDefault",
			"(1-Stealth)",
			"WordHC_EngagingEStealth",
			"Stealth"
		};
	};
	class WordHC_EngagingEDefault
	{
		versions[]=
		{
			"WordHC_EngagingE_1",
			1
		};
		class WordHC_EngagingE_1
		{
			speech[]=
			{
				"HC_EngagingE"
			};
		};
	};
	class WordHC_EngagingEStealth
	{
		versions[]=
		{
			"WordHC_EngagingE_1",
			1
		};
		class WordHC_EngagingE_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HC_EngagingE"
			};
		};
	};
	class WordHC_AttackingE
	{
		sentences[]=
		{
			"WordHC_AttackingEDefault",
			"(1-Stealth)",
			"WordHC_AttackingEStealth",
			"Stealth"
		};
	};
	class WordHC_AttackingEDefault
	{
		versions[]=
		{
			"WordHC_AttackingE_1",
			1
		};
		class WordHC_AttackingE_1
		{
			speech[]=
			{
				"HC_AttackingE"
			};
		};
	};
	class WordHC_AttackingEStealth
	{
		versions[]=
		{
			"WordHC_AttackingE_1",
			1
		};
		class WordHC_AttackingE_1
		{
			wordsClass="StealthWords";
			speech[]=
			{
				"HC_AttackingE"
			};
		};
	};
	class WordSeveral
	{
		sentences[]=
		{
			"WordSeveralDefault",
			1
		};
	};
	class WordSeveralDefault
	{
		versions[]=
		{
			"WordSeveral_1",
			1
		};
		class WordSeveral_1
		{
			speech[]=
			{
				"Several"
			};
		};
	};
	class WordSingle
	{
		sentences[]=
		{
			"WordSingleDefault",
			1
		};
	};
	class WordSingleDefault
	{
		versions[]=
		{
			"WordSingle_1",
			1
		};
		class WordSingle_1
		{
			speech[]=
			{
				"Single"
			};
		};
	};
	class WordNone
	{
		sentences[]=
		{
			"WordNoneDefault",
			1
		};
	};
	class WordNoneDefault
	{
		versions[]=
		{
			"WordNone_1",
			1
		};
		class WordNone_1
		{
			speech[]=
			{
				"None"
			};
		};
	};
	class WordSome
	{
		sentences[]=
		{
			"WordSomeDefault",
			1
		};
	};
	class WordSomeDefault
	{
		versions[]=
		{
			"WordSome_1",
			1
		};
		class WordSome_1
		{
			speech[]=
			{
				"Some"
			};
		};
	};
	class WordALotOf
	{
		sentences[]=
		{
			"WordALotOfDefault",
			1
		};
	};
	class WordALotOfDefault
	{
		versions[]=
		{
			"WordALotOf_1",
			1
		};
		class WordALotOf_1
		{
			speech[]=
			{
				"ALotOf"
			};
		};
	};
	class WordIndependent
	{
		sentences[]=
		{
			"WordIndependentDefault",
			1
		};
	};
	class WordIndependentDefault
	{
		versions[]=
		{
			"WordIndependent_1",
			1
		};
		class WordIndependent_1
		{
			speech[]=
			{
				"Independent"
			};
		};
	};
	class WordCivilian
	{
		sentences[]=
		{
			"WordCivilianDefault",
			1
		};
	};
	class WordCivilianDefault
	{
		versions[]=
		{
			"WordCivilian_1",
			1
		};
		class WordCivilian_1
		{
			speech[]=
			{
				"Civilian"
			};
		};
	};
	class WordOfThem
	{
		sentences[]=
		{
			"WordOfThemDefault",
			1
		};
	};
	class WordOfThemDefault
	{
		versions[]=
		{
			"WordOfThem_1",
			1
		};
		class WordOfThem_1
		{
			speech[]=
			{
				"OfThem"
			};
		};
	};
	class WordNear
	{
		sentences[]=
		{
			"WordNearDefault",
			1
		};
	};
	class WordNearDefault
	{
		versions[]=
		{
			"WordNear_1",
			1
		};
		class WordNear_1
		{
			speech[]=
			{
				"Near"
			};
		};
	};
	class WordNotFar
	{
		sentences[]=
		{
			"WordNotFarDefault",
			1
		};
	};
	class WordNotFarDefault
	{
		versions[]=
		{
			"WordNotFar_1",
			1
		};
		class WordNotFar_1
		{
			speech[]=
			{
				"NotFar"
			};
		};
	};
	class WordFrom
	{
		sentences[]=
		{
			"WordFromDefault",
			1
		};
	};
	class WordFromDefault
	{
		versions[]=
		{
			"WordFrom_1",
			1
		};
		class WordFrom_1
		{
			speech[]=
			{
				"From"
			};
		};
	};
	class WordAround
	{
		sentences[]=
		{
			"WordAroundDefault",
			1
		};
	};
	class WordAroundDefault
	{
		versions[]=
		{
			"WordAround_1",
			1
		};
		class WordAround_1
		{
			speech[]=
			{
				"Around"
			};
		};
	};
	class WordHere
	{
		sentences[]=
		{
			"WordHereDefault",
			1
		};
	};
	class WordHereDefault
	{
		versions[]=
		{
			"WordHere_1",
			1
		};
		class WordHere_1
		{
			speech[]=
			{
				"Here"
			};
		};
	};
	class WordThere
	{
		sentences[]=
		{
			"WordThereDefault",
			1
		};
	};
	class WordThereDefault
	{
		versions[]=
		{
			"WordThere_1",
			1
		};
		class WordThere_1
		{
			speech[]=
			{
				"There"
			};
		};
	};
	class WordProbably
	{
		sentences[]=
		{
			"WordProbablyDefault",
			1
		};
	};
	class WordProbablyDefault
	{
		versions[]=
		{
			"WordProbably_1",
			1
		};
		class WordProbably_1
		{
			speech[]=
			{
				"Probably"
			};
		};
	};
	class WordIsProbablyToThe
	{
		sentences[]=
		{
			"WordIsProbablyToTheDefault",
			1
		};
	};
	class WordIsProbablyToTheDefault
	{
		versions[]=
		{
			"WordIsProbablyToThe_1",
			1
		};
		class WordIsProbablyToThe_1
		{
			speech[]=
			{
				"IsProbablyToThe"
			};
		};
	};
	class WordJustNow
	{
		sentences[]=
		{
			"WordJustNowDefault",
			1
		};
	};
	class WordJustNowDefault
	{
		versions[]=
		{
			"WordJustNow_1",
			1
		};
		class WordJustNow_1
		{
			speech[]=
			{
				"JustNow"
			};
		};
	};
	class WordAFewMinutesAgo
	{
		sentences[]=
		{
			"WordAFewMinutesAgoDefault",
			1
		};
	};
	class WordAFewMinutesAgoDefault
	{
		versions[]=
		{
			"WordAFewMinutesAgo_1",
			1
		};
		class WordAFewMinutesAgo_1
		{
			speech[]=
			{
				"AFewMinutesAgo"
			};
		};
	};
	class WordAFewHoursAgo
	{
		sentences[]=
		{
			"WordAFewHoursAgoDefault",
			1
		};
	};
	class WordAFewHoursAgoDefault
	{
		versions[]=
		{
			"WordAFewHoursAgo_1",
			1
		};
		class WordAFewHoursAgo_1
		{
			speech[]=
			{
				"AFewHoursAgo"
			};
		};
	};
	class WordToday
	{
		sentences[]=
		{
			"WordTodayDefault",
			1
		};
	};
	class WordTodayDefault
	{
		versions[]=
		{
			"WordToday_1",
			1
		};
		class WordToday_1
		{
			speech[]=
			{
				"Today"
			};
		};
	};
	class WordYesterday
	{
		sentences[]=
		{
			"WordYesterdayDefault",
			1
		};
	};
	class WordYesterdayDefault
	{
		versions[]=
		{
			"WordYesterday_1",
			1
		};
		class WordYesterday_1
		{
			speech[]=
			{
				"Yesterday"
			};
		};
	};
	class WordSeveralDaysAgo
	{
		sentences[]=
		{
			"WordSeveralDaysAgoDefault",
			1
		};
	};
	class WordSeveralDaysAgoDefault
	{
		versions[]=
		{
			"WordSeveralDaysAgo_1",
			1
		};
		class WordSeveralDaysAgo_1
		{
			speech[]=
			{
				"SeveralDaysAgo"
			};
		};
	};
	class WordEnglishQ
	{
		sentences[]=
		{
			"WordEnglishQDefault",
			1
		};
	};
	class WordEnglishQDefault
	{
		versions[]=
		{
			"WordEnglishQ_1",
			1
		};
		class WordEnglishQ_1
		{
			speech[]=
			{
				"EnglishQ"
			};
		};
	};
	class WordRussianQ
	{
		sentences[]=
		{
			"WordRussianQDefault",
			1
		};
	};
	class WordRussianQDefault
	{
		versions[]=
		{
			"WordRussianQ_1",
			1
		};
		class WordRussianQ_1
		{
			speech[]=
			{
				"RussianQ"
			};
		};
	};
	class WordCzechQ
	{
		sentences[]=
		{
			"WordCzechQDefault",
			1
		};
	};
	class WordCzechQDefault
	{
		versions[]=
		{
			"WordCzechQ_1",
			1
		};
		class WordCzechQ_1
		{
			speech[]=
			{
				"CzechQ"
			};
		};
	};
	class WordTakistaniQ
	{
		sentences[]=
		{
			"WordTakistaniQDefault",
			1
		};
	};
	class WordTakistaniQDefault
	{
		versions[]=
		{
			"WordTakistaniQ_1",
			1
		};
		class WordTakistaniQ_1
		{
			speech[]=
			{
				"TakistaniQ"
			};
		};
	};
	class WordDidYouSeeAnythingRecentlyQ
	{
		sentences[]=
		{
			"WordDidYouSeeAnythingRecentlyQDefault",
			1
		};
	};
	class WordDidYouSeeAnythingRecentlyQDefault
	{
		versions[]=
		{
			"WordDidYouSeeAnythingRecentlyQ_1",
			1
		};
		class WordDidYouSeeAnythingRecentlyQ_1
		{
			speech[]=
			{
				"DidYouSeeAnythingRecentlyQ"
			};
		};
	};
	class WordYesISawSomething
	{
		sentences[]=
		{
			"WordYesISawSomethingDefault",
			1
		};
	};
	class WordYesISawSomethingDefault
	{
		versions[]=
		{
			"WordYesISawSomething_1",
			1
		};
		class WordYesISawSomething_1
		{
			speech[]=
			{
				"YesISawSomething"
			};
		};
	};
	class WordNoIDidntSeeAnything
	{
		sentences[]=
		{
			"WordNoIDidntSeeAnythingDefault",
			1
		};
	};
	class WordNoIDidntSeeAnythingDefault
	{
		versions[]=
		{
			"WordNoIDidntSeeAnything_1",
			1
		};
		class WordNoIDidntSeeAnything_1
		{
			speech[]=
			{
				"NoIDidntSeeAnything"
			};
		};
	};
	class WordWhatsTheWeatherForecastQ
	{
		sentences[]=
		{
			"WordWhatsTheWeatherForecastQDefault",
			1
		};
	};
	class WordWhatsTheWeatherForecastQDefault
	{
		versions[]=
		{
			"WordWhatsTheWeatherForecastQ_1",
			1
		};
		class WordWhatsTheWeatherForecastQ_1
		{
			speech[]=
			{
				"WhatsTheWeatherForecastQ"
			};
		};
	};
	class WordNiceWeatherHuhQ
	{
		sentences[]=
		{
			"WordNiceWeatherHuhQDefault",
			1
		};
	};
	class WordNiceWeatherHuhQDefault
	{
		versions[]=
		{
			"WordNiceWeatherHuhQ_1",
			1
		};
		class WordNiceWeatherHuhQ_1
		{
			speech[]=
			{
				"NiceWeatherHuhQ"
			};
		};
	};
	class WordNastyWeatherHuhQ
	{
		sentences[]=
		{
			"WordNastyWeatherHuhQDefault",
			1
		};
	};
	class WordNastyWeatherHuhQDefault
	{
		versions[]=
		{
			"WordNastyWeatherHuhQ_1",
			1
		};
		class WordNastyWeatherHuhQ_1
		{
			speech[]=
			{
				"NastyWeatherHuhQ"
			};
		};
	};
	class WordShouldBeClearingUpSoon
	{
		sentences[]=
		{
			"WordShouldBeClearingUpSoonDefault",
			1
		};
	};
	class WordShouldBeClearingUpSoonDefault
	{
		versions[]=
		{
			"WordShouldBeClearingUpSoon_1",
			1
		};
		class WordShouldBeClearingUpSoon_1
		{
			speech[]=
			{
				"ShouldBeClearingUpSoon"
			};
		};
	};
	class WordIReckonWellGetSomeRainSoon
	{
		sentences[]=
		{
			"WordIReckonWellGetSomeRainSoonDefault",
			1
		};
	};
	class WordIReckonWellGetSomeRainSoonDefault
	{
		versions[]=
		{
			"WordIReckonWellGetSomeRainSoon_1",
			1
		};
		class WordIReckonWellGetSomeRainSoon_1
		{
			speech[]=
			{
				"IReckonWellGetSomeRainSoon"
			};
		};
	};
	class WordTheySayItllStayLikeThisForAWhile
	{
		sentences[]=
		{
			"WordTheySayItllStayLikeThisForAWhileDefault",
			1
		};
	};
	class WordTheySayItllStayLikeThisForAWhileDefault
	{
		versions[]=
		{
			"WordTheySayItllStayLikeThisForAWhile_1",
			1
		};
		class WordTheySayItllStayLikeThisForAWhile_1
		{
			speech[]=
			{
				"TheySayItllStayLikeThisForAWhile"
			};
		};
	};
	class WordWhatsTheClosestSettlementQ
	{
		sentences[]=
		{
			"WordWhatsTheClosestSettlementQDefault",
			1
		};
	};
	class WordWhatsTheClosestSettlementQDefault
	{
		versions[]=
		{
			"WordWhatsTheClosestSettlementQ_1",
			1
		};
		class WordWhatsTheClosestSettlementQ_1
		{
			speech[]=
			{
				"WhatsTheClosestSettlementQ"
			};
		};
	};
	class WordTheClosestOneIs
	{
		sentences[]=
		{
			"WordTheClosestOneIsDefault",
			1
		};
	};
	class WordTheClosestOneIsDefault
	{
		versions[]=
		{
			"WordTheClosestOneIs_1",
			1
		};
		class WordTheClosestOneIs_1
		{
			speech[]=
			{
				"TheClosestOneIs"
			};
		};
	};
	class WordImNotFromAroundHere
	{
		sentences[]=
		{
			"WordImNotFromAroundHereDefault",
			1
		};
	};
	class WordImNotFromAroundHereDefault
	{
		versions[]=
		{
			"WordImNotFromAroundHere_1",
			1
		};
		class WordImNotFromAroundHere_1
		{
			speech[]=
			{
				"ImNotFromAroundHere"
			};
		};
	};
	class WordNoIdeaIDontLiveHere
	{
		sentences[]=
		{
			"WordNoIdeaIDontLiveHereDefault",
			1
		};
	};
	class WordNoIdeaIDontLiveHereDefault
	{
		versions[]=
		{
			"WordNoIdeaIDontLiveHere_1",
			1
		};
		class WordNoIdeaIDontLiveHere_1
		{
			speech[]=
			{
				"NoIdeaIDontLiveHere"
			};
		};
	};
	class WordYouAlreadyAskedMeThat
	{
		sentences[]=
		{
			"WordYouAlreadyAskedMeThatDefault",
			1
		};
	};
	class WordYouAlreadyAskedMeThatDefault
	{
		versions[]=
		{
			"WordYouAlreadyAskedMeThat_1",
			1
		};
		class WordYouAlreadyAskedMeThat_1
		{
			speech[]=
			{
				"YouAlreadyAskedMeThat"
			};
		};
	};
	class WordAreYouKiddingQ
	{
		sentences[]=
		{
			"WordAreYouKiddingQDefault",
			1
		};
	};
	class WordAreYouKiddingQDefault
	{
		versions[]=
		{
			"WordAreYouKiddingQ_1",
			1
		};
		class WordAreYouKiddingQ_1
		{
			speech[]=
			{
				"AreYouKiddingQ"
			};
		};
	};
	class WordStopAskingMeThat
	{
		sentences[]=
		{
			"WordStopAskingMeThatDefault",
			1
		};
	};
	class WordStopAskingMeThatDefault
	{
		versions[]=
		{
			"WordStopAskingMeThat_1",
			1
		};
		class WordStopAskingMeThat_1
		{
			speech[]=
			{
				"StopAskingMeThat"
			};
		};
	};
	class WordSorryIDontUnderstand
	{
		sentences[]=
		{
			"WordSorryIDontUnderstandDefault",
			1
		};
	};
	class WordSorryIDontUnderstandDefault
	{
		versions[]=
		{
			"WordSorryIDontUnderstand_1",
			1
		};
		class WordSorryIDontUnderstand_1
		{
			speech[]=
			{
				"SorryIDontUnderstand"
			};
		};
	};
	class WordUhWhatQ
	{
		sentences[]=
		{
			"WordUhWhatQDefault",
			1
		};
	};
	class WordUhWhatQDefault
	{
		versions[]=
		{
			"WordUhWhatQ_1",
			1
		};
		class WordUhWhatQ_1
		{
			speech[]=
			{
				"UhWhatQ"
			};
		};
	};
	class WordIWillOnlyTellYouMyNameRankAndSerialNumber
	{
		sentences[]=
		{
			"WordIWillOnlyTellYouMyNameRankAndSerialNumberDefault",
			1
		};
	};
	class WordIWillOnlyTellYouMyNameRankAndSerialNumberDefault
	{
		versions[]=
		{
			"WordIWillOnlyTellYouMyNameRankAndSerialNumber_1",
			1
		};
		class WordIWillOnlyTellYouMyNameRankAndSerialNumber_1
		{
			speech[]=
			{
				"IWillOnlyTellYouMyNameRankAndSerialNumber"
			};
		};
	};
	class WordSirQ
	{
		sentences[]=
		{
			"WordSirQDefault",
			1
		};
	};
	class WordSirQDefault
	{
		versions[]=
		{
			"WordSirQ_1",
			1
		};
		class WordSirQ_1
		{
			speech[]=
			{
				"SirQ"
			};
		};
	};
	class WordPrivateQ
	{
		sentences[]=
		{
			"WordPrivateQDefault",
			1
		};
	};
	class WordPrivateQDefault
	{
		versions[]=
		{
			"WordPrivateQ_1",
			1
		};
		class WordPrivateQ_1
		{
			speech[]=
			{
				"PrivateQ"
			};
		};
	};
	class WordCorporalQ
	{
		sentences[]=
		{
			"WordCorporalQDefault",
			1
		};
	};
	class WordCorporalQDefault
	{
		versions[]=
		{
			"WordCorporalQ_1",
			1
		};
		class WordCorporalQ_1
		{
			speech[]=
			{
				"CorporalQ"
			};
		};
	};
	class WordSergeantQ
	{
		sentences[]=
		{
			"WordSergeantQDefault",
			1
		};
	};
	class WordSergeantQDefault
	{
		versions[]=
		{
			"WordSergeantQ_1",
			1
		};
		class WordSergeantQ_1
		{
			speech[]=
			{
				"SergeantQ"
			};
		};
	};
	class WordLieutenantQ
	{
		sentences[]=
		{
			"WordLieutenantQDefault",
			1
		};
	};
	class WordLieutenantQDefault
	{
		versions[]=
		{
			"WordLieutenantQ_1",
			1
		};
		class WordLieutenantQ_1
		{
			speech[]=
			{
				"LieutenantQ"
			};
		};
	};
	class WordCaptainQ
	{
		sentences[]=
		{
			"WordCaptainQDefault",
			1
		};
	};
	class WordCaptainQDefault
	{
		versions[]=
		{
			"WordCaptainQ_1",
			1
		};
		class WordCaptainQ_1
		{
			speech[]=
			{
				"CaptainQ"
			};
		};
	};
	class WordMajorQ
	{
		sentences[]=
		{
			"WordMajorQDefault",
			1
		};
	};
	class WordMajorQDefault
	{
		versions[]=
		{
			"WordMajorQ_1",
			1
		};
		class WordMajorQ_1
		{
			speech[]=
			{
				"MajorQ"
			};
		};
	};
	class WordColonelQ
	{
		sentences[]=
		{
			"WordColonelQDefault",
			1
		};
	};
	class WordColonelQDefault
	{
		versions[]=
		{
			"WordColonelQ_1",
			1
		};
		class WordColonelQ_1
		{
			speech[]=
			{
				"ColonelQ"
			};
		};
	};
	class WordYesPrivate
	{
		sentences[]=
		{
			"WordYesPrivateDefault",
			1
		};
	};
	class WordYesPrivateDefault
	{
		versions[]=
		{
			"WordYesPrivate_1",
			1
		};
		class WordYesPrivate_1
		{
			speech[]=
			{
				"YesPrivate"
			};
		};
	};
	class WordYesCorporal
	{
		sentences[]=
		{
			"WordYesCorporalDefault",
			1
		};
	};
	class WordYesCorporalDefault
	{
		versions[]=
		{
			"WordYesCorporal_1",
			1
		};
		class WordYesCorporal_1
		{
			speech[]=
			{
				"YesCorporal"
			};
		};
	};
	class WordYesSergeant
	{
		sentences[]=
		{
			"WordYesSergeantDefault",
			1
		};
	};
	class WordYesSergeantDefault
	{
		versions[]=
		{
			"WordYesSergeant_1",
			1
		};
		class WordYesSergeant_1
		{
			speech[]=
			{
				"YesSergeant"
			};
		};
	};
	class WordYesLieutenant
	{
		sentences[]=
		{
			"WordYesLieutenantDefault",
			1
		};
	};
	class WordYesLieutenantDefault
	{
		versions[]=
		{
			"WordYesLieutenant_1",
			1
		};
		class WordYesLieutenant_1
		{
			speech[]=
			{
				"YesLieutenant"
			};
		};
	};
	class WordYesCaptain
	{
		sentences[]=
		{
			"WordYesCaptainDefault",
			1
		};
	};
	class WordYesCaptainDefault
	{
		versions[]=
		{
			"WordYesCaptain_1",
			1
		};
		class WordYesCaptain_1
		{
			speech[]=
			{
				"YesCaptain"
			};
		};
	};
	class WordYesMajor
	{
		sentences[]=
		{
			"WordYesMajorDefault",
			1
		};
	};
	class WordYesMajorDefault
	{
		versions[]=
		{
			"WordYesMajor_1",
			1
		};
		class WordYesMajor_1
		{
			speech[]=
			{
				"YesMajor"
			};
		};
	};
	class WordYesColonel
	{
		sentences[]=
		{
			"WordYesColonelDefault",
			1
		};
	};
	class WordYesColonelDefault
	{
		versions[]=
		{
			"WordYesColonel_1",
			1
		};
		class WordYesColonel_1
		{
			speech[]=
			{
				"YesColonel"
			};
		};
	};
	class WordSoldierQ
	{
		sentences[]=
		{
			"WordSoldierQDefault",
			1
		};
	};
	class WordSoldierQDefault
	{
		versions[]=
		{
			"WordSoldierQ_1",
			1
		};
		class WordSoldierQ_1
		{
			speech[]=
			{
				"SoldierQ"
			};
		};
	};
	class WordMorninSoldier
	{
		sentences[]=
		{
			"WordMorninSoldierDefault",
			1
		};
	};
	class WordMorninSoldierDefault
	{
		versions[]=
		{
			"WordMorninSoldier_1",
			1
		};
		class WordMorninSoldier_1
		{
			speech[]=
			{
				"MorninSoldier"
			};
		};
	};
	class WordEveninSoldier
	{
		sentences[]=
		{
			"WordEveninSoldierDefault",
			1
		};
	};
	class WordEveninSoldierDefault
	{
		versions[]=
		{
			"WordEveninSoldier_1",
			1
		};
		class WordEveninSoldier_1
		{
			speech[]=
			{
				"EveninSoldier"
			};
		};
	};
	class WordGoodDaySir
	{
		sentences[]=
		{
			"WordGoodDaySirDefault",
			1
		};
	};
	class WordGoodDaySirDefault
	{
		versions[]=
		{
			"WordGoodDaySir_1",
			1
		};
		class WordGoodDaySir_1
		{
			speech[]=
			{
				"GoodDaySir"
			};
		};
	};
	class WordGoodEveningSir
	{
		sentences[]=
		{
			"WordGoodEveningSirDefault",
			1
		};
	};
	class WordGoodEveningSirDefault
	{
		versions[]=
		{
			"WordGoodEveningSir_1",
			1
		};
		class WordGoodEveningSir_1
		{
			speech[]=
			{
				"GoodEveningSir"
			};
		};
	};
	class WordGoodMorningSir
	{
		sentences[]=
		{
			"WordGoodMorningSirDefault",
			1
		};
	};
	class WordGoodMorningSirDefault
	{
		versions[]=
		{
			"WordGoodMorningSir_1",
			1
		};
		class WordGoodMorningSir_1
		{
			speech[]=
			{
				"GoodMorningSir"
			};
		};
	};
	class WordGoodDay
	{
		sentences[]=
		{
			"WordGoodDayDefault",
			1
		};
	};
	class WordGoodDayDefault
	{
		versions[]=
		{
			"WordGoodDay_1",
			1
		};
		class WordGoodDay_1
		{
			speech[]=
			{
				"GoodDay"
			};
		};
	};
	class WordGoodMorning
	{
		sentences[]=
		{
			"WordGoodMorningDefault",
			1
		};
	};
	class WordGoodMorningDefault
	{
		versions[]=
		{
			"WordGoodMorning_1",
			1
		};
		class WordGoodMorning_1
		{
			speech[]=
			{
				"GoodMorning"
			};
		};
	};
	class WordGoodEvening
	{
		sentences[]=
		{
			"WordGoodEveningDefault",
			1
		};
	};
	class WordGoodEveningDefault
	{
		versions[]=
		{
			"WordGoodEvening_1",
			1
		};
		class WordGoodEvening_1
		{
			speech[]=
			{
				"GoodEvening"
			};
		};
	};
	class WordWhatQ
	{
		sentences[]=
		{
			"WordWhatQDefault",
			1
		};
	};
	class WordWhatQDefault
	{
		versions[]=
		{
			"WordWhatQ_1",
			1
		};
		class WordWhatQ_1
		{
			speech[]=
			{
				"WhatQ"
			};
		};
	};
	class WordYesSir
	{
		sentences[]=
		{
			"WordYesSirDefault",
			1
		};
	};
	class WordYesSirDefault
	{
		versions[]=
		{
			"WordYesSir_1",
			1
		};
		class WordYesSir_1
		{
			speech[]=
			{
				"YesSir"
			};
		};
	};
	class WordHelloSir
	{
		sentences[]=
		{
			"WordHelloSirDefault",
			1
		};
	};
	class WordHelloSirDefault
	{
		versions[]=
		{
			"WordHelloSir_1",
			1
		};
		class WordHelloSir_1
		{
			speech[]=
			{
				"HelloSir"
			};
		};
	};
	class WordYep
	{
		sentences[]=
		{
			"WordYepDefault",
			1
		};
	};
	class WordYepDefault
	{
		versions[]=
		{
			"WordYep_1",
			1
		};
		class WordYep_1
		{
			speech[]=
			{
				"Yep"
			};
		};
	};
	class WordYeahQ
	{
		sentences[]=
		{
			"WordYeahQDefault",
			1
		};
	};
	class WordYeahQDefault
	{
		versions[]=
		{
			"WordYeahQ_1",
			1
		};
		class WordYeahQ_1
		{
			speech[]=
			{
				"YeahQ"
			};
		};
	};
	class WordHi
	{
		sentences[]=
		{
			"WordHiDefault",
			1
		};
	};
	class WordHiDefault
	{
		versions[]=
		{
			"WordHi_1",
			1
		};
		class WordHi_1
		{
			speech[]=
			{
				"Hi"
			};
		};
	};
	class WordHiThereE
	{
		sentences[]=
		{
			"WordHiThereEDefault",
			1
		};
	};
	class WordHiThereEDefault
	{
		versions[]=
		{
			"WordHiThereE_1",
			1
		};
		class WordHiThereE_1
		{
			speech[]=
			{
				"HiThereE"
			};
		};
	};
	class WordHeyMan
	{
		sentences[]=
		{
			"WordHeyManDefault",
			1
		};
	};
	class WordHeyManDefault
	{
		versions[]=
		{
			"WordHeyMan_1",
			1
		};
		class WordHeyMan_1
		{
			speech[]=
			{
				"HeyMan"
			};
		};
	};
	class WordHiDude
	{
		sentences[]=
		{
			"WordHiDudeDefault",
			1
		};
	};
	class WordHiDudeDefault
	{
		versions[]=
		{
			"WordHiDude_1",
			1
		};
		class WordHiDude_1
		{
			speech[]=
			{
				"HiDude"
			};
		};
	};
	class WordHello
	{
		sentences[]=
		{
			"WordHelloDefault",
			1
		};
	};
	class WordHelloDefault
	{
		versions[]=
		{
			"WordHello_1",
			1
		};
		class WordHello_1
		{
			speech[]=
			{
				"Hello"
			};
		};
	};
	class WordHowsThingsQ
	{
		sentences[]=
		{
			"WordHowsThingsQDefault",
			1
		};
	};
	class WordHowsThingsQDefault
	{
		versions[]=
		{
			"WordHowsThingsQ_1",
			1
		};
		class WordHowsThingsQ_1
		{
			speech[]=
			{
				"HowsThingsQ"
			};
		};
	};
	class WordHowAreYouQ
	{
		sentences[]=
		{
			"WordHowAreYouQDefault",
			1
		};
	};
	class WordHowAreYouQDefault
	{
		versions[]=
		{
			"WordHowAreYouQ_1",
			1
		};
		class WordHowAreYouQ_1
		{
			speech[]=
			{
				"HowAreYouQ"
			};
		};
	};
	class WordHeyE
	{
		sentences[]=
		{
			"WordHeyEDefault",
			1
		};
	};
	class WordHeyEDefault
	{
		versions[]=
		{
			"WordHeyE_1",
			1
		};
		class WordHeyE_1
		{
			speech[]=
			{
				"HeyE"
			};
		};
	};
	class WordWhatDoYouWantQ
	{
		sentences[]=
		{
			"WordWhatDoYouWantQDefault",
			1
		};
	};
	class WordWhatDoYouWantQDefault
	{
		versions[]=
		{
			"WordWhatDoYouWantQ_1",
			1
		};
		class WordWhatDoYouWantQ_1
		{
			speech[]=
			{
				"WhatDoYouWantQ"
			};
		};
	};
	class WordWhatDoYouNeedQ
	{
		sentences[]=
		{
			"WordWhatDoYouNeedQDefault",
			1
		};
	};
	class WordWhatDoYouNeedQDefault
	{
		versions[]=
		{
			"WordWhatDoYouNeedQ_1",
			1
		};
		class WordWhatDoYouNeedQ_1
		{
			speech[]=
			{
				"WhatDoYouNeedQ"
			};
		};
	};
	class WordWhatsUpQ
	{
		sentences[]=
		{
			"WordWhatsUpQDefault",
			1
		};
	};
	class WordWhatsUpQDefault
	{
		versions[]=
		{
			"WordWhatsUpQ_1",
			1
		};
		class WordWhatsUpQ_1
		{
			speech[]=
			{
				"WhatsUpQ"
			};
		};
	};
	class WordYesQ
	{
		sentences[]=
		{
			"WordYesQDefault",
			1
		};
	};
	class WordYesQDefault
	{
		versions[]=
		{
			"WordYesQ_1",
			1
		};
		class WordYesQ_1
		{
			speech[]=
			{
				"YesQ"
			};
		};
	};
	class WordMaamQ
	{
		sentences[]=
		{
			"WordMaamQDefault",
			1
		};
	};
	class WordMaamQDefault
	{
		versions[]=
		{
			"WordMaamQ_1",
			1
		};
		class WordMaamQ_1
		{
			speech[]=
			{
				"MaamQ"
			};
		};
	};
	class WordHaveANiceDay
	{
		sentences[]=
		{
			"WordHaveANiceDayDefault",
			1
		};
	};
	class WordHaveANiceDayDefault
	{
		versions[]=
		{
			"WordHaveANiceDay_1",
			1
		};
		class WordHaveANiceDay_1
		{
			speech[]=
			{
				"HaveANiceDay"
			};
		};
	};
	class WordMorningMaam
	{
		sentences[]=
		{
			"WordMorningMaamDefault",
			1
		};
	};
	class WordMorningMaamDefault
	{
		versions[]=
		{
			"WordMorningMaam_1",
			1
		};
		class WordMorningMaam_1
		{
			speech[]=
			{
				"MorningMaam"
			};
		};
	};
	class WordHelloThere
	{
		sentences[]=
		{
			"WordHelloThereDefault",
			1
		};
	};
	class WordHelloThereDefault
	{
		versions[]=
		{
			"WordHelloThere_1",
			1
		};
		class WordHelloThere_1
		{
			speech[]=
			{
				"HelloThere"
			};
		};
	};
	class WordHowYouDoinQ
	{
		sentences[]=
		{
			"WordHowYouDoinQDefault",
			1
		};
	};
	class WordHowYouDoinQDefault
	{
		versions[]=
		{
			"WordHowYouDoinQ_1",
			1
		};
		class WordHowYouDoinQ_1
		{
			speech[]=
			{
				"HowYouDoinQ"
			};
		};
	};
	class WordDontTouchMeE
	{
		sentences[]=
		{
			"WordDontTouchMeEDefault",
			1
		};
	};
	class WordDontTouchMeEDefault
	{
		versions[]=
		{
			"WordDontTouchMeE_1",
			1
		};
		class WordDontTouchMeE_1
		{
			speech[]=
			{
				"DontTouchMeE"
			};
		};
	};
	class WordNotNowE
	{
		sentences[]=
		{
			"WordNotNowEDefault",
			1
		};
	};
	class WordNotNowEDefault
	{
		versions[]=
		{
			"WordNotNowE_1",
			1
		};
		class WordNotNowE_1
		{
			speech[]=
			{
				"NotNowE"
			};
		};
	};
	class WordLater
	{
		sentences[]=
		{
			"WordLaterDefault",
			1
		};
	};
	class WordLaterDefault
	{
		versions[]=
		{
			"WordLater_1",
			1
		};
		class WordLater_1
		{
			speech[]=
			{
				"Later"
			};
		};
	};
	class WordNoTimeE
	{
		sentences[]=
		{
			"WordNoTimeEDefault",
			1
		};
	};
	class WordNoTimeEDefault
	{
		versions[]=
		{
			"WordNoTimeE_1",
			1
		};
		class WordNoTimeE_1
		{
			speech[]=
			{
				"NoTimeE"
			};
		};
	};
	class WordHushE
	{
		sentences[]=
		{
			"WordHushEDefault",
			1
		};
	};
	class WordHushEDefault
	{
		versions[]=
		{
			"WordHushE_1",
			1
		};
		class WordHushE_1
		{
			speech[]=
			{
				"HushE"
			};
		};
	};
	class WordSsshhE
	{
		sentences[]=
		{
			"WordSsshhEDefault",
			1
		};
	};
	class WordSsshhEDefault
	{
		versions[]=
		{
			"WordSsshhE_1",
			1
		};
		class WordSsshhE_1
		{
			speech[]=
			{
				"SsshhE"
			};
		};
	};
	class WordCantYouSeeImBusyQ
	{
		sentences[]=
		{
			"WordCantYouSeeImBusyQDefault",
			1
		};
	};
	class WordCantYouSeeImBusyQDefault
	{
		versions[]=
		{
			"WordCantYouSeeImBusyQ_1",
			1
		};
		class WordCantYouSeeImBusyQ_1
		{
			speech[]=
			{
				"CantYouSeeImBusyQ"
			};
		};
	};
	class WordBitOccupiedAtTheMomentDude
	{
		sentences[]=
		{
			"WordBitOccupiedAtTheMomentDudeDefault",
			1
		};
	};
	class WordBitOccupiedAtTheMomentDudeDefault
	{
		versions[]=
		{
			"WordBitOccupiedAtTheMomentDude_1",
			1
		};
		class WordBitOccupiedAtTheMomentDude_1
		{
			speech[]=
			{
				"BitOccupiedAtTheMomentDude"
			};
		};
	};
	class WordImBusyE
	{
		sentences[]=
		{
			"WordImBusyEDefault",
			1
		};
	};
	class WordImBusyEDefault
	{
		versions[]=
		{
			"WordImBusyE_1",
			1
		};
		class WordImBusyE_1
		{
			speech[]=
			{
				"ImBusyE"
			};
		};
	};
	class WordPissOffE
	{
		sentences[]=
		{
			"WordPissOffEDefault",
			1
		};
	};
	class WordPissOffEDefault
	{
		versions[]=
		{
			"WordPissOffE_1",
			1
		};
		class WordPissOffE_1
		{
			speech[]=
			{
				"PissOffE"
			};
		};
	};
	class WordNiceToSeeYou
	{
		sentences[]=
		{
			"WordNiceToSeeYouDefault",
			1
		};
	};
	class WordNiceToSeeYouDefault
	{
		versions[]=
		{
			"WordNiceToSeeYou_1",
			1
		};
		class WordNiceToSeeYou_1
		{
			speech[]=
			{
				"NiceToSeeYou"
			};
		};
	};
	class WordGoodToSeeYou
	{
		sentences[]=
		{
			"WordGoodToSeeYouDefault",
			1
		};
	};
	class WordGoodToSeeYouDefault
	{
		versions[]=
		{
			"WordGoodToSeeYou_1",
			1
		};
		class WordGoodToSeeYou_1
		{
			speech[]=
			{
				"GoodToSeeYou"
			};
		};
	};
	class WordHeyGladYoureHere
	{
		sentences[]=
		{
			"WordHeyGladYoureHereDefault",
			1
		};
	};
	class WordHeyGladYoureHereDefault
	{
		versions[]=
		{
			"WordHeyGladYoureHere_1",
			1
		};
		class WordHeyGladYoureHere_1
		{
			speech[]=
			{
				"HeyGladYoureHere"
			};
		};
	};
	class WordCanIHelpYouQ
	{
		sentences[]=
		{
			"WordCanIHelpYouQDefault",
			1
		};
	};
	class WordCanIHelpYouQDefault
	{
		versions[]=
		{
			"WordCanIHelpYouQ_1",
			1
		};
		class WordCanIHelpYouQ_1
		{
			speech[]=
			{
				"CanIHelpYouQ"
			};
		};
	};
	class WordGetLostE
	{
		sentences[]=
		{
			"WordGetLostEDefault",
			1
		};
	};
	class WordGetLostEDefault
	{
		versions[]=
		{
			"WordGetLostE_1",
			1
		};
		class WordGetLostE_1
		{
			speech[]=
			{
				"GetLostE"
			};
		};
	};
	class WordLeaveMeAloneE
	{
		sentences[]=
		{
			"WordLeaveMeAloneEDefault",
			1
		};
	};
	class WordLeaveMeAloneEDefault
	{
		versions[]=
		{
			"WordLeaveMeAloneE_1",
			1
		};
		class WordLeaveMeAloneE_1
		{
			speech[]=
			{
				"LeaveMeAloneE"
			};
		};
	};
	class WordLeaveUsAloneE
	{
		sentences[]=
		{
			"WordLeaveUsAloneEDefault",
			1
		};
	};
	class WordLeaveUsAloneEDefault
	{
		versions[]=
		{
			"WordLeaveUsAloneE_1",
			1
		};
		class WordLeaveUsAloneE_1
		{
			speech[]=
			{
				"LeaveUsAloneE"
			};
		};
	};
	class WordFuckingPig
	{
		sentences[]=
		{
			"WordFuckingPigDefault",
			1
		};
	};
	class WordFuckingPigDefault
	{
		versions[]=
		{
			"WordFuckingPig_1",
			1
		};
		class WordFuckingPig_1
		{
			speech[]=
			{
				"FuckingPig"
			};
		};
	};
	class WordSonOfABitchE
	{
		sentences[]=
		{
			"WordSonOfABitchEDefault",
			1
		};
	};
	class WordSonOfABitchEDefault
	{
		versions[]=
		{
			"WordSonOfABitchE_1",
			1
		};
		class WordSonOfABitchE_1
		{
			speech[]=
			{
				"SonOfABitchE"
			};
		};
	};
	class WordDamnYouE
	{
		sentences[]=
		{
			"WordDamnYouEDefault",
			1
		};
	};
	class WordDamnYouEDefault
	{
		versions[]=
		{
			"WordDamnYouE_1",
			1
		};
		class WordDamnYouE_1
		{
			speech[]=
			{
				"DamnYouE"
			};
		};
	};
	class WordCanIAskYouSomethingQ
	{
		sentences[]=
		{
			"WordCanIAskYouSomethingQDefault",
			1
		};
	};
	class WordCanIAskYouSomethingQDefault
	{
		versions[]=
		{
			"WordCanIAskYouSomethingQ_1",
			1
		};
		class WordCanIAskYouSomethingQ_1
		{
			speech[]=
			{
				"CanIAskYouSomethingQ"
			};
		};
	};
	class WordPleaseCanYouHelpQ
	{
		sentences[]=
		{
			"WordPleaseCanYouHelpQDefault",
			1
		};
	};
	class WordPleaseCanYouHelpQDefault
	{
		versions[]=
		{
			"WordPleaseCanYouHelpQ_1",
			1
		};
		class WordPleaseCanYouHelpQ_1
		{
			speech[]=
			{
				"PleaseCanYouHelpQ"
			};
		};
	};
	class WordSpeak
	{
		sentences[]=
		{
			"WordSpeakDefault",
			1
		};
	};
	class WordSpeakDefault
	{
		versions[]=
		{
			"WordSpeak_1",
			1
		};
		class WordSpeak_1
		{
			speech[]=
			{
				"Speak"
			};
		};
	};
	class WordHelpUs
	{
		sentences[]=
		{
			"WordHelpUsDefault",
			1
		};
	};
	class WordHelpUsDefault
	{
		versions[]=
		{
			"WordHelpUs_1",
			1
		};
		class WordHelpUs_1
		{
			speech[]=
			{
				"HelpUs"
			};
		};
	};
	class WordIWontSayAnotherWord
	{
		sentences[]=
		{
			"WordIWontSayAnotherWordDefault",
			1
		};
	};
	class WordIWontSayAnotherWordDefault
	{
		versions[]=
		{
			"WordIWontSayAnotherWord_1",
			1
		};
		class WordIWontSayAnotherWord_1
		{
			speech[]=
			{
				"IWontSayAnotherWord"
			};
		};
	};
	class WordMindYourOwnBusiness
	{
		sentences[]=
		{
			"WordMindYourOwnBusinessDefault",
			1
		};
	};
	class WordMindYourOwnBusinessDefault
	{
		versions[]=
		{
			"WordMindYourOwnBusiness_1",
			1
		};
		class WordMindYourOwnBusiness_1
		{
			speech[]=
			{
				"MindYourOwnBusiness"
			};
		};
	};
	class WordGoBotherSomeoneElse
	{
		sentences[]=
		{
			"WordGoBotherSomeoneElseDefault",
			1
		};
	};
	class WordGoBotherSomeoneElseDefault
	{
		versions[]=
		{
			"WordGoBotherSomeoneElse_1",
			1
		};
		class WordGoBotherSomeoneElse_1
		{
			speech[]=
			{
				"GoBotherSomeoneElse"
			};
		};
	};
	class WordCopyThat
	{
		sentences[]=
		{
			"WordCopyThatDefault",
			1
		};
	};
	class WordCopyThatDefault
	{
		versions[]=
		{
			"WordCopyThat_1",
			1
		};
		class WordCopyThat_1
		{
			speech[]=
			{
				"CopyThat"
			};
		};
	};
	class WordObjectiveFailed
	{
		sentences[]=
		{
			"WordObjectiveFailedDefault",
			1
		};
	};
	class WordObjectiveFailedDefault
	{
		versions[]=
		{
			"WordObjectiveFailed_1",
			1
		};
		class WordObjectiveFailed_1
		{
			speech[]=
			{
				"ObjectiveFailed"
			};
		};
	};
	class WordDoYouCopyQ
	{
		sentences[]=
		{
			"WordDoYouCopyQDefault",
			1
		};
	};
	class WordDoYouCopyQDefault
	{
		versions[]=
		{
			"WordDoYouCopyQ_1",
			1
		};
		class WordDoYouCopyQ_1
		{
			speech[]=
			{
				"DoYouCopyQ"
			};
		};
	};
	class WordRequestingFireSupportAtGrid
	{
		sentences[]=
		{
			"WordRequestingFireSupportAtGridDefault",
			1
		};
	};
	class WordRequestingFireSupportAtGridDefault
	{
		versions[]=
		{
			"WordRequestingFireSupportAtGrid_1",
			1
		};
		class WordRequestingFireSupportAtGrid_1
		{
			speech[]=
			{
				"RequestingFireSupportAtGrid"
			};
		};
	};
	class WordFiringAtTargetLocation
	{
		sentences[]=
		{
			"WordFiringAtTargetLocationDefault",
			1
		};
	};
	class WordFiringAtTargetLocationDefault
	{
		versions[]=
		{
			"WordFiringAtTargetLocation_1",
			1
		};
		class WordFiringAtTargetLocation_1
		{
			speech[]=
			{
				"FiringAtTargetLocation"
			};
		};
	};
	class WordArtilleryNotAvailableRightNow
	{
		sentences[]=
		{
			"WordArtilleryNotAvailableRightNowDefault",
			1
		};
	};
	class WordArtilleryNotAvailableRightNowDefault
	{
		versions[]=
		{
			"WordArtilleryNotAvailableRightNow_1",
			1
		};
		class WordArtilleryNotAvailableRightNow_1
		{
			speech[]=
			{
				"ArtilleryNotAvailableRightNow"
			};
		};
	};
	class WordRequestingContinuousIlluminationAtGrid
	{
		sentences[]=
		{
			"WordRequestingContinuousIlluminationAtGridDefault",
			1
		};
	};
	class WordRequestingContinuousIlluminationAtGridDefault
	{
		versions[]=
		{
			"WordRequestingContinuousIlluminationAtGrid_1",
			1
		};
		class WordRequestingContinuousIlluminationAtGrid_1
		{
			speech[]=
			{
				"RequestingContinuousIlluminationAtGrid"
			};
		};
	};
	class WordIlluminatingTargetLocation
	{
		sentences[]=
		{
			"WordIlluminatingTargetLocationDefault",
			1
		};
	};
	class WordIlluminatingTargetLocationDefault
	{
		versions[]=
		{
			"WordIlluminatingTargetLocation_1",
			1
		};
		class WordIlluminatingTargetLocation_1
		{
			speech[]=
			{
				"IlluminatingTargetLocation"
			};
		};
	};
	class WordNoFireMissionAvailableAtThisTime
	{
		sentences[]=
		{
			"WordNoFireMissionAvailableAtThisTimeDefault",
			1
		};
	};
	class WordNoFireMissionAvailableAtThisTimeDefault
	{
		versions[]=
		{
			"WordNoFireMissionAvailableAtThisTime_1",
			1
		};
		class WordNoFireMissionAvailableAtThisTime_1
		{
			speech[]=
			{
				"NoFireMissionAvailableAtThisTime"
			};
		};
	};
	class WordThisIs
	{
		sentences[]=
		{
			"WordThisIsDefault",
			1
		};
	};
	class WordThisIsDefault
	{
		versions[]=
		{
			"WordThisIs_1",
			1
		};
		class WordThisIs_1
		{
			speech[]=
			{
				"ThisIs"
			};
		};
	};
	class WordRequestingReinforcementsToOurPositionGrid
	{
		sentences[]=
		{
			"WordRequestingReinforcementsToOurPositionGridDefault",
			1
		};
	};
	class WordRequestingReinforcementsToOurPositionGridDefault
	{
		versions[]=
		{
			"WordRequestingReinforcementsToOurPositionGrid_1",
			1
		};
		class WordRequestingReinforcementsToOurPositionGrid_1
		{
			speech[]=
			{
				"RequestingReinforcementsToOurPositionGrid"
			};
		};
	};
	class WordWeCanFlyInReinforcmentsAsNeeded
	{
		sentences[]=
		{
			"WordWeCanFlyInReinforcmentsAsNeededDefault",
			1
		};
	};
	class WordWeCanFlyInReinforcmentsAsNeededDefault
	{
		versions[]=
		{
			"WordWeCanFlyInReinforcmentsAsNeeded_1",
			1
		};
		class WordWeCanFlyInReinforcmentsAsNeeded_1
		{
			speech[]=
			{
				"WeCanFlyInReinforcmentsAsNeeded"
			};
		};
	};
	class WordYouWillHaveToManageYourself
	{
		sentences[]=
		{
			"WordYouWillHaveToManageYourselfDefault",
			1
		};
	};
	class WordYouWillHaveToManageYourselfDefault
	{
		versions[]=
		{
			"WordYouWillHaveToManageYourself_1",
			1
		};
		class WordYouWillHaveToManageYourself_1
		{
			speech[]=
			{
				"YouWillHaveToManageYourself"
			};
		};
	};
	class WordRequestingSupplyDropAtGrid
	{
		sentences[]=
		{
			"WordRequestingSupplyDropAtGridDefault",
			1
		};
	};
	class WordRequestingSupplyDropAtGridDefault
	{
		versions[]=
		{
			"WordRequestingSupplyDropAtGrid_1",
			1
		};
		class WordRequestingSupplyDropAtGrid_1
		{
			speech[]=
			{
				"RequestingSupplyDropAtGrid"
			};
		};
	};
	class WordSupportOnWayStandBy
	{
		sentences[]=
		{
			"WordSupportOnWayStandByDefault",
			1
		};
	};
	class WordSupportOnWayStandByDefault
	{
		versions[]=
		{
			"WordSupportOnWayStandBy_1",
			1
		};
		class WordSupportOnWayStandBy_1
		{
			speech[]=
			{
				"SupportOnWayStandBy"
			};
		};
	};
	class WordRequestingCloseAirSupportAtGrid
	{
		sentences[]=
		{
			"WordRequestingCloseAirSupportAtGridDefault",
			1
		};
	};
	class WordRequestingCloseAirSupportAtGridDefault
	{
		versions[]=
		{
			"WordRequestingCloseAirSupportAtGrid_1",
			1
		};
		class WordRequestingCloseAirSupportAtGrid_1
		{
			speech[]=
			{
				"RequestingCloseAirSupportAtGrid"
			};
		};
	};
	class WordRogerAircraftOnTheWay
	{
		sentences[]=
		{
			"WordRogerAircraftOnTheWayDefault",
			1
		};
	};
	class WordRogerAircraftOnTheWayDefault
	{
		versions[]=
		{
			"WordRogerAircraftOnTheWay_1",
			1
		};
		class WordRogerAircraftOnTheWay_1
		{
			speech[]=
			{
				"RogerAircraftOnTheWay"
			};
		};
	};
	class WordNegativeOnTheCloseAirSupport
	{
		sentences[]=
		{
			"WordNegativeOnTheCloseAirSupportDefault",
			1
		};
	};
	class WordNegativeOnTheCloseAirSupportDefault
	{
		versions[]=
		{
			"WordNegativeOnTheCloseAirSupport_1",
			1
		};
		class WordNegativeOnTheCloseAirSupport_1
		{
			speech[]=
			{
				"NegativeOnTheCloseAirSupport"
			};
		};
	};
	class WordIntelShowsAConvoyEnrouteNearYourPositionAreYouFreeToInterceptAndDestroyItQ
	{
		sentences[]=
		{
			"WordIntelShowsAConvoyEnrouteNearYourPositionAreYouFreeToInterceptAndDestroyItQDefault",
			1
		};
	};
	class WordIntelShowsAConvoyEnrouteNearYourPositionAreYouFreeToInterceptAndDestroyItQDefault
	{
		versions[]=
		{
			"WordIntelShowsAConvoyEnrouteNearYourPositionAreYouFreeToInterceptAndDestroyItQ_1",
			1
		};
		class WordIntelShowsAConvoyEnrouteNearYourPositionAreYouFreeToInterceptAndDestroyItQ_1
		{
			speech[]=
			{
				"IntelShowsAConvoyEnrouteNearYourPositionAreYouFreeToInterceptAndDestroyItQ"
			};
		};
	};
	class WordBeAdvisedOtherUnitsWillHandleTheConvoy
	{
		sentences[]=
		{
			"WordBeAdvisedOtherUnitsWillHandleTheConvoyDefault",
			1
		};
	};
	class WordBeAdvisedOtherUnitsWillHandleTheConvoyDefault
	{
		versions[]=
		{
			"WordBeAdvisedOtherUnitsWillHandleTheConvoy_1",
			1
		};
		class WordBeAdvisedOtherUnitsWillHandleTheConvoy_1
		{
			speech[]=
			{
				"BeAdvisedOtherUnitsWillHandleTheConvoy"
			};
		};
	};
	class WordUAVConfirmsAllVehiclesDestroyed
	{
		sentences[]=
		{
			"WordUAVConfirmsAllVehiclesDestroyedDefault",
			1
		};
	};
	class WordUAVConfirmsAllVehiclesDestroyedDefault
	{
		versions[]=
		{
			"WordUAVConfirmsAllVehiclesDestroyed_1",
			1
		};
		class WordUAVConfirmsAllVehiclesDestroyed_1
		{
			speech[]=
			{
				"UAVConfirmsAllVehiclesDestroyed"
			};
		};
	};
	class WordBeAdvisedTargetVehicleHasReachedItsDestination
	{
		sentences[]=
		{
			"WordBeAdvisedTargetVehicleHasReachedItsDestinationDefault",
			1
		};
	};
	class WordBeAdvisedTargetVehicleHasReachedItsDestinationDefault
	{
		versions[]=
		{
			"WordBeAdvisedTargetVehicleHasReachedItsDestination_1",
			1
		};
		class WordBeAdvisedTargetVehicleHasReachedItsDestination_1
		{
			speech[]=
			{
				"BeAdvisedTargetVehicleHasReachedItsDestination"
			};
		};
	};
	class WordBeAdvisedTargetVehicleIsDisabled
	{
		sentences[]=
		{
			"WordBeAdvisedTargetVehicleIsDisabledDefault",
			1
		};
	};
	class WordBeAdvisedTargetVehicleIsDisabledDefault
	{
		versions[]=
		{
			"WordBeAdvisedTargetVehicleIsDisabled_1",
			1
		};
		class WordBeAdvisedTargetVehicleIsDisabled_1
		{
			speech[]=
			{
				"BeAdvisedTargetVehicleIsDisabled"
			};
		};
	};
	class WordEnemyPositionInCloseProximityCanYouAssaultTheLocationQ
	{
		sentences[]=
		{
			"WordEnemyPositionInCloseProximityCanYouAssaultTheLocationQDefault",
			1
		};
	};
	class WordEnemyPositionInCloseProximityCanYouAssaultTheLocationQDefault
	{
		versions[]=
		{
			"WordEnemyPositionInCloseProximityCanYouAssaultTheLocationQ_1",
			1
		};
		class WordEnemyPositionInCloseProximityCanYouAssaultTheLocationQ_1
		{
			speech[]=
			{
				"EnemyPositionInCloseProximityCanYouAssaultTheLocationQ"
			};
		};
	};
	class WordBeAdvisedEnemyHasChangedPositionAttackCancelled
	{
		sentences[]=
		{
			"WordBeAdvisedEnemyHasChangedPositionAttackCancelledDefault",
			1
		};
	};
	class WordBeAdvisedEnemyHasChangedPositionAttackCancelledDefault
	{
		versions[]=
		{
			"WordBeAdvisedEnemyHasChangedPositionAttackCancelled_1",
			1
		};
		class WordBeAdvisedEnemyHasChangedPositionAttackCancelled_1
		{
			speech[]=
			{
				"BeAdvisedEnemyHasChangedPositionAttackCancelled"
			};
		};
	};
	class WordEnemyPositionNeutralized
	{
		sentences[]=
		{
			"WordEnemyPositionNeutralizedDefault",
			1
		};
	};
	class WordEnemyPositionNeutralizedDefault
	{
		versions[]=
		{
			"WordEnemyPositionNeutralized_1",
			1
		};
		class WordEnemyPositionNeutralized_1
		{
			speech[]=
			{
				"EnemyPositionNeutralized"
			};
		};
	};
	class WordBeAdvisedFriendlyUnitsUnderAttackCanYouAssistQ
	{
		sentences[]=
		{
			"WordBeAdvisedFriendlyUnitsUnderAttackCanYouAssistQDefault",
			1
		};
	};
	class WordBeAdvisedFriendlyUnitsUnderAttackCanYouAssistQDefault
	{
		versions[]=
		{
			"WordBeAdvisedFriendlyUnitsUnderAttackCanYouAssistQ_1",
			1
		};
		class WordBeAdvisedFriendlyUnitsUnderAttackCanYouAssistQ_1
		{
			speech[]=
			{
				"BeAdvisedFriendlyUnitsUnderAttackCanYouAssistQ"
			};
		};
	};
	class WordEnemyAttackRepelled
	{
		sentences[]=
		{
			"WordEnemyAttackRepelledDefault",
			1
		};
	};
	class WordEnemyAttackRepelledDefault
	{
		versions[]=
		{
			"WordEnemyAttackRepelled_1",
			1
		};
		class WordEnemyAttackRepelled_1
		{
			speech[]=
			{
				"EnemyAttackRepelled"
			};
		};
	};
	class WordGoodWorkWeSeeNoMoreHostilesInTheArea
	{
		sentences[]=
		{
			"WordGoodWorkWeSeeNoMoreHostilesInTheAreaDefault",
			1
		};
	};
	class WordGoodWorkWeSeeNoMoreHostilesInTheAreaDefault
	{
		versions[]=
		{
			"WordGoodWorkWeSeeNoMoreHostilesInTheArea_1",
			1
		};
		class WordGoodWorkWeSeeNoMoreHostilesInTheArea_1
		{
			speech[]=
			{
				"GoodWorkWeSeeNoMoreHostilesInTheArea"
			};
		};
	};
	class WordZeroHostilesAttackHalted
	{
		sentences[]=
		{
			"WordZeroHostilesAttackHaltedDefault",
			1
		};
	};
	class WordZeroHostilesAttackHaltedDefault
	{
		versions[]=
		{
			"WordZeroHostilesAttackHalted_1",
			1
		};
		class WordZeroHostilesAttackHalted_1
		{
			speech[]=
			{
				"ZeroHostilesAttackHalted"
			};
		};
	};
	class WordWereUnableToHoldPositionFallingBack
	{
		sentences[]=
		{
			"WordWereUnableToHoldPositionFallingBackDefault",
			1
		};
	};
	class WordWereUnableToHoldPositionFallingBackDefault
	{
		versions[]=
		{
			"WordWereUnableToHoldPositionFallingBack_1",
			1
		};
		class WordWereUnableToHoldPositionFallingBack_1
		{
			speech[]=
			{
				"WereUnableToHoldPositionFallingBack"
			};
		};
	};
	class WordBeAdvisedAHighValueTargetHasBeenMarkedOnYourMapCanYouInterceptAndDestroyQ
	{
		sentences[]=
		{
			"WordBeAdvisedAHighValueTargetHasBeenMarkedOnYourMapCanYouInterceptAndDestroyQDefault",
			1
		};
	};
	class WordBeAdvisedAHighValueTargetHasBeenMarkedOnYourMapCanYouInterceptAndDestroyQDefault
	{
		versions[]=
		{
			"WordBeAdvisedAHighValueTargetHasBeenMarkedOnYourMapCanYouInterceptAndDestroyQ_1",
			1
		};
		class WordBeAdvisedAHighValueTargetHasBeenMarkedOnYourMapCanYouInterceptAndDestroyQ_1
		{
			speech[]=
			{
				"BeAdvisedAHighValueTargetHasBeenMarkedOnYourMapCanYouInterceptAndDestroyQ"
			};
		};
	};
	class WordCancellingTheDestroyOrderBadIntelHowCopyQ
	{
		sentences[]=
		{
			"WordCancellingTheDestroyOrderBadIntelHowCopyQDefault",
			1
		};
	};
	class WordCancellingTheDestroyOrderBadIntelHowCopyQDefault
	{
		versions[]=
		{
			"WordCancellingTheDestroyOrderBadIntelHowCopyQ_1",
			1
		};
		class WordCancellingTheDestroyOrderBadIntelHowCopyQ_1
		{
			speech[]=
			{
				"CancellingTheDestroyOrderBadIntelHowCopyQ"
			};
		};
	};
	class WordHighValueTargetDestroyedOver
	{
		sentences[]=
		{
			"WordHighValueTargetDestroyedOverDefault",
			1
		};
	};
	class WordHighValueTargetDestroyedOverDefault
	{
		versions[]=
		{
			"WordHighValueTargetDestroyedOver_1",
			1
		};
		class WordHighValueTargetDestroyedOver_1
		{
			speech[]=
			{
				"HighValueTargetDestroyedOver"
			};
		};
	};
	class WordFriendlyTroopsRequestingEscortThroughHostileZoneCanYouOfferSupportAlongTheDesignatedRouteQ
	{
		sentences[]=
		{
			"WordFriendlyTroopsRequestingEscortThroughHostileZoneCanYouOfferSupportAlongTheDesignatedRouteQDefault",
			1
		};
	};
	class WordFriendlyTroopsRequestingEscortThroughHostileZoneCanYouOfferSupportAlongTheDesignatedRouteQDefault
	{
		versions[]=
		{
			"WordFriendlyTroopsRequestingEscortThroughHostileZoneCanYouOfferSupportAlongTheDesignatedRouteQ_1",
			1
		};
		class WordFriendlyTroopsRequestingEscortThroughHostileZoneCanYouOfferSupportAlongTheDesignatedRouteQ_1
		{
			speech[]=
			{
				"FriendlyTroopsRequestingEscortThroughHostileZoneCanYouOfferSupportAlongTheDesignatedRouteQ"
			};
		};
	};
	class WordWeHaveAssignedAnotherUnitToThisEscortOp
	{
		sentences[]=
		{
			"WordWeHaveAssignedAnotherUnitToThisEscortOpDefault",
			1
		};
	};
	class WordWeHaveAssignedAnotherUnitToThisEscortOpDefault
	{
		versions[]=
		{
			"WordWeHaveAssignedAnotherUnitToThisEscortOp_1",
			1
		};
		class WordWeHaveAssignedAnotherUnitToThisEscortOp_1
		{
			speech[]=
			{
				"WeHaveAssignedAnotherUnitToThisEscortOp"
			};
		};
	};
	class WordTargetInSightCommencingEscort
	{
		sentences[]=
		{
			"WordTargetInSightCommencingEscortDefault",
			1
		};
	};
	class WordTargetInSightCommencingEscortDefault
	{
		versions[]=
		{
			"WordTargetInSightCommencingEscort_1",
			1
		};
		class WordTargetInSightCommencingEscort_1
		{
			speech[]=
			{
				"TargetInSightCommencingEscort"
			};
		};
	};
	class WordBeAdvisedEnemyPatrolsInCloseProximityHowCopyQ
	{
		sentences[]=
		{
			"WordBeAdvisedEnemyPatrolsInCloseProximityHowCopyQDefault",
			1
		};
	};
	class WordBeAdvisedEnemyPatrolsInCloseProximityHowCopyQDefault
	{
		versions[]=
		{
			"WordBeAdvisedEnemyPatrolsInCloseProximityHowCopyQ_1",
			1
		};
		class WordBeAdvisedEnemyPatrolsInCloseProximityHowCopyQ_1
		{
			speech[]=
			{
				"BeAdvisedEnemyPatrolsInCloseProximityHowCopyQ"
			};
		};
	};
	class WordSolidCopyThanksForTheIntel
	{
		sentences[]=
		{
			"WordSolidCopyThanksForTheIntelDefault",
			1
		};
	};
	class WordSolidCopyThanksForTheIntelDefault
	{
		versions[]=
		{
			"WordSolidCopyThanksForTheIntel_1",
			1
		};
		class WordSolidCopyThanksForTheIntel_1
		{
			speech[]=
			{
				"SolidCopyThanksForTheIntel"
			};
		};
	};
	class WordDestinationReachedEveryoneAccountedForOver
	{
		sentences[]=
		{
			"WordDestinationReachedEveryoneAccountedForOverDefault",
			1
		};
	};
	class WordDestinationReachedEveryoneAccountedForOverDefault
	{
		versions[]=
		{
			"WordDestinationReachedEveryoneAccountedForOver_1",
			1
		};
		class WordDestinationReachedEveryoneAccountedForOver_1
		{
			speech[]=
			{
				"DestinationReachedEveryoneAccountedForOver"
			};
		};
	};
	class WordWereAtTheDestinationReportingLowCasualtiesOver
	{
		sentences[]=
		{
			"WordWereAtTheDestinationReportingLowCasualtiesOverDefault",
			1
		};
	};
	class WordWereAtTheDestinationReportingLowCasualtiesOverDefault
	{
		versions[]=
		{
			"WordWereAtTheDestinationReportingLowCasualtiesOver_1",
			1
		};
		class WordWereAtTheDestinationReportingLowCasualtiesOver_1
		{
			speech[]=
			{
				"WereAtTheDestinationReportingLowCasualtiesOver"
			};
		};
	};
	class WordBeAdvisedEscortFailedWeLostThemOver
	{
		sentences[]=
		{
			"WordBeAdvisedEscortFailedWeLostThemOverDefault",
			1
		};
	};
	class WordBeAdvisedEscortFailedWeLostThemOverDefault
	{
		versions[]=
		{
			"WordBeAdvisedEscortFailedWeLostThemOver_1",
			1
		};
		class WordBeAdvisedEscortFailedWeLostThemOver_1
		{
			speech[]=
			{
				"BeAdvisedEscortFailedWeLostThemOver"
			};
		};
	};
	class WordBeAdvisedHostilesReportedNearYourLocationCanYouMakeASweepOfTheCheckpointsQ
	{
		sentences[]=
		{
			"WordBeAdvisedHostilesReportedNearYourLocationCanYouMakeASweepOfTheCheckpointsQDefault",
			1
		};
	};
	class WordBeAdvisedHostilesReportedNearYourLocationCanYouMakeASweepOfTheCheckpointsQDefault
	{
		versions[]=
		{
			"WordBeAdvisedHostilesReportedNearYourLocationCanYouMakeASweepOfTheCheckpointsQ_1",
			1
		};
		class WordBeAdvisedHostilesReportedNearYourLocationCanYouMakeASweepOfTheCheckpointsQ_1
		{
			speech[]=
			{
				"BeAdvisedHostilesReportedNearYourLocationCanYouMakeASweepOfTheCheckpointsQ"
			};
		};
	};
	class WordCancelThePatrolBadIntelOver
	{
		sentences[]=
		{
			"WordCancelThePatrolBadIntelOverDefault",
			1
		};
	};
	class WordCancelThePatrolBadIntelOverDefault
	{
		versions[]=
		{
			"WordCancelThePatrolBadIntelOver_1",
			1
		};
		class WordCancelThePatrolBadIntelOver_1
		{
			speech[]=
			{
				"CancelThePatrolBadIntelOver"
			};
		};
	};
	class WordBeAdvisedImPassingCheckpointOne
	{
		sentences[]=
		{
			"WordBeAdvisedImPassingCheckpointOneDefault",
			1
		};
	};
	class WordBeAdvisedImPassingCheckpointOneDefault
	{
		versions[]=
		{
			"WordBeAdvisedImPassingCheckpointOne_1",
			1
		};
		class WordBeAdvisedImPassingCheckpointOne_1
		{
			speech[]=
			{
				"BeAdvisedImPassingCheckpointOne"
			};
		};
	};
	class WordSitrepPassingCheckpointTwo
	{
		sentences[]=
		{
			"WordSitrepPassingCheckpointTwoDefault",
			1
		};
	};
	class WordSitrepPassingCheckpointTwoDefault
	{
		versions[]=
		{
			"WordSitrepPassingCheckpointTwo_1",
			1
		};
		class WordSitrepPassingCheckpointTwo_1
		{
			speech[]=
			{
				"SitrepPassingCheckpointTwo"
			};
		};
	};
	class WordReportingPatrolComplete
	{
		sentences[]=
		{
			"WordReportingPatrolCompleteDefault",
			1
		};
	};
	class WordReportingPatrolCompleteDefault
	{
		versions[]=
		{
			"WordReportingPatrolComplete_1",
			1
		};
		class WordReportingPatrolComplete_1
		{
			speech[]=
			{
				"ReportingPatrolComplete"
			};
		};
	};
	class WordThereAreFriendlyPOWsHeldInCloseProximityCanYouExtractThemQ
	{
		sentences[]=
		{
			"WordThereAreFriendlyPOWsHeldInCloseProximityCanYouExtractThemQDefault",
			1
		};
	};
	class WordThereAreFriendlyPOWsHeldInCloseProximityCanYouExtractThemQDefault
	{
		versions[]=
		{
			"WordThereAreFriendlyPOWsHeldInCloseProximityCanYouExtractThemQ_1",
			1
		};
		class WordThereAreFriendlyPOWsHeldInCloseProximityCanYouExtractThemQ_1
		{
			speech[]=
			{
				"ThereAreFriendlyPOWsHeldInCloseProximityCanYouExtractThemQ"
			};
		};
	};
	class WordBeAdvisedPOWsWereTransportedToUnknownLocationMissionCanceled
	{
		sentences[]=
		{
			"WordBeAdvisedPOWsWereTransportedToUnknownLocationMissionCanceledDefault",
			1
		};
	};
	class WordBeAdvisedPOWsWereTransportedToUnknownLocationMissionCanceledDefault
	{
		versions[]=
		{
			"WordBeAdvisedPOWsWereTransportedToUnknownLocationMissionCanceled_1",
			1
		};
		class WordBeAdvisedPOWsWereTransportedToUnknownLocationMissionCanceled_1
		{
			speech[]=
			{
				"BeAdvisedPOWsWereTransportedToUnknownLocationMissionCanceled"
			};
		};
	};
	class WordExtractionConfirmedPOWsRecovered
	{
		sentences[]=
		{
			"WordExtractionConfirmedPOWsRecoveredDefault",
			1
		};
	};
	class WordExtractionConfirmedPOWsRecoveredDefault
	{
		versions[]=
		{
			"WordExtractionConfirmedPOWsRecovered_1",
			1
		};
		class WordExtractionConfirmedPOWsRecovered_1
		{
			speech[]=
			{
				"ExtractionConfirmedPOWsRecovered"
			};
		};
	};
	class WordRequestingTransportForTheRecoveredPOWsOver
	{
		sentences[]=
		{
			"WordRequestingTransportForTheRecoveredPOWsOverDefault",
			1
		};
	};
	class WordRequestingTransportForTheRecoveredPOWsOverDefault
	{
		versions[]=
		{
			"WordRequestingTransportForTheRecoveredPOWsOver_1",
			1
		};
		class WordRequestingTransportForTheRecoveredPOWsOver_1
		{
			speech[]=
			{
				"RequestingTransportForTheRecoveredPOWsOver"
			};
		};
	};
	class WordPOWsAreKIAISayAgainAllFriendliesKIAOver
	{
		sentences[]=
		{
			"WordPOWsAreKIAISayAgainAllFriendliesKIAOverDefault",
			1
		};
	};
	class WordPOWsAreKIAISayAgainAllFriendliesKIAOverDefault
	{
		versions[]=
		{
			"WordPOWsAreKIAISayAgainAllFriendliesKIAOver_1",
			1
		};
		class WordPOWsAreKIAISayAgainAllFriendliesKIAOver_1
		{
			speech[]=
			{
				"POWsAreKIAISayAgainAllFriendliesKIAOver"
			};
		};
	};
	class WordLocalsReportEnemyCachesInYourAOCanYouSearchForTheseCachesQ
	{
		sentences[]=
		{
			"WordLocalsReportEnemyCachesInYourAOCanYouSearchForTheseCachesQDefault",
			1
		};
	};
	class WordLocalsReportEnemyCachesInYourAOCanYouSearchForTheseCachesQDefault
	{
		versions[]=
		{
			"WordLocalsReportEnemyCachesInYourAOCanYouSearchForTheseCachesQ_1",
			1
		};
		class WordLocalsReportEnemyCachesInYourAOCanYouSearchForTheseCachesQ_1
		{
			speech[]=
			{
				"LocalsReportEnemyCachesInYourAOCanYouSearchForTheseCachesQ"
			};
		};
	};
	class WordBeAdvisedFindingTheCachesIsNoLongerAPriority
	{
		sentences[]=
		{
			"WordBeAdvisedFindingTheCachesIsNoLongerAPriorityDefault",
			1
		};
	};
	class WordBeAdvisedFindingTheCachesIsNoLongerAPriorityDefault
	{
		versions[]=
		{
			"WordBeAdvisedFindingTheCachesIsNoLongerAPriority_1",
			1
		};
		class WordBeAdvisedFindingTheCachesIsNoLongerAPriority_1
		{
			speech[]=
			{
				"BeAdvisedFindingTheCachesIsNoLongerAPriority"
			};
		};
	};
	class WordSearchCompleteSeveralStorageCachesUncoveredAndMarkedForCollectionHowCopyQ
	{
		sentences[]=
		{
			"WordSearchCompleteSeveralStorageCachesUncoveredAndMarkedForCollectionHowCopyQDefault",
			1
		};
	};
	class WordSearchCompleteSeveralStorageCachesUncoveredAndMarkedForCollectionHowCopyQDefault
	{
		versions[]=
		{
			"WordSearchCompleteSeveralStorageCachesUncoveredAndMarkedForCollectionHowCopyQ_1",
			1
		};
		class WordSearchCompleteSeveralStorageCachesUncoveredAndMarkedForCollectionHowCopyQ_1
		{
			speech[]=
			{
				"SearchCompleteSeveralStorageCachesUncoveredAndMarkedForCollectionHowCopyQ"
			};
		};
	};
	class WordSearchCompleteALargeNumberOfCachesWereLocatedAndMarkedForCollectionOver
	{
		sentences[]=
		{
			"WordSearchCompleteALargeNumberOfCachesWereLocatedAndMarkedForCollectionOverDefault",
			1
		};
	};
	class WordSearchCompleteALargeNumberOfCachesWereLocatedAndMarkedForCollectionOverDefault
	{
		versions[]=
		{
			"WordSearchCompleteALargeNumberOfCachesWereLocatedAndMarkedForCollectionOver_1",
			1
		};
		class WordSearchCompleteALargeNumberOfCachesWereLocatedAndMarkedForCollectionOver_1
		{
			speech[]=
			{
				"SearchCompleteALargeNumberOfCachesWereLocatedAndMarkedForCollectionOver"
			};
		};
	};
	class WordSearchCompleteNothingToReportZeroCachesFoundOver
	{
		sentences[]=
		{
			"WordSearchCompleteNothingToReportZeroCachesFoundOverDefault",
			1
		};
	};
	class WordSearchCompleteNothingToReportZeroCachesFoundOverDefault
	{
		versions[]=
		{
			"WordSearchCompleteNothingToReportZeroCachesFoundOver_1",
			1
		};
		class WordSearchCompleteNothingToReportZeroCachesFoundOver_1
		{
			speech[]=
			{
				"SearchCompleteNothingToReportZeroCachesFoundOver"
			};
		};
	};
	class WordWeHaveAnAircraftDownInYourVicinityCanYouLocateAndSecureTheCrashSiteQ
	{
		sentences[]=
		{
			"WordWeHaveAnAircraftDownInYourVicinityCanYouLocateAndSecureTheCrashSiteQDefault",
			1
		};
	};
	class WordWeHaveAnAircraftDownInYourVicinityCanYouLocateAndSecureTheCrashSiteQDefault
	{
		versions[]=
		{
			"WordWeHaveAnAircraftDownInYourVicinityCanYouLocateAndSecureTheCrashSiteQ_1",
			1
		};
		class WordWeHaveAnAircraftDownInYourVicinityCanYouLocateAndSecureTheCrashSiteQ_1
		{
			speech[]=
			{
				"WeHaveAnAircraftDownInYourVicinityCanYouLocateAndSecureTheCrashSiteQ"
			};
		};
	};
	class WordReturnToYourPrimarySARTeamsOnRouteToTheCrashSite
	{
		sentences[]=
		{
			"WordReturnToYourPrimarySARTeamsOnRouteToTheCrashSiteDefault",
			1
		};
	};
	class WordReturnToYourPrimarySARTeamsOnRouteToTheCrashSiteDefault
	{
		versions[]=
		{
			"WordReturnToYourPrimarySARTeamsOnRouteToTheCrashSite_1",
			1
		};
		class WordReturnToYourPrimarySARTeamsOnRouteToTheCrashSite_1
		{
			speech[]=
			{
				"ReturnToYourPrimarySARTeamsOnRouteToTheCrashSite"
			};
		};
	};
	class WordSurvivorsOnBoardTransportResumingPrimary
	{
		sentences[]=
		{
			"WordSurvivorsOnBoardTransportResumingPrimaryDefault",
			1
		};
	};
	class WordSurvivorsOnBoardTransportResumingPrimaryDefault
	{
		versions[]=
		{
			"WordSurvivorsOnBoardTransportResumingPrimary_1",
			1
		};
		class WordSurvivorsOnBoardTransportResumingPrimary_1
		{
			speech[]=
			{
				"SurvivorsOnBoardTransportResumingPrimary"
			};
		};
	};
	class WordCrashSiteSecuredNoSurvivors
	{
		sentences[]=
		{
			"WordCrashSiteSecuredNoSurvivorsDefault",
			1
		};
	};
	class WordCrashSiteSecuredNoSurvivorsDefault
	{
		versions[]=
		{
			"WordCrashSiteSecuredNoSurvivors_1",
			1
		};
		class WordCrashSiteSecuredNoSurvivors_1
		{
			speech[]=
			{
				"CrashSiteSecuredNoSurvivors"
			};
		};
	};
	class WordBeAdvisedCrashSiteCompromisedOver
	{
		sentences[]=
		{
			"WordBeAdvisedCrashSiteCompromisedOverDefault",
			1
		};
	};
	class WordBeAdvisedCrashSiteCompromisedOverDefault
	{
		versions[]=
		{
			"WordBeAdvisedCrashSiteCompromisedOver_1",
			1
		};
		class WordBeAdvisedCrashSiteCompromisedOver_1
		{
			speech[]=
			{
				"BeAdvisedCrashSiteCompromisedOver"
			};
		};
	};
	class WordCrashSiteSecuredWeveGotSurvivorsRequestingCASEVACOver
	{
		sentences[]=
		{
			"WordCrashSiteSecuredWeveGotSurvivorsRequestingCASEVACOverDefault",
			1
		};
	};
	class WordCrashSiteSecuredWeveGotSurvivorsRequestingCASEVACOverDefault
	{
		versions[]=
		{
			"WordCrashSiteSecuredWeveGotSurvivorsRequestingCASEVACOver_1",
			1
		};
		class WordCrashSiteSecuredWeveGotSurvivorsRequestingCASEVACOver_1
		{
			speech[]=
			{
				"CrashSiteSecuredWeveGotSurvivorsRequestingCASEVACOver"
			};
		};
	};
	class WordIGotARequestForTransportHereThePickUpIsCloseByCanYouHandleItQ
	{
		sentences[]=
		{
			"WordIGotARequestForTransportHereThePickUpIsCloseByCanYouHandleItQDefault",
			1
		};
	};
	class WordIGotARequestForTransportHereThePickUpIsCloseByCanYouHandleItQDefault
	{
		versions[]=
		{
			"WordIGotARequestForTransportHereThePickUpIsCloseByCanYouHandleItQ_1",
			1
		};
		class WordIGotARequestForTransportHereThePickUpIsCloseByCanYouHandleItQ_1
		{
			speech[]=
			{
				"IGotARequestForTransportHereThePickUpIsCloseByCanYouHandleItQ"
			};
		};
	};
	class WordCancelThatRequestAlternateTransportFoundOver
	{
		sentences[]=
		{
			"WordCancelThatRequestAlternateTransportFoundOverDefault",
			1
		};
	};
	class WordCancelThatRequestAlternateTransportFoundOverDefault
	{
		versions[]=
		{
			"WordCancelThatRequestAlternateTransportFoundOver_1",
			1
		};
		class WordCancelThatRequestAlternateTransportFoundOver_1
		{
			speech[]=
			{
				"CancelThatRequestAlternateTransportFoundOver"
			};
		};
	};
	class WordWeHavePickUpPointInSightOver
	{
		sentences[]=
		{
			"WordWeHavePickUpPointInSightOverDefault",
			1
		};
	};
	class WordWeHavePickUpPointInSightOverDefault
	{
		versions[]=
		{
			"WordWeHavePickUpPointInSightOver_1",
			1
		};
		class WordWeHavePickUpPointInSightOver_1
		{
			speech[]=
			{
				"WeHavePickUpPointInSightOver"
			};
		};
	};
	class WordRogerThatThoseTroopsAreNeededElsewhereDoubleTimeGentlemen
	{
		sentences[]=
		{
			"WordRogerThatThoseTroopsAreNeededElsewhereDoubleTimeGentlemenDefault",
			1
		};
	};
	class WordRogerThatThoseTroopsAreNeededElsewhereDoubleTimeGentlemenDefault
	{
		versions[]=
		{
			"WordRogerThatThoseTroopsAreNeededElsewhereDoubleTimeGentlemen_1",
			1
		};
		class WordRogerThatThoseTroopsAreNeededElsewhereDoubleTimeGentlemen_1
		{
			speech[]=
			{
				"RogerThatThoseTroopsAreNeededElsewhereDoubleTimeGentlemen"
			};
		};
	};
	class WordWeLostOurTransportISayAgainTransportDisabled
	{
		sentences[]=
		{
			"WordWeLostOurTransportISayAgainTransportDisabledDefault",
			1
		};
	};
	class WordWeLostOurTransportISayAgainTransportDisabledDefault
	{
		versions[]=
		{
			"WordWeLostOurTransportISayAgainTransportDisabled_1",
			1
		};
		class WordWeLostOurTransportISayAgainTransportDisabled_1
		{
			speech[]=
			{
				"WeLostOurTransportISayAgainTransportDisabled"
			};
		};
	};
	class WordBeAdvisedAllPassengersAreKIAOver
	{
		sentences[]=
		{
			"WordBeAdvisedAllPassengersAreKIAOverDefault",
			1
		};
	};
	class WordBeAdvisedAllPassengersAreKIAOverDefault
	{
		versions[]=
		{
			"WordBeAdvisedAllPassengersAreKIAOver_1",
			1
		};
		class WordBeAdvisedAllPassengersAreKIAOver_1
		{
			speech[]=
			{
				"BeAdvisedAllPassengersAreKIAOver"
			};
		};
	};
	class WordWereAtOurDestinationEveryoneAccountedForOver
	{
		sentences[]=
		{
			"WordWereAtOurDestinationEveryoneAccountedForOverDefault",
			1
		};
	};
	class WordWereAtOurDestinationEveryoneAccountedForOverDefault
	{
		versions[]=
		{
			"WordWereAtOurDestinationEveryoneAccountedForOver_1",
			1
		};
		class WordWereAtOurDestinationEveryoneAccountedForOver_1
		{
			speech[]=
			{
				"WereAtOurDestinationEveryoneAccountedForOver"
			};
		};
	};
	class WordWereAtOurDestinationTookSomeCasualtiesButTheMajorityIsSafeOver
	{
		sentences[]=
		{
			"WordWereAtOurDestinationTookSomeCasualtiesButTheMajorityIsSafeOverDefault",
			1
		};
	};
	class WordWereAtOurDestinationTookSomeCasualtiesButTheMajorityIsSafeOverDefault
	{
		versions[]=
		{
			"WordWereAtOurDestinationTookSomeCasualtiesButTheMajorityIsSafeOver_1",
			1
		};
		class WordWereAtOurDestinationTookSomeCasualtiesButTheMajorityIsSafeOver_1
		{
			speech[]=
			{
				"WereAtOurDestinationTookSomeCasualtiesButTheMajorityIsSafeOver"
			};
		};
	};
	class WordRequestingSupplyDrop
	{
		sentences[]=
		{
			"WordRequestingSupplyDropDefault",
			1
		};
	};
	class WordRequestingSupplyDropDefault
	{
		versions[]=
		{
			"WordRequestingSupplyDrop_1",
			1
		};
		class WordRequestingSupplyDrop_1
		{
			speech[]=
			{
				"RequestingSupplyDrop"
			};
		};
	};
	class WordSupplyDropReadyRequestingDropZoneLocationOver
	{
		sentences[]=
		{
			"WordSupplyDropReadyRequestingDropZoneLocationOverDefault",
			1
		};
	};
	class WordSupplyDropReadyRequestingDropZoneLocationOverDefault
	{
		versions[]=
		{
			"WordSupplyDropReadyRequestingDropZoneLocationOver_1",
			1
		};
		class WordSupplyDropReadyRequestingDropZoneLocationOver_1
		{
			speech[]=
			{
				"SupplyDropReadyRequestingDropZoneLocationOver"
			};
		};
	};
	class WordPositionConfirmedSuppliesInbound
	{
		sentences[]=
		{
			"WordPositionConfirmedSuppliesInboundDefault",
			1
		};
	};
	class WordPositionConfirmedSuppliesInboundDefault
	{
		versions[]=
		{
			"WordPositionConfirmedSuppliesInbound_1",
			1
		};
		class WordPositionConfirmedSuppliesInbound_1
		{
			speech[]=
			{
				"PositionConfirmedSuppliesInbound"
			};
		};
	};
	class WordBeAdvisedWeLostContactWithTheTransportVehicleOut
	{
		sentences[]=
		{
			"WordBeAdvisedWeLostContactWithTheTransportVehicleOutDefault",
			1
		};
	};
	class WordBeAdvisedWeLostContactWithTheTransportVehicleOutDefault
	{
		versions[]=
		{
			"WordBeAdvisedWeLostContactWithTheTransportVehicleOut_1",
			1
		};
		class WordBeAdvisedWeLostContactWithTheTransportVehicleOut_1
		{
			speech[]=
			{
				"BeAdvisedWeLostContactWithTheTransportVehicleOut"
			};
		};
	};
	class WordSuppliesDeliveredOut
	{
		sentences[]=
		{
			"WordSuppliesDeliveredOutDefault",
			1
		};
	};
	class WordSuppliesDeliveredOutDefault
	{
		versions[]=
		{
			"WordSuppliesDeliveredOut_1",
			1
		};
		class WordSuppliesDeliveredOut_1
		{
			speech[]=
			{
				"SuppliesDeliveredOut"
			};
		};
	};
	class WordTheSuppliesHaveBeenDroppedOut
	{
		sentences[]=
		{
			"WordTheSuppliesHaveBeenDroppedOutDefault",
			1
		};
	};
	class WordTheSuppliesHaveBeenDroppedOutDefault
	{
		versions[]=
		{
			"WordTheSuppliesHaveBeenDroppedOut_1",
			1
		};
		class WordTheSuppliesHaveBeenDroppedOut_1
		{
			speech[]=
			{
				"TheSuppliesHaveBeenDroppedOut"
			};
		};
	};
	class WordRequestingFastTransportOver
	{
		sentences[]=
		{
			"WordRequestingFastTransportOverDefault",
			1
		};
	};
	class WordRequestingFastTransportOverDefault
	{
		versions[]=
		{
			"WordRequestingFastTransportOver_1",
			1
		};
		class WordRequestingFastTransportOver_1
		{
			speech[]=
			{
				"RequestingFastTransportOver"
			};
		};
	};
	class WordRogerTransportIsAvailableSendDestinationOver
	{
		sentences[]=
		{
			"WordRogerTransportIsAvailableSendDestinationOverDefault",
			1
		};
	};
	class WordRogerTransportIsAvailableSendDestinationOverDefault
	{
		versions[]=
		{
			"WordRogerTransportIsAvailableSendDestinationOver_1",
			1
		};
		class WordRogerTransportIsAvailableSendDestinationOver_1
		{
			speech[]=
			{
				"RogerTransportIsAvailableSendDestinationOver"
			};
		};
	};
	class WordNegativeTransportUnavailableEnemyActivityInYourSectorOut
	{
		sentences[]=
		{
			"WordNegativeTransportUnavailableEnemyActivityInYourSectorOutDefault",
			1
		};
	};
	class WordNegativeTransportUnavailableEnemyActivityInYourSectorOutDefault
	{
		versions[]=
		{
			"WordNegativeTransportUnavailableEnemyActivityInYourSectorOut_1",
			1
		};
		class WordNegativeTransportUnavailableEnemyActivityInYourSectorOut_1
		{
			speech[]=
			{
				"NegativeTransportUnavailableEnemyActivityInYourSectorOut"
			};
		};
	};
	class WordNegativeTransportUnavailableOut
	{
		sentences[]=
		{
			"WordNegativeTransportUnavailableOutDefault",
			1
		};
	};
	class WordNegativeTransportUnavailableOutDefault
	{
		versions[]=
		{
			"WordNegativeTransportUnavailableOut_1",
			1
		};
		class WordNegativeTransportUnavailableOut_1
		{
			speech[]=
			{
				"NegativeTransportUnavailableOut"
			};
		};
	};
	class WordNegativeTransportIsUnavailableAtYourLocationOut
	{
		sentences[]=
		{
			"WordNegativeTransportIsUnavailableAtYourLocationOutDefault",
			1
		};
	};
	class WordNegativeTransportIsUnavailableAtYourLocationOutDefault
	{
		versions[]=
		{
			"WordNegativeTransportIsUnavailableAtYourLocationOut_1",
			1
		};
		class WordNegativeTransportIsUnavailableAtYourLocationOut_1
		{
			speech[]=
			{
				"NegativeTransportIsUnavailableAtYourLocationOut"
			};
		};
	};
	class WordDestinationReachedThanksForTheAssistanceOut
	{
		sentences[]=
		{
			"WordDestinationReachedThanksForTheAssistanceOutDefault",
			1
		};
	};
	class WordDestinationReachedThanksForTheAssistanceOutDefault
	{
		versions[]=
		{
			"WordDestinationReachedThanksForTheAssistanceOut_1",
			1
		};
		class WordDestinationReachedThanksForTheAssistanceOut_1
		{
			speech[]=
			{
				"DestinationReachedThanksForTheAssistanceOut"
			};
		};
	};
	class WordRequestingAerialReconOver
	{
		sentences[]=
		{
			"WordRequestingAerialReconOverDefault",
			1
		};
	};
	class WordRequestingAerialReconOverDefault
	{
		versions[]=
		{
			"WordRequestingAerialReconOver_1",
			1
		};
		class WordRequestingAerialReconOver_1
		{
			speech[]=
			{
				"RequestingAerialReconOver"
			};
		};
	};
	class WordUAVReadyRequestingTargetLocationOver
	{
		sentences[]=
		{
			"WordUAVReadyRequestingTargetLocationOverDefault",
			1
		};
	};
	class WordUAVReadyRequestingTargetLocationOverDefault
	{
		versions[]=
		{
			"WordUAVReadyRequestingTargetLocationOver_1",
			1
		};
		class WordUAVReadyRequestingTargetLocationOver_1
		{
			speech[]=
			{
				"UAVReadyRequestingTargetLocationOver"
			};
		};
	};
	class WordCoordinatesReceivedDroneIsEnrouteOver
	{
		sentences[]=
		{
			"WordCoordinatesReceivedDroneIsEnrouteOverDefault",
			1
		};
	};
	class WordCoordinatesReceivedDroneIsEnrouteOverDefault
	{
		versions[]=
		{
			"WordCoordinatesReceivedDroneIsEnrouteOver_1",
			1
		};
		class WordCoordinatesReceivedDroneIsEnrouteOver_1
		{
			speech[]=
			{
				"CoordinatesReceivedDroneIsEnrouteOver"
			};
		};
	};
	class WordDroneIsBingoFuelAndRTBOver
	{
		sentences[]=
		{
			"WordDroneIsBingoFuelAndRTBOverDefault",
			1
		};
	};
	class WordDroneIsBingoFuelAndRTBOverDefault
	{
		versions[]=
		{
			"WordDroneIsBingoFuelAndRTBOver_1",
			1
		};
		class WordDroneIsBingoFuelAndRTBOver_1
		{
			speech[]=
			{
				"DroneIsBingoFuelAndRTBOver"
			};
		};
	};
	class WordThanksForTheUpdateOut
	{
		sentences[]=
		{
			"WordThanksForTheUpdateOutDefault",
			1
		};
	};
	class WordThanksForTheUpdateOutDefault
	{
		versions[]=
		{
			"WordThanksForTheUpdateOut_1",
			1
		};
		class WordThanksForTheUpdateOut_1
		{
			speech[]=
			{
				"ThanksForTheUpdateOut"
			};
		};
	};
	class WordWeRequireLongRangeTransportHowCopyQ
	{
		sentences[]=
		{
			"WordWeRequireLongRangeTransportHowCopyQDefault",
			1
		};
	};
	class WordWeRequireLongRangeTransportHowCopyQDefault
	{
		versions[]=
		{
			"WordWeRequireLongRangeTransportHowCopyQ_1",
			1
		};
		class WordWeRequireLongRangeTransportHowCopyQ_1
		{
			speech[]=
			{
				"WeRequireLongRangeTransportHowCopyQ"
			};
		};
	};
	class WordRogerThatTransportAvailableRequestingLZOver
	{
		sentences[]=
		{
			"WordRogerThatTransportAvailableRequestingLZOverDefault",
			1
		};
	};
	class WordRogerThatTransportAvailableRequestingLZOverDefault
	{
		versions[]=
		{
			"WordRogerThatTransportAvailableRequestingLZOver_1",
			1
		};
		class WordRogerThatTransportAvailableRequestingLZOver_1
		{
			speech[]=
			{
				"RogerThatTransportAvailableRequestingLZOver"
			};
		};
	};
	class WordCopyTransportIsInboundOut
	{
		sentences[]=
		{
			"WordCopyTransportIsInboundOutDefault",
			1
		};
	};
	class WordCopyTransportIsInboundOutDefault
	{
		versions[]=
		{
			"WordCopyTransportIsInboundOut_1",
			1
		};
		class WordCopyTransportIsInboundOut_1
		{
			speech[]=
			{
				"CopyTransportIsInboundOut"
			};
		};
	};
	class WordAllAboardSendingCoordinatesOver
	{
		sentences[]=
		{
			"WordAllAboardSendingCoordinatesOverDefault",
			1
		};
	};
	class WordAllAboardSendingCoordinatesOverDefault
	{
		versions[]=
		{
			"WordAllAboardSendingCoordinatesOver_1",
			1
		};
		class WordAllAboardSendingCoordinatesOver_1
		{
			speech[]=
			{
				"AllAboardSendingCoordinatesOver"
			};
		};
	};
	class WordReportingSuccessfulInsertionThanksForTheRideOut
	{
		sentences[]=
		{
			"WordReportingSuccessfulInsertionThanksForTheRideOutDefault",
			1
		};
	};
	class WordReportingSuccessfulInsertionThanksForTheRideOutDefault
	{
		versions[]=
		{
			"WordReportingSuccessfulInsertionThanksForTheRideOut_1",
			1
		};
		class WordReportingSuccessfulInsertionThanksForTheRideOut_1
		{
			speech[]=
			{
				"ReportingSuccessfulInsertionThanksForTheRideOut"
			};
		};
	};
	class WordBeAdvisedTransportWasImmobilizedOut
	{
		sentences[]=
		{
			"WordBeAdvisedTransportWasImmobilizedOutDefault",
			1
		};
	};
	class WordBeAdvisedTransportWasImmobilizedOutDefault
	{
		versions[]=
		{
			"WordBeAdvisedTransportWasImmobilizedOut_1",
			1
		};
		class WordBeAdvisedTransportWasImmobilizedOut_1
		{
			speech[]=
			{
				"BeAdvisedTransportWasImmobilizedOut"
			};
		};
	};
	class WordRequestingImmediateCloseAirSupportHowCopyQ
	{
		sentences[]=
		{
			"WordRequestingImmediateCloseAirSupportHowCopyQDefault",
			1
		};
	};
	class WordRequestingImmediateCloseAirSupportHowCopyQDefault
	{
		versions[]=
		{
			"WordRequestingImmediateCloseAirSupportHowCopyQ_1",
			1
		};
		class WordRequestingImmediateCloseAirSupportHowCopyQ_1
		{
			speech[]=
			{
				"RequestingImmediateCloseAirSupportHowCopyQ"
			};
		};
	};
	class WordCopyThatAirstrikeIsReadyTransmitTargetLocationOver
	{
		sentences[]=
		{
			"WordCopyThatAirstrikeIsReadyTransmitTargetLocationOverDefault",
			1
		};
	};
	class WordCopyThatAirstrikeIsReadyTransmitTargetLocationOverDefault
	{
		versions[]=
		{
			"WordCopyThatAirstrikeIsReadyTransmitTargetLocationOver_1",
			1
		};
		class WordCopyThatAirstrikeIsReadyTransmitTargetLocationOver_1
		{
			speech[]=
			{
				"CopyThatAirstrikeIsReadyTransmitTargetLocationOver"
			};
		};
	};
	class WordTargetLocationMarkedOver
	{
		sentences[]=
		{
			"WordTargetLocationMarkedOverDefault",
			1
		};
	};
	class WordTargetLocationMarkedOverDefault
	{
		versions[]=
		{
			"WordTargetLocationMarkedOver_1",
			1
		};
		class WordTargetLocationMarkedOver_1
		{
			speech[]=
			{
				"TargetLocationMarkedOver"
			};
		};
	};
	class WordCoordinatesReceivedAircraftAreInboundContactOnLaserDesignatorOut
	{
		sentences[]=
		{
			"WordCoordinatesReceivedAircraftAreInboundContactOnLaserDesignatorOutDefault",
			1
		};
	};
	class WordCoordinatesReceivedAircraftAreInboundContactOnLaserDesignatorOutDefault
	{
		versions[]=
		{
			"WordCoordinatesReceivedAircraftAreInboundContactOnLaserDesignatorOut_1",
			1
		};
		class WordCoordinatesReceivedAircraftAreInboundContactOnLaserDesignatorOut_1
		{
			speech[]=
			{
				"CoordinatesReceivedAircraftAreInboundContactOnLaserDesignatorOut"
			};
		};
	};
	class WordBeAdvisedWeHaveABirdStandingByWeCanFlyInReinforcementsIfNeededCheckYourMapForTheRendezvousPointAndConfirmOver
	{
		sentences[]=
		{
			"WordBeAdvisedWeHaveABirdStandingByWeCanFlyInReinforcementsIfNeededCheckYourMapForTheRendezvousPointAndConfirmOverDefault",
			1
		};
	};
	class WordBeAdvisedWeHaveABirdStandingByWeCanFlyInReinforcementsIfNeededCheckYourMapForTheRendezvousPointAndConfirmOverDefault
	{
		versions[]=
		{
			"WordBeAdvisedWeHaveABirdStandingByWeCanFlyInReinforcementsIfNeededCheckYourMapForTheRendezvousPointAndConfirmOver_1",
			1
		};
		class WordBeAdvisedWeHaveABirdStandingByWeCanFlyInReinforcementsIfNeededCheckYourMapForTheRendezvousPointAndConfirmOver_1
		{
			speech[]=
			{
				"BeAdvisedWeHaveABirdStandingByWeCanFlyInReinforcementsIfNeededCheckYourMapForTheRendezvousPointAndConfirmOver"
			};
		};
	};
	class WordTheBirdHadToRTBForFuelOver
	{
		sentences[]=
		{
			"WordTheBirdHadToRTBForFuelOverDefault",
			1
		};
	};
	class WordTheBirdHadToRTBForFuelOverDefault
	{
		versions[]=
		{
			"WordTheBirdHadToRTBForFuelOver_1",
			1
		};
		class WordTheBirdHadToRTBForFuelOver_1
		{
			speech[]=
			{
				"TheBirdHadToRTBForFuelOver"
			};
		};
	};
	class WordWeLinkedUpWithTheReinforcementsThanksForTheSupport
	{
		sentences[]=
		{
			"WordWeLinkedUpWithTheReinforcementsThanksForTheSupportDefault",
			1
		};
	};
	class WordWeLinkedUpWithTheReinforcementsThanksForTheSupportDefault
	{
		versions[]=
		{
			"WordWeLinkedUpWithTheReinforcementsThanksForTheSupport_1",
			1
		};
		class WordWeLinkedUpWithTheReinforcementsThanksForTheSupport_1
		{
			speech[]=
			{
				"WeLinkedUpWithTheReinforcementsThanksForTheSupport"
			};
		};
	};
	class WordWeLostCommunicationWithThePilotBirdCouldBeDownOver
	{
		sentences[]=
		{
			"WordWeLostCommunicationWithThePilotBirdCouldBeDownOverDefault",
			1
		};
	};
	class WordWeLostCommunicationWithThePilotBirdCouldBeDownOverDefault
	{
		versions[]=
		{
			"WordWeLostCommunicationWithThePilotBirdCouldBeDownOver_1",
			1
		};
		class WordWeLostCommunicationWithThePilotBirdCouldBeDownOver_1
		{
			speech[]=
			{
				"WeLostCommunicationWithThePilotBirdCouldBeDownOver"
			};
		};
	};
	class WordYourReinforcementsDidntMakeItToTheRendezvousYoullHaveToManageOver
	{
		sentences[]=
		{
			"WordYourReinforcementsDidntMakeItToTheRendezvousYoullHaveToManageOverDefault",
			1
		};
	};
	class WordYourReinforcementsDidntMakeItToTheRendezvousYoullHaveToManageOverDefault
	{
		versions[]=
		{
			"WordYourReinforcementsDidntMakeItToTheRendezvousYoullHaveToManageOver_1",
			1
		};
		class WordYourReinforcementsDidntMakeItToTheRendezvousYoullHaveToManageOver_1
		{
			speech[]=
			{
				"YourReinforcementsDidntMakeItToTheRendezvousYoullHaveToManageOver"
			};
		};
	};
	class WordRequestingReleaseOfAnAttackHelicopterNearOurPositionOver
	{
		sentences[]=
		{
			"WordRequestingReleaseOfAnAttackHelicopterNearOurPositionOverDefault",
			1
		};
	};
	class WordRequestingReleaseOfAnAttackHelicopterNearOurPositionOverDefault
	{
		versions[]=
		{
			"WordRequestingReleaseOfAnAttackHelicopterNearOurPositionOver_1",
			1
		};
		class WordRequestingReleaseOfAnAttackHelicopterNearOurPositionOver_1
		{
			speech[]=
			{
				"RequestingReleaseOfAnAttackHelicopterNearOurPositionOver"
			};
		};
	};
	class WordReleaseAuthorizedSendStrikeTargetOver
	{
		sentences[]=
		{
			"WordReleaseAuthorizedSendStrikeTargetOverDefault",
			1
		};
	};
	class WordReleaseAuthorizedSendStrikeTargetOverDefault
	{
		versions[]=
		{
			"WordReleaseAuthorizedSendStrikeTargetOver_1",
			1
		};
		class WordReleaseAuthorizedSendStrikeTargetOver_1
		{
			speech[]=
			{
				"ReleaseAuthorizedSendStrikeTargetOver"
			};
		};
	};
	class WordStrikeTargetSentOver
	{
		sentences[]=
		{
			"WordStrikeTargetSentOverDefault",
			1
		};
	};
	class WordStrikeTargetSentOverDefault
	{
		versions[]=
		{
			"WordStrikeTargetSentOver_1",
			1
		};
		class WordStrikeTargetSentOver_1
		{
			speech[]=
			{
				"StrikeTargetSentOver"
			};
		};
	};
	class WordCoordinatesReceivedHeloIsAttackingTheTargetOut
	{
		sentences[]=
		{
			"WordCoordinatesReceivedHeloIsAttackingTheTargetOutDefault",
			1
		};
	};
	class WordCoordinatesReceivedHeloIsAttackingTheTargetOutDefault
	{
		versions[]=
		{
			"WordCoordinatesReceivedHeloIsAttackingTheTargetOut_1",
			1
		};
		class WordCoordinatesReceivedHeloIsAttackingTheTargetOut_1
		{
			speech[]=
			{
				"CoordinatesReceivedHeloIsAttackingTheTargetOut"
			};
		};
	};
	class WordRequestingImmediateArtillerySuppressionHighExplosiveHowCopyQ
	{
		sentences[]=
		{
			"WordRequestingImmediateArtillerySuppressionHighExplosiveHowCopyQDefault",
			1
		};
	};
	class WordRequestingImmediateArtillerySuppressionHighExplosiveHowCopyQDefault
	{
		versions[]=
		{
			"WordRequestingImmediateArtillerySuppressionHighExplosiveHowCopyQ_1",
			1
		};
		class WordRequestingImmediateArtillerySuppressionHighExplosiveHowCopyQ_1
		{
			speech[]=
			{
				"RequestingImmediateArtillerySuppressionHighExplosiveHowCopyQ"
			};
		};
	};
	class WordWithAnImmediateArtillerySuppressionRequestSmokeOver
	{
		sentences[]=
		{
			"WordWithAnImmediateArtillerySuppressionRequestSmokeOverDefault",
			1
		};
	};
	class WordWithAnImmediateArtillerySuppressionRequestSmokeOverDefault
	{
		versions[]=
		{
			"WordWithAnImmediateArtillerySuppressionRequestSmokeOver_1",
			1
		};
		class WordWithAnImmediateArtillerySuppressionRequestSmokeOver_1
		{
			speech[]=
			{
				"WithAnImmediateArtillerySuppressionRequestSmokeOver"
			};
		};
	};
	class WordRequestingImmediateCoverWithWilliePeteOver
	{
		sentences[]=
		{
			"WordRequestingImmediateCoverWithWilliePeteOverDefault",
			1
		};
	};
	class WordRequestingImmediateCoverWithWilliePeteOverDefault
	{
		versions[]=
		{
			"WordRequestingImmediateCoverWithWilliePeteOver_1",
			1
		};
		class WordRequestingImmediateCoverWithWilliePeteOver_1
		{
			speech[]=
			{
				"RequestingImmediateCoverWithWilliePeteOver"
			};
		};
	};
	class WordRequestingContinuousIlluminationAtTheTargetLocationHowCopyQ
	{
		sentences[]=
		{
			"WordRequestingContinuousIlluminationAtTheTargetLocationHowCopyQDefault",
			1
		};
	};
	class WordRequestingContinuousIlluminationAtTheTargetLocationHowCopyQDefault
	{
		versions[]=
		{
			"WordRequestingContinuousIlluminationAtTheTargetLocationHowCopyQ_1",
			1
		};
		class WordRequestingContinuousIlluminationAtTheTargetLocationHowCopyQ_1
		{
			speech[]=
			{
				"RequestingContinuousIlluminationAtTheTargetLocationHowCopyQ"
			};
		};
	};
	class WordWeNeedLaserGuidedOrdnanceOver
	{
		sentences[]=
		{
			"WordWeNeedLaserGuidedOrdnanceOverDefault",
			1
		};
	};
	class WordWeNeedLaserGuidedOrdnanceOverDefault
	{
		versions[]=
		{
			"WordWeNeedLaserGuidedOrdnanceOver_1",
			1
		};
		class WordWeNeedLaserGuidedOrdnanceOver_1
		{
			speech[]=
			{
				"WeNeedLaserGuidedOrdnanceOver"
			};
		};
	};
	class WordWeNeedAGuidedAntiArmorStrikeOver
	{
		sentences[]=
		{
			"WordWeNeedAGuidedAntiArmorStrikeOverDefault",
			1
		};
	};
	class WordWeNeedAGuidedAntiArmorStrikeOverDefault
	{
		versions[]=
		{
			"WordWeNeedAGuidedAntiArmorStrikeOver_1",
			1
		};
		class WordWeNeedAGuidedAntiArmorStrikeOver_1
		{
			speech[]=
			{
				"WeNeedAGuidedAntiArmorStrikeOver"
			};
		};
	};
	class WordRequestingFireSupportFireForEffectOver
	{
		sentences[]=
		{
			"WordRequestingFireSupportFireForEffectOverDefault",
			1
		};
	};
	class WordRequestingFireSupportFireForEffectOverDefault
	{
		versions[]=
		{
			"WordRequestingFireSupportFireForEffectOver_1",
			1
		};
		class WordRequestingFireSupportFireForEffectOver_1
		{
			speech[]=
			{
				"RequestingFireSupportFireForEffectOver"
			};
		};
	};
	class WordRequestingFireSupportAtTheTargetLocationWilliePeteInEffectHowCopyQ
	{
		sentences[]=
		{
			"WordRequestingFireSupportAtTheTargetLocationWilliePeteInEffectHowCopyQDefault",
			1
		};
	};
	class WordRequestingFireSupportAtTheTargetLocationWilliePeteInEffectHowCopyQDefault
	{
		versions[]=
		{
			"WordRequestingFireSupportAtTheTargetLocationWilliePeteInEffectHowCopyQ_1",
			1
		};
		class WordRequestingFireSupportAtTheTargetLocationWilliePeteInEffectHowCopyQ_1
		{
			speech[]=
			{
				"RequestingFireSupportAtTheTargetLocationWilliePeteInEffectHowCopyQ"
			};
		};
	};
	class WordAdjustFireAtTheTargetLocationOver
	{
		sentences[]=
		{
			"WordAdjustFireAtTheTargetLocationOverDefault",
			1
		};
	};
	class WordAdjustFireAtTheTargetLocationOverDefault
	{
		versions[]=
		{
			"WordAdjustFireAtTheTargetLocationOver_1",
			1
		};
		class WordAdjustFireAtTheTargetLocationOver_1
		{
			speech[]=
			{
				"AdjustFireAtTheTargetLocationOver"
			};
		};
	};
	class WordArtilleryAvailableTransmitTargetLocationOver
	{
		sentences[]=
		{
			"WordArtilleryAvailableTransmitTargetLocationOverDefault",
			1
		};
	};
	class WordArtilleryAvailableTransmitTargetLocationOverDefault
	{
		versions[]=
		{
			"WordArtilleryAvailableTransmitTargetLocationOver_1",
			1
		};
		class WordArtilleryAvailableTransmitTargetLocationOver_1
		{
			speech[]=
			{
				"ArtilleryAvailableTransmitTargetLocationOver"
			};
		};
	};
	class WordRogerThatTargetLocationReceivedOrdnanceIsInboundOver
	{
		sentences[]=
		{
			"WordRogerThatTargetLocationReceivedOrdnanceIsInboundOverDefault",
			1
		};
	};
	class WordRogerThatTargetLocationReceivedOrdnanceIsInboundOverDefault
	{
		versions[]=
		{
			"WordRogerThatTargetLocationReceivedOrdnanceIsInboundOver_1",
			1
		};
		class WordRogerThatTargetLocationReceivedOrdnanceIsInboundOver_1
		{
			speech[]=
			{
				"RogerThatTargetLocationReceivedOrdnanceIsInboundOver"
			};
		};
	};
	class WordBeAdvisedArtilleryIsUnavailableAtThisTimeOut
	{
		sentences[]=
		{
			"WordBeAdvisedArtilleryIsUnavailableAtThisTimeOutDefault",
			1
		};
	};
	class WordBeAdvisedArtilleryIsUnavailableAtThisTimeOutDefault
	{
		versions[]=
		{
			"WordBeAdvisedArtilleryIsUnavailableAtThisTimeOut_1",
			1
		};
		class WordBeAdvisedArtilleryIsUnavailableAtThisTimeOut_1
		{
			speech[]=
			{
				"BeAdvisedArtilleryIsUnavailableAtThisTimeOut"
			};
		};
	};
	class WordNegativeWeLostContactWithTheBatteryOut
	{
		sentences[]=
		{
			"WordNegativeWeLostContactWithTheBatteryOutDefault",
			1
		};
	};
	class WordNegativeWeLostContactWithTheBatteryOutDefault
	{
		versions[]=
		{
			"WordNegativeWeLostContactWithTheBatteryOut_1",
			1
		};
		class WordNegativeWeLostContactWithTheBatteryOut_1
		{
			speech[]=
			{
				"NegativeWeLostContactWithTheBatteryOut"
			};
		};
	};
	class WordBeAdvisedTheBatteryCannotTargetThatGridOut
	{
		sentences[]=
		{
			"WordBeAdvisedTheBatteryCannotTargetThatGridOutDefault",
			1
		};
	};
	class WordBeAdvisedTheBatteryCannotTargetThatGridOutDefault
	{
		versions[]=
		{
			"WordBeAdvisedTheBatteryCannotTargetThatGridOut_1",
			1
		};
		class WordBeAdvisedTheBatteryCannotTargetThatGridOut_1
		{
			speech[]=
			{
				"BeAdvisedTheBatteryCannotTargetThatGridOut"
			};
		};
	};
	class WordCannotExecuteAdjustCoordinatesOut
	{
		sentences[]=
		{
			"WordCannotExecuteAdjustCoordinatesOutDefault",
			1
		};
	};
	class WordCannotExecuteAdjustCoordinatesOutDefault
	{
		versions[]=
		{
			"WordCannotExecuteAdjustCoordinatesOut_1",
			1
		};
		class WordCannotExecuteAdjustCoordinatesOut_1
		{
			speech[]=
			{
				"CannotExecuteAdjustCoordinatesOut"
			};
		};
	};
	class WordThatsOutsideOurFiringEnvelopeOut
	{
		sentences[]=
		{
			"WordThatsOutsideOurFiringEnvelopeOutDefault",
			1
		};
	};
	class WordThatsOutsideOurFiringEnvelopeOutDefault
	{
		versions[]=
		{
			"WordThatsOutsideOurFiringEnvelopeOut_1",
			1
		};
		class WordThatsOutsideOurFiringEnvelopeOut_1
		{
			speech[]=
			{
				"ThatsOutsideOurFiringEnvelopeOut"
			};
		};
	};
	class WordShotOver
	{
		sentences[]=
		{
			"WordShotOverDefault",
			1
		};
	};
	class WordShotOverDefault
	{
		versions[]=
		{
			"WordShotOver_1",
			1
		};
		class WordShotOver_1
		{
			speech[]=
			{
				"ShotOver"
			};
		};
	};
	class WordShotOut
	{
		sentences[]=
		{
			"WordShotOutDefault",
			1
		};
	};
	class WordShotOutDefault
	{
		versions[]=
		{
			"WordShotOut_1",
			1
		};
		class WordShotOut_1
		{
			speech[]=
			{
				"ShotOut"
			};
		};
	};
	class WordSplashOver
	{
		sentences[]=
		{
			"WordSplashOverDefault",
			1
		};
	};
	class WordSplashOverDefault
	{
		versions[]=
		{
			"WordSplashOver_1",
			1
		};
		class WordSplashOver_1
		{
			speech[]=
			{
				"SplashOver"
			};
		};
	};
	class WordSplashOut
	{
		sentences[]=
		{
			"WordSplashOutDefault",
			1
		};
	};
	class WordSplashOutDefault
	{
		versions[]=
		{
			"WordSplashOut_1",
			1
		};
		class WordSplashOut_1
		{
			speech[]=
			{
				"SplashOut"
			};
		};
	};
	class WordRoundsComplete
	{
		sentences[]=
		{
			"WordRoundsCompleteDefault",
			1
		};
	};
	class WordRoundsCompleteDefault
	{
		versions[]=
		{
			"WordRoundsComplete_1",
			1
		};
		class WordRoundsComplete_1
		{
			speech[]=
			{
				"RoundsComplete"
			};
		};
	};
	class WordCheckFireE
	{
		sentences[]=
		{
			"WordCheckFireEDefault",
			1
		};
	};
	class WordCheckFireEDefault
	{
		versions[]=
		{
			"WordCheckFireE_1",
			1
		};
		class WordCheckFireE_1
		{
			speech[]=
			{
				"CheckFireE"
			};
		};
	};
	class WordCeasingFire
	{
		sentences[]=
		{
			"WordCeasingFireDefault",
			1
		};
	};
	class WordCeasingFireDefault
	{
		versions[]=
		{
			"WordCeasingFire_1",
			1
		};
		class WordCeasingFire_1
		{
			speech[]=
			{
				"CeasingFire"
			};
		};
	};
	class WordBeAdvisedTheBatteryJustDroppedOffTheCommGridYoureOnYourOwnOver
	{
		sentences[]=
		{
			"WordBeAdvisedTheBatteryJustDroppedOffTheCommGridYoureOnYourOwnOverDefault",
			1
		};
	};
	class WordBeAdvisedTheBatteryJustDroppedOffTheCommGridYoureOnYourOwnOverDefault
	{
		versions[]=
		{
			"WordBeAdvisedTheBatteryJustDroppedOffTheCommGridYoureOnYourOwnOver_1",
			1
		};
		class WordBeAdvisedTheBatteryJustDroppedOffTheCommGridYoureOnYourOwnOver_1
		{
			speech[]=
			{
				"BeAdvisedTheBatteryJustDroppedOffTheCommGridYoureOnYourOwnOver"
			};
		};
	};
	class WordRogerWellHandleItOurselvesOut
	{
		sentences[]=
		{
			"WordRogerWellHandleItOurselvesOutDefault",
			1
		};
	};
	class WordRogerWellHandleItOurselvesOutDefault
	{
		versions[]=
		{
			"WordRogerWellHandleItOurselvesOut_1",
			1
		};
		class WordRogerWellHandleItOurselvesOut_1
		{
			speech[]=
			{
				"RogerWellHandleItOurselvesOut"
			};
		};
	};
	class WordStandByForMissionUpdate
	{
		sentences[]=
		{
			"WordStandByForMissionUpdateDefault",
			1
		};
	};
	class WordStandByForMissionUpdateDefault
	{
		versions[]=
		{
			"WordStandByForMissionUpdate_1",
			1
		};
		class WordStandByForMissionUpdate_1
		{
			speech[]=
			{
				"StandByForMissionUpdate"
			};
		};
	};
	class WordOut
	{
		sentences[]=
		{
			"WordOutDefault",
			1
		};
	};
	class WordOutDefault
	{
		versions[]=
		{
			"WordOut_1",
			1
		};
		class WordOut_1
		{
			speech[]=
			{
				"Out"
			};
		};
	};
	class WordRogerThat
	{
		sentences[]=
		{
			"WordRogerThatDefault",
			1
		};
	};
	class WordRogerThatDefault
	{
		versions[]=
		{
			"WordRogerThat_1",
			1
		};
		class WordRogerThat_1
		{
			speech[]=
			{
				"RogerThat"
			};
		};
	};
	class WordJobWellDone
	{
		sentences[]=
		{
			"WordJobWellDoneDefault",
			1
		};
	};
	class WordJobWellDoneDefault
	{
		versions[]=
		{
			"WordJobWellDone_1",
			1
		};
		class WordJobWellDone_1
		{
			speech[]=
			{
				"JobWellDone"
			};
		};
	};
	class WordGoodJobOut
	{
		sentences[]=
		{
			"WordGoodJobOutDefault",
			1
		};
	};
	class WordGoodJobOutDefault
	{
		versions[]=
		{
			"WordGoodJobOut_1",
			1
		};
		class WordGoodJobOut_1
		{
			speech[]=
			{
				"GoodJobOut"
			};
		};
	};
	class WordWellDoneOut
	{
		sentences[]=
		{
			"WordWellDoneOutDefault",
			1
		};
	};
	class WordWellDoneOutDefault
	{
		versions[]=
		{
			"WordWellDoneOut_1",
			1
		};
		class WordWellDoneOut_1
		{
			speech[]=
			{
				"WellDoneOut"
			};
		};
	};
	class WordMissionFailure
	{
		sentences[]=
		{
			"WordMissionFailureDefault",
			1
		};
	};
	class WordMissionFailureDefault
	{
		versions[]=
		{
			"WordMissionFailure_1",
			1
		};
		class WordMissionFailure_1
		{
			speech[]=
			{
				"MissionFailure"
			};
		};
	};
	class WordMessageOver
	{
		sentences[]=
		{
			"WordMessageOverDefault",
			1
		};
	};
	class WordMessageOverDefault
	{
		versions[]=
		{
			"WordMessageOver_1",
			1
		};
		class WordMessageOver_1
		{
			speech[]=
			{
				"MessageOver"
			};
		};
	};
	class WordComeIn
	{
		sentences[]=
		{
			"WordComeInDefault",
			1
		};
	};
	class WordComeInDefault
	{
		versions[]=
		{
			"WordComeIn_1",
			1
		};
		class WordComeIn_1
		{
			speech[]=
			{
				"ComeIn"
			};
		};
	};
	class WordGoAheadOver
	{
		sentences[]=
		{
			"WordGoAheadOverDefault",
			1
		};
	};
	class WordGoAheadOverDefault
	{
		versions[]=
		{
			"WordGoAheadOver_1",
			1
		};
		class WordGoAheadOver_1
		{
			speech[]=
			{
				"GoAheadOver"
			};
		};
	};
	class WordCopyGoAhead
	{
		sentences[]=
		{
			"WordCopyGoAheadDefault",
			1
		};
	};
	class WordCopyGoAheadDefault
	{
		versions[]=
		{
			"WordCopyGoAhead_1",
			1
		};
		class WordCopyGoAhead_1
		{
			speech[]=
			{
				"CopyGoAhead"
			};
		};
	};
	class WordWeCopyYouLoudAndClear
	{
		sentences[]=
		{
			"WordWeCopyYouLoudAndClearDefault",
			1
		};
	};
	class WordWeCopyYouLoudAndClearDefault
	{
		versions[]=
		{
			"WordWeCopyYouLoudAndClear_1",
			1
		};
		class WordWeCopyYouLoudAndClear_1
		{
			speech[]=
			{
				"WeCopyYouLoudAndClear"
			};
		};
	};
	class WordWeCannotDivertAtThisTimeOut
	{
		sentences[]=
		{
			"WordWeCannotDivertAtThisTimeOutDefault",
			1
		};
	};
	class WordWeCannotDivertAtThisTimeOutDefault
	{
		versions[]=
		{
			"WordWeCannotDivertAtThisTimeOut_1",
			1
		};
		class WordWeCannotDivertAtThisTimeOut_1
		{
			speech[]=
			{
				"WeCannotDivertAtThisTimeOut"
			};
		};
	};
	class WordSorry
	{
		sentences[]=
		{
			"WordSorryDefault",
			1
		};
	};
	class WordSorryDefault
	{
		versions[]=
		{
			"WordSorry_1",
			1
		};
		class WordSorry_1
		{
			speech[]=
			{
				"Sorry"
			};
		};
	};
	class WordNoWayWeCanHelpWithThatRightNowOut
	{
		sentences[]=
		{
			"WordNoWayWeCanHelpWithThatRightNowOutDefault",
			1
		};
	};
	class WordNoWayWeCanHelpWithThatRightNowOutDefault
	{
		versions[]=
		{
			"WordNoWayWeCanHelpWithThatRightNowOut_1",
			1
		};
		class WordNoWayWeCanHelpWithThatRightNowOut_1
		{
			speech[]=
			{
				"NoWayWeCanHelpWithThatRightNowOut"
			};
		};
	};
	class WordWereOnTheWayOut
	{
		sentences[]=
		{
			"WordWereOnTheWayOutDefault",
			1
		};
	};
	class WordWereOnTheWayOutDefault
	{
		versions[]=
		{
			"WordWereOnTheWayOut_1",
			1
		};
		class WordWereOnTheWayOut_1
		{
			speech[]=
			{
				"WereOnTheWayOut"
			};
		};
	};
	class WordWereOscarMikeOut
	{
		sentences[]=
		{
			"WordWereOscarMikeOutDefault",
			1
		};
	};
	class WordWereOscarMikeOutDefault
	{
		versions[]=
		{
			"WordWereOscarMikeOut_1",
			1
		};
		class WordWereOscarMikeOut_1
		{
			speech[]=
			{
				"WereOscarMikeOut"
			};
		};
	};
	class WordUnableToCompleteTheObjectiveAbortingOver
	{
		sentences[]=
		{
			"WordUnableToCompleteTheObjectiveAbortingOverDefault",
			1
		};
	};
	class WordUnableToCompleteTheObjectiveAbortingOverDefault
	{
		versions[]=
		{
			"WordUnableToCompleteTheObjectiveAbortingOver_1",
			1
		};
		class WordUnableToCompleteTheObjectiveAbortingOver_1
		{
			speech[]=
			{
				"UnableToCompleteTheObjectiveAbortingOver"
			};
		};
	};
	class WordWeHaveToAbortOver
	{
		sentences[]=
		{
			"WordWeHaveToAbortOverDefault",
			1
		};
	};
	class WordWeHaveToAbortOverDefault
	{
		versions[]=
		{
			"WordWeHaveToAbortOver_1",
			1
		};
		class WordWeHaveToAbortOver_1
		{
			speech[]=
			{
				"WeHaveToAbortOver"
			};
		};
	};
	class WordContinueYourPreviousMissionOver
	{
		sentences[]=
		{
			"WordContinueYourPreviousMissionOverDefault",
			1
		};
	};
	class WordContinueYourPreviousMissionOverDefault
	{
		versions[]=
		{
			"WordContinueYourPreviousMissionOver_1",
			1
		};
		class WordContinueYourPreviousMissionOver_1
		{
			speech[]=
			{
				"ContinueYourPreviousMissionOver"
			};
		};
	};
	class WordAbortTheOpOver
	{
		sentences[]=
		{
			"WordAbortTheOpOverDefault",
			1
		};
	};
	class WordAbortTheOpOverDefault
	{
		versions[]=
		{
			"WordAbortTheOpOver_1",
			1
		};
		class WordAbortTheOpOver_1
		{
			speech[]=
			{
				"AbortTheOpOver"
			};
		};
	};
	class WordReturnToYourPrimaryOver
	{
		sentences[]=
		{
			"WordReturnToYourPrimaryOverDefault",
			1
		};
	};
	class WordReturnToYourPrimaryOverDefault
	{
		versions[]=
		{
			"WordReturnToYourPrimaryOver_1",
			1
		};
		class WordReturnToYourPrimaryOver_1
		{
			speech[]=
			{
				"ReturnToYourPrimaryOver"
			};
		};
	};
	class WordCarryOnWithYourPriorTasksOver
	{
		sentences[]=
		{
			"WordCarryOnWithYourPriorTasksOverDefault",
			1
		};
	};
	class WordCarryOnWithYourPriorTasksOverDefault
	{
		versions[]=
		{
			"WordCarryOnWithYourPriorTasksOver_1",
			1
		};
		class WordCarryOnWithYourPriorTasksOver_1
		{
			speech[]=
			{
				"CarryOnWithYourPriorTasksOver"
			};
		};
	};
	class WordStandByOver
	{
		sentences[]=
		{
			"WordStandByOverDefault",
			1
		};
	};
	class WordStandByOverDefault
	{
		versions[]=
		{
			"WordStandByOver_1",
			1
		};
		class WordStandByOver_1
		{
			speech[]=
			{
				"StandByOver"
			};
		};
	};
	class WordAffirmative
	{
		sentences[]=
		{
			"WordAffirmativeDefault",
			1
		};
	};
	class WordAffirmativeDefault
	{
		versions[]=
		{
			"WordAffirmative_1",
			1
		};
		class WordAffirmative_1
		{
			speech[]=
			{
				"Affirmative"
			};
		};
	};
	class WordSupportIsNotAvailableOut
	{
		sentences[]=
		{
			"WordSupportIsNotAvailableOutDefault",
			1
		};
	};
	class WordSupportIsNotAvailableOutDefault
	{
		versions[]=
		{
			"WordSupportIsNotAvailableOut_1",
			1
		};
		class WordSupportIsNotAvailableOut_1
		{
			speech[]=
			{
				"SupportIsNotAvailableOut"
			};
		};
	};
	class WordYourRequestHasBeenRejectedOut
	{
		sentences[]=
		{
			"WordYourRequestHasBeenRejectedOutDefault",
			1
		};
	};
	class WordYourRequestHasBeenRejectedOutDefault
	{
		versions[]=
		{
			"WordYourRequestHasBeenRejectedOut_1",
			1
		};
		class WordYourRequestHasBeenRejectedOut_1
		{
			speech[]=
			{
				"YourRequestHasBeenRejectedOut"
			};
		};
	};
	class WordDoItNow
	{
		sentences[]=
		{
			"WordDoItNowDefault",
			1
		};
	};
	class WordDoItNowDefault
	{
		versions[]=
		{
			"WordDoItNow_1",
			1
		};
		class WordDoItNow_1
		{
			speech[]=
			{
				"DoItNow"
			};
		};
	};
	class WordAtThatPosition
	{
		sentences[]=
		{
			"WordAtThatPositionDefault",
			1
		};
	};
	class WordAtThatPositionDefault
	{
		versions[]=
		{
			"WordAtThatPosition_1",
			1
		};
		class WordAtThatPosition_1
		{
			speech[]=
			{
				"AtThatPosition"
			};
		};
	};
	class WordChangeFormation
	{
		sentences[]=
		{
			"WordChangeFormationDefault",
			1
		};
	};
	class WordChangeFormationDefault
	{
		versions[]=
		{
			"WordChangeFormation_1",
			1
		};
		class WordChangeFormation_1
		{
			speech[]=
			{
				"ChangeFormation"
			};
		};
	};
	class WordDefense
	{
		sentences[]=
		{
			"WordDefenseDefault",
			1
		};
	};
	class WordDefenseDefault
	{
		versions[]=
		{
			"WordDefense_1",
			1
		};
		class WordDefense_1
		{
			speech[]=
			{
				"Defense"
			};
		};
	};
	class WordDefenses
	{
		sentences[]=
		{
			"WordDefensesDefault",
			1
		};
	};
	class WordDefensesDefault
	{
		versions[]=
		{
			"WordDefenses_1",
			1
		};
		class WordDefenses_1
		{
			speech[]=
			{
				"Defenses"
			};
		};
	};
	class WordVeryClose
	{
		sentences[]=
		{
			"WordVeryCloseDefault",
			1
		};
	};
	class WordVeryCloseDefault
	{
		versions[]=
		{
			"WordVeryClose_1",
			1
		};
		class WordVeryClose_1
		{
			speech[]=
			{
				"VeryClose"
			};
		};
	};
	class WordDontBotherMeNow
	{
		sentences[]=
		{
			"WordDontBotherMeNowDefault",
			1
		};
	};
	class WordDontBotherMeNowDefault
	{
		versions[]=
		{
			"WordDontBotherMeNow_1",
			1
		};
		class WordDontBotherMeNow_1
		{
			speech[]=
			{
				"DontBotherMeNow"
			};
		};
	};
	class WordFourty
	{
		sentences[]=
		{
			"WordFourtyDefault",
			1
		};
	};
	class WordFourtyDefault
	{
		versions[]=
		{
			"WordFourty_1",
			1
		};
		class WordFourty_1
		{
			speech[]=
			{
				"Fourty"
			};
		};
	};
	class WordHeal
	{
		sentences[]=
		{
			"WordHealDefault",
			1
		};
	};
	class WordHealDefault
	{
		versions[]=
		{
			"WordHeal_1",
			1
		};
		class WordHeal_1
		{
			speech[]=
			{
				"Heal"
			};
		};
	};
	class WordMoveToThatPosition
	{
		sentences[]=
		{
			"WordMoveToThatPositionDefault",
			1
		};
	};
	class WordMoveToThatPositionDefault
	{
		versions[]=
		{
			"WordMoveToThatPosition_1",
			1
		};
		class WordMoveToThatPosition_1
		{
			speech[]=
			{
				"MoveToThatPosition"
			};
		};
	};
	class WordObjects
	{
		sentences[]=
		{
			"WordObjectsDefault",
			1
		};
	};
	class WordObjectsDefault
	{
		versions[]=
		{
			"WordObjects_1",
			1
		};
		class WordObjects_1
		{
			speech[]=
			{
				"Objects"
			};
		};
	};
	class WordSevent
	{
		sentences[]=
		{
			"WordSeventDefault",
			1
		};
	};
	class WordSeventDefault
	{
		versions[]=
		{
			"WordSevent_1",
			1
		};
		class WordSevent_1
		{
			speech[]=
			{
				"Sevent"
			};
		};
	};
	class WordTheyGotHim
	{
		sentences[]=
		{
			"WordTheyGotHimDefault",
			1
		};
	};
	class WordTheyGotHimDefault
	{
		versions[]=
		{
			"WordTheyGotHim_1",
			1
		};
		class WordTheyGotHim_1
		{
			speech[]=
			{
				"TheyGotHim"
			};
		};
	};
	class WordYou
	{
		sentences[]=
		{
			"WordYouDefault",
			1
		};
	};
	class WordYouDefault
	{
		versions[]=
		{
			"WordYou_1",
			1
		};
		class WordYou_1
		{
			speech[]=
			{
				"You"
			};
		};
	};
	class WordUV1
	{
		sentences[]=
		{
			"WordUV1Default",
			1
		};
	};
	class WordUV1Default
	{
		versions[]=
		{
			"WordUV1_1",
			1
		};
		class WordUV1_1
		{
			speech[]=
			{
				"UV1"
			};
		};
	};
	class WordUV2
	{
		sentences[]=
		{
			"WordUV2Default",
			1
		};
	};
	class WordUV2Default
	{
		versions[]=
		{
			"WordUV2_1",
			1
		};
		class WordUV2_1
		{
			speech[]=
			{
				"UV2"
			};
		};
	};
	class WordUV3
	{
		sentences[]=
		{
			"WordUV3Default",
			1
		};
	};
	class WordUV3Default
	{
		versions[]=
		{
			"WordUV3_1",
			1
		};
		class WordUV3_1
		{
			speech[]=
			{
				"UV3"
			};
		};
	};
	class WordUV4
	{
		sentences[]=
		{
			"WordUV4Default",
			1
		};
	};
	class WordUV4Default
	{
		versions[]=
		{
			"WordUV4_1",
			1
		};
		class WordUV4_1
		{
			speech[]=
			{
				"UV4"
			};
		};
	};
	class WordWeapon
	{
		sentences[]=
		{
			"WordWeaponDefault",
			1
		};
	};
	class WordWeaponDefault
	{
		versions[]=
		{
			"WordWeapon_1",
			1
		};
		class WordWeapon_1
		{
			speech[]=
			{
				"Weapon"
			};
		};
	};
	class WordWeapons
	{
		sentences[]=
		{
			"WordWeaponsDefault",
			1
		};
	};
	class WordWeaponsDefault
	{
		versions[]=
		{
			"WordWeapons_1",
			1
		};
		class WordWeapons_1
		{
			speech[]=
			{
				"Weapons"
			};
		};
	};
	class WordYouThere
	{
		sentences[]=
		{
			"WordYouThereDefault",
			1
		};
	};
	class WordYouThereDefault
	{
		versions[]=
		{
			"WordYouThere_1",
			1
		};
		class WordYouThere_1
		{
			speech[]=
			{
				"YouThere"
			};
		};
	};
	class WordDontBotherMe
	{
		sentences[]=
		{
			"WordDontBotherMeDefault",
			1
		};
	};
	class WordDontBotherMeDefault
	{
		versions[]=
		{
			"WordDontBotherMe_1",
			1
		};
		class WordDontBotherMe_1
		{
			speech[]=
			{
				"DontBotherMe"
			};
		};
	};
	class WordReadyForOrders
	{
		sentences[]=
		{
			"WordReadyForOrdersDefault",
			1
		};
	};
	class WordReadyForOrdersDefault
	{
		versions[]=
		{
			"WordReadyForOrders_1",
			1
		};
		class WordReadyForOrders_1
		{
			speech[]=
			{
				"ReadyForOrders"
			};
		};
	};
	class WordScream1
	{
		sentences[]=
		{
			"WordScream1Default",
			1
		};
	};
	class WordScream1Default
	{
		versions[]=
		{
			"WordScream1_1",
			1
		};
		class WordScream1_1
		{
			speech[]=
			{
				"Scream1"
			};
		};
	};
	class WordImAtThisPosition
	{
		sentences[]=
		{
			"WordImAtThisPositionDefault",
			1
		};
	};
	class WordImAtThisPositionDefault
	{
		versions[]=
		{
			"WordImAtThisPosition_1",
			1
		};
		class WordImAtThisPosition_1
		{
			speech[]=
			{
				"ImAtThisPosition"
			};
		};
	};
	class WordImHit
	{
		sentences[]=
		{
			"WordImHitDefault",
			1
		};
	};
	class WordImHitDefault
	{
		versions[]=
		{
			"WordImHit_1",
			1
		};
		class WordImHit_1
		{
			speech[]=
			{
				"ImHit"
			};
		};
	};
	class WordTakeIt
	{
		sentences[]=
		{
			"WordTakeItDefault",
			1
		};
	};
	class WordTakeItDefault
	{
		versions[]=
		{
			"WordTakeIt_1",
			1
		};
		class WordTakeIt_1
		{
			speech[]=
			{
				"TakeIt"
			};
		};
	};
	class WordWatchThatPosition
	{
		sentences[]=
		{
			"WordWatchThatPositionDefault",
			1
		};
	};
	class WordWatchThatPositionDefault
	{
		versions[]=
		{
			"WordWatchThatPosition_1",
			1
		};
		class WordWatchThatPosition_1
		{
			speech[]=
			{
				"WatchThatPosition"
			};
		};
	};
	class WordU
	{
		sentences[]=
		{
			"WordUDefault",
			1
		};
	};
	class WordUDefault
	{
		versions[]=
		{
			"WordU_1",
			1
		};
		class WordU_1
		{
			speech[]=
			{
				"U"
			};
		};
	};
	class WordGuerilla
	{
		sentences[]=
		{
			"WordGuerillaDefault",
			1
		};
	};
	class WordGuerillaDefault
	{
		versions[]=
		{
			"WordGuerilla_1",
			1
		};
		class WordGuerilla_1
		{
			speech[]=
			{
				"Guerilla"
			};
		};
	};
	class WordDist10
	{
		sentences[]=
		{
			"WordDist10Default",
			1
		};
	};
	class WordDist10Default
	{
		versions[]=
		{
			"WordDist10_1",
			1
		};
		class WordDist10_1
		{
			speech[]=
			{
				"Dist10"
			};
		};
	};
	class gestureAttack
	{
		versions[]=
		{
			"Default",
			1
		};
		class Default
		{
			speech[]={};
			gesture="gestureAttack";
		};
	};
	class gestureGo
	{
		versions[]=
		{
			"Default",
			1
		};
		class Default
		{
			speech[]={};
			gesture="gestureGo";
		};
	};
	class gestureGoB
	{
		versions[]=
		{
			"Default",
			1
		};
		class Default
		{
			speech[]={};
			gesture="gestureGoB";
		};
	};
	class gestureFreeze
	{
		versions[]=
		{
			"Default",
			1
		};
		class Default
		{
			speech[]={};
			gesture="gestureFreeze";
		};
	};
	class gesturePoint
	{
		versions[]=
		{
			"Default",
			1
		};
		class Default
		{
			speech[]={};
			gesture="gesturePoint";
		};
	};
	class gestureCeaseFire
	{
		versions[]=
		{
			"Default",
			1
		};
		class Default
		{
			speech[]={};
			gesture="gestureCeaseFire";
		};
	};
	class gestureCover
	{
		versions[]=
		{
			"Default",
			1
		};
		class Default
		{
			speech[]={};
			gesture="gestureCover";
		};
	};
	class gestureUp
	{
		versions[]=
		{
			"Default",
			1
		};
		class Default
		{
			speech[]={};
			gesture="gestureUp";
		};
	};
	class gestureNo
	{
		versions[]=
		{
			"Default",
			1
		};
		class Default
		{
			speech[]={};
			gesture="gestureNo";
		};
	};
	class gestureYes
	{
		versions[]=
		{
			"Default",
			1
		};
		class Default
		{
			speech[]={};
			gesture="gestureYes";
		};
	};
	class gestureFollow
	{
		versions[]=
		{
			"Default",
			1
		};
		class Default
		{
			speech[]={};
			gesture="gestureFollow";
		};
	};
	class gestureAdvance
	{
		versions[]=
		{
			"Default",
			1
		};
		class Default
		{
			speech[]={};
			gesture="gestureAdvance";
		};
	};
	class gestureHi
	{
		versions[]=
		{
			"Default",
			1
		};
		class Default
		{
			speech[]={};
			gesture="gestureHi";
		};
	};
	class gestureHiB
	{
		versions[]=
		{
			"Default",
			1
		};
		class Default
		{
			speech[]={};
			gesture="gestureHiB";
		};
	};
	class gestureHiC
	{
		versions[]=
		{
			"Default",
			1
		};
		class Default
		{
			speech[]={};
			gesture="gestureHiC";
		};
	};
	class gestureNod
	{
		versions[]=
		{
			"Default",
			1
		};
		class Default
		{
			speech[]={};
			gesture="gestureNod";
		};
	};
	class GestureSpasm0
	{
		versions[]=
		{
			"Default",
			1
		};
		class Default
		{
			speech[]={};
			gesture="GestureSpasm0";
		};
	};
	class GestureSpasm1
	{
		versions[]=
		{
			"Default",
			1
		};
		class Default
		{
			speech[]={};
			gesture="GestureSpasm1";
		};
	};
	class GestureSpasm2
	{
		versions[]=
		{
			"Default",
			1
		};
		class Default
		{
			speech[]={};
			gesture="GestureSpasm2";
		};
	};
	class GestureSpasm3
	{
		versions[]=
		{
			"Default",
			1
		};
		class Default
		{
			speech[]={};
			gesture="GestureSpasm3";
		};
	};
	class GestureSpasm4
	{
		versions[]=
		{
			"Default",
			1
		};
		class Default
		{
			speech[]={};
			gesture="GestureSpasm4";
		};
	};
	class GestureSpasm5
	{
		versions[]=
		{
			"Default",
			1
		};
		class Default
		{
			speech[]={};
			gesture="GestureSpasm5";
		};
	};
	class GestureSpasm6
	{
		versions[]=
		{
			"Default",
			1
		};
		class Default
		{
			speech[]={};
			gesture="GestureSpasm6";
		};
	};
	class GestureSpasm0weak
	{
		versions[]=
		{
			"Default",
			1
		};
		class Default
		{
			speech[]={};
			gesture="GestureSpasm0weak";
		};
	};
	class GestureSpasm1weak
	{
		versions[]=
		{
			"Default",
			1
		};
		class Default
		{
			speech[]={};
			gesture="GestureSpasm1weak";
		};
	};
	class GestureSpasm2weak
	{
		versions[]=
		{
			"Default",
			1
		};
		class Default
		{
			speech[]={};
			gesture="GestureSpasm2weak";
		};
	};
	class GestureSpasm3weak
	{
		versions[]=
		{
			"Default",
			1
		};
		class Default
		{
			speech[]={};
			gesture="GestureSpasm3weak";
		};
	};
	class GestureSpasm4weak
	{
		versions[]=
		{
			"Default",
			1
		};
		class Default
		{
			speech[]={};
			gesture="GestureSpasm4weak";
		};
	};
	class GestureSpasm5weak
	{
		versions[]=
		{
			"Default",
			1
		};
		class Default
		{
			speech[]={};
			gesture="GestureSpasm5weak";
		};
	};
	class GestureSpasm6weak
	{
		versions[]=
		{
			"Default",
			1
		};
		class Default
		{
			speech[]={};
			gesture="GestureSpasm6weak";
		};
	};
	class CuratorWaypointPlaced
	{
		versions[]=
		{
			"Normal_OnTheWay",
			"(1 - Stealth) * 1",
			"Stealth_OnTheWay",
			"(Stealth) * 1",
			"Normal_Confirmation1",
			"(1 - Stealth) * 1",
			"Stealth_Confirmation1",
			"(Stealth) * 1",
			"Normal_Confirmation2",
			"(1 - Stealth) * 1",
			"Stealth_Confirmation2",
			"(Stealth) * 1"
		};
		class Normal_OnTheWay
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"OnTheWay"
			};
			wordsClass="Normal";
		};
		class Stealth_OnTheWay
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"OnTheWay"
			};
			wordsClass="Stealth";
		};
		class Normal_Confirmation1
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"HC_MovingToPosition"
			};
			wordsClass="Normal";
		};
		class Stealth_Confirmation1
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"HC_MovingToPosition"
			};
			wordsClass="Stealth";
		};
		class Normal_Confirmation2
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"HC_Affirmative"
			};
			wordsClass="Normal";
		};
		class Stealth_Confirmation2
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"HC_Affirmative"
			};
			wordsClass="Stealth";
		};
	};
	class CuratorWaypointPlacedAttack
	{
		versions[]=
		{
			"Normal_CopyIAmOnHim",
			"(1 - Stealth) * 1",
			"Stealth_CopyIAmOnHim",
			"(Stealth) * 1",
			"Normal_LockAndLoad",
			"(1 - Stealth) * 1",
			"Stealth_LockAndLoad",
			"(Stealth) * 1",
			"Normal_TargetAcquired",
			"(1 - Stealth) * 1",
			"Stealth_TargetAcquired",
			"(Stealth) * 1",
			"Normal_TargetInSight",
			"(1 - Stealth) * 1",
			"Stealth_TargetInSight",
			"(Stealth) * 1"
		};
		class Normal_CopyIAmOnHim
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"ImOnIt"
			};
			wordsClass="Normal";
		};
		class Stealth_CopyIAmOnHim
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"ImOnIt"
			};
			wordsClass="Stealth";
		};
		class Normal_LockAndLoad
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"HC_EngagingE"
			};
			wordsClass="Normal";
		};
		class Stealth_LockAndLoad
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"HC_EngagingE"
			};
			wordsClass="Stealth";
		};
		class Normal_TargetAcquired
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"TargetAcquired"
			};
			wordsClass="Normal";
		};
		class Stealth_TargetAcquired
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"TargetAcquired"
			};
			wordsClass="Stealth";
		};
		class Normal_TargetInSight
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"TargetInSight"
			};
			wordsClass="Normal";
		};
		class Stealth_TargetInSight
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"TargetInSight"
			};
			wordsClass="Stealth";
		};
	};
	class CuratorObjectPlaced
	{
		versions[]=
		{
			"Normal_AwaitingOrders",
			"(1 - Stealth) * 1",
			"Stealth_AwaitingOrders",
			"(Stealth) * 1",
			"Normal_IAmReady",
			"(1 - Stealth) * 1",
			"Stealth_IAmReady",
			"(Stealth) * 1",
			"Normal_ReadyForOrders",
			"(1 - Stealth) * 1",
			"Stealth_ReadyForOrders",
			"(Stealth) * 1",
			"Normal_StandingBy",
			"(1 - Stealth) * 1",
			"Stealth_StandingBy",
			"(Stealth) * 1",
			"Normal_Waiting",
			"(1 - Stealth) * 1",
			"Stealth_Waiting",
			"(Stealth) * 1"
		};
		class Normal_AwaitingOrders
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"AwaitingOrders"
			};
			wordsClass="Normal";
		};
		class Stealth_AwaitingOrders
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"AwaitingOrders"
			};
			wordsClass="Stealth";
		};
		class Normal_IAmReady
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"ReadyForOrders"
			};
			wordsClass="Normal";
		};
		class Stealth_IAmReady
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"ReadyForOrders"
			};
			wordsClass="Stealth";
		};
		class Normal_ReadyForOrders
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"Ready"
			};
			wordsClass="Normal";
		};
		class Stealth_ReadyForOrders
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"Ready"
			};
			wordsClass="Stealth";
		};
		class Normal_StandingBy
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"StandingBy"
			};
			wordsClass="Normal";
		};
		class Stealth_StandingBy
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"StandingBy"
			};
			wordsClass="Stealth";
		};
		class Normal_Waiting
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"Waiting"
			};
			wordsClass="Normal";
		};
		class Stealth_Waiting
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"Waiting"
			};
			wordsClass="Stealth";
		};
	};
	class curatorObjectDestroyed
	{
		versions[]=
		{
			"Normal_ScreamingE",
			"(1 - Stealth) * 1",
			"Stealth_ScreamingE",
			"(Stealth) * 1"
		};
		class Normal_ScreamingE
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"ScreamingE"
			};
			wordsClass="Normal";
		};
		class Stealth_ScreamingE
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"ScreamingE"
			};
			wordsClass="Stealth";
		};
	};
	class curatorModuleCAS
	{
		versions[]=
		{
			"Normal_RequestAcknowledgedSGCASBombing",
			"(1 - Stealth) * 1",
			"Stealth_RequestAcknowledgedSGCASBombing",
			"(Stealth) * 1",
			"Normal_RequestAcknowledgedSGCASHelicopter",
			"(1 - Stealth) * 1",
			"Stealth_RequestAcknowledgedSGCASHelicopter",
			"(Stealth) * 1"
		};
		class Normal_RequestAcknowledgedSGCASBombing
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"RequestAcknowledgedSGCASBombing"
			};
			wordsClass="Normal";
		};
		class Stealth_RequestAcknowledgedSGCASBombing
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"RequestAcknowledgedSGCASBombing"
			};
			wordsClass="Stealth";
		};
		class Normal_RequestAcknowledgedSGCASHelicopter
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"RequestAcknowledgedSGCASHelicopter"
			};
			wordsClass="Normal";
		};
		class Stealth_RequestAcknowledgedSGCASHelicopter
		{
			gesture="";
			speech[]=
			{
				"XMIT",
				"RequestAcknowledgedSGCASHelicopter"
			};
			wordsClass="Stealth";
		};
	};
};

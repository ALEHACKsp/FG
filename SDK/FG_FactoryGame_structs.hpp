#pragma once

// Satisfactory SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Basic.hpp"
#include "FG_SlateCore_classes.hpp"
#include "FG_Engine_classes.hpp"
#include "FG_AssetRegistry_classes.hpp"
#include "FG_CoreUObject_classes.hpp"
#include "FG_AIModule_classes.hpp"
#include "FG_UMG_classes.hpp"
#include "FG_InputCore_classes.hpp"
#include "FG_ApexDestruction_classes.hpp"
#include "FG_GameplayTasks_classes.hpp"
#include "FG_Slate_classes.hpp"
#include "FG_NavigationSystem_classes.hpp"
#include "FG_OnlineSubsystemUtils_classes.hpp"
#include "FG_AnimGraphRuntime_classes.hpp"
#include "FG_ReplicationGraph_classes.hpp"
#include "FG_SignificanceManager_classes.hpp"
#include "FG_PhysXVehicles_classes.hpp"
#include "FG_AkAudio_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum FactoryGame.EBuildGunState
enum class EBuildGunState : uint8_t
{
	BGS_NONE                       = 0,
	BGS_MENU                       = 1,
	BGS_BUILD                      = 2,
	BGS_DISMANTLE                  = 3,
	BGS_MAX                        = 4
};


// Enum FactoryGame.EHologramSplinePathMode
enum class EHologramSplinePathMode : uint8_t
{
	HSPM_AUTO                      = 0,
	HSPM_STRAIGHT_HORZ             = 1,
	HSPM_STRAIGHT_VERT             = 2,
	HSPM_HORZ_TO_VERT              = 3,
	HSPM_VERT_TO_HORZ              = 4,
	HSPM_PATH_FIND                 = 5,
	HSPM_AUTO_2D                   = 6,
	HSPM_NOODLE                    = 7,
	HSPM_MAX                       = 8
};


// Enum FactoryGame.ERepresentationType
enum class ERepresentationType : uint8_t
{
	RT_Default                     = 0,
	RT_Beacon                      = 1,
	RT_Crate                       = 2,
	RT_Hub                         = 3,
	RT_Ping                        = 4,
	RT_Player                      = 5,
	RT_RadarTower                  = 6,
	RT_Resource                    = 7,
	RT_SpaceElevator               = 8,
	RT_StartingPod                 = 9,
	RT_Train                       = 10,
	RT_TrainStation                = 11,
	RT_Vehicle                     = 12,
	RT_VehicleDockingStation       = 13,
	RT_MAX                         = 14
};


// Enum FactoryGame.EGamePhase
enum class EGamePhase : uint8_t
{
	EGP_EarlyGame                  = 0,
	EGP_MidGame                    = 1,
	EGP_LateGame                   = 2,
	EGP_EndGame                    = 3,
	EGP_FoodCourt                  = 4,
	EGP_Victory                    = 5,
	EGP_MAX                        = 6
};


// Enum FactoryGame.EJoinSessionState
enum class EJoinSessionState : uint8_t
{
	JSS_NotJoiningSession          = 0,
	JSS_WaitingForLoginToComplete  = 1,
	JSS_QueryingHostsId            = 2,
	JSS_DestroyingOldSession       = 3,
	JSS_ConnectingToHost           = 4,
	JSS_MAX                        = 5
};


// Enum FactoryGame.ECachedNATType
enum class ECachedNATType : uint8_t
{
	CNT_Open                       = 0,
	CNT_Moderate                   = 1,
	CNT_Strict                     = 2,
	CNT_TBD                        = 3,
	CNT_MAX                        = 4
};


// Enum FactoryGame.EResearchState
enum class EResearchState : uint8_t
{
	ERS_NotResearching             = 0,
	ERS_Researching                = 1,
	ERS_MAX                        = 2
};


// Enum FactoryGame.ECreateSessionState
enum class ECreateSessionState : uint8_t
{
	CSS_NotCreateingSession        = 0,
	CSS_CreatingSession            = 1,
	CSS_DestroyingOldSession       = 2,
	CSS_UpdatingPresence           = 3,
	CSS_WaitingForPresenceToUpdate = 4,
	CSS_WaitingForLogin            = 5,
	CSS_MAX                        = 6
};


// Enum FactoryGame.ELoginState
enum class ELoginState : uint8_t
{
	LS_NotLoggedIn                 = 0,
	LS_LoggingIn                   = 1,
	LS_LoggedIn                    = 2,
	LS_FailedToLogin               = 3,
	LS_MAX                         = 4
};


// Enum FactoryGame.ETrainDockingState
enum class ETrainDockingState : uint8_t
{
	TDS_None                       = 0,
	TDS_ReadyToDock                = 1,
	TDS_Docked                     = 2,
	TDS_MAX                        = 3
};


// Enum FactoryGame.EBackEquipment
enum class EBackEquipment : uint8_t
{
	BE_None                        = 0,
	BE_Jetpack                     = 1,
	BE_MAX                         = 2
};


// Enum FactoryGame.EArmEquipment
enum class EArmEquipment : uint8_t
{
	AE_None                        = 0,
	AE_ChainSaw                    = 1,
	AE_RebarGun                    = 2,
	AE_BuildGun                    = 3,
	AE_Nobelisk                    = 4,
	AE_ResourceScanner             = 5,
	AE_Rifle                       = 6,
	AE_ColorGun                    = 7,
	AE_OneHandEquipment            = 8,
	AE_Consumables                 = 9,
	AE_ObjectScanner               = 10,
	AE_PortableMiner               = 11,
	AE_StunSpear                   = 12,
	AE_ShockShank                  = 13,
	AE_ResourceCollector           = 14,
	AE_Generic1Hand                = 15,
	AE_Generic2Hand                = 16,
	AE_MAX                         = 17
};


// Enum FactoryGame.ECompassViewDistance
enum class ECompassViewDistance : uint8_t
{
	CVD_Off                        = 0,
	CVD_Near                       = 1,
	CVD_Mid                        = 2,
	CVD_Far                        = 3,
	CVD_Always                     = 4,
	CVD_MAX                        = 5
};


// Enum FactoryGame.EFogOfWarRevealType
enum class EFogOfWarRevealType : uint8_t
{
	FOWRT_None                     = 0,
	FOWRT_Static                   = 1,
	FOWRT_Intermittent             = 2,
	FOWRT_Dynamic                  = 3,
	FOWRT_MAX                      = 4
};


// Enum FactoryGame.EOutlineColor
enum class EOutlineColor : uint8_t
{
	OC_NONE                        = 0,
	OC_USABLE                      = 1,
	OC_HOLOGRAM                    = 2,
	OC_RED                         = 3,
	OC_MAX                         = 4
};


// Enum FactoryGame.EProductionStatus
enum class EProductionStatus : uint8_t
{
	IS_NONE                        = 0,
	IS_PRODUCING                   = 1,
	IS_PRODUCING_WITH_CRYSTAL      = 2,
	IS_STANDBY                     = 3,
	IS_ERROR                       = 4,
	IS_MAX                         = 5
};


// Enum FactoryGame.ETrainPlatformDockingStatus
enum class ETrainPlatformDockingStatus : uint8_t
{
	ETPDS_None                     = 0,
	ETPDS_WaitingToStart           = 1,
	ETPDS_Loading                  = 2,
	ETPDS_Unloading                = 3,
	ETPDS_WaitingForTransfer       = 4,
	ETPDS_Complete                 = 5,
	ETPDS_MAX                      = 6
};


// Enum FactoryGame.EGuideLineType
enum class EGuideLineType : uint8_t
{
	GLT_Default                    = 0,
	GLT_ConveyorBelt               = 1,
	GLT_MAX                        = 2
};


// Enum FactoryGame.ECustomMovementMode
enum class ECustomMovementMode : uint8_t
{
	CMM_None                       = 0,
	CMM_Ladder                     = 1,
	CMM_PipeHyper                  = 2,
	CMM_MAX                        = 3
};


// Enum FactoryGame.EDeferredCollisionChange
enum class EDeferredCollisionChange : uint8_t
{
	DCC_None                       = 0,
	DCC_TURN_ON                    = 1,
	DCC_TURN_OFF                   = 2,
	DCC_MAX                        = 3
};


// Enum FactoryGame.ECameraMode
enum class ECameraMode : uint8_t
{
	ECM_None                       = 0,
	ECM_FirstPerson                = 1,
	ECM_ThirdPerson                = 2,
	ECM_MAX                        = 3
};


// Enum FactoryGame.EFGChatMessageType
enum class EFGChatMessageType : uint8_t
{
	CMT_PlayerMessage              = 0,
	CMT_SystemMessage              = 1,
	CMT_AdaMessage                 = 2,
	CMT_MAX                        = 3
};


// Enum FactoryGame.EFGColorGunTargetType
enum class EFGColorGunTargetType : uint8_t
{
	ECGT_noTarget                  = 0,
	ECGT_nonColorable              = 1,
	ECGT_validTarget               = 2,
	ECGT_sameColorSlot             = 3,
	ECGT_MAX                       = 4
};


// Enum FactoryGame.EFGCrateIconType
enum class EFGCrateIconType : uint8_t
{
	CIT_DeathIcon                  = 0,
	CIT_MAX                        = 1
};


// Enum FactoryGame.EMoveSpeed
enum class EMoveSpeed : uint8_t
{
	MS_Undefined                   = 0,
	MS_Walk                        = 1,
	MS_Run                         = 2,
	MS_Sprint                      = 3,
	MS_MAX                         = 4
};


// Enum FactoryGame.EEnabled
enum class EEnabled : uint8_t
{
	E_Enabled                      = 0,
	E_Disabled                     = 1,
	E_Unknown                      = 2,
	E_MAX                          = 3
};


// Enum FactoryGame.EPlayOnDamageEvent
enum class EPlayOnDamageEvent : uint8_t
{
	PODE_OnTakeAnyDamage           = 0,
	PODE_OnTakePointDamage         = 1,
	PODE_OnTakeRadialDamage        = 2,
	PODE_MAX                       = 3
};


// Enum FactoryGame.EOverrideSetting
enum class EOverrideSetting : uint8_t
{
	OS_Additive                    = 0,
	OS_Override                    = 1,
	OS_MAX                         = 2
};


// Enum FactoryGame.EDockStationType
enum class EDockStationType : uint8_t
{
	DST_NONE                       = 0,
	DST_TRUCK                      = 1,
	DST_TRAIN                      = 2,
	DST_LAST_ENUM                  = 3,
	DST_MAX                        = 4
};


// Enum FactoryGame.EIgnore
enum class EIgnore : uint8_t
{
	I_NONE                         = 0,
	I_FALSE                        = 1,
	I_NOT_VALID                    = 2,
	I_NO_PATH                      = 3,
	I_LastEnum                     = 4,
	I_MAX                          = 5
};


// Enum FactoryGame.EEquipmentSlot
enum class EEquipmentSlot : uint8_t
{
	ES_NONE                        = 0,
	ES_ARMS                        = 1,
	ES_BACK                        = 2,
	ES_MAX                         = 3
};


// Enum FactoryGame.EErrorResponse
enum class EErrorResponse : uint8_t
{
	ER_NonIntrusivePopup           = 0,
	ER_SendToMainMenu              = 1,
	ER_Quit                        = 2,
	ER_MAX                         = 3
};


// Enum FactoryGame.EFactoryConnectionDirection
enum class EFactoryConnectionDirection : uint8_t
{
	FCD_INPUT                      = 0,
	FCD_OUTPUT                     = 1,
	FCD_ANY                        = 2,
	FCD_SNAP_ONLY                  = 3,
	FCD_MAX                        = 4
};


// Enum FactoryGame.EFactoryConnectionConnector
enum class EFactoryConnectionConnector : uint8_t
{
	FCC_CONVEYOR                   = 0,
	FCC_PIPE                       = 1,
	FCC_MAX                        = 2
};


// Enum FactoryGame.EFreightCargoType
enum class EFreightCargoType : uint8_t
{
	FCT_NONE                       = 0,
	FCT_Standard                   = 1,
	FCT_Liquid                     = 2,
	FCT_MAX                        = 3
};


// Enum FactoryGame.EHologramScrollMode
enum class EHologramScrollMode : uint8_t
{
	HSM_NONE                       = 0,
	HSM_ROTATE                     = 1,
	HSM_RAISE_LOWER                = 2,
	HSM_SPLINE_PATH_MODE           = 3,
	HSM_MAX                        = 4
};


// Enum FactoryGame.ECrosshairState
enum class ECrosshairState : uint8_t
{
	ECS_Default                    = 0,
	ECS_GeneralUse                 = 1,
	ECS_PickUp                     = 2,
	ECS_Vehicle                    = 3,
	ECS_Weapon                     = 4,
	ECS_Workbench                  = 5,
	ECS_Dismantle                  = 6,
	ECS_Build                      = 7,
	ECS_Custom                     = 8,
	ECS_MAX                        = 9
};


// Enum FactoryGame.EStackSize
enum class EStackSize : uint8_t
{
	SS_ONE                         = 0,
	SS_SMALL                       = 1,
	SS_MEDIUM                      = 2,
	SS_BIG                         = 3,
	SS_HUGE                        = 4,
	SS_FLUID                       = 5,
	SS_LAST_ENUM                   = 6,
	SS_MAX                         = 7
};


// Enum FactoryGame.EResourceForm
enum class EResourceForm : uint8_t
{
	RF_INVALID                     = 0,
	RF_SOLID                       = 1,
	RF_LIQUID                      = 2,
	RF_GAS                         = 3,
	RF_HEAT                        = 4,
	RF_LAST_ENUM                   = 5,
	RF_MAX                         = 6
};


// Enum FactoryGame.EMultipleUnitControl
enum class EMultipleUnitControl : uint8_t
{
	MUC_Disabled                   = 0,
	MUC_Master                     = 1,
	MUC_Slave                      = 2,
	MUC_MAX                        = 3
};


// Enum FactoryGame.EMessageType
enum class EMessageType : uint8_t
{
	MT_PIMARY                      = 0,
	MT_TUTORIAL                    = 1,
	MT_SPAM                        = 2,
	MT_UNDEFINED                   = 3,
	MT_MAX                         = 4
};


// Enum FactoryGame.EHeightDataType
enum class EHeightDataType : uint8_t
{
	HDT_NONE                       = 0,
	HDT_TERRAIN                    = 1,
	HDT_WATER                      = 2,
	HDT_FOLIAGE                    = 3,
	HDT_MAX                        = 4
};


// Enum FactoryGame.ECantJoinReason
enum class ECantJoinReason : uint8_t
{
	CJR_InvalidGame                = 0,
	CJR_NotInAGame                 = 1,
	CJR_PlayingOtherGame           = 2,
	CJR_PrivateGame                = 3,
	CJR_DifferentVersion           = 4,
	CJR_FullGame                   = 5,
	CJR_Ok                         = 6,
	CJR_MAX                        = 7
};


// Enum FactoryGame.ECycleDirection
enum class ECycleDirection : uint8_t
{
	CD_Forward                     = 0,
	CD_Backward                    = 1,
	CD_MAX                         = 2
};


// Enum FactoryGame.ESessionVisibility
enum class ESessionVisibility : uint8_t
{
	SV_Private                     = 0,
	SV_FriendsOnly                 = 1,
	SV_Invalid                     = 2,
	SV_MAX                         = 3
};


// Enum FactoryGame.EOptionType
enum class EOptionType : uint8_t
{
	OT_Checkbox                    = 0,
	OT_IntegerSelection            = 1,
	OT_FloatSelection              = 2,
	OT_Slider                      = 3,
	OT_MAX                         = 4
};


// Enum FactoryGame.EOptionCategory
enum class EOptionCategory : uint8_t
{
	OC_Gameplay                    = 0,
	OC_Audio                       = 1,
	OC_Video                       = 2,
	OC_Controls                    = 3,
	OC_UserInterface               = 4,
	OC_MAX                         = 5
};


// Enum FactoryGame.EPipeConnectionType
enum class EPipeConnectionType : uint8_t
{
	PCT_ANY                        = 0,
	PCT_CONSUMER                   = 1,
	PCT_PRODUCER                   = 2,
	PCT_SNAP_ONLY                  = 3,
	PCT_MAX                        = 4
};


// Enum FactoryGame.EPopupId
enum class EPopupId : uint8_t
{
	PID_OK                         = 0,
	PID_OK_CANCEL                  = 1,
	PID_NONE                       = 2,
	PID_MAX                        = 3
};


// Enum FactoryGame.ERailroadVehicleCoupler
enum class ERailroadVehicleCoupler : uint8_t
{
	RVC_FRONT                      = 0,
	RVC_BACK                       = 1,
	RVC_MAX                        = 2
};


// Enum FactoryGame.EResourcePurity
enum class EResourcePurity : uint8_t
{
	RP_Inpure                      = 0,
	RP_Normal                      = 1,
	RP_Pure                        = 2,
	RP_MAX                         = 3
};


// Enum FactoryGame.EResourceAmount
enum class EResourceAmount : uint8_t
{
	RA_Poor                        = 0,
	RA_Normal                      = 1,
	RA_Rich                        = 2,
	RA_Infinite                    = 3,
	RA_MAX                         = 4
};


// Enum FactoryGame.ESaveSortDirection
enum class ESaveSortDirection : uint8_t
{
	SSD_Ascending                  = 0,
	SSD_Descending                 = 1,
	SSD_MAX                        = 2
};


// Enum FactoryGame.ESaveSortMode
enum class ESaveSortMode : uint8_t
{
	SSM_Name                       = 0,
	SSM_Time                       = 1,
	SSM_MAX                        = 2
};


// Enum FactoryGame.ESaveState
enum class ESaveState : uint8_t
{
	SS_Unsupported                 = 0,
	SS_Volatile                    = 1,
	SS_Supported                   = 2,
	SS_Newer                       = 3,
	SS_MAX                         = 4
};


// Enum FactoryGame.ESaveExists
enum class ESaveExists : uint8_t
{
	SE_DoesntExist                 = 0,
	SE_ExistsInSameSession         = 1,
	SE_ExistsInOtherSession        = 2,
	SE_MAX                         = 3
};


// Enum FactoryGame.ESchematicType
enum class ESchematicType : uint8_t
{
	EST_Custom                     = 0,
	EST_Cheat                      = 1,
	EST_Tutorial                   = 2,
	EST_Milestone                  = 3,
	EST_Alternate                  = 4,
	EST_Story                      = 5,
	EST_MAM                        = 6,
	EST_ResourceSink               = 7,
	EST_HardDrive                  = 8,
	EST_MAX                        = 9
};


// Enum FactoryGame.ESchematicCategory
enum class ESchematicCategory : uint8_t
{
	ESC_LOGISTICS                  = 0,
	ESC_PRODUCTION                 = 1,
	ESC_EQUIPMENT                  = 2,
	ESC_ORGANISATION               = 3,
	ESC_MAX                        = 4
};


// Enum FactoryGame.ESignElementType
enum class ESignElementType : uint8_t
{
	ESET_Scene                     = 0,
	ESET_Text                      = 1,
	ESET_SpriteIcon                = 2,
	ESET_MAX                       = 3
};


// Enum FactoryGame.EHorizontalSignTextAlignment
enum class EHorizontalSignTextAlignment : uint8_t
{
	EHSTA_Left                     = 0,
	EHSTA_Center                   = 1,
	EHSTA_Right                    = 2,
	EHSTA_MAX                      = 3
};


// Enum FactoryGame.ESplineHologramBuildStep
enum class ESplineHologramBuildStep : uint8_t
{
	SHBS_FindStart                 = 0,
	SHBS_PlacePoleOrSnapEnding     = 1,
	SHBS_AdjustPole                = 2,
	SHBS_MAX                       = 3
};


// Enum FactoryGame.ESelfDrivingLocomotiveState
enum class ESelfDrivingLocomotiveState : uint8_t
{
	SDLS_Idle                      = 0,
	SDLS_FollowPath                = 1,
	SDLS_Docking                   = 2,
	SDLS_DockingCompleted          = 3,
	SDLS_MAX                       = 4
};


// Enum FactoryGame.ERailroadSignalAspect
enum class ERailroadSignalAspect : uint8_t
{
	RSA_None                       = 0,
	RSA_Clear                      = 1,
	RSA_ClearThenStop              = 2,
	RSA_Stop                       = 3,
	RSA_Dock                       = 4,
	RSA_MAX                        = 5
};


// Enum FactoryGame.ESelfDrivingLocomotiveError
enum class ESelfDrivingLocomotiveError : uint8_t
{
	SDLE_NoError                   = 0,
	SDLE_NoPower                   = 1,
	SDLE_NoTimeTable               = 2,
	SDLE_InvalidNextStop           = 3,
	SDLE_InvalidLocomotivePlacement = 4,
	SDLE_NoPath                    = 5,
	SDLE_MAX                       = 6
};


// Enum FactoryGame.ETrainPlatformConnectionType
enum class ETrainPlatformConnectionType : uint8_t
{
	ETPC_Out                       = 0,
	ETPC_In                        = 1,
	ETPC_Neutral                   = 2,
	ETPC_MAX                       = 3
};


// Enum FactoryGame.EIntroTutorialSteps
enum class EIntroTutorialSteps : uint8_t
{
	ITS_NONE                       = 0,
	ITS_INTRO                      = 1,
	ITS_DISMANTLE_POD              = 2,
	ITS_STUN_SPEAR                 = 3,
	ITS_IRON_ORE                   = 4,
	ITS_HUB                        = 5,
	ITS_HUB_LVL1                   = 6,
	ITS_HUB_LVL101                 = 7,
	ITS_HUB_LVL2                   = 8,
	ITS_HUB_LVL3                   = 9,
	ITS_HUB_LVL4                   = 10,
	ITS_HUB_LVL5                   = 11,
	ITS_DONE                       = 12,
	ITS_MAX                        = 13
};


// Enum FactoryGame.EGameVersion
enum class EGameVersion : uint8_t
{
	GV_Main                        = 0,
	GV_Experimental                = 1,
	GV_Other                       = 2,
	GV_MAX                         = 3
};


// Enum FactoryGame.EWheelOrder6W
enum class EWheelOrder6W : uint8_t
{
	eFRONT_LEFT                    = 0,
	eFRONT_RIGHT                   = 1,
	eMID_LEFT                      = 2,
	eMID_RIGHT                     = 3,
	eREAR_LEFT                     = 4,
	eREAR_RIGHT                    = 5,
	EWheelOrder6W_MAX              = 6
};


// Enum FactoryGame.EIncludeInBuilds
enum class EIncludeInBuilds : uint8_t
{
	IIB_Never                      = 0,
	IIB_Development                = 1,
	IIB_PrivateBuilds              = 2,
	IIB_PublicBuilds               = 3,
	IIB_MAX                        = 4
};


// Enum FactoryGame.ERailroadPathFindingResult
enum class ERailroadPathFindingResult : uint8_t
{
	RNQR_Error                     = 0,
	RNQR_Unreachable               = 1,
	RNQR_Success                   = 2,
	RNQR_MAX                       = 3
};


// Enum FactoryGame.EUndefinedBool
enum class EUndefinedBool : uint8_t
{
	UB_Undefined                   = 0,
	UB_False                       = 1,
	UB_True                        = 2,
	UB_MAX                         = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct FactoryGame.SaveHeader
// 0x0060
struct FSaveHeader
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct FactoryGame.SessionSaveStruct
// 0x0020
struct FSessionSaveStruct
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	TArray<struct FSaveHeader>                         SaveHeaders;                                              // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FactoryGame.ItemView
// 0x0014
struct FItemView
{
	float                                              Distance;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FocalOffset;                                              // 0x0004(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraPitch;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct FactoryGame.AudioSubtitlePair
// 0x0028
struct FAudioSubtitlePair
{
	class UAkAudioEvent*                               audioEvent;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       Subtitle;                                                 // 0x0008(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UClass*                                      SenderClass;                                              // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct FactoryGame.PopupData
// 0x0068
struct FPopupData
{
	struct FText                                       Title;                                                    // 0x0000(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       Body;                                                     // 0x0018(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TEnumAsByte<EPopupId>                              ID;                                                       // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class UClass*                                      PopupClass;                                               // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     Instigator;                                               // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptDelegate                             PopupConfirmClickedDelegate;                              // 0x0048(0x0014) (ZeroConstructor, InstancedReference, Deprecated)
	struct FScriptDelegate                             PopupClosedDelegate;                                      // 0x0058(0x0014) (ZeroConstructor, InstancedReference)
};

// ScriptStruct FactoryGame.UseState
// 0x0028
struct FUseState
{
	class UFGUseState*                                 AdditionalData;                                           // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     UseLocation;                                              // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UPrimitiveComponent*                         UseComponent;                                             // 0x0018(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      State;                                                    // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactoryGame.FactoryTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FFactoryTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct FactoryGame.NetConstructionID
// 0x0006
struct FNetConstructionID
{
	int8_t                                             NetPlayerID;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) MISSED OFFSET
	uint16_t                                           Server_ID;                                                // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           Client_ID;                                                // 0x0004(0x0002) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactoryGame.SharedInventoryStatePtr
// 0x0010
struct FSharedInventoryStatePtr
{
	class AActor*                                      ActorPtr;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct FactoryGame.InventoryItem
// 0x0018
struct FInventoryItem
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSharedInventoryStatePtr                    ItemState;                                                // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct FactoryGame.InventoryStack
// 0x0020
struct FInventoryStack
{
	struct FInventoryItem                              Item;                                                     // 0x0000(0x0018) (Edit, SaveGame)
	int                                                NumItems;                                                 // 0x0018(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct FactoryGame.ConnectionItemStruct
// 0x0030
struct FConnectionItemStruct
{
	class UFGFactoryConnectionComponent*               Connection;                                               // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FInventoryItem                              Item;                                                     // 0x0008(0x0018)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct FactoryGame.ConveyorSpaceData
// 0x0008
struct FConveyorSpaceData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FactoryGame.FluidBox
// 0x0058
struct FFluidBox
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct FactoryGame.ConstructHologramMessage
// 0x0030
struct FConstructHologramMessage
{
	struct FNetConstructionID                          ConstructionID;                                           // 0x0000(0x0006)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	class UClass*                                      Recipe;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      UpgradeActor;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              SerializedHologramData;                                   // 0x0018(0x0010) (ZeroConstructor)
	int64_t                                            NumBits;                                                  // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactoryGame.ConveyorBeltItems
// 0x0178
struct FConveyorBeltItems
{
	unsigned char                                      UnknownData00[0x178];                                     // 0x0000(0x0178) MISSED OFFSET
};

// ScriptStruct FactoryGame.FoundationSideSelectionFlags
// 0x0001
struct FFoundationSideSelectionFlags
{
	unsigned char                                      Front : 1;                                                // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      Right : 1;                                                // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      Back : 1;                                                 // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      Left : 1;                                                 // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      Top : 1;                                                  // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      Bottom : 1;                                               // 0x0000(0x0001) (Edit, DisableEditOnInstance)
};

// ScriptStruct FactoryGame.QuantizedPipelineIndicatorData
// 0x0002
struct FQuantizedPipelineIndicatorData
{
	int8_t                                             PackedFlow;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PackedContent;                                            // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactoryGame.StringPair
// 0x0020
struct FStringPair
{
	class FString                                      WwiseSafeName;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      ActualName;                                               // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct FactoryGame.QuantizedPumpIndicatorData
// 0x0002
struct FQuantizedPumpIndicatorData
{
	int8_t                                             PackedFlow;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PackedPressure;                                           // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactoryGame.QuantizedReservoirIndicatorData
// 0x0003
struct FQuantizedReservoirIndicatorData
{
	unsigned char                                      PackedFlowFill;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PackedFlowDrain;                                          // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PackedContent;                                            // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactoryGame.SignWallData
// 0x0018
struct FSignWallData
{
	int                                                TextColorIndex;                                           // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                BackgroundColorIndex;                                     // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	class FString                                      SignText;                                                 // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor, SaveGame)
};

// ScriptStruct FactoryGame.ItemAmount
// 0x0010
struct FItemAmount
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                amount;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FactoryGame.SplitterSortRule
// 0x0010
struct FSplitterSortRule
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                OutputIndex;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FactoryGame.SignElementConstraints
// 0x0018
struct FSignElementConstraints
{
	struct FVector2D                                   MinTranslationOffset;                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   MaxTranslationOffset;                                     // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinScale;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxScale;                                                 // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct FactoryGame.SignData
// 0x0028
struct FSignData
{
	TArray<class UFGSignLayer*>                        SignLayers;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame)
	TArray<class UFGSignElementData*>                  SignElementData;                                          // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame)
	int                                                BackgroundColorIndex;                                     // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct FactoryGame.DistanceBasedTickRate
// 0x0008
struct FDistanceBasedTickRate
{
	float                                              Distance;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TickRate;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct FactoryGame.ConnectionRepresentation
// 0x0010
struct FConnectionRepresentation
{
	class UFGConnectionComponent*                      mConnectionComponent;                                     // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        mConnectionRepresentation;                                // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct FactoryGame.FactoryClearanceData
// 0x0028
struct FFactoryClearanceData
{
	class AFGBuildableFactory*                         FACTORY;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ClearanceComponent;                                       // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FConnectionRepresentation>           mConnectionComponents;                                    // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct FactoryGame.DismantleRefunds
// 0x0018
struct FDismantleRefunds
{
	uint32_t                                           NumPendingActors;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FInventoryStack>                     PeekDismantleRefund;                                      // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct FactoryGame.PickedUpInstance
// 0x0018
struct FPickedUpInstance
{
	class UStaticMesh*                                 InstanceMesh;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct FactoryGame.FootstepEffect
// 0x0018
struct FFootstepEffect
{
	class UParticleSystem*                             Particle;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInterface*>                  GroundDecals;                                             // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct FactoryGame.FootstepEffectSurface
// 0x0020
struct FFootstepEffectSurface
{
	TEnumAsByte<EPhysicalSurface>                      Surface;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FFootstepEffect                             Effect;                                                   // 0x0008(0x0018) (Edit, DisableEditOnInstance)
};

// ScriptStruct FactoryGame.PlayerPipeHyperData
// 0x00B0
struct FPlayerPipeHyperData
{
	class AActor*                                      mTravelingPipeHyper;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
	float                                              mMinPipeSpeed;                                            // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mPipeGravityStrength;                                     // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mPipeFriction;                                            // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mPipeConstantAcceleration;                                // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mPipeCurveDamping;                                        // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     mPipeDirectionLast;                                       // 0x004C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	struct FVector                                     mPipeDirection;                                           // 0x0058(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	float                                              mDistanceToEndOfPipe;                                     // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	float                                              mCombinedLengthTillEndOfPipesINcludingCurrent;            // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	float                                              mMaxCurveDiffThisFrame;                                   // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	float                                              mMaxCurveDiffSmooth;                                      // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	float                                              mPipeTempMinSpeed;                                        // 0x0074(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	struct FVector                                     mFulPipeEndPoint;                                         // 0x0078(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	struct FVector                                     mFulPipeEndDir;                                           // 0x0084(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0090(0x0020) MISSED OFFSET
};

// ScriptStruct FactoryGame.DisabledInputGate
// 0x0002
struct FDisabledInputGate
{
	unsigned char                                      mBuildGun : 1;                                            // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      mDismantle : 1;                                           // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      mFlashLight : 1;                                          // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      mResourceScanner : 1;                                     // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      mOpenCodex : 1;                                           // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      mInventory : 1;                                           // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      mToggleMap : 1;                                           // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      mHotbar : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      mJump : 1;                                                // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      mChat : 1;                                                // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      mUse : 1;                                                 // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      mVehicleRecording : 1;                                    // 0x0001(0x0001) (Edit, BlueprintVisible)
};

// ScriptStruct FactoryGame.ChatMessageStruct
// 0x0048
struct FChatMessageStruct
{
	class FString                                      MessageString;                                            // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	float                                              ServerTimeStamp;                                          // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class AFGPlayerState*                              Sender;                                                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0020(0x0020) MISSED OFFSET
	EFGChatMessageType                                 MessageType;                                              // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct FactoryGame.FGKeyMapping
// 0x0058
struct FFGKeyMapping
{
	struct FInputActionKeyMapping                      ActionKeyMapping;                                         // 0x0000(0x0028) (BlueprintVisible, BlueprintReadOnly)
	struct FInputAxisKeyMapping                        AxisKeyMapping;                                           // 0x0028(0x0028) (BlueprintVisible, BlueprintReadOnly)
	bool                                               IsAxisMapping;                                            // 0x0050(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct FactoryGame.PoleHeightMesh
// 0x0010
struct FPoleHeightMesh
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Height;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FactoryGame.MoveSpeedPair
// 0x0008
struct FMoveSpeedPair
{
	EMoveSpeed                                         MoveSpeedType;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Speed;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct FactoryGame.SpawnData
// 0x0028
struct FSpawnData
{
	struct FVector                                     SpawnLocation;                                            // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class AFGCreature*                                 Creature;                                                 // 0x0010(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               WasKilled;                                                // 0x0018(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                KilledOnDayNr;                                            // 0x001C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	class UClass*                                      CreatureClassOverride;                                    // 0x0020(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct FactoryGame.ProjectileData
// 0x0030
struct FProjectileData
{
	class UClass*                                      ProjectileClass;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              ProjectileLifeSpan;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              ProjectileStickSpan;                                      // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                ExplosionDamage;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              ExplosionRadius;                                          // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                ImpactDamage;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               ShouldExplodeOnImpact;                                    // 0x001C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               CanTriggerExplodeBySameClass;                             // 0x001D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               ExplodeAtEndOfLife;                                       // 0x001E(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x001F(0x0001) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	class UClass*                                      DamageTypeExplode;                                        // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
};

// ScriptStruct FactoryGame.ItemDrop
// 0x0010
struct FItemDrop
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FInt32Interval                              NumItems;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactoryGame.DropPackage
// 0x0038
struct FDropPackage
{
	struct FText                                       DropDisplayText;                                          // 0x0000(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              DropChance;                                               // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FItemDrop>                           Items;                                                    // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UClass*                                      RequiredSchematic;                                        // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactoryGame.OptionRowData
// 0x0120
struct FOptionRowData
{
	struct FText                                       OptionName;                                               // 0x0000(0x0028) (Edit, BlueprintVisible)
	EOptionType                                        OptionType;                                               // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	class FString                                      ConsoleVariable;                                          // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               DefaultCheckBoxValue;                                     // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              MinValue;                                                 // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinDisplayValue;                                          // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDisplayValue;                                          // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxFractionalDigits;                                      // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowZeroAsOff;                                            // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              DefaultSliderValue;                                       // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<class FString, int>                           IntegerSelectionValues;                                   // 0x0050(0x0050) (BlueprintVisible, ZeroConstructor)
	TMap<class FString, float>                         FloatSelectionValues;                                     // 0x00A0(0x0050) (BlueprintVisible, ZeroConstructor)
	class FString                                      DefaultSelectionValue;                                    // 0x00F0(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               UpdateInstantly;                                          // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RequireRestart;                                           // 0x0101(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0102(0x0006) MISSED OFFSET
	struct FText                                       Tooltip;                                                  // 0x0108(0x0028) (Edit, BlueprintVisible)
};

// ScriptStruct FactoryGame.AggroEntry
// 0x0030
struct FAggroEntry
{
	TScriptInterface<class UFGAggroTargetInterface>    aggroTarget;                                              // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0010(0x0004) MISSED OFFSET
	float                                              Aggro;                                                    // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0018(0x000C) MISSED OFFSET
	float                                              LastHurtTime;                                             // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EIgnore                                            Ignore;                                                   // 0x0028(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct FactoryGame.FeetOffset
// 0x000C
struct FFeetOffset
{
	unsigned char                                      FeetIndex;                                                // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              OffsetZ;                                                  // 0x0004(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               IsValidOffset;                                            // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct FactoryGame.ViscosityToPuddlePair
// 0x0008
struct FViscosityToPuddlePair
{
	float                                              Viscosity;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Puddle;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct FactoryGame.AnimInstanceProxyFactory
// 0x0040 (0x06D0 - 0x0690)
struct FAnimInstanceProxyFactory : public FAnimInstanceProxy
{
	float                                              mDeltaTime;                                               // 0x0690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              mProductionProgress;                                      // 0x0694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              mProductionCycleTime;                                     // 0x0698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              mAnimPlayRate;                                            // 0x069C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              mRampUpTime;                                              // 0x06A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              mTimeNotProducing;                                        // 0x06A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              mRampDownTime;                                            // 0x06A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              mLastProductionProgress;                                  // 0x06AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              mRecipePlayRate;                                          // 0x06B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              mCycleTime;                                               // 0x06B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              mDefaultCycleTime;                                        // 0x06B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              mStartFrame;                                              // 0x06BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              mLoadPercentage;                                          // 0x06C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               mHasFuel;                                                 // 0x06C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      mHasPower : 1;                                            // 0x06C5(0x0001) (Edit, BlueprintVisible, Transient)
	unsigned char                                      mIsProducing : 1;                                         // 0x06C5(0x0001) (Edit, BlueprintVisible, Transient)
	unsigned char                                      mIsActivated : 1;                                         // 0x06C5(0x0001) (Edit, BlueprintVisible, Transient)
	unsigned char                                      mCycleComplete : 1;                                       // 0x06C5(0x0001) (Edit, BlueprintVisible, Transient)
	unsigned char                                      mUseRampUp : 1;                                           // 0x06C5(0x0001) (Edit, BlueprintVisible, Transient)
	unsigned char                                      mIsGenerator : 1;                                         // 0x06C5(0x0001) (Edit, BlueprintVisible, Transient)
	unsigned char                                      mIsFuelGeneratorOnline : 1;                               // 0x06C5(0x0001) (Edit, BlueprintVisible, Transient)
	unsigned char                                      UnknownData00[0xA];                                       // 0x06C6(0x000A) MISSED OFFSET
};

// ScriptStruct FactoryGame.RemovedInstance
// 0x0044 (0x0050 - 0x000C)
struct FRemovedInstance : public FFastArraySerializerItem
{
	struct FVector_NetQuantize10                       Location;                                                 // 0x000C(0x000C)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0020(0x0030) (SaveGame, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct FactoryGame.RemovedInstanceArray
// 0x0018 (0x00C8 - 0x00B0)
struct FRemovedInstanceArray : public FFastArraySerializer
{
	class AFGFoliageRemoval*                           FoliageRemover;                                           // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FRemovedInstance>                    Items;                                                    // 0x00B8(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct FactoryGame.ItemDropWithChance
// 0x0018
struct FItemDropWithChance
{
	float                                              DropChance;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FItemDrop                                   Drop;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct FactoryGame.Building
// 0x0010
struct FBuilding
{
	TArray<class AFGBuildable*>                        Buildables;                                               // 0x0000(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct FactoryGame.VehiclePhysicsData
// 0x0050
struct FVehiclePhysicsData
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct FactoryGame.RailroadTrackPosition
// 0x0010
struct FRailroadTrackPosition
{
	TWeakObjectPtr<class AFGBuildableRailroadTrack>    Track;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Offset;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Forward;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactoryGame.FGEngineCommon
// 0x0020
struct FFGEngineCommon
{
	class UEngine*                                     Engine;                                                   // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UWorld*>                              CreatedWorlds;                                            // 0x0008(0x0010) (ZeroConstructor, Transient)
	class UFGAtmosphereUpdater*                        HeightFogUpdater;                                         // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactoryGame.OnJoinSessionData
// 0x00C8
struct FOnJoinSessionData
{
	class UFGLocalPlayer*                              LocalPlayer;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0008(0x00C0) MISSED OFFSET
};

// ScriptStruct FactoryGame.FGModPackage
// 0x0040
struct FFGModPackage
{
	struct FName                                       ModPath;                                                  // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasFGMods;                                                // 0x0008(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class FString                                      Author;                                                   // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
	class FString                                      Version;                                                  // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor)
	class FString                                      Description;                                              // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct FactoryGame.FGGameNetworkErrorMsg
// 0x0018
struct FFGGameNetworkErrorMsg
{
	TEnumAsByte<ENetworkFailure>                       errorType;                                                // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class FString                                      errorMsg;                                                 // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct FactoryGame.PhaseTierInfo
// 0x0028
struct FPhaseTierInfo
{
	TEnumAsByte<EGamePhase>                            gamePhase;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                LastTierOfPhase;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       Name;                                                     // 0x0008(0x0028) (Edit, DisableEditOnInstance)
	class UClass*                                      PhaseUnlockedMessage;                                     // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct FactoryGame.PhaseCost
// 0x0018
struct FPhaseCost
{
	TEnumAsByte<EGamePhase>                            gamePhase;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FItemAmount>                         Cost;                                                     // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, SaveGame)
};

// ScriptStruct FactoryGame.FGBuildingColorSlotStruct
// 0x0008
struct FFGBuildingColorSlotStruct
{
	struct FColor                                      primary;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      secondary;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactoryGame.TutorialHintData
// 0x0038
struct FTutorialHintData
{
	EIntroTutorialSteps                                ID;                                                       // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       Title;                                                    // 0x0008(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<struct FText>                               HintTexts;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      MESSAGE;                                                  // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct FactoryGame.AudioVolumeMap
// 0x0018
struct FAudioVolumeMap
{
	class FString                                      Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	float                                              Value;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct FactoryGame.FGOnlineFriend
// 0x0010
struct FFGOnlineFriend
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FactoryGame.WheelsetSetup
// 0x0010
struct FWheelsetSetup
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanSwivel;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct FactoryGame.CouplerSetup
// 0x0010
struct FCouplerSetup
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FactoryGame.ReplicatedRailroadVehicleState
// 0x0014
struct FReplicatedRailroadVehicleState
{
	int                                                ReverserInput;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SteeringInput;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ThrottleInput;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DynamicBrakeInput;                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AirBrakeInput;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactoryGame.RailroadVehicleInputRate
// 0x0008
struct FRailroadVehicleInputRate
{
	float                                              RiseRate;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FallRate;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactoryGame.ColorMapAreaPair
// 0x0018
struct FColorMapAreaPair
{
	class UClass*                                      mapArea;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MinX;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MinY;                                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxX;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxY;                                                     // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactoryGame.FogOfWarQueuePair
// 0x0010
struct FFogOfWarQueuePair
{
	class AFGPlayerController*                         PlayerController;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct FactoryGame.CachedMaterialArray
// 0x0020
struct FCachedMaterialArray
{
	TArray<class UMaterialInterface*>                  MaterialInterfaces;                                       // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FName>                               MeshFNames;                                               // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct FactoryGame.MaterialFlowGraph
// 0x0010
struct FMaterialFlowGraph
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FactoryGame.MaterialFlowConnection
// 0x0018
struct FMaterialFlowConnection
{
	class UClass*                                      Descriptor;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Flow;                                                     // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TotalCount;                                               // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TotalFlow;                                                // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactoryGame.MaterialFlowNode
// 0x0030
struct FMaterialFlowNode
{
	class UClass*                                      Recipe;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Depth;                                                    // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ProducerCount;                                            // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FMaterialFlowConnection>             Outputs;                                                  // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FMaterialFlowConnection>             Inputs;                                                   // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FactoryGame.OnlinePresence
// 0x0010
struct FOnlinePresence
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FactoryGame.FGOnlineSessionSettings
// 0x0058
struct FFGOnlineSessionSettings
{
	struct FUniqueNetIdRepl                            HostId;                                                   // 0x0000(0x0028)
	int                                                NumConnectedPlayers;                                      // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PlayDuration;                                             // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class FString                                      BuildVersion;                                             // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      SessionName;                                              // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	ECachedNATType                                     natType;                                                  // 0x0050(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct FactoryGame.PendingInvite
// 0x00D8
struct FPendingInvite
{
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0000(0x00D8) MISSED OFFSET
};

// ScriptStruct FactoryGame.UserFeedbackFrontEndData
// 0x0028
struct FUserFeedbackFrontEndData
{
	bool                                               isSatisfactory;                                           // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class FString                                      typeOfFeedback;                                           // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
	class FString                                      Body;                                                     // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct FactoryGame.NewsFeedMap
// 0x0018
struct FNewsFeedMap
{
	EGameVersion                                       GameVersion;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class FString                                      URL;                                                      // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct FactoryGame.ScannableDetails
// 0x0058
struct FScannableDetails
{
	class UClass*                                      ScannableClass;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       DisplayText;                                              // 0x0008(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FColor                                      ScannerLightColor;                                        // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PreCacheAllOfType;                                        // 0x0024(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldOverrideDetectionRange;                             // 0x0025(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	float                                              NewDetectionRange;                                        // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TSoftObjectPtr<class UClass>                       RequiredSchematic;                                        // 0x0030(0x0028) (Edit, DisableEditOnInstance)
};

// ScriptStruct FactoryGame.CachedMaterialInterfaceArray
// 0x0010
struct FCachedMaterialInterfaceArray
{
	TArray<class UMaterialInterface*>                  MaterialInterfaces;                                       // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct FactoryGame.CachedMeshToMaterialObject
// 0x0050
struct FCachedMeshToMaterialObject
{
	TMap<class UMeshComponent*, struct FCachedMaterialInterfaceArray> CachedMaterialInterfaces;                                 // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct FactoryGame.CachedSplineMeshToMaterialObject
// 0x0060
struct FCachedSplineMeshToMaterialObject
{
	TMap<class USplineMeshComponent*, struct FCachedMaterialInterfaceArray> CachedMaterialInterfaces;                                 // 0x0000(0x0050) (ZeroConstructor)
	TArray<class UMaterialInterface*>                  InstancedMaterialInterfaces;                              // 0x0050(0x0010) (ZeroConstructor)
};

// ScriptStruct FactoryGame.SplineSupportPair
// 0x0010
struct FSplineSupportPair
{
	class UClass*                                      SplineSupportRecipeClass;                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SplineRecipeClass;                                        // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct FactoryGame.SlotData
// 0x0020
struct FSlotData
{
	struct FLinearColor                                PingColor;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                NametagColor;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct FactoryGame.MessageData
// 0x0010
struct FMessageData
{
	bool                                               WasRead;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UClass*                                      MessageClass;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
};

// ScriptStruct FactoryGame.PowerGraphPoint
// 0x000C
struct FPowerGraphPoint
{
	float                                              Consumed;                                                 // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Produced;                                                 // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ProductionCapacity;                                       // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactoryGame.PowerCircuitStats
// 0x0048
struct FPowerCircuitStats
{
	float                                              StatIntervalTime;                                         // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              StatHistoryTime;                                          // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	float                                              PowerProductionCapacity;                                  // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              PowerProduced;                                            // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              PowerConsumed;                                            // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x14];                                      // 0x001C(0x0014) MISSED OFFSET
	TArray<struct FPowerGraphPoint>                    Items;                                                    // 0x0030(0x0010) (ZeroConstructor)
	int8_t                                             FirstIndex;                                               // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct FactoryGame.MapAreaParticleCollection
// 0x0018
struct FMapAreaParticleCollection
{
	TArray<class UClass*>                              Areas;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                             Particle;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct FactoryGame.RadioactiveSource
// 0x0018
struct FRadioactiveSource
{
	class USceneComponent*                             AttachRoot;                                               // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FactoryGame.TrackGraph
// 0x0020
struct FTrackGraph
{
	TArray<class AFGBuildableRailroadTrack*>           TRACKS;                                                   // 0x0000(0x0010) (ZeroConstructor)
	class UFGPowerConnectionComponent*                 ThirdRail;                                                // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct FactoryGame.TimeTableStop
// 0x0010
struct FTimeTableStop
{
	class AFGTrainStationIdentifier*                   Station;                                                  // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Duration;                                                 // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FactoryGame.AnimInstanceProxyRailRoadVehicle
// 0x0090 (0x0720 - 0x0690)
struct FAnimInstanceProxyRailRoadVehicle : public FAnimInstanceProxy
{
	float                                              mDeltaTime;                                               // 0x0690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    mFrontBogieRotation;                                      // 0x0694(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    mBackBogieRotation;                                       // 0x06A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    mWheelRotation;                                           // 0x06AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    mFrontConnectorRotation;                                  // 0x06B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     mFrontConnectorTranslation;                               // 0x06C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    mBackConnectorRotation;                                   // 0x06D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     mBackConnectorTranslation;                                // 0x06DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    mTrackCurvature;                                          // 0x06E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              mForwardSpeed;                                            // 0x06F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              mTractiveForce;                                           // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              mHandBrakeForce;                                          // 0x06FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              mThrottle;                                                // 0x0700(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              mBrakeForce;                                              // 0x0704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              mHandBrakeForceSpeed;                                     // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              mHandBrakeGlow;                                           // 0x070C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              mHandBrakeVfxSpawn;                                       // 0x0710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              mAGBrakePlayRate;                                         // 0x0714(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      mIsMoving : 1;                                            // 0x0718(0x0001) (Edit, BlueprintVisible, Transient)
	unsigned char                                      mIsUsingHandBrake : 1;                                    // 0x0718(0x0001) (Edit, BlueprintVisible, Transient)
	unsigned char                                      mIsLocomotive : 1;                                        // 0x0718(0x0001) (Edit, BlueprintVisible, Transient)
	unsigned char                                      mHasPower : 1;                                            // 0x0718(0x0001) (Edit, BlueprintVisible, Transient)
	unsigned char                                      mAGThrottleZero : 1;                                      // 0x0718(0x0001) (Edit, BlueprintVisible, Transient)
	unsigned char                                      mAGThrottlePositive : 1;                                  // 0x0718(0x0001) (Edit, BlueprintVisible, Transient)
	unsigned char                                      mAGStartToRunningTransition : 1;                          // 0x0718(0x0001) (Edit, BlueprintVisible, Transient)
	unsigned char                                      mAGHandBrakeTransition01 : 1;                             // 0x0718(0x0001) (Edit, BlueprintVisible, Transient)
	unsigned char                                      mAGHandBrakeTransition02 : 1;                             // 0x0719(0x0001) (Edit, BlueprintVisible, Transient)
	unsigned char                                      mAGBrakeForcePositive : 1;                                // 0x0719(0x0001) (Edit, BlueprintVisible, Transient)
	unsigned char                                      mAGBrakeToRunningTransition : 1;                          // 0x0719(0x0001) (Edit, BlueprintVisible, Transient)
	unsigned char                                      mAGHandBrakeReset01 : 1;                                  // 0x0719(0x0001) (Edit, BlueprintVisible, Transient)
	unsigned char                                      mAGHandBrakeReset02 : 1;                                  // 0x0719(0x0001) (Edit, BlueprintVisible, Transient)
	unsigned char                                      mAGHandBrakeStop : 1;                                     // 0x0719(0x0001) (Edit, BlueprintVisible, Transient)
	unsigned char                                      UnknownData00[0x6];                                       // 0x071A(0x0006) MISSED OFFSET
};

// ScriptStruct FactoryGame.ConnectionAlwaysRelevant_NodePair
// 0x0010
struct FConnectionAlwaysRelevant_NodePair
{
	class UNetConnection*                              NetConnection;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UReplicationGraphNode_AlwaysRelevant_ForConnection* Node;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactoryGame.ResearchData
// 0x0020
struct FResearchData
{
	class UClass*                                      schematic;                                                // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	class UClass*                                      InitiatingResearchTree;                                   // 0x0008(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<class UClass*>                              PendingRewards;                                           // 0x0010(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct FactoryGame.ResearchTime
// 0x0030
struct FResearchTime
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FResearchData                               ResearchData;                                             // 0x0008(0x0020) (SaveGame)
	float                                              ResearchCompleteTimestamp;                                // 0x0028(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct FactoryGame.ResearchRecipeReward
// 0x0030
struct FResearchRecipeReward
{
	TArray<struct FItemAmount>                         Products;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UClass*>                              ResearchRecipes;                                          // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UClass*>                              Schematics;                                               // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct FactoryGame.PurityTextPair
// 0x0020
struct FPurityTextPair
{
	struct FText                                       Text;                                                     // 0x0000(0x0028) (Edit, DisableEditOnInstance)
	TEnumAsByte<EResourcePurity>                       Purity;                                                   // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct FactoryGame.ResourceDepositPackage
// 0x0020
struct FResourceDepositPackage
{
	float                                              DropChance;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      ResourceClass;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MinAmount;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxAmount;                                                // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MiningAmount;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct FactoryGame.NodeClusterData
// 0x0028
struct FNodeClusterData
{
	TArray<class AFGResourceNode*>                     Nodes;                                                    // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FVector                                     MidPoint;                                                 // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UClass*                                      ResourceDescriptor;                                       // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactoryGame.MapRedirector
// 0x0020
struct FMapRedirector
{
	class FString                                      OldMapName;                                               // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      NewMapName;                                               // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct FactoryGame.SchematicCost
// 0x0018
struct FSchematicCost
{
	class UClass*                                      schematic;                                                // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<struct FItemAmount>                         ItemCost;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, SaveGame)
};

// ScriptStruct FactoryGame.SignPixelColumn
// 0x0010
struct FSignPixelColumn
{
	TArray<class UFGSignPixelData*>                    Column;                                                   // 0x0000(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct FactoryGame.SignColorData
// 0x0040
struct FSignColorData
{
	struct FLinearColor                                SignColor;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       ColorName;                                                // 0x0010(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    TextMaterialInstance;                                     // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    IconMaterialInstance;                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    BackgroundMaterialInstance;                               // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactoryGame.SkySphereSettings
// 0x0064
struct FSkySphereSettings
{
	struct FLinearColor                                HorizonColor;                                             // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ZenithColor;                                              // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                CloudColor;                                               // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SunLightColor;                                            // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SunIntensity;                                             // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                MoonLightColor;                                           // 0x0044(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MoonIntensity;                                            // 0x0054(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CloudOpacity;                                             // 0x0058(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x005C(0x0008) MISSED OFFSET
};

// ScriptStruct FactoryGame.SchematicMessagePair
// 0x0038
struct FSchematicMessagePair
{
	TArray<class UClass*>                              Messages;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TSoftObjectPtr<class UClass>                       SchematicUnlocked;                                        // 0x0010(0x0028) (Edit, DisableEditOnInstance)
};

// ScriptStruct FactoryGame.ItemFoundData
// 0x0068
struct FItemFoundData
{
	bool                                               WasFound;                                                 // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<class UClass*>                              Messages;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TSoftObjectPtr<class UClass>                       SchematicClass;                                           // 0x0018(0x0028) (Edit, DisableEditOnInstance)
	TSoftObjectPtr<class UClass>                       ItemClass;                                                // 0x0040(0x0028) (Edit, DisableEditOnInstance)
};

// ScriptStruct FactoryGame.ResearchTreeMessageData
// 0x0038
struct FResearchTreeMessageData
{
	TArray<class UClass*>                              Messages;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TSoftObjectPtr<class UClass>                       researchTree;                                             // 0x0010(0x0028) (Edit, DisableEditOnInstance)
};

// ScriptStruct FactoryGame.MaterialAndSlotName
// 0x0010
struct FMaterialAndSlotName
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactoryGame.TrainConsist
// 0x0030
struct FTrainConsist
{
	TArray<class UClass*>                              Vehicles;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              Length;                                                   // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Mass;                                                     // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x001C(0x0014) MISSED OFFSET
};

// ScriptStruct FactoryGame.TrainAtcData
// 0x0058
struct FTrainAtcData
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct FactoryGame.TrainSimulationData
// 0x0050
struct FTrainSimulationData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<class AFGRailroadVehicle*>                  SimulatedVehicles;                                        // 0x0008(0x0010) (ZeroConstructor)
	TArray<class UFGRailroadVehicleMovementComponent*> SimulatedMovements;                                       // 0x0018(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UFGLocomotiveMovementComponent*              MasterMovement;                                           // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x0038(0x0014) MISSED OFFSET
	float                                              Velocity;                                                 // 0x004C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct FactoryGame.RecipeAmountPair
// 0x0010
struct FRecipeAmountPair
{
	class UClass*                                      Recipe;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                amount;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FactoryGame.TutorialData
// 0x0010
struct FTutorialData
{
	class UClass*                                      ClassBuilt;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      MessageID;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct FactoryGame.PawnImpactAudio
// 0x0010
struct FPawnImpactAudio
{
	float                                              MinImpactVelocity;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               ImpactEvent;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactoryGame.ReplicatedAddedVelocitiesState
// 0x000C
struct FReplicatedAddedVelocitiesState
{
	bool                                               IsDrifting;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              AddedAngularVelocityInputPitch;                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AddedAngularVelocityInputYaw;                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactoryGame.TireTrackDecalDetails
// 0x0010
struct FTireTrackDecalDetails
{
	class UPhysicalMaterial*                           SurfacePhysicsMaterial;                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterial*                                   DecalMaterialOverride;                                    // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct FactoryGame.ParticleTemplatePair
// 0x0010
struct FParticleTemplatePair
{
	class UParticleSystem*                             Template;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Particle;                                                 // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct FactoryGame.TireParticleCollection
// 0x0010
struct FTireParticleCollection
{
	TArray<struct FParticleTemplatePair>               Collection;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct FactoryGame.SurfaceParticlePair
// 0x0010
struct FSurfaceParticlePair
{
	class UParticleSystem*                             EmitterTemplate;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      Surface;                                                  // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct FactoryGame.TireData
// 0x0028
struct FTireData
{
	class UPhysicalMaterial*                           SurfaceMaterial;                                          // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WheelLocation;                                            // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WheelRadius;                                              // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WheelWidth;                                               // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                WheelIndex;                                               // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsInAir;                                                  // 0x0020(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct FactoryGame.VehicleEngineData6W
// 0x00A0
struct FVehicleEngineData6W
{
	struct FRuntimeFloatCurve                          TorqueCurve;                                              // 0x0000(0x0088) (Edit)
	float                                              MaxRPM;                                                   // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MOI;                                                      // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DampingRateFullThrottle;                                  // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DampingRateZeroThrottleClutchEngaged;                     // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DampingRateZeroThrottleClutchDisengaged;                  // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
};

// ScriptStruct FactoryGame.DifferentialSetup6W
// 0x0003
struct FDifferentialSetup6W
{
	bool                                               Front;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Mid;                                                      // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Rear;                                                     // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactoryGame.VehicleDifferential6WData
// 0x0003
struct FVehicleDifferential6WData
{
	struct FDifferentialSetup6W                        DifferentialConfig;                                       // 0x0000(0x0003) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactoryGame.VehicleGearData6W
// 0x000C
struct FVehicleGearData6W
{
	float                                              Ratio;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DownRatio;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UpRatio;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactoryGame.VehicleTransmissionData6W
// 0x0030
struct FVehicleTransmissionData6W
{
	bool                                               bUseGearAutoBox;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              GearSwitchTime;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GearAutoBoxLatency;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FinalRatio;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FVehicleGearData6W>                  ForwardGears;                                             // 0x0010(0x0010) (Edit, ZeroConstructor)
	float                                              ReverseGearRatio;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NeutralGearUpRatio;                                       // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ClutchStrength;                                           // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct FactoryGame.ExponentialFogSettings
// 0x004C
struct FExponentialFogSettings
{
	float                                              FogHeight;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FogDensity;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FogInscatteringColor;                                     // 0x0008(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FullyDirectionalInscatteringColorDistance;                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NonDirectionalInscatteringColorDistance;                  // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DirectionalInscatteringExponent;                          // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DirectionalInscatteringStartDistance;                     // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DirectionalInscatteringColor;                             // 0x0028(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FogHeightFalloff;                                         // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FogMaxOpacity;                                            // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartDistance;                                            // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FogCutoffDistance;                                        // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0048(0x0004) MISSED OFFSET
};

// ScriptStruct FactoryGame.UpdatedFriends
// 0x0010
struct FUpdatedFriends
{
	TArray<struct FFGOnlineFriend>                     Friends;                                                  // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct FactoryGame.FGAnimNode_RandomPlayer
// 0x0008 (0x0070 - 0x0068)
struct FFGAnimNode_RandomPlayer : public FAnimNode_RandomPlayer
{
	float                                              mPlayRate;                                                // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct FactoryGame.ConveyorBeltItem
// 0x0028
struct FConveyorBeltItem
{
	struct FInventoryItem                              Item;                                                     // 0x0000(0x0018)
	float                                              Offset;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
};

// ScriptStruct FactoryGame.BuildableGroupTimeData
// 0x0008
struct FBuildableGroupTimeData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FactoryGame.ConveyorBucket
// 0x0010
struct FConveyorBucket
{
	TArray<class AFGBuildableConveyorBase*>            Conveyors;                                                // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct FactoryGame.BuildableBucket
// 0x0018
struct FBuildableBucket
{
	class UClass*                                      BuildableClass;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class AFGBuildable*>                        Buildables;                                               // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct FactoryGame.FootstepEffectWater
// 0x0020
struct FFootstepEffectWater
{
	float                                              MinWaterDepth;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FFootstepEffect                             Effect;                                                   // 0x0008(0x0018) (Edit, DisableEditOnInstance)
};

// ScriptStruct FactoryGame.SimulatedItemDropTransform
// 0x0030
struct FSimulatedItemDropTransform
{
	struct FTransform                                  ItemDropTransform;                                        // 0x0000(0x0030) (IsPlainOldData)
};

// ScriptStruct FactoryGame.SimulatedActorTransform
// 0x0040
struct FSimulatedActorTransform
{
	class UClass*                                      ActorClass;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  ActorTransform;                                           // 0x0010(0x0030) (IsPlainOldData)
};

// ScriptStruct FactoryGame.SimulatedMeshTransform
// 0x0040
struct FSimulatedMeshTransform
{
	class UStaticMesh*                                 StaticMesh;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  MeshTransform;                                            // 0x0010(0x0030) (IsPlainOldData)
};

// ScriptStruct FactoryGame.DebrisItemDrop
// 0x0030
struct FDebrisItemDrop
{
	struct FInt32Interval                              NumItems;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TSoftObjectPtr<class UClass>                       ItemClass;                                                // 0x0008(0x0028) (Edit, DisableEditOnInstance)
};

// ScriptStruct FactoryGame.DebrisActor
// 0x0010
struct FDebrisActor
{
	class UClass*                                      ActorClass;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FInt32Interval                              Num;                                                      // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct FactoryGame.DebrisMesh
// 0x0010
struct FDebrisMesh
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FInt32Interval                              Num;                                                      // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct FactoryGame.DestroyedFoliageEffectData
// 0x0020
struct FDestroyedFoliageEffectData
{
	struct FVector                                     SpawnLocation;                                            // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UParticleSystem*                             DestroyedEffect;                                          // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct FactoryGame.Category
// 0x00A0
struct FCategory
{
	struct FText                                       Name;                                                     // 0x0000(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateBrush                                 Icon;                                                     // 0x0018(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct FactoryGame.OptionUpdateDelegateData
// 0x0010
struct FOptionUpdateDelegateData
{
	TArray<struct FScriptDelegate>                     OptionUpdatedDelegates;                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct FactoryGame.CostIngredientEffectActorInfo
// 0x0018
struct FCostIngredientEffectActorInfo
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpawnDelay;                                               // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x000C(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactoryGame.FGHeightData
// 0x0040
struct FFGHeightData
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct FactoryGame.CustomFastArraySerializer
// 0x00B0
struct FCustomFastArraySerializer
{
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0000(0x00B0) MISSED OFFSET
};

// ScriptStruct FactoryGame.CustomFastArraySerializerItem
// 0x000C
struct FCustomFastArraySerializerItem
{
	int                                                ReplicationID;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                ReplicationKey;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                MostRecentArrayReplicationKey;                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct FactoryGame.RadiationVisualization
// 0x0024
struct FRadiationVisualization
{
	struct FName                                       Case;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemAmount;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Decay;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UnitMultiplier;                                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HighestIntensity;                                         // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              HighestDamageInterval;                                    // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              DistanceForHighestIntensity;                              // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              DistanceForNoticableIntensity;                            // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct FactoryGame.SetEmitterID
// 0x0030
struct FSetEmitterID
{
	class UObject*                                     Owner;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AttachRoot;                                               // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct FactoryGame.RemoveEmitterID
// 0x0010
struct FRemoveEmitterID
{
	class UObject*                                     Owner;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct FactoryGame.ItemSettings
// 0x0018
struct FItemSettings
{
	class UClass*                                      ResourceClass;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Resolution;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UMaterial*                                   MasterMaterial;                                           // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct FactoryGame.ResourceSinkPointsData
// 0x0010 (0x0018 - 0x0008)
struct FResourceSinkPointsData : public FTableRowBase
{
	class UClass*                                      ItemClass;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Points;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OverriddenResourceSinkPoints;                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactoryGame.ResourceSinkRewardLevelsData
// 0x0010 (0x0018 - 0x0008)
struct FResourceSinkRewardLevelsData : public FTableRowBase
{
	int64_t                                            RequiredPoints;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumRepeats;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct FactoryGame.MultipleItemStruct
// 0x0010
struct FMultipleItemStruct
{
	TArray<struct FItemAmount>                         ItemCost;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct FactoryGame.GainSignificanceData
// 0x0008
struct FGainSignificanceData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FactoryGame.MapAreaVisitedData
// 0x0040
struct FMapAreaVisitedData
{
	class UClass*                                      MapAreaClass;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              Messages;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TSoftObjectPtr<class UClass>                       SchematicClass;                                           // 0x0018(0x0028) (Edit, DisableEditOnInstance)
};

// ScriptStruct FactoryGame.TrainSelfDrivingData
// 0x0010
struct FTrainSelfDrivingData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FactoryGame.TrainAtcPoint
// 0x0020
struct FTrainAtcPoint
{
	class UFGRailroadTrackConnectionComponent*         TrackConnection;                                          // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct FactoryGame.VehicleSeat
// 0x0040
struct FVehicleSeat
{
	class UClass*                                      SeatClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FName                                       SitSocket;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               IsVisible;                                                // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	class UAnimSequence*                               SitAnimation;                                             // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              DamageMultiplier;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class AFGDriveablePawn*                            mSeatPawn;                                                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class AFGCharacterPlayer*                          mCharacter;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class AController*                                 mController;                                              // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FactoryGame.Errors
// 0x00F0
struct FErrors
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
	unsigned char                                      UnknownData01[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty FactoryGame.Errors.UnknownLevels
	unsigned char                                      UnknownData02[0x50];                                      // 0x00A0(0x0050) UNKNOWN PROPERTY: SetProperty FactoryGame.Errors.UnknownClasses
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

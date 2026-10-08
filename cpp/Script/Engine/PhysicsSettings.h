// /Script/Engine.PhysicsSettings
// Derives from: UPhysicsSettingsCore > UDeveloperSettings > UObject
// size 0x1A0, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/PhysicsSettings.h

UCLASS(Config=Engine)
class UPhysicsSettings : public UPhysicsSettingsCore
{
public:
    UPROPERTY(EditAnywhere, Config) FRigidBodyErrorCorrection PhysicErrorCorrection;  // 0x00E0, size 0x34
    UPROPERTY(Config, Deprecated) TEnumAsByte<ESettingsLockedAxis> LockedAxis;  // 0x0114, size 0x1
    UPROPERTY(EditAnywhere, Config) TEnumAsByte<ESettingsDOF> DefaultDegreesOfFreedom;  // 0x0115, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bSuppressFaceRemapTable;  // 0x0116, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bSupportUVFromHitResults;  // 0x0117, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bDisableActiveActors;  // 0x0118, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bDisableKinematicStaticPairs;  // 0x0119, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bDisableKinematicKinematicPairs;  // 0x011A, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bDisableCCD;  // 0x011B, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bEnableEnhancedDeterminism;  // 0x011C, size 0x1
    UPROPERTY(EditAnywhere, Config) float AnimPhysicsMinDeltaTime;  // 0x0120, size 0x4
    UPROPERTY(EditAnywhere, Config) bool bSimulateAnimPhysicsAfterReset;  // 0x0124, size 0x1
    UPROPERTY(EditAnywhere, Config) float MaxPhysicsDeltaTime;  // 0x0128, size 0x4
    UPROPERTY(EditAnywhere, Config) bool bSubstepping;  // 0x012C, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bSubsteppingAsync;  // 0x012D, size 0x1
    UPROPERTY(EditAnywhere, Config) float MaxSubstepDeltaTime;  // 0x0130, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 MaxSubsteps;  // 0x0134, size 0x4
    UPROPERTY(EditAnywhere, Config) float SyncSceneSmoothingFactor;  // 0x0138, size 0x4
    UPROPERTY(EditAnywhere, Config) float InitialAverageFrameRate;  // 0x013C, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 PhysXTreeRebuildRate;  // 0x0140, size 0x4
    UPROPERTY(EditAnywhere, Config) TArray<FPhysicalSurfaceName> PhysicalSurfaces;  // 0x0148, size 0x10
    UPROPERTY(EditAnywhere, Config) FBroadphaseSettings DefaultBroadphaseSettings;  // 0x0158, size 0x40
    UPROPERTY(EditAnywhere, Config) float MinDeltaVelocityForHitEvents;  // 0x0198, size 0x4
    UPROPERTY(EditAnywhere, Config) FChaosPhysicsSettings ChaosSettings;  // 0x019C, size 0x3
};

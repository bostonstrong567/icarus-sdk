// /Script/Engine.WorldSettings
// Derives from: AInfo > AActor > UObject
// size 0x3A0, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/WorldSettings.h

UCLASS(NotPlaceable, Config=game)
class AWorldSettings : public AInfo, public IInterface_AssetUserData
{
public:
    UPROPERTY(EditAnywhere) int32 VisibilityCellSize;  // 0x0228, size 0x4
    UPROPERTY(EditAnywhere) TEnumAsByte<EVisibilityAggressiveness> VisibilityAggressiveness;  // 0x022C, size 0x1
    UPROPERTY(EditAnywhere) uint8 bPrecomputeVisibility : 1;  // 0x022D, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bPlaceCellsOnlyAlongCameraTracks : 1;  // 0x022D, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bEnableWorldBoundsChecks : 1;  // 0x022D, mask 0x04
    UPROPERTY(Config, BlueprintReadOnly) uint8 bEnableNavigationSystem : 1;  // 0x022D, mask 0x08
    UPROPERTY(EditAnywhere, Config, BlueprintReadOnly) uint8 bEnableAISystem : 1;  // 0x022D, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bEnableWorldComposition : 1;  // 0x022D, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bUseClientSideLevelStreamingVolumes : 1;  // 0x022D, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bEnableWorldOriginRebasing : 1;  // 0x022D, mask 0x80
    UPROPERTY(Transient) uint8 bWorldGravitySet : 1;  // 0x022E, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bGlobalGravitySet : 1;  // 0x022E, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bMinimizeBSPSections : 1;  // 0x022E, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bForceNoPrecomputedLighting : 1;  // 0x022E, mask 0x08
    UPROPERTY(Replicated) uint8 bHighPriorityLoading : 1;  // 0x022E, mask 0x10
    UPROPERTY() uint8 bHighPriorityLoadingLocal : 1;  // 0x022E, mask 0x20
    UPROPERTY(EditAnywhere, Config) uint8 bOverrideDefaultBroadphaseSettings : 1;  // 0x022E, mask 0x40
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UNavigationSystemConfig* NavigationSystemConfig;  // 0x0230, size 0x8
    UPROPERTY(Transient) UNavigationSystemConfig* NavigationSystemConfigOverride;  // 0x0238, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float WorldToMeters;  // 0x0240, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float KillZ;  // 0x0244, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSubclassOf<UDamageType> KillZDamageType;  // 0x0248, size 0x8
    UPROPERTY(Replicated, ReplicatedUsing, Transient) float WorldGravityZ;  // 0x0250, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float GlobalGravityZ;  // 0x0254, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSubclassOf<ADefaultPhysicsVolume> DefaultPhysicsVolumeClass;  // 0x0258, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSubclassOf<UPhysicsCollisionHandler> PhysicsCollisionHandlerClass;  // 0x0260, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSubclassOf<AGameModeBase> DefaultGameMode;  // 0x0268, size 0x8
    UPROPERTY() TSubclassOf<AGameNetworkManager> GameNetworkManagerClass;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere) int32 PackedLightAndShadowMapTextureSize;  // 0x0278, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector DefaultColorScale;  // 0x027C, size 0xC
    UPROPERTY(EditAnywhere) float DefaultMaxDistanceFieldOcclusionDistance;  // 0x0288, size 0x4
    UPROPERTY(EditAnywhere) float GlobalDistanceFieldViewDistance;  // 0x028C, size 0x4
    UPROPERTY(EditAnywhere, Config) float DynamicIndirectShadowsSelfShadowingIntensity;  // 0x0290, size 0x4
    UPROPERTY(EditAnywhere, Config) FReverbSettings DefaultReverbSettings;  // 0x0298, size 0x20
    UPROPERTY(EditAnywhere, Config) FInteriorSettings DefaultAmbientZoneSettings;  // 0x02B8, size 0x24
    UPROPERTY(EditAnywhere) USoundMix* DefaultBaseSoundMix;  // 0x02E0, size 0x8
    UPROPERTY(Replicated, Transient) float TimeDilation;  // 0x02E8, size 0x4
    UPROPERTY(Replicated, Transient) float MatineeTimeDilation;  // 0x02EC, size 0x4
    UPROPERTY(Transient) float DemoPlayTimeDilation;  // 0x02F0, size 0x4
    UPROPERTY(EditAnywhere, Config) float MinGlobalTimeDilation;  // 0x02F4, size 0x4
    UPROPERTY(EditAnywhere, Config) float MaxGlobalTimeDilation;  // 0x02F8, size 0x4
    UPROPERTY(EditAnywhere, Config) float MinUndilatedFrameTime;  // 0x02FC, size 0x4
    UPROPERTY(EditAnywhere, Config) float MaxUndilatedFrameTime;  // 0x0300, size 0x4
    UPROPERTY(EditAnywhere, Config) FBroadphaseSettings BroadphaseSettings;  // 0x0304, size 0x40
    UPROPERTY(Transient) APlayerState* Pauser;  // 0x0348, size 0x8
    UPROPERTY() TArray<FNetViewer> ReplicationViewers;  // 0x0350, size 0x10
    UPROPERTY() TArray<UAssetUserData*> AssetUserData;  // 0x0360, size 0x10
    UPROPERTY(Replicated, Transient) APlayerState* PauserPlayerState;  // 0x0370, size 0x8
    UPROPERTY(Config) int32 MaxNumberOfBookmarks;  // 0x0378, size 0x4
    UPROPERTY(Config) TSubclassOf<UBookmarkBase> DefaultBookmarkClass;  // 0x0380, size 0x8
    UPROPERTY() TArray<UBookmarkBase*> BookmarkArray;  // 0x0388, size 0x10
    UPROPERTY() TSubclassOf<UBookmarkBase> LastBookmarkClass;  // 0x0398, size 0x8

    UFUNCTION() void OnRep_WorldGravityZ();

    // Virtual functions that start here:
    //   FixupDeltaSeconds, GetAISystemClassName, GetEffectiveTimeDilation, GetGravityZ, NotifyBeginPlay
    //   NotifyMatchStarted, OnRep_WorldGravityZ, SetPauserPlayerState, SetTimeDilation
};

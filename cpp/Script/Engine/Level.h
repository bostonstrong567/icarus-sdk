// /Script/Engine.Level
// Derives from: UObject
// size 0x298, declared in Engine/Source/Runtime/Engine/Classes/Engine/Level.h

UCLASS(MinimalAPI)
class ULevel : public UObject, public IInterface_AssetUserData
{
public:
    UPROPERTY(Transient) UWorld* OwningWorld;  // 0x00B8, size 0x8
    UPROPERTY() UModel* Model;  // 0x00C0, size 0x8
    UPROPERTY() TArray<UModelComponent*> ModelComponents;  // 0x00C8, size 0x10
    UPROPERTY(Transient, Instanced) ULevelActorContainer* ActorCluster;  // 0x00D8, size 0x8
    UPROPERTY() int32 NumTextureStreamingUnbuiltComponents;  // 0x00E0, size 0x4
    UPROPERTY() int32 NumTextureStreamingDirtyResources;  // 0x00E4, size 0x4
    UPROPERTY() ALevelScriptActor* LevelScriptActor;  // 0x00E8, size 0x8
    UPROPERTY() ANavigationObjectBase* NavListStart;  // 0x00F0, size 0x8
    UPROPERTY() ANavigationObjectBase* NavListEnd;  // 0x00F8, size 0x8
    UPROPERTY() TArray<UNavigationDataChunk*> NavDataChunks;  // 0x0100, size 0x10
    UPROPERTY(EditAnywhere) float LightmapTotalSize;  // 0x0110, size 0x4
    UPROPERTY(EditAnywhere) float ShadowmapTotalSize;  // 0x0114, size 0x4
    UPROPERTY() TArray<FVector> StaticNavigableGeometry;  // 0x0118, size 0x10
    UPROPERTY() TArray<FGuid> StreamingTextureGuids;  // 0x0128, size 0x10
    UPROPERTY() FGuid LevelBuildDataId;  // 0x01D0, size 0x10
    UPROPERTY() UMapBuildDataRegistry* MapBuildData;  // 0x01E0, size 0x8
    UPROPERTY() FIntVector LightBuildLevelOffset;  // 0x01E8, size 0xC
    UPROPERTY() uint8 bIsLightingScenario : 1;  // 0x01F4, mask 0x01
    UPROPERTY() uint8 bTextureStreamingRotationChanged : 1;  // 0x01F4, mask 0x08
    UPROPERTY(Transient) uint8 bStaticComponentsRegisteredInStreamingManager : 1;  // 0x01F4, mask 0x10
    UPROPERTY(Transient) uint8 bIsVisible : 1;  // 0x01F4, mask 0x20
    UPROPERTY() AWorldSettings* WorldSettings;  // 0x0258, size 0x8
    UPROPERTY() TArray<UAssetUserData*> AssetUserData;  // 0x0268, size 0x10
    UPROPERTY(Transient) TArray<FReplicatedStaticActorDestructionInfo> DestroyedReplicatedStaticActors;  // 0x0288, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FURL URL;  // 0x0030
    TArray<AActor *,TSizedDefaultAllocator<32> > Actors;  // 0x0098
    TArray<AActor *,TSizedDefaultAllocator<32> > ActorsForGC;  // 0x00A8
    FTickTaskLevel * TickTaskLevel;  // 0x0138
    FPrecomputedLightVolume * PrecomputedLightVolume;  // 0x0140
    FPrecomputedVolumetricLightmap * PrecomputedVolumetricLightmap;  // 0x0148
    FPrecomputedVisibilityHandler PrecomputedVisibilityHandler;  // 0x0150
    FPrecomputedVolumeDistanceField PrecomputedVolumeDistanceField;  // 0x0180
    FRenderCommandFence RemoveFromSceneFence;  // 0x01C0
    uint8 : 1 bAreComponentsCurrentlyRegistered;  // 0x01F4
    uint8 : 1 bGeometryDirtyForLighting;  // 0x01F4
    uint8 : 1 bAlreadyMovedActors;  // 0x01F4
    uint8 : 1 bAlreadyShiftedActors;  // 0x01F4
    uint8 : 1 bAlreadyUpdatedComponents;  // 0x01F5
    uint8 : 1 bAlreadyAssociatedStreamableResources;  // 0x01F5
    uint8 : 1 bAlreadyInitializedNetworkActors;  // 0x01F5
    uint8 : 1 bAlreadyClearedActorsSeamlessTravelFlag;  // 0x01F5
    uint8 : 1 bAlreadyRoutedActorInitialize;  // 0x01F5
    uint8 : 1 bAlreadySortedActorList;  // 0x01F5
    uint8 : 1 bIsAssociatingLevel;  // 0x01F5
    uint8 : 1 bIsDisassociatingLevel;  // 0x01F5
    uint8 : 1 bRequireFullVisibilityToRender;  // 0x01F6
    uint8 : 1 bClientOnlyVisible;  // 0x01F6
    uint8 : 1 bWasDuplicated;  // 0x01F6
    uint8 : 1 bWasDuplicatedForPIE;  // 0x01F6
    uint8 : 1 bIsBeingRemoved;  // 0x01F6
    uint8 : 1 bHasRerunConstructionScripts;  // 0x01F6
    uint8 : 1 bActorClusterCreated;  // 0x01F6
    uint8 bHasCurrentActorCalledPreRegister;  // 0x01F7
    int32 CurrentActorIndexForUpdateComponents;  // 0x01F8
    int32 CurrentActorIndexForUnregisterComponents;  // 0x01FC
    TMulticastDelegate<void __cdecl(FTransform const &),FDefaultDelegateUserPolicy> OnApplyLevelTransform;  // 0x0200
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> OnCleanupLevel;  // 0x0218
    TWeakObjectPtr<ALevelBounds,FWeakObjectPtr> LevelBoundsActor;  // 0x0230
    TWeakObjectPtr<AInstancedFoliageActor,FWeakObjectPtr> InstancedFoliageActor;  // 0x0238
    ULevel::FLevelBoundsActorUpdatedEvent LevelBoundsActorUpdatedEvent;  // 0x0240, private
    FLevelCollection * CachedLevelCollection;  // 0x0260, private
    TArray<FPendingAutoReceiveInputActor,TSizedDefaultAllocator<32> > PendingAutoReceiveInputActors;  // 0x0278, private
};

// /Script/HairStrandsCore.GroomComponent
// Derives from: UMeshComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x5A0, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UGroomComponent : public UMeshComponent, public ILODSyncInterface
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) UGroomAsset* GroomAsset;  // 0x0480, size 0x8
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) UGroomCache* GroomCache;  // 0x0488, size 0x8
    UPROPERTY(Transient) TArray<UNiagaraComponent*> NiagaraComponents;  // 0x0490, size 0x10
    UPROPERTY() USkeletalMesh* SourceSkeletalMesh;  // 0x04A0, size 0x8
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) UGroomBindingAsset* BindingAsset;  // 0x04A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UPhysicsAsset* PhysicsAsset;  // 0x04B0, size 0x8
    UPROPERTY() UMaterialInterface* Strands_DebugMaterial;  // 0x04B8, size 0x8
    UPROPERTY() UMaterialInterface* Strands_DefaultMaterial;  // 0x04C0, size 0x8
    UPROPERTY() UMaterialInterface* Cards_DefaultMaterial;  // 0x04C8, size 0x8
    UPROPERTY() UMaterialInterface* Meshes_DefaultMaterial;  // 0x04D0, size 0x8
    UPROPERTY() UNiagaraSystem* AngularSpringsSystem;  // 0x04D8, size 0x8
    UPROPERTY() UNiagaraSystem* CosseratRodsSystem;  // 0x04E0, size 0x8
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FString AttachmentName;  // 0x04E8, size 0x10
    bool bResetSimulation;  // 0x04F8, not reflected
    bool bInitSimulation;  // 0x04F9, not reflected
    FMatrix PrevBoneMatrix;  // 0x0500, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FHairGroupDesc> GroomGroupsDesc;  // 0x0540, size 0x10
private:
    UPROPERTY(EditAnywhere) bool bRunning;  // 0x0550, size 0x1
    UPROPERTY(EditAnywhere) bool bLooping;  // 0x0551, size 0x1
    UPROPERTY(EditAnywhere) bool bManualTick;  // 0x0552, size 0x1
    UPROPERTY(EditAnywhere, Transient) float ElapsedTime;  // 0x0554, size 0x4
    TSharedPtr<IGroomCacheBuffers,1> GroomCacheBuffers;  // 0x0558, not reflected
    TArray<FHairGroupInstance *,TSizedDefaultAllocator<32> > HairGroupInstances;  // 0x0568, not reflected
    void * InitializedResources;  // 0x0578, not reflected
    UMeshComponent * RegisteredMeshComponent;  // 0x0580, not reflected
    FVector SkeletalPreviousPositionOffset;  // 0x0588, not reflected
    bool bIsGroomAssetCallbackRegistered;  // 0x0594, not reflected
    bool bIsGroomBindingAssetCallbackRegistered;  // 0x0595, not reflected
    int32 PredictedLODIndex;  // 0x0598, not reflected
    bool bValidationEnable;  // 0x059C, not reflected
    bool bUseCards;  // 0x059D, not reflected
public:
    UFUNCTION(BlueprintCallable) void SetBindingAsset(UGroomBindingAsset* InBinding);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetGroomAsset(UGroomAsset* Asset);  // parameters 0x8
};

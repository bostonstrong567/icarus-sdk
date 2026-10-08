// /Script/MRMesh.MRMeshComponent
// Derives from: UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x510, declared in Engine/Source/Runtime/MRMesh/Public/MRMeshComponent.h

UCLASS(Config=Engine)
class UMRMeshComponent : public UPrimitiveComponent, public IInterface_CollisionDataProvider
{
public:
    UPROPERTY(EditAnywhere) UMaterialInterface* Material;  // 0x0460, size 0x8
    UPROPERTY(EditAnywhere) UMaterialInterface* WireframeMaterial;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere) bool bCreateMeshProxySections;  // 0x0470, size 0x1
    UPROPERTY(EditAnywhere) bool bUpdateNavMeshOnMeshUpdate;  // 0x0471, size 0x1
    UPROPERTY(EditAnywhere) bool bNeverCreateCollisionMesh;  // 0x0472, size 0x1
    UPROPERTY(Transient) UBodySetup* CachedBodySetup;  // 0x0478, size 0x8
    UPROPERTY(Transient) TArray<UBodySetup*> BodySetups;  // 0x0480, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    bool bConnected;  // 0x0473, private
    bool bEnableOcclusion;  // 0x0490, private
    bool bUseWireframe;  // 0x0491, private
    TArray<FBodyInstance *,TSizedDefaultAllocator<32> > BodyInstances;  // 0x0498, private
    TArray<unsigned __int64,TSizedDefaultAllocator<32> > BodyIds;  // 0x04A8, private
    UMRMeshComponent::FOnClear OnClearEvent;  // 0x04B8, private
    FLinearColor WireframeColor;  // 0x04D0, private
    const TArray<FVector,TSizedDefaultAllocator<32> > * TempPosition;  // 0x04E0, private
    const TArray<unsigned int,TSizedDefaultAllocator<32> > * TempIndices;  // 0x04E8, private
    TMulticastDelegate<void __cdecl(UMRMeshComponent const *,IMRMesh::FSendBrickDataArgs const &),FDefaultDelegateUserPolicy> OnBrickDataUpdatedDelegate;  // 0x04F0, private

    UFUNCTION(BlueprintCallable) void Clear();
    UFUNCTION(BlueprintCallable) void ForceNavMeshUpdate();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetEnableMeshOcclusion() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetUseWireframe() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) FLinearColor GetWireframeColor() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsConnected() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetEnableMeshOcclusion(bool bEnable);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetUseWireframe(bool bUseWireframe);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetWireframeColor(const FLinearColor& InColor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetWireframeMaterial(UMaterialInterface* InMaterial);  // parameters 0x8

    // Virtual functions that start here:
    //   SetWireframeMaterial
};

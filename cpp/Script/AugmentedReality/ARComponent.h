// /Script/AugmentedReality.ARComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x280, declared in Engine/Source/Runtime/AugmentedReality/Public/ARComponent.h

UCLASS(Abstract, Config=Engine)
class UARComponent : public USceneComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(Replicated) FGuid NativeID;  // 0x01F8, size 0x10
    TMulticastDelegate<void __cdecl(UMRMeshComponent *),FDefaultDelegateUserPolicy> OnMRMeshCreated;  // 0x0208, not reflected
    TMulticastDelegate<void __cdecl(UMRMeshComponent *),FDefaultDelegateUserPolicy> OnMRMeshDestroyed;  // 0x0220, not reflected
protected:
    UPROPERTY(EditAnywhere) bool bUseDefaultReplication;  // 0x0238, size 0x1
    UPROPERTY(EditAnywhere) UMaterialInterface* DefaultMeshMaterial;  // 0x0240, size 0x8
    UPROPERTY(EditAnywhere) UMaterialInterface* DefaultWireframeMeshMaterial;  // 0x0248, size 0x8
    UPROPERTY(Instanced) UMRMeshComponent* MRMeshComponent;  // 0x0250, size 0x8
    UPROPERTY() UARTrackedGeometry* MyTrackedGeometry;  // 0x0258, size 0x8
    bool bFirstUpdate;  // 0x0260, not reflected
    bool bIsRemoved;  // 0x0261, not reflected
    bool bInDebugMode;  // 0x0262, not reflected
    bool bSavedWireframeMode;  // 0x0263, not reflected
    FLinearColor SavedWireframeColor;  // 0x0264, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) UMRMeshComponent* GetMRMesh();  // parameters 0x8
    UFUNCTION() void OnRep_Payload();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveRemove();
    UFUNCTION(BlueprintCallable) void SetNativeID(FGuid NativeID);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void UpdateVisualization();

    // Virtual functions that start here:
    //   OnRep_Payload, Remove, Update, UpdateVisualization_Implementation
};

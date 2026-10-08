// /Script/Engine.RuntimeVirtualTextureComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x270, declared in Engine/Source/Runtime/Engine/Classes/Components/RuntimeVirtualTextureComponent.h

UCLASS(Config=Engine)
class URuntimeVirtualTextureComponent : public USceneComponent
{
public:
    UPROPERTY(EditAnywhere) TSoftObjectPtr<AActor> BoundsAlignActor;  // 0x01F8, size 0x28
    UPROPERTY(EditAnywhere, Transient) bool bSetBoundsButton;  // 0x0220, size 0x1
    UPROPERTY(EditAnywhere) bool bSnapBoundsToLandscape;  // 0x0221, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) URuntimeVirtualTexture* VirtualTexture;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere) bool bEnableScalability;  // 0x0230, size 0x1
    UPROPERTY(EditAnywhere) uint32 ScalabilityGroup;  // 0x0234, size 0x4
    UPROPERTY(EditAnywhere) bool bHidePrimitives;  // 0x0238, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UVirtualTextureBuilder* StreamingTexture;  // 0x0240, size 0x8
    UPROPERTY(EditAnywhere) int32 StreamLowMips;  // 0x0248, size 0x4
    UPROPERTY(EditAnywhere, Transient) bool bBuildStreamingMipsButton;  // 0x024C, size 0x1
    UPROPERTY(EditAnywhere) bool bEnableCompressCrunch;  // 0x024D, size 0x1
    UPROPERTY(EditAnywhere) bool bUseStreamingLowMipsInEditor;  // 0x024E, size 0x1
    UPROPERTY(EditAnywhere, Transient, BlueprintReadOnly) bool bBuildDebugStreamingMips;  // 0x024F, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    TMulticastDelegate<void __cdecl(bool &,bool &),FDefaultDelegateUserPolicy> HidePrimitivesDelegate;  // 0x0250, protected
    FRuntimeVirtualTextureSceneProxy * SceneProxy;  // 0x0268

    UFUNCTION(BlueprintCallable) void Invalidate(const FBoxSphereBounds& WorldBounds);  // parameters 0x1C
};

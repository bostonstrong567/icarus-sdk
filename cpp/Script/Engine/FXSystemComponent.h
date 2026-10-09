// /Script/Engine.FXSystemComponent
// Derives from: UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x450, declared in Engine/Source/Runtime/Engine/Classes/Particles/ParticleSystemComponent.h

UCLASS(Abstract, Config=Engine)
class UFXSystemComponent : public UPrimitiveComponent
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) UFXSystemAsset* GetFXSystemAsset() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ReleaseToPool();
    UFUNCTION(BlueprintCallable) void SetActorParameter(FName ParameterName, AActor* Param);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetAutoAttachmentParameters(USceneComponent* Parent, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule);  // parameters 0x13
    UFUNCTION(BlueprintCallable) void SetBoolParameter(FName ParameterName, bool Param);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetColorParameter(FName ParameterName, FLinearColor Param);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetEmitterEnable(FName EmitterName, bool bNewEnableState);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetFloatParameter(FName ParameterName, float Param);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetIntParameter(FName ParameterName, int32 Param);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetUseAutoManageAttachment(bool bAutoManage);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetVectorParameter(FName ParameterName, FVector Param);  // parameters 0x14

    // Virtual functions that start here:
    //   ActivateSystem, DeactivateImmediate, GetApproxMemoryUsage, GetFXSystemAsset, ReleaseToPool
    //   SetActorParameter, SetAutoAttachmentParameters, SetBoolParameter, SetColorParameter
    //   SetEmitterEnable, SetFloatParameter, SetIntParameter, SetUseAutoManageAttachment
    //   SetVectorParameter
};

// /Script/Niagara.NiagaraRendererProperties
// Derives from: UNiagaraMergeable > UObject
// size 0x78, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraRendererProperties.h

UCLASS(Abstract)
class UNiagaraRendererProperties : public UNiagaraMergeable
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) FNiagaraPlatformSet Platforms;  // 0x0028, size 0x30
    UPROPERTY(EditAnywhere) int32 SortOrderHint;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere) ENiagaraRendererMotionVectorSetting MotionVectorSetting;  // 0x005C, size 0x4
    UPROPERTY() bool bIsEnabled;  // 0x0060, size 0x1
protected:
    UPROPERTY(Deprecated) bool bMotionBlurEnabled;  // 0x0061, size 0x1
    TArray<FNiagaraVariableAttributeBinding const *,TSizedDefaultAllocator<32> > AttributeBindings;  // 0x0068, not reflected

    // Virtual functions that start here:
    //   CacheFromCompiledData, CreateBoundsCalculator, CreateEmitterRenderer, GetAssetTagsForContext
    //   GetCurrentSourceMode, GetIsActive, GetIsEnabled, GetUsedMaterials, IsSimTargetSupported
    //   NeedsMIDsForMaterials, NeedsSystemCompletion, NeedsSystemPostTick, PopulateRequiredBindings
    //   PostLoadBindings, SetIsEnabled, UpdateSourceModeDerivates
};

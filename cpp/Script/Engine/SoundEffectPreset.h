// /Script/Engine.SoundEffectPreset
// Derives from: UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundEffectPreset.h

UCLASS(Abstract, EditInlineNew, Config=Engine)
class USoundEffectPreset : public UObject
{
protected:
    TArray<TWeakPtr<FSoundEffectBase,1>,TSizedDefaultAllocator<32> > Instances;  // 0x0028, not reflected
    FWindowsCriticalSection InstancesMutationCriticalSection;  // 0x0038, not reflected
    bool bInitialized;  // 0x0060, not reflected

    // Virtual functions that start here:
    //   CanFilter, CreateNewEffect, CreateNewPreset, GetAssetActionName, GetPresetColor, GetSupportedClass
    //   HasAssetActions, Init, OnInit
};

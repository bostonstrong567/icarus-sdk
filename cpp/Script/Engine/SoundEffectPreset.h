// /Script/Engine.SoundEffectPreset
// Derives from: UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundEffectPreset.h

UCLASS(Abstract, EditInlineNew, Config=Engine)
class USoundEffectPreset : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TArray<TWeakPtr<FSoundEffectBase,1>,TSizedDefaultAllocator<32> > Instances;  // 0x0028, protected
    FWindowsCriticalSection InstancesMutationCriticalSection;  // 0x0038, protected
    bool bInitialized;  // 0x0060, protected

    // Virtual functions that start here:
    //   CanFilter, CreateNewEffect, CreateNewPreset, GetAssetActionName, GetPresetColor, GetSupportedClass
    //   HasAssetActions, Init, OnInit
};

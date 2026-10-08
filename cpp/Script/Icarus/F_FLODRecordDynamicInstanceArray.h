// /Script/Icarus.FLODRecordDynamicInstanceArray
// size 0x148, declared in Icarus/Source/Icarus/Systems/FLOD/FLODRecord.h

USTRUCT()
struct FFLODRecordDynamicInstanceArray : public FFastArraySerializer
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FFLODRecordDynamicInstance> Instances;  // 0x0108, size 0x10

    // Not reflected:
    TDelegate<void __cdecl(FFLODRecordDynamicInstance const &),FDefaultDelegateUserPolicy> OnDynamicInstanceAdded;  // 0x0118
    TDelegate<void __cdecl(FFLODRecordDynamicInstance const &),FDefaultDelegateUserPolicy> OnDynamicInstanceRemoved;  // 0x0128
    TDelegate<void __cdecl(FFLODRecordDynamicInstance const &),FDefaultDelegateUserPolicy> OnDynamicInstanceChanged;  // 0x0138
};

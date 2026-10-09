// /Script/Icarus.FLODRecordDynamicInstanceArray
// size 0x148, declared in Icarus/Source/Icarus/Systems/FLOD/FLODRecord.h

USTRUCT()
struct FFLODRecordDynamicInstanceArray : public FFastArraySerializer
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FFLODRecordDynamicInstance> Instances;  // 0x0108, size 0x10
    TDelegate<void __cdecl(FFLODRecordDynamicInstance const &),FDefaultDelegateUserPolicy> OnDynamicInstanceAdded;  // 0x0118, not reflected
    TDelegate<void __cdecl(FFLODRecordDynamicInstance const &),FDefaultDelegateUserPolicy> OnDynamicInstanceRemoved;  // 0x0128, not reflected
    TDelegate<void __cdecl(FFLODRecordDynamicInstance const &),FDefaultDelegateUserPolicy> OnDynamicInstanceChanged;  // 0x0138, not reflected
};

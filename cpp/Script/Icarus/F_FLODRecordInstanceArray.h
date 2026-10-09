// /Script/Icarus.FLODRecordInstanceArray
// size 0x148, declared in Icarus/Source/Icarus/Systems/FLOD/FLODRecord.h

USTRUCT()
struct FFLODRecordInstanceArray : public FFastArraySerializer
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FFLODRecordInstance> Instances;  // 0x0108, size 0x10
    TDelegate<void __cdecl(FFLODRecordInstance const &),FDefaultDelegateUserPolicy> OnInstanceAdded;  // 0x0118, not reflected
    TDelegate<void __cdecl(FFLODRecordInstance const &),FDefaultDelegateUserPolicy> OnInstanceRemoved;  // 0x0128, not reflected
    TDelegate<void __cdecl(FFLODRecordInstance const &),FDefaultDelegateUserPolicy> OnInstanceChanged;  // 0x0138, not reflected
};

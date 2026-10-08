// /Script/Icarus.FishDataFastArray
// size 0x158, declared in Icarus/Source/Icarus/Systems/Bestiary/BeastiaryFastArrays.h

USTRUCT()
struct FFishDataFastArray : public FFastArraySerializer
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FFishDataFastArrayItem> FishEntries;  // 0x0108, size 0x10

    // Not reflected:
    TDelegate<void __cdecl(FFishDataFastArrayItem const &),FDefaultDelegateUserPolicy> OnEntryAdded;  // 0x0118
    TDelegate<void __cdecl(FFishDataFastArrayItem const &),FDefaultDelegateUserPolicy> OnEntryRemoved;  // 0x0128
    TDelegate<void __cdecl(FFishDataFastArrayItem const &),FDefaultDelegateUserPolicy> OnEntryChanged;  // 0x0138
    TDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> OnAllEntriesChanged;  // 0x0148
};

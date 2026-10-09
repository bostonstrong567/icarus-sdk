// /Script/Icarus.BestiaryFastArray
// size 0x158, declared in Icarus/Source/Icarus/Systems/Bestiary/BeastiaryFastArrays.h

USTRUCT()
struct FBestiaryFastArray : public FFastArraySerializer
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FBestiaryFastArrayItem> BestiaryEntries;  // 0x0108, size 0x10
    TDelegate<void __cdecl(FBestiaryFastArrayItem const &),FDefaultDelegateUserPolicy> OnEntryAdded;  // 0x0118, not reflected
    TDelegate<void __cdecl(FBestiaryFastArrayItem const &),FDefaultDelegateUserPolicy> OnEntryRemoved;  // 0x0128, not reflected
    TDelegate<void __cdecl(FBestiaryFastArrayItem const &),FDefaultDelegateUserPolicy> OnEntryChanged;  // 0x0138, not reflected
    TDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> OnAllEntriesChanged;  // 0x0148, not reflected
};

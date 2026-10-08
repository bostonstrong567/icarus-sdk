// /Script/Icarus.FlammableRepStateArray
// size 0x148, declared in Icarus/Source/Icarus/Systems/Disaster/FlammableRepState.h

USTRUCT()
struct FFlammableRepStateArray : public FFastArraySerializer
{
    UPROPERTY(EditAnywhere) TArray<FFlammableRepState> States;  // 0x0108, size 0x10

    // Not reflected:
    TDelegate<void __cdecl(FFlammableRepState const &),FDefaultDelegateUserPolicy> OnStateAdded;  // 0x0118
    TDelegate<void __cdecl(FFlammableRepState const &),FDefaultDelegateUserPolicy> OnStateRemoved;  // 0x0128
    TDelegate<void __cdecl(FFlammableRepState const &),FDefaultDelegateUserPolicy> OnStateChanged;  // 0x0138
};

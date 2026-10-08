// /Script/Icarus.ChargedModifiers
// size 0x40, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/ChargedModifiersLibrary.generated.h

USTRUCT()
struct FChargedModifiers : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifierStatesRowHandle Modifier;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusResourcesEnum Resource;  // 0x0030, size 0x10
};

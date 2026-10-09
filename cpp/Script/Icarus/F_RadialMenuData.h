// /Script/Icarus.RadialMenuData
// size 0x28, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/RadialMenuDataLibrary.generated.h

USTRUCT()
struct FRadialMenuData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FRadialMenuOption> RadialOptions;  // 0x0018, size 0x10
};

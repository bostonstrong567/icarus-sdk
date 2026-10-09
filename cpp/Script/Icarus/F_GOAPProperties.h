// /Script/Icarus.GOAPProperties
// size 0x20, declared in Icarus/Source/Icarus/AI/GOAPStructs.h

USTRUCT()
struct FGOAPProperties : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Description;  // 0x0018, size 0x8
};

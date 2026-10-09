// /Script/Icarus.StoredElement
// size 0x28, declared in Icarus/Source/Icarus/Utility/WeightedListFunctionLibrary.h

USTRUCT()
struct FStoredElement
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FWeightedListElement Element;  // 0x0000, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Roll;  // 0x0020, size 0x4
};

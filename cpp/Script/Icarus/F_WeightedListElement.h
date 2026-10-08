// /Script/Icarus.WeightedListElement
// size 0x20, declared in Icarus/Source/Icarus/Utility/WeightedListFunctionLibrary.h

USTRUCT()
struct FWeightedListElement
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Weight;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString String;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* Object;  // 0x0018, size 0x8
};

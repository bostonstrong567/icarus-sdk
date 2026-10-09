// /Script/IcarusGenerated.DropshipModification
// size 0x28, declared in Icarus/Source/IcarusGenerated/Public/Struct/DropshipModification.h

USTRUCT()
struct FDropshipModification
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Name;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EDropshipType Type;  // 0x0010, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FDropshipPartModification> Parts;  // 0x0018, size 0x10
};

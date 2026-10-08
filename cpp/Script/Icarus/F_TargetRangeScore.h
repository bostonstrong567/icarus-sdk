// /Script/Icarus.TargetRangeScore
// size 0x28, declared in Icarus/Source/Icarus/Systems/TargetRange/TargetRangeController.h

USTRUCT()
struct FTargetRangeScore
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString ID;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Score;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Name;  // 0x0018, size 0x10
};

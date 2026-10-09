// /Script/Icarus.FishBoardRecord
// size 0x38, declared in Icarus/Source/Icarus/Systems/Fishing/FishBoardControllerRecorderComponent.h

USTRUCT()
struct FFishBoardRecord
{
public:
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FString ID;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FString Name;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FString Fish;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) int32 Value;  // 0x0030, size 0x4
};

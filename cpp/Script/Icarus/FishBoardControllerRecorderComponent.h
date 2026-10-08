// /Script/Icarus.FishBoardControllerRecorderComponent
// Derives from: UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x1E0, declared in Icarus/Source/Icarus/Systems/Fishing/FishBoardControllerRecorderComponent.h

UCLASS(Config=Engine)
class UFishBoardControllerRecorderComponent : public UActorStateRecorderComponent
{
public:
    UPROPERTY(SaveGame) TArray<FFishBoardRecord> Lengths;  // 0x01C0, size 0x10
    UPROPERTY(SaveGame) TArray<FFishBoardRecord> Weights;  // 0x01D0, size 0x10
};

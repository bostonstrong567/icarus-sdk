// /Script/Icarus.PaintingRecorderComponent
// Derives from: UDeployableRecorderComponent > UItemStateRecorderComponent > UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x2A0, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/PaintingRecorderComponent.h

UCLASS(Config=Engine)
class UPaintingRecorderComponent : public UDeployableRecorderComponent
{
public:
    UPROPERTY(SaveGame) FName PaintingImageRecord;  // 0x0290, size 0x8
};

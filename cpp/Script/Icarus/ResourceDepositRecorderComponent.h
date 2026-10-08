// /Script/Icarus.ResourceDepositRecorderComponent
// Derives from: UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x1D0, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/ResourceDepositRecorderComponent.h

UCLASS(Config=Engine)
class UResourceDepositRecorderComponent : public UActorStateRecorderComponent
{
public:
    UPROPERTY(SaveGame) int32 ResourceRemaining;  // 0x01C0, size 0x4
    UPROPERTY(SaveGame) FName ResourceDTKey;  // 0x01C4, size 0x8
    UPROPERTY(SaveGame) bool bShowingMapIcon;  // 0x01CC, size 0x1
};

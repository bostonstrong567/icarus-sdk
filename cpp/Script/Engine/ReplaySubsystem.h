// /Script/Engine.ReplaySubsystem
// Derives from: UGameInstanceSubsystem > USubsystem > UObject
// size 0x40, declared in Engine/Source/Runtime/Engine/Public/ReplaySubsystem.h

UCLASS()
class UReplaySubsystem : public UGameInstanceSubsystem
{
public:
    UPROPERTY(EditAnywhere) bool bLoadDefaultMapOnStop;  // 0x0030, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    TWeakObjectPtr<UReplayNetConnection,FWeakObjectPtr> ReplayConnection;  // 0x0034, private
};

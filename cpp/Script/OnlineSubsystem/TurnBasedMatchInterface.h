// /Script/OnlineSubsystem.TurnBasedMatchInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Engine/Plugins/Online/OnlineSubsystem/Source/Public/Interfaces/TurnBasedMatchInterface.h

UCLASS(Abstract)
class UTurnBasedMatchInterface : public UInterface
{
public:

    UFUNCTION(BlueprintImplementableEvent) void OnMatchEnded(FString Match);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void OnMatchReceivedTurn(FString Match, bool bDidBecomeActive);  // parameters 0x11
};

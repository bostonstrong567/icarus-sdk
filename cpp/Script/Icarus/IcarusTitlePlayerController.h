// /Script/Icarus.IcarusTitlePlayerController
// Derives from: APlayerController > AController > AActor > UObject
// size 0x590, declared in Icarus/Source/Icarus/Controllers/IcarusTitlePlayerController.h

UCLASS(NotPlaceable, Config=Game)
class AIcarusTitlePlayerController : public APlayerController
{
public:

    UFUNCTION(BlueprintImplementableEvent) void OnBeginRetryJoinServer(int32 JoinAttempt, int32 MaxAttempts);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnEndRetryJoinServer();
};

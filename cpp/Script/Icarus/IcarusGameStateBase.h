// /Script/Icarus.IcarusGameStateBase
// Derives from: AGameState > AGameStateBase > AInfo > AActor > UObject
// size 0x2B0, declared in Icarus/Source/Icarus/Systems/IcarusGameStateBase.h

UCLASS(NotPlaceable, Config=Game)
class AIcarusGameStateBase : public AGameState
{
public:
    UPROPERTY(EditAnywhere, Replicated, Instanced, BlueprintReadOnly) UConnectedPlayers* ConnectedPlayers;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, Replicated, Instanced, BlueprintReadOnly) UDialogueSystem* DialogueSystem;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) FString RichPresenceGUID;  // 0x02A0, size 0x10

    UFUNCTION() void OnConnectedPlayerInitialised(const FConnectedPlayer& ConnectedPlayer);  // parameters 0x38

    // Virtual functions that start here:
    //   OnConnectedPlayerInitialised
};

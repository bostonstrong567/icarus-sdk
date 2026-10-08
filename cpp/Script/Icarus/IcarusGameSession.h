// /Script/Icarus.IcarusGameSession
// Derives from: AGameSession > AInfo > AActor > UObject
// size 0x2F0, declared in Icarus/Source/Icarus/IcarusGameSession.h

UCLASS(NotPlaceable, Config=Game)
class AIcarusGameSession : public AGameSession
{
public:
    UPROPERTY() TSet<FString> AdminIds;  // 0x0240, size 0x50
    UPROPERTY(Transient) TMap<FUniqueNetIdRepl, FText> BanLookup;  // 0x0290, size 0x50
    UPROPERTY(Transient) TArray<FBanInfo> BanInfos;  // 0x02E0, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    bool bProcessAllChatMessagesAsCommands;  // 0x0238

    UFUNCTION(BlueprintCallable) void CheckIfAutoLoggedInAndFix(AIcarusPlayerController* Player) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void EditorAdminLogin(AIcarusPlayerController* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SendServerMessage(FString Message) const;  // parameters 0x10
};

// /Script/Icarus.IcarusGameSession
// Derives from: AGameSession > AInfo > AActor > UObject
// size 0x2F0, declared in Icarus/Source/Icarus/IcarusGameSession.h

UCLASS(NotPlaceable, Config=Game)
class AIcarusGameSession : public AGameSession
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    bool bProcessAllChatMessagesAsCommands;  // 0x0238, not reflected
private:
    UPROPERTY() TSet<FString> AdminIds;  // 0x0240, size 0x50
    UPROPERTY(Transient) TMap<FUniqueNetIdRepl, FText> BanLookup;  // 0x0290, size 0x50
    UPROPERTY(Transient) TArray<FBanInfo> BanInfos;  // 0x02E0, size 0x10
public:
    UFUNCTION(BlueprintCallable) void CheckIfAutoLoggedInAndFix(AIcarusPlayerController* Player) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void EditorAdminLogin(AIcarusPlayerController* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SendServerMessage(FString Message) const;  // parameters 0x10
};

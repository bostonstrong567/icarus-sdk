// /Script/Icarus.IcarusGameModeBase
// Derives from: AGameMode > AGameModeBase > AInfo > AActor > UObject
// size 0x318, declared in Icarus/Source/Icarus/IcarusGameModeBase.h

UCLASS(Transient, NotPlaceable, Config=Game)
class AIcarusGameModeBase : public AGameMode
{
public:
    UPROPERTY(BlueprintAssignable) FPlayerPostLoginSignature PlayerPostLogin;  // 0x0308, size 0x10

    UFUNCTION(Exec) void AdminLogin(APawn* Executor, FString Password);  // parameters 0x18
    UFUNCTION(Exec) void AdminSay(APawn* Executor, FString Message);  // parameters 0x18
    UFUNCTION(Exec) void BanPlayer(APawn* Executor, FString IdOrName, FText Reason);  // parameters 0x30
    UFUNCTION(Exec) void ForceErrorCmd(int32 InErrorNumber, int32 ErrorDestination, int32 ErrorAction);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) AIcarusGameSession* GetIcarusGameSession() const;  // parameters 0x8
    UFUNCTION(Exec) void Help(APawn* Executor);  // parameters 0x8
    UFUNCTION(Exec) void KickPlayer(APawn* Executor, FString IdOrName, FText Reason);  // parameters 0x30
    UFUNCTION(BlueprintNativeEvent) void OnConnectedPlayerInitialised(const FConnectedPlayer& ConnectedPlayer);  // parameters 0x38
    UFUNCTION(Exec) void PrintAIDebug(APawn* Executor) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SendServerMessage(FString Message) const;  // parameters 0x10
    UFUNCTION(Exec) void UnbanPlayer(APawn* Executor, FString IdOrName);  // parameters 0x18

    // Virtual functions that start here:
    //   CanPlayersFinishInitialisation, GetRCONContext, OnConnectedPlayerInitialised_Implementation
};

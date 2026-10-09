// /Script/OnlineSubsystemIcarus.OnlineSubsystemIcarusSessionFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/OnlineSubsystemIcarusSessionFunctionLibrary.h

UCLASS()
class UOnlineSubsystemIcarusSessionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void CancelMatchMaking(FName SessionName);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetAuthToken(int32 LocalUserNum);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FConnectionString GetConnectionString();  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) static FMatchUpdate GetCurrentMatch();  // parameters 0x80
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetIcarusPlayerId();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static TMap<FName, FMatchMakingFilter> GetMatchFilters();  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsConnectedIcarusBackend();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsMatchHost();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsValidMatch();  // parameters 0x1
    UFUNCTION(BlueprintCallable) static void ReqUpdateLobbyStatus(ELobbyStatus LobbyStatus);  // parameters 0x1
    UFUNCTION(BlueprintCallable) static void RequestConnectionString();
    UFUNCTION(BlueprintCallable) static void SendChatMessage(const FIcarusChatMessage& ChatMessage);  // parameters 0x30
};

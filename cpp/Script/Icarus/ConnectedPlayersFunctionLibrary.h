// /Script/Icarus.ConnectedPlayersFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Subsystems/World/ConnectedPlayersFunctionLibrary.h

UCLASS()
class UConnectedPlayersFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_ConnectedPlayerConnectedPlayer(const FConnectedPlayer& A, const FConnectedPlayer& B);  // parameters 0x71
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_ConnectedPlayerPlayerCharacterID(const FConnectedPlayer& A, const FPlayerCharacterID& B);  // parameters 0x51
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool FindInitialisedConnectedPlayerByController(UObject* WorldContextObject, AIcarusPlayerController* Controller, FConnectedPlayer& OutConnectedPlayer);  // parameters 0x49
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool FindInitialisedConnectedPlayerByPlayerCharacter(UObject* WorldContextObject, AIcarusPlayerCharacter* PlayerCharacter, FConnectedPlayer& OutConnectedPlayer);  // parameters 0x49
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool FindInitialisedConnectedPlayerByPlayerCharacterID(UObject* WorldContextObject, const FPlayerCharacterID& PlayerCharacterID, FConnectedPlayer& OutConnectedPlayer);  // parameters 0x59
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool FindInitialisedConnectedPlayerByPlayerID(UObject* WorldContextObject, FString PlayerID, FConnectedPlayer& OutConnectedPlayer);  // parameters 0x51
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool FindInitialisedConnectedPlayerByPlayerState(UObject* WorldContextObject, AIcarusPlayerState* PlayerState, FConnectedPlayer& OutConnectedPlayer);  // parameters 0x49
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetConnectedPlayerIndexFromPlayerCharacter(UObject* WorldContextObject, AIcarusPlayerCharacter* PlayerCharacter);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static UConnectedPlayers* GetConnectedPlayers(UObject* WorldContextObject);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool GetNearestInitialisedConnectedPlayer(UObject* WorldContextObject, FVector WorldLocation, FConnectedPlayer& OutConnectedPlayer);  // parameters 0x51
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_ConnectedPlayerConnectedPlayer(const FConnectedPlayer& A, const FConnectedPlayer& B);  // parameters 0x71
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_ConnectedPlayerPlayerCharacterID(const FConnectedPlayer& A, const FPlayerCharacterID& B);  // parameters 0x51
};

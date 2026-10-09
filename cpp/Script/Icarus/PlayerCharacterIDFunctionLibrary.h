// /Script/Icarus.PlayerCharacterIDFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/PlayerCharacterIDFunctionLibrary.h

UCLASS()
class UPlayerCharacterIDFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_PlayerCharacterIDPlayerCharacterID(const FPlayerCharacterID& A, const FPlayerCharacterID& B);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsValid_PlayerCharacterID(const FPlayerCharacterID& PlayerCharacterID);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_PlayerCharacterIDPlayerCharacterID(const FPlayerCharacterID& A, const FPlayerCharacterID& B);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString ToString_PlayerCharacterID(const FPlayerCharacterID& PlayerCharacterID);  // parameters 0x28
};

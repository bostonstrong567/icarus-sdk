// /Script/OnlineSubsystemEOS.OnlineSubsystemEOSFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Plugins/OnlineSubsystemEOS/Source/OnlineSubsystemEOS/Public/OnlineSubsystemEOSFunctionLibrary.h

UCLASS()
class UOnlineSubsystemEOSFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) static FAccountId EpicAccountIdFromString(FString AccountId);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString EpicAccountIdToString(const FAccountId& AccountId);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAccountId GetAccountId();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static TArray<FAchievementsDef> GetAchivementsDefinition(UObject* WorldContextObject);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool GetCachedEOSAchievement(UObject* WorldContextObject, APlayerController* PlayerController, FString AchievementId, FPlayerAchievementData& OutAchievement);  // parameters 0x99
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool GetCachedEOSAchievements(UObject* WorldContextObject, APlayerController* PlayerController, TArray<FPlayerAchievementData>& OutAchievements);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProductUserId GetProductUserId();  // parameters 0x8
    UFUNCTION(BlueprintCallable) static bool IsAuthorised();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static FProductUserId ProductUserIdFromString(FString AccountId);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString ProductUserIdToString(const FProductUserId& ProductUserId);  // parameters 0x18
};

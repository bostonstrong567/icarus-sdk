// /Script/AdvancedSessions.AdvancedExternalUILibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/AdvancedExternalUILibrary.h

UCLASS()
class UAdvancedExternalUILibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void CloseWebURLUI();
    UFUNCTION(BlueprintCallable) static void ShowAccountUpgradeUI(FBPUniqueNetId PlayerRequestingAccountUpgradeUI, EBlueprintResultSwitch& Result);  // parameters 0x21
    UFUNCTION(BlueprintCallable) static void ShowFriendsUI(APlayerController* PlayerController, EBlueprintResultSwitch& Result);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void ShowInviteUI(APlayerController* PlayerController, EBlueprintResultSwitch& Result);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void ShowLeaderBoardUI(FString LeaderboardName, EBlueprintResultSwitch& Result);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static void ShowProfileUI(FBPUniqueNetId PlayerViewingProfile, FBPUniqueNetId PlayerToViewProfileOf, EBlueprintResultSwitch& Result);  // parameters 0x41
    UFUNCTION(BlueprintCallable) static void ShowWebURLUI(FString URLToShow, EBlueprintResultSwitch& Result, TArray<FString>& AllowedDomains, bool bEmbedded, bool bShowBackground, bool bShowCloseButton, int32 OffsetX, int32 OffsetY, int32 SizeX, int32 SizeY);  // parameters 0x3C
};

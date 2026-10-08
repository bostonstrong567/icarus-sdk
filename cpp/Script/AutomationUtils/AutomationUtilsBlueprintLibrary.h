// /Script/AutomationUtils.AutomationUtilsBlueprintLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Plugins/Experimental/AutomationUtils/Source/AutomationUtils/Public/AutomationUtilsBlueprintLibrary.h

UCLASS()
class UAutomationUtilsBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void TakeGameplayAutomationScreenshot(FString ScreenshotName, float MaxGlobalError, float MaxLocalError, FString MapNameOverride);  // parameters 0x28
};

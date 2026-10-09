// /Script/Icarus.IcarusCheatsFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Cheats/IcarusCheatsFunctionLibrary.h

UCLASS()
class UIcarusCheatsFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void EvaluateAutomationScript(UObject* WorldContextObject, const TArray<FString>& ScriptLines, FLatentActionInfo LatentInfo);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static void EvaluateCheatScript(UObject* WorldContextObject, const TArray<FString>& ScriptLines, FLatentActionInfo LatentInfo);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static ACheatController* GetCheatController(UObject* WorldContextObject, int32 PlayerIndex, EValid& Paths);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static TArray<FString> GetSavedLoadoutFileNames();  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void IfCheatsEnabled(ECheatsEnabled& Paths);  // parameters 0x1
    UFUNCTION(BlueprintCallable) static bool IsCheatsEnabled();  // parameters 0x1
    UFUNCTION(BlueprintCallable) static void QueueAutomationScript(UObject* WorldContextObject, const FName& ScriptName, FLatentActionInfo LatentInfo);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static void RestoreCharacterLoadout(UObject* WorldContextObject, FString SaveName);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void SaveCharacterLoadout(UObject* WorldContextObject, FString SaveName);  // parameters 0x18
};

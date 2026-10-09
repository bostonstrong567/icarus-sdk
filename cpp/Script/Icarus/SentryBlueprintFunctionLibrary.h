// /Script/Icarus.SentryBlueprintFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/SentryBlueprintFunctionLibrary.h

UCLASS()
class USentryBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void LogSentryUnlikelyEvent(UObject* WorldContextObject, FString FunctionName, FString Detail);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static void LogSentryUnlikelyEvent_ThreeDetail(UObject* WorldContextObject, FString FunctionName, FString Detail1, FString Detail2, FString Detail3);  // parameters 0x48
    UFUNCTION(BlueprintCallable) static void LogSentryUnlikelyEvent_TwoDetail(UObject* WorldContextObject, FString FunctionName, FString Detail1, FString Detail2);  // parameters 0x38
};

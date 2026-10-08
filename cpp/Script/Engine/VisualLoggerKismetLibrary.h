// /Script/Engine.VisualLoggerKismetLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/VisualLogger/VisualLoggerKismetLibrary.h

UCLASS(MinimalAPI)
class UVisualLoggerKismetLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void EnableRecording(bool bEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) static void LogBox(UObject* WorldContextObject, FBox BoxShape, FString Text, FLinearColor ObjectColor, FName LogCategory, bool bAddToMessageLog);  // parameters 0x51
    UFUNCTION(BlueprintCallable) static void LogLocation(UObject* WorldContextObject, FVector Location, FString Text, FLinearColor ObjectColor, float Radius, FName LogCategory, bool bAddToMessageLog);  // parameters 0x45
    UFUNCTION(BlueprintCallable) static void LogSegment(UObject* WorldContextObject, FVector SegmentStart, FVector SegmentEnd, FString Text, FLinearColor ObjectColor, float Thickness, FName CategoryName, bool bAddToMessageLog);  // parameters 0x4D
    UFUNCTION(BlueprintCallable) static void LogText(UObject* WorldContextObject, FString Text, FName LogCategory, bool bAddToMessageLog);  // parameters 0x21
    UFUNCTION(BlueprintCallable) static void RedirectVislog(UObject* SourceOwner, UObject* DestinationOwner);  // parameters 0x10
};

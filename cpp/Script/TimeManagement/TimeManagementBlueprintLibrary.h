// /Script/TimeManagement.TimeManagementBlueprintLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/TimeManagement/Public/TimeManagementBlueprintLibrary.h

UCLASS()
class UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) static FFrameNumber Add_FrameNumberFrameNumber(FFrameNumber A, FFrameNumber B);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFrameNumber Add_FrameNumberInteger(FFrameNumber A, int32 B);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 Conv_FrameNumberToInteger(const FFrameNumber& InFrameNumber);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Conv_FrameRateToSeconds(const FFrameRate& InFrameRate);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static float Conv_QualifiedFrameTimeToSeconds(const FQualifiedFrameTime& InFrameTime);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString Conv_TimecodeToString(const FTimecode& InTimecode, bool bForceSignDisplay);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFrameNumber Divide_FrameNumberInteger(FFrameNumber A, int32 B);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTimecode GetTimecode();  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFrameRate GetTimecodeFrameRate();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsValid_Framerate(const FFrameRate& InFrameRate);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsValid_MultipleOf(const FFrameRate& InFrameRate, const FFrameRate& OtherFramerate);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFrameNumber Multiply_FrameNumberInteger(FFrameNumber A, int32 B);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFrameTime Multiply_SecondsFrameRate(float TimeInSeconds, const FFrameRate& FrameRate);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFrameTime SnapFrameTimeToRate(const FFrameTime& SourceTime, const FFrameRate& SourceRate, const FFrameRate& SnapToRate);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFrameNumber Subtract_FrameNumberFrameNumber(FFrameNumber A, FFrameNumber B);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFrameNumber Subtract_FrameNumberInteger(FFrameNumber A, int32 B);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFrameTime TransformTime(const FFrameTime& SourceTime, const FFrameRate& SourceRate, const FFrameRate& DestinationRate);  // parameters 0x20
};

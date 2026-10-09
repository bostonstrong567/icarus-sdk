// /Script/DLSSBlueprint.DLSSLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Plugins/Runtime/Nvidia/DLSS/Source/DLSSBlueprint/Public/DLSSLibrary.h

UCLASS(MinimalAPI)
class UDLSSLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void EnableDLAA(bool bEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetDLSSMinimumDriverVersion(int32& MinDriverVersionMajor, int32& MinDriverVersionMinor);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static UDLSSMode GetDLSSMode();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetDLSSModeInformation(UDLSSMode DLSSMode, FVector2D ScreenResolution, bool& bIsSupported, float& OptimalScreenPercentage, bool& bIsFixedScreenPercentage, float& MinScreenPercentage, float& MaxScreenPercentage, float& OptimalSharpness);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetDLSSScreenPercentageRange(float& MinScreenPercentage, float& MaxScreenPercentage);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetDLSSSharpness();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) static UDLSSMode GetDefaultDLSSMode();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static TArray<UDLSSMode> GetSupportedDLSSModes();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsDLAAEnabled();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsDLSSModeSupported(UDLSSMode DLSSMode);  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsDLSSSupported();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static UDLSSSupport QueryDLSSSupport();  // parameters 0x1
    UFUNCTION(BlueprintCallable) static void SetDLSSMode(UDLSSMode DLSSMode);  // parameters 0x1
    UFUNCTION(BlueprintCallable) static void SetDLSSSharpness(float Sharpness);  // parameters 0x4
};
